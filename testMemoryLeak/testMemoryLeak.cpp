// ---- Program Info Start----
//FileName:     testMemoryLeak.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-25 22:57:16
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class simplePOD{
    private:
        int _val;
};

class arrPOD{
    private:
        int _val[100];
};

class complexStruct{
    public:
        complexStruct():_ptr_val(new int(0)){ }
        ~complexStruct(){
            delete _ptr_val;
        }
    private:
        int * _ptr_val;
};

int main(int argc, char *argv[])
{
    int * ptrInt = new int[16];
    delete ptrInt; //No Memory Leak

    //simplePOD *ptrSimplePOD = new simplePOD[16];
    //delete ptrSimplePOD; //No Memory Leak

    //arrPOD * ptrArrPOD = new arrPOD[16];
    //delete ptrArrPOD; //No Memory Leak

    //complexStruct * ptrComplexStruct = new complexStruct[16];
    //delete ptrComplexStruct;
    return 0;
}
