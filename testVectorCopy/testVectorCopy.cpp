// ---- Program Info Start----
//FileName:     testVectorCopy.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-08 10:52:25
// ---- Program Info End  ----

#include <iostream>
#include <vector>

using namespace std;

class Elem{
    private:
        int _val;
    public:
        Elem(int val):_val(val){
            cout<<_val<<"Constructor Invoked"<<endl;
        }
        Elem():_val(0){}
        Elem( const Elem & rhs ):_val(rhs._val){
            cout<<_val<<"Copy Constructor Invoked!"<<endl;
        };
        ~Elem(){
            cout<<_val<<"Destructor Invoked!"<<endl;
        }
};
int main(int argc, char *argv[])
{

    vector<Elem> vec0,vec1;
    vec0.reserve( 5 );
    for( int i=0; i<5; i++ ){
        //Elem tmp(i);
        vec0.push_back(i);
    }
    cout<<"Copy Vector"<<endl;
    for( const auto &i:vec0 ){

    }
    cout<<"Main End"<<endl;
    return 0;
}
