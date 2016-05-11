// ---- Program Info Start----
//FileName:     testVectorCapacity.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-11 10:11:17
// ---- Program Info End  ----

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> a;
    cout<<a.capacity()<<endl;
    a.reserve(7);
    cout<<a.capacity()<<endl;
    for(int i=0; i<8; ++i)
        a.push_back(i);
    cout<<a.capacity()<<endl;
    return 0;
}
