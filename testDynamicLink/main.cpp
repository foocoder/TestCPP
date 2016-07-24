// ---- Program Info Start----
//FileName:     main.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-24 11:02:36
// ---- Program Info End  ----

#include <iostream>

using namespace std;

int fun(int ,int);
int fun1(int ,int);
int main(int argc, char *argv[])
{
    int a = 5, b=5;
    cout<< " fun(a,b) = "<<fun(a,b) << " fun1(a,b) = "<<fun1(a,b)<<endl;
    cin>>a>>b;
    cout<< " fun(a,b) = "<<fun(a,b) << " fun1(a,b) = "<<fun1(a,b)<<endl;
    return 0;
}
