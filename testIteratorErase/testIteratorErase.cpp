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
#include <list>

using namespace std;

template<typename iteratorType>
void display(iteratorType first, iteratorType last){
    for(;first!=last; first++){
        cout<<*first<<" ";
    }
    cout<<endl;
}

int main(int argc, char *argv[])
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> iVec;
    list<int> iList;

    vector<int>::iterator it;
    list<int>::iterator ilter;

    for(int i=0;i<10;i++)
    {
        iVec.push_back(i);
        iList.push_back(i);
    }

    display(iVec.begin(), iVec.end());
    for(it=iVec.begin();it!=iVec.end();++it) {
        if(!(*it & 1))
        {
            iVec.erase(it--);
        }
    }
    display(iVec.begin(), iVec.end());

    for(ilter=iList.begin();ilter!=iList.end();++ilter) {
        if(!(*ilter & 1))
        {
            iList.erase(ilter--);
        }
    }
    display(iList.begin(),iList.end());
    return 0;
}
