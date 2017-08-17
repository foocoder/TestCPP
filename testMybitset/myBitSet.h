// ---- Program Info Start----
//FileName:     myBitSet.h
//
//Author:       Fuchen Duan
//
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-01-14 15:09:22
// ---- Program Info End  ----

#ifndef _MY_BITSET_H_
#define _MY_BITSET_H_

#include <cstddef> // For size_t
#include <cassert>
#include <nmmintrin.h>
#include <vector>

template <size_t _Nw>
class myBitSet{

    typedef unsigned long _WordT;
    static const size_t _CHAR_BIT = 8;
    static const size_t _BITS_PER_WORD = _CHAR_BIT * sizeof(_WordT);
    static const size_t _ADDRESS_BITS_PER_WORD = 6;
    static const size_t _M_LogicLength = _Nw;
    static const size_t _M_PhysicLength = ((_Nw - 1) >> _ADDRESS_BITS_PER_WORD) + 1;

    _WordT _M_w[_M_PhysicLength];
    std::vector<int> _M_Indices;
    int _M_BitCount = -1;

    unsigned char _S_bit_count[256] = {
      0, /*   0 */ 1, /*   1 */ 1, /*   2 */ 2, /*   3 */ 1, /*   4 */
      2, /*   5 */ 2, /*   6 */ 3, /*   7 */ 1, /*   8 */ 2, /*   9 */
      2, /*  10 */ 3, /*  11 */ 2, /*  12 */ 3, /*  13 */ 3, /*  14 */
      4, /*  15 */ 1, /*  16 */ 2, /*  17 */ 2, /*  18 */ 3, /*  19 */
      2, /*  20 */ 3, /*  21 */ 3, /*  22 */ 4, /*  23 */ 2, /*  24 */
      3, /*  25 */ 3, /*  26 */ 4, /*  27 */ 3, /*  28 */ 4, /*  29 */
      4, /*  30 */ 5, /*  31 */ 1, /*  32 */ 2, /*  33 */ 2, /*  34 */
      3, /*  35 */ 2, /*  36 */ 3, /*  37 */ 3, /*  38 */ 4, /*  39 */
      2, /*  40 */ 3, /*  41 */ 3, /*  42 */ 4, /*  43 */ 3, /*  44 */
      4, /*  45 */ 4, /*  46 */ 5, /*  47 */ 2, /*  48 */ 3, /*  49 */
      3, /*  50 */ 4, /*  51 */ 3, /*  52 */ 4, /*  53 */ 4, /*  54 */
      5, /*  55 */ 3, /*  56 */ 4, /*  57 */ 4, /*  58 */ 5, /*  59 */
      4, /*  60 */ 5, /*  61 */ 5, /*  62 */ 6, /*  63 */ 1, /*  64 */
      2, /*  65 */ 2, /*  66 */ 3, /*  67 */ 2, /*  68 */ 3, /*  69 */
      3, /*  70 */ 4, /*  71 */ 2, /*  72 */ 3, /*  73 */ 3, /*  74 */
      4, /*  75 */ 3, /*  76 */ 4, /*  77 */ 4, /*  78 */ 5, /*  79 */
      2, /*  80 */ 3, /*  81 */ 3, /*  82 */ 4, /*  83 */ 3, /*  84 */
      4, /*  85 */ 4, /*  86 */ 5, /*  87 */ 3, /*  88 */ 4, /*  89 */
      4, /*  90 */ 5, /*  91 */ 4, /*  92 */ 5, /*  93 */ 5, /*  94 */
      6, /*  95 */ 2, /*  96 */ 3, /*  97 */ 3, /*  98 */ 4, /*  99 */
      3, /* 100 */ 4, /* 101 */ 4, /* 102 */ 5, /* 103 */ 3, /* 104 */
      4, /* 105 */ 4, /* 106 */ 5, /* 107 */ 4, /* 108 */ 5, /* 109 */
      5, /* 110 */ 6, /* 111 */ 3, /* 112 */ 4, /* 113 */ 4, /* 114 */
      5, /* 115 */ 4, /* 116 */ 5, /* 117 */ 5, /* 118 */ 6, /* 119 */
      4, /* 120 */ 5, /* 121 */ 5, /* 122 */ 6, /* 123 */ 5, /* 124 */
      6, /* 125 */ 6, /* 126 */ 7, /* 127 */ 1, /* 128 */ 2, /* 129 */
      2, /* 130 */ 3, /* 131 */ 2, /* 132 */ 3, /* 133 */ 3, /* 134 */
      4, /* 135 */ 2, /* 136 */ 3, /* 137 */ 3, /* 138 */ 4, /* 139 */
      3, /* 140 */ 4, /* 141 */ 4, /* 142 */ 5, /* 143 */ 2, /* 144 */
      3, /* 145 */ 3, /* 146 */ 4, /* 147 */ 3, /* 148 */ 4, /* 149 */
      4, /* 150 */ 5, /* 151 */ 3, /* 152 */ 4, /* 153 */ 4, /* 154 */
      5, /* 155 */ 4, /* 156 */ 5, /* 157 */ 5, /* 158 */ 6, /* 159 */
      2, /* 160 */ 3, /* 161 */ 3, /* 162 */ 4, /* 163 */ 3, /* 164 */
      4, /* 165 */ 4, /* 166 */ 5, /* 167 */ 3, /* 168 */ 4, /* 169 */
      4, /* 170 */ 5, /* 171 */ 4, /* 172 */ 5, /* 173 */ 5, /* 174 */
      6, /* 175 */ 3, /* 176 */ 4, /* 177 */ 4, /* 178 */ 5, /* 179 */
      4, /* 180 */ 5, /* 181 */ 5, /* 182 */ 6, /* 183 */ 4, /* 184 */
      5, /* 185 */ 5, /* 186 */ 6, /* 187 */ 5, /* 188 */ 6, /* 189 */
      6, /* 190 */ 7, /* 191 */ 2, /* 192 */ 3, /* 193 */ 3, /* 194 */
      4, /* 195 */ 3, /* 196 */ 4, /* 197 */ 4, /* 198 */ 5, /* 199 */
      3, /* 200 */ 4, /* 201 */ 4, /* 202 */ 5, /* 203 */ 4, /* 204 */
      5, /* 205 */ 5, /* 206 */ 6, /* 207 */ 3, /* 208 */ 4, /* 209 */
      4, /* 210 */ 5, /* 211 */ 4, /* 212 */ 5, /* 213 */ 5, /* 214 */
      6, /* 215 */ 4, /* 216 */ 5, /* 217 */ 5, /* 218 */ 6, /* 219 */
      5, /* 220 */ 6, /* 221 */ 6, /* 222 */ 7, /* 223 */ 3, /* 224 */
      4, /* 225 */ 4, /* 226 */ 5, /* 227 */ 4, /* 228 */ 5, /* 229 */
      5, /* 230 */ 6, /* 231 */ 4, /* 232 */ 5, /* 233 */ 5, /* 234 */
      6, /* 235 */ 5, /* 236 */ 6, /* 237 */ 6, /* 238 */ 7, /* 239 */
      4, /* 240 */ 5, /* 241 */ 5, /* 242 */ 6, /* 243 */ 5, /* 244 */
      6, /* 245 */ 6, /* 246 */ 7, /* 247 */ 5, /* 248 */ 6, /* 249 */
      6, /* 250 */ 7, /* 251 */ 6, /* 252 */ 7, /* 253 */ 7, /* 254 */
      8  /* 255 */
    }; // end _Bit_count

