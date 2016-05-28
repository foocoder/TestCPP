// ---- Program Info Start----
//FileName:     testArrayVSPointer.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-27 19:25:27
// ---- Program Info End  ----

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[10] ;
    int * pointer = a;
    int b;
    b = a[1];
    b = pointer[1];
    return 0;
}
