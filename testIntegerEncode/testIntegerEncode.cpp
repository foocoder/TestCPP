// ---- Program Info Start----
//FileName:     testIntegerEncode.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-19 18:30:34
// ---- Program Info End  ----

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i = 0x80000000;
    cout<<"cout: i"<<i<<", ~i"<<~i<<", (-i)"<<-i<<", (1-i)"<<1-i<<endl;
    return 0;
}
