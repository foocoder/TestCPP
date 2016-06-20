// ---- Program Info Start----
//FileName:     testIsUnsigned.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-20 09:28:18
// ---- Program Info End  ----

#include <iostream>

using namespace std;

#define ISUNSIGNED(a) ( a>=0 && (a=~a)>=(char)0 ) //先取反来防止整数提升
int main(int argc, char *argv[])
{
    signed int  a = 1;
    unsigned char  b = 1;
    if(ISUNSIGNED(a))
        cout<<"a is unsigned"<<endl;
    else
        cout<<"a is not unsigned"<<endl;
    if(ISUNSIGNED(b))
        cout<<"b is unsigned"<<endl;
    else
        cout<<"b is not unsigned"<<endl;
    return 0;
}
