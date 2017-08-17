/*
 *@@@@@@@@@@ File Information Start  @@@@@@@@@@
 * @file:        testEmptyMap.cpp
 * @author:      Fuchen Duan
 * @email:       slow295185031@gmail.com
 * @github:      https://foocoder.github.com
 * @homepage:    http://foocder.github.io
 * @create at:   2017-08-17 22:14:22
 * @last update: 2017-08-17 22:16:11
 *@@@@@@@@@@ File Information Finish @@@@@@@@@@
*/

#include <iostream>
#include <map>

using namespace std;
int main(int argc, char *argv[])
{
    map<int, int> myMap;
    for( auto iter = myMap.begin(); iter!= myMap.end(); iter++ ){
        cout<<iter->first<<endl;
    }
    return 0;
}
