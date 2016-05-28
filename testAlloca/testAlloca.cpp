// ---- Program Info Start----
//FileName:     testAlloca.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-28 20:45:09
// ---- Program Info End  ----

#include <iostream>
#include <alloca.h>
using namespace std;

int main(int argc, char *argv[])
{
    int * p = (int *) alloca(sizeof(int));
    int a = 0xcdcdcdcd;
    cout<<hex<<p<<endl;
    cout<<hex<<&a<<endl;
    return 0;
}
