// ---- Program Info Start----
//FileName:     testBoost.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-21 11:17:09
// ---- Program Info End  ----

#include <boost/lambda/lambda.hpp>
#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

int main(int argc, char *argv[])
{
    //using namespace boost::lambda;
    //typedef std::istream_iterator<int> in;

    //std::for_each( in(std::cin), in(), std::cout << (_1 * 3) << " " );
    std::string line;
    boost::regex pat( "^Subject: ( Re: |Aw: )*(.*)" );

    while( std::cin ){
        std::getline(std::cin, line);
        boost::smatch matches;
        if(boost::regex_match(line, matches, pat))
            std::cout<< matches[2] <<std::endl;
    }
    return 0;
}
