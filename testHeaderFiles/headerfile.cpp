// ---- Program Info Start----
//FileName:     headerfile.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-31 17:01:31
// ---- Program Info End  ----

#include "headerfile.h"
#include <iostream>

int a ;
Based::Based():_val(0){
    std::cout<<"Based:"<<nonConstInt<<std::endl;
    std::cout<<"Based A:"<<a<<std::endl;
    nonConstInt = 1;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
