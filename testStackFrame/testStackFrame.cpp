// ---- Program Info Start----
//FileName:     testStackFrame.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-24 19:57:40
// ---- Program Info End  ----

struct s{
    char a[64];
};

void funcB(int nArgB1, int nArgB2){
    int localB = 0x11223344;
    return;
}
void funcA(int nArgA1, int nArgA2, struct s s1){
    funcB(0x22222222, 0x11111111);
    int localA = 0x44332211;
    for(int i=0; i<64; ++i) s1.a[i] = 0x22;
    return;
}
int main(int argc, char *argv[])
{
    int localMain = 0x22331144;
    struct s s0;
    int i=0;
    for(i=0; i<64; ++i) s0.a[i] = 0x11;
    funcA(0x33333333, 0x44444444, s0);
    return 0;
}
