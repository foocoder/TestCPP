// ---- Program Info Start----
//FileName:     testInput.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-09 22:00:00
// ---- Program Info End  ----

#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    string str;
    int n0,n1,n2,n3;
    int n;
    vector<int> arr;
    int m;
    while( (m = scanf("%d", &n))){
        arr.push_back(n);
        if(getchar() == '\n')
            break;
    }
    scanf("%d", &n0);
    for( auto i:arr){
        cout<<i<<",";
    }
    cout<<endl;
    return 0;
}
