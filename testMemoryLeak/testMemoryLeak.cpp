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
#include <malloc.h>

using namespace std;

class simplePOD{
    public:
        simplePOD():_val(0xCDCDCDCD){}
    private:
        int _val;
};

class arrPOD{
    private:
        int _val[100];
};

class complexStruct{
    public:
        complexStruct():_ptr_val(new int(0xCDCDCDCD)){ }
        ~complexStruct(){
            delete _ptr_val;
        }
    private:
        int * _ptr_val;
};

int main(int argc, char *argv[])
{
    //int arrInt[100] = {0};
    //delete arrInt; // Runtime Error: Segment Fault. Free a pointer on stack;

    //cout<<"\nBEFORE NEW"<<endl;
    //malloc_stats();
    //int * ptrIntMalloc = (int *) malloc(10*sizeof(int)); //情况与下边new int[10]一致
    //for(int i=0; i<10; ++i)
        //ptrIntMalloc[i] = 0xCDCDCDCD;
    //cout<<"\nAFTER NEW"<<endl;
    //malloc_stats();
    //delete ptrIntMalloc; //No Memory Leak
    //cout<<"\nAFTER DELETE"<<endl;
    //malloc_stats();

    //cout<<"\nBEFORE NEW"<<endl;
    //malloc_stats();
    //int * ptrInt = new int[10](); // malloc 最小内存块32bytes, 每次增加16bytes。需要8bytes的额外空间。
    //for(int i=0; i<10; ++i)
        //ptrInt[i] = 0xCDCDCDCD;
    //cout<<"\nAFTER NEW"<<endl;
    //malloc_stats();
    //delete ptrInt; //No Memory Leak
    //cout<<"\nAFTER DELETE"<<endl;
    //malloc_stats();

    //cout<<"\nBEFORE NEW"<<endl;
    //malloc_stats();
    //simplePOD *ptrSimplePOD = new simplePOD[10]();
    //cout<<"\nAFTER NEW"<<endl;
    //malloc_stats();
    //delete ptrSimplePOD; //No Memory Leak
    //cout<<"\nAFTER DELETE"<<endl;
    //malloc_stats();

    //cout<<"\nBEFORE NEW"<<endl;
    //malloc_stats();
    //arrPOD * ptrArrPOD = new arrPOD[10];
    //cout<<"\nAFTER NEW"<<endl;
    //malloc_stats();
    //delete ptrArrPOD; //No Memory Leak
    //cout<<"\nAFTER DELETE"<<endl;
    //malloc_stats();
    //cout<<sizeof(arrPOD) <<endl;

    cout<<"\nBEFORE NEW"<<endl;
    malloc_stats();
    complexStruct * ptrComplexStruct = new complexStruct[10];
    cout<<"\nAFTER NEW"<<endl;
    malloc_stats();
    delete ptrComplexStruct; //Memory Leak;
    cout<<"\nAFTER DELETE"<<endl;
    malloc_stats();
    cout<<sizeof(complexStruct) <<endl;

    return 0;
}
