// ---- Program Info Start----
//FileName:     testExport.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-11 10:43:38
// ---- Program Info End  ----

#include "testExport.h"
#include <iostream>

nonTemplate::nonTemplate(){
    std::cout<<"nonTemplate()"<<std::endl;
}
nonTemplate::~nonTemplate(){
    std::cout<<"~nonTemplate()"<<std::endl;
}

template<typename T>
templateSample<T>::templateSample(){
    std::cout<<"templateSample()("<<std::endl;
}
template<typename T>
templateSample<T>::~templateSample(){
    std::cout<<"~templateSample()"<<std::endl;
}
