// ---- Program Info Start----
//FileName:     testNewHandler.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-20 13:21:15
// ---- Program Info End  ----

#include <iostream>
#include <cstdlib>

using namespace std;

void outOfMemory(){
    cerr<<"Out of memory"<<endl;
    abort();
}
int main(int argc, char *argv[])
{
    new_handler  p = set_new_handler(outOfMemory);
    if(p == NULL){
        cout<< "Original new_handler is NULL"<<endl;
    }
    try{
        int * pBigArray = new int[10000000000L];
        delete[] pBigArray;
    }
    catch(bad_alloc){
        cerr<<"Out of memory"<<endl;
    }
    return 0;
}
