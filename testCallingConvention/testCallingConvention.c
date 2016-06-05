// ---- Program Info Start----
//FileName:     testCallingConvention.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-05 11:35:07
// ---- Program Info End  ----

int __attribute__((__cdecl__)) cdeclFunc(int i, int j, int k){
    return i+j+k;
}

int __attribute__((__stdcall__)) stdcalFunc(int i, int j, int k){
    int a[10];
    cdeclFunc(5,6,7);
    return i+j+k;
}

int main(int argc, char *argv[])
{
    int a = stdcalFunc(1,2,3);
    return 0;
}
