// ---- Program Info Start----
//FileName:     main.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-31 17:04:16
// ---- Program Info End  ----

#include <iostream>
#include "headerfile.h"
using namespace std;

static int a;
void swap(int &a, int &b){
}
int main(int argc, char *argv[])
{
    Based A;
    int ia = 1, ib = 2;
    swap(ia, ib);
    cout<<"ia:"<<ia<<"ib:"<<ib<<endl;
    cout<<"Main:"<<nonConstInt<<endl;
    cout<<"Main a:"<<a<<endl;
    return 0;
}
