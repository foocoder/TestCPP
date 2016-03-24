// ---- Program Info Start----
//FileName:     testIOstreamIterator.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-24 13:56:12
// ---- Program Info End  ----

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    //Test istream_iterator
    istream_iterator< string > isIter (cin);
    istream_iterator< string > eof;
    vector<string> text;
    copy(isIter, eof, back_inserter(text));

    //Test ostream_iterator
    ostream_iterator< string > osIter (cout, "|");
    copy(text.begin(), text.end(), osIter);
    return 0;
}

