// ---- Program Info Start----
//FileName:     testString.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-22 16:04:37
// ---- Program Info End  ----

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string a("Hello World");
    cout<<sizeof(a)<<endl;
    a[0] = 'h';
    cout<<a<<endl;
    cout<<a.size()<<endl;
    return 0;
}
