// ---- Program Info Start----
//FileName:     testLambda.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-07 10:07:20
// ---- Program Info End  ----

#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int x=0, y=42;
    x = y = 77;
    auto qqq = [x, & y] {
        cout<<"x : "<<x << endl;
        cout<<"y : "<<y << endl;
        //++x; // Wrong ! x is read-only;
        ++y;
    };
    qqq();
    qqq();
    cout<<" final y : "<<y <<endl;
    return 0;
}
