// ---- Program Info Start----
//FileName:     testStream.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-05 11:22:50
// ---- Program Info End  ----

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream outfile("out");
    string line;
    if(!outfile){
        cerr<<"Unable to open file: out"<<endl;
        return -1;
    }
    outfile<<"Test"<<endl;
    while(!getline(cin,line).eof()){
        istringstream s(line);
        int a;
        while(s>>a)
            outfile<<a<<" ";
    }
    outfile<<endl;
    outfile<<"1 1";
    outfile<<"\nend";
    outfile.close();
    return 0;
}
