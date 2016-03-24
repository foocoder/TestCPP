// ---- Program Info Start----
//FileName:     testIteratorInserter.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-24 13:11:05
// ---- Program Info End  ----

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int a[5] = {0,1,2,3,4};
    vector<int> ivec;
    cout<<ivec.capacity()<<endl;
    //copy(a, a+5, ivec.begin()); // Runtime Error: Segment Fault, capacity is 0;
    //copy(a,a+5,front_inserter(ivec)); // Compile Error: Vector has no push_front;
    copy(a,a+5,inserter(ivec,ivec.begin())); // Success: Using vector.insert();
    //copy(a,a+5,back_inserter(ivec));//Success: Using vector.push_back();
    cout<<ivec[4]<<endl;
    return 0;
}
