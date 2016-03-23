// ---- Program Info Start----
//FileName:     testFunctionParameter.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-21 10:21:44
// ---- Program Info End  ----

#include <iostream>

using namespace std;

int foo(int a, int b){
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(int argc, char *argv[])
{
    int a = 1;
    foo(a--,a++);
    return 0;
}
