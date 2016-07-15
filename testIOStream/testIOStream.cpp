// ---- Program Info Start----
//FileName:     testIOStream.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-15 11:10:12
// ---- Program Info End  ----

#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    int num;
    char a;

    //Test 1
    // Input 'a', 导致cin.fail 为1, 无法cin
    cin>>num;
    //cin.fail 为1， 无法cin
    cin>>a;
    //cin.fail 为1， 无法cin
    cin>>num;

    //Test 2
    // Input 'a', 导致cin.fail 为1, 无法cin
    cin>>num;
    // clear cin 的标志位
    cin.clear();
    // 标志位正常, 从缓存区中读取'a'
    cin>>a;
    // 标志位正常，等待用户输入
    cin>>num;
    return 0;
}
