// ---- Program Info Start----
//FileName:     testIteratorErase.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-23 21:49:13
// ---- Program Info End  ----

#include <iostream>
#include <vector>

using namespace std;

template<typename elemType>
void display(const vector<elemType> & vec){
    typename vector<elemType>::const_iterator iter = vec.begin();
    typename vector<elemType>::const_iterator end_it = vec.end();
    for(iter; iter!=end_it; iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(int argc, char *argv[])
{
    vector<int> iVec;

    vector<int>::iterator it;

    for(int i=0;i<10;i++)
    {
        iVec.push_back(i);
        iVec.push_back(i);
    }

    display(iVec);

    for(it=iVec.begin();it!=iVec.end();++it) {
        if(*it ==4 || *it == 7)
        {
            iVec.erase(it++);
        }
    }

    display(iVec);
    return 0;
}
