// ---- Program Info Start----
//FileName:     testRecursion.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-30 13:52:11
// ---- Program Info End  ----

#include <iostream>

using namespace std;

inline int max(int a, int b){
    return a > b ? a : b;
}

int f(int x){
    int s=0;
    while(x-- > 0) s+= f(x);
    return max(s,1);
}

int main(int argc, char *argv[])
{
    f(3);
    return 0;
}

