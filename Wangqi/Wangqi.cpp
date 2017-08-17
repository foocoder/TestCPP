/*
 *@@@@@@@@@@ File Information Start  @@@@@@@@@@
 * @file:        Wangqi.cpp
 * @author:      Fuchen Duan
 * @email:       slow295185031@gmail.com
 * @github:      https://foocoder.github.com
 * @homepage:    http://foocder.github.io
 * @create at:   2017-06-06 16:33:45
 * @last update: 2017-06-06 16:33:45
 *@@@@@@@@@@ File Information Finish @@@@@@@@@@
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, t;
    cin>>a>>b;
    t = b < a ? b : a;
    while( t > 1 ){
        if( a % t == 0 && b % t == 0 )
            break;
        t--;
    }
    int m = a * b / t;
    cout<<t<<","<<m<<endl;
    return 0;
}