    size_t wordIndex(size_t bitIndex)
    { return bitIndex >> _ADDRESS_BITS_PER_WORD; };

    size_t wordIndex(size_t bitIndex) const
    { return bitIndex >> _ADDRESS_BITS_PER_WORD; };

    public:
    myBitSet() //构造函数
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] = 0;
        }
    };

    myBitSet(const myBitSet &rhs) //拷贝构造函数
    {
        if(this != &rhs)
        {
            assert(_M_PhysicLength == rhs._M_PhysicLength && _M_LogicLength == rhs._M_LogicLength);
            for(size_t i=0; i<_M_PhysicLength; i++){
                _M_w[i] = rhs._M_w[i];
            }
        }
    };
    //~myBitSet();

    bool test(size_t _pos) //Test 1 or 0 in _pos
    {
        size_t _w_Index = wordIndex(_pos);
        return ((_M_w[_w_Index]) & (1ul << _pos)) != 0;
    };

    bool test(size_t _pos) const
    {
        size_t _w_Index = wordIndex(_pos);
        return ((_M_w[_w_Index]) & (1ul << _pos)) != 0;
    };

    void set(size_t _pos)
    {
        size_t _w_Index = wordIndex(_pos);
        _M_w[_w_Index] |= 1ul << _pos;
    };

    void set()
    {
        size_t _w_Index = _M_PhysicLength;
        while( _w_Index > 0 )
            _M_w[--_w_Index] = ~0ul;
    };

    void reset(size_t _pos)
    {
        size_t _w_Index = wordIndex(_pos);
        _M_w[_w_Index] &= ~(1ul << _pos);
    };

    void reset()
    {
        size_t _w_Index = _M_PhysicLength;
        while( _w_Index > 0 )
            _M_w[--_w_Index] = 0;
    };

    void flip(size_t _pos)
    {
        size_t _w_Index = wordIndex(_pos);
        _M_w[_w_Index] ^= (1ul << _pos);
    };

    //void
        //flip();
    int count()
    {
        if(_M_BitCount > -1)
            return _M_BitCount;
        int _result = 0;
        const unsigned char* _byte_ptr = (const unsigned char*) _M_w; //8 bit per char
        const unsigned char* _end_ptr
            = ((const unsigned char*) _M_w) + sizeof(_M_w[0]) * _M_PhysicLength;
        while( _byte_ptr < _end_ptr )
        {
            _result += _S_bit_count[*_byte_ptr];
            _byte_ptr ++;
        }
        _M_BitCount = _result;
        return _result;
    };

    int count() const
    {
        if(_M_BitCount > -1)
            return _M_BitCount;
        int _result = 0;
        const unsigned char* _byte_ptr = (const unsigned char*) _M_w; //8 bit per char
        const unsigned char* _end_ptr
            = ((const unsigned char*) _M_w) + sizeof(_M_w[0]) * _M_PhysicLength;
        while( _byte_ptr < _end_ptr )
        {
            _result += _S_bit_count[*_byte_ptr];
            _byte_ptr ++;
        }
        _M_BitCount = _result;
        return _result;
    };

    int SSE4_count()
    {
        if(_M_BitCount > -1)
            return _M_BitCount;
        int _result = 0;
        for(size_t i=0; i<_M_PhysicLength; i++){
            _result += _mm_popcnt_u64(_M_w[i]);
        }
        _M_BitCount = _result;
        return _result;
    };

    int SSE4_count() const
    {
        if(_M_BitCount > -1)
            return _M_BitCount;
        int _result = 0;
        for(size_t i=0; i<_M_PhysicLength; i++){
            _result += _mm_popcnt_u64(_M_w[i]);
        }
        _M_BitCount = _result;
        return _result;
    };

    size_t size()
    {
        return _M_LogicLength;
    };

    size_t size() const
    {
        return _M_LogicLength;
    };

    std::vector<int> getIndices()
    {
        if(!_M_Indices.empty() || _M_BitCount == 0)
        {
            return _M_Indices;
        }
        for(size_t i=0; i<_M_PhysicLength; i++){
            _WordT _tmpWord = _M_w[i];
            while(_tmpWord){
                _tmpWord = _tmpWord & (_tmpWord - 1);
                _WordT _lowerIndex = _tmpWord ^ _M_w[i];

                //This is for x64 version
                int _Index = 1;
                if((_lowerIndex>>32) == 0){
                    _Index = _Index + 32;
                    _lowerIndex = _lowerIndex << 32;
                }
                if((_lowerIndex>>48) == 0){
                    _Index = _Index + 16;
                    _lowerIndex = _lowerIndex << 16;
                }
                if((_lowerIndex>>56) == 0){
                    _Index = _Index + 8;
                    _lowerIndex = _lowerIndex << 8;
                }
                if((_lowerIndex>>60) == 0){
                    _Index = _Index + 4;
                    _lowerIndex = _lowerIndex << 4;
                }
                if((_lowerIndex>>62) == 0){
                    _Index = _Index + 2;
                    _lowerIndex = _lowerIndex << 2;
                }
                _Index = 63 - (_Index - (_lowerIndex >> 63));
                _M_Indices.push_back(i*_BITS_PER_WORD+_Index);
            }
        }
        return _M_Indices;
    }

    //override
    myBitSet operator&(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] &= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet & operator&=(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] &= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet operator|(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] |= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet & operator|=(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] |= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet operator^(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] ^= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet & operator^=(const myBitSet &rhs)
    {
        for(size_t i=0; i<_M_PhysicLength; i++){
            _M_w[i] ^= rhs._M_w[i];
        }
        return *this;
    };

    myBitSet & operator=(const myBitSet &rhs)
    {
        if(this != &rhs)
        {
            assert(_M_PhysicLength == rhs._M_PhysicLength && _M_LogicLength == rhs._M_LogicLength);
            for(size_t i=0; i<_M_PhysicLength; i++){
                _M_w[i] = rhs._M_w[i];
            }
        }
        return *this;
    };

    _WordT operator[](size_t _pos)
    {
        size_t _w_Index = wordIndex(_pos);
        return _M_w[_w_Index] & (1ul << _pos);
    };

};

#endif // _MY_BITSET_H_
