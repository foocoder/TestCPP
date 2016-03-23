// ---- Program Info Start----
//FileName:     testReference.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-21 14:34:59
// ---- Program Info End  ----

#include <iostream>

using namespace std;

void foo(int a, char b) {
    cout<<"first int, next char"<<endl;
}
void foo(char a, int b) {
    cout<<"first char, next int"<<endl;
}
int main(int argc, char *argv[])
{
    int a = 1;
    int & b = a;
    b ++;
    ++ b;
    a ++;
    ++ a;
    foo(1,'0');
    foo('1',0);
    return 0;
}
