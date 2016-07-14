// ---- Program Info Start----
//FileName:     testHowtoStartUp.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-12 15:56:34
// ---- Program Info End  ----

#include <stdio.h>

void __attribute__ (( constructor )) a_constructor(int i){
    printf("%s\n%d\n", __FUNCTION__, i);
}
void __attribute__ (( constructor )) a_constructor1(int i){
    printf("%s\n%d\n", __FUNCTION__, i);
}

int main(int argc, char * argv[]){
    printf("%s\n", __FUNCTION__);
    return 0;
}

void __attribute__ (( destructor )) a_destructor(){
    printf("%s\n", __FUNCTION__);
}

