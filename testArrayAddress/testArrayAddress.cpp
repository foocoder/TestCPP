// ---- Program Info Start----
//FileName:     testArrayAddress.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-22 15:03:24
// ---- Program Info End  ----

#include <cstdio>

void func(int (a)[4]){
    printf("%d \n", sizeof(a));
}

int main(int argc, char *argv[])
{
    int a[4] = {1,2,3,4};
    int &b = a[3];
    int * p =(int *)(&b+1);
    printf("%d\n",*(p-1));
    func(a);
    return 0;
}
