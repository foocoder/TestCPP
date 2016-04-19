// ---- Program Info Start----
//FileName:     testEffecItem46.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-19 16:04:21
// ---- Program Info End  ----

#include <iostream>
using namespace std;

template<typename T>
class Rational{
    public:
        Rational(const T& numberator = 0,
                const T& denominator = 1):_numberator(numberator), _denominator(denominator){
        }
        const T numberator() const{
            return _numberator;
        }
        const T denominator() const{
            return _denominator;
        }
        friend
            const Rational operator*(const Rational &lhs, const Rational &rhs){
                return doMultiply(lhs, rhs);
            }
    private:
        T _numberator;
        T _denominator;
};

template<typename T>
const Rational<T> doMultiply (const Rational<T> &lhs,
        const Rational<T> &rhs){
    return Rational<T>(lhs.numberator()*rhs.numberator(), lhs.denominator()*rhs.denominator());
}

template<typename T>
ostream & operator<<(ostream &os, const Rational<T> & rhs){
    os<<rhs.numberator()<<"+"<<rhs.denominator()<<"i";
    return os;
}

int main(int argc, char *argv[])
{
    Rational<int> oneHalf(1,2);
    Rational<int> oneThird(1,3);
    Rational<int> res = oneHalf * 2;
    cout<<oneHalf<<endl;
    cout<<oneThird<<endl;
    cout<<res<<endl;
    return 0;
}
