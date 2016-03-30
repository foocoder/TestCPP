// ---- Program Info Start----
//FileName:     testConst.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-30 19:43:00
// ---- Program Info End  ----

enum test{ aa, bb};
int main(int argc, char *argv[])
{
    const int a = 0;
    int b = a; //编译后以立即数0代替a
    test cc ;
    int c = cc;
    return 0;
}

