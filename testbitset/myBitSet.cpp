// ---- Program Info Start----
//FileName:     myBitSet.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-01-14 15:04:36
// ---- Program Info End  ----

#include "myBitSet.h"
#include <bitset>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

myBitSet::myBitSet()
{
    _M_NeedLength = 1;
    initWords(1);
}
myBitSet::myBitSet(size_t __val)
{
    _M_NeedLength = __val;
    initWords(__val);
}
myBitSet::myBitSet(const myBitSet &rhs)
{
    if(this != &rhs)
    {
        _M_RealLength = rhs._M_RealLength;
        _M_NeedLength = rhs._M_NeedLength;
        _M_w = new _WordT[_M_RealLength]();
        for(size_t i=0; i<_M_RealLength; i++){
            _M_w[i] = rhs._M_w[i];
        }
    }
}

myBitSet::~myBitSet()
{
    delete []_M_w;
    _M_w = NULL;
}

size_t myBitSet::wordIndex(size_t bitIndex)
{
    if(bitIndex > _M_NeedLength)
    {
        cout<<"Out of Range"<<bitIndex<<" "<<_M_NeedLength <<endl;
        exit(1);
    }
    return bitIndex >> _ADDRESS_BITS_PER_WORD;
}

void myBitSet::initWords(size_t nbits)
{
    //if(nbits>50000){cout<<_M_RealLength<<" "<<_M_NeedLength<<endl;}
    _M_RealLength = wordIndex(nbits-1) + 1;
    _M_w = new _WordT[_M_RealLength]();
    for(int i=0; i<_M_RealLength; i++)
    {
        _M_w[i] = 0;
    }
}

bool myBitSet::test(size_t _pos)
{
    size_t _w_Index = wordIndex(_pos);
    return ((_M_w[_w_Index]) & (1ul << _pos)) != 0;
}

void myBitSet::set(size_t _pos)
{
    size_t _w_Index = wordIndex(_pos);
    _M_w[_w_Index] |= 1ul << _pos;
}

void myBitSet::set()
{
    size_t _w_Index = _M_RealLength;
    while( _w_Index > 0 )
        _M_w[--_w_Index] = ~0ul;
}

void myBitSet::reset(size_t _pos)
{
    size_t _w_Index = wordIndex(_pos);
    _M_w[_w_Index] &= ~(1ul << _pos);
}

void myBitSet::reset()
{
    size_t _w_Index = _M_RealLength;
    while( _w_Index > 0 )
        _M_w[--_w_Index] = 0;
}

void myBitSet::flip(size_t _pos)
{
    size_t _w_Index = wordIndex(_pos);
    _M_w[_w_Index] ^= (1ul << _pos);
}

size_t myBitSet::count()
{
    size_t _result = 0;
    const unsigned char* _byte_ptr = (const unsigned char*) _M_w;
    const unsigned char* _end_ptr
        = ((const unsigned char*) _M_w) + sizeof(_M_w[0]) * _M_RealLength;
    while( _byte_ptr < _end_ptr )
    {
        _result += _S_bit_count[*_byte_ptr];
        _byte_ptr ++;
    }
    return _result;
}

myBitSet &
myBitSet::operator&=(const myBitSet& rhs)
{
    for(size_t i=0; i<_M_RealLength; i++){
        _M_w[i] &= rhs._M_w[i];
    }
    return *this;
}

myBitSet
myBitSet::operator&(const myBitSet & rhs)
{
    for(size_t i=0; i<_M_RealLength; i++){
        _M_w[i] &= rhs._M_w[i];
    }
    return *this;
}

myBitSet &
myBitSet::operator^=(const myBitSet & rhs)
{
    for(size_t i=0; i<_M_RealLength; i++){
        _M_w[i] ^= rhs._M_w[i];
    }
    return *this;
}

myBitSet
myBitSet::operator^(const myBitSet & rhs)
{
    for(size_t i=0; i<_M_RealLength; i++){
        _M_w[i] ^= rhs._M_w[i];
    }
    return *this;
}

myBitSet&
myBitSet::operator=(const myBitSet & rhs)
{
    if(this != &rhs)
    {
        _M_RealLength = rhs._M_RealLength;
        _M_NeedLength = rhs._M_NeedLength;
        delete [] _M_w;
        _M_w = new _WordT[_M_RealLength]();
        for(size_t i=0; i<_M_RealLength; i++){
            _M_w[i] = rhs._M_w[i];
        }
    }
    return *this;
}

unsigned long
myBitSet::operator[](size_t _pos)
{
    size_t _w_Index = wordIndex(_pos);
    return _M_w[_w_Index] & (1ul << _pos);
}

int main(int argc, char *argv[])
{
    const size_t n = 2000000;
    long start = clock();
    bitset<n+1> b;
    //myBitSet b(n+1);
    int count = 0;
    int i;
    for(i=2; i<=n; i++)
    {
        b.set(i);
    }
    i = 2;
    while(i*i <=n)
    {
        if(b.test(i))
        {
            count++;
            int k=2*i;
            while(k<=n)
            {
                b.reset(k);
                k+=i;
            }
        }
        i++;
    }
    while(i<=n)
    {
        if(b.test(i))
            count++;
        i++;
    }
    long end = clock();
    cout<<count<<" primes"<<endl;
    cout<<(end-start)*1000/CLOCKS_PER_SEC<<endl;

    return 0;
}
