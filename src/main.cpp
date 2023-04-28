#include <iostream>
#include <stdint.h>

struct Empty {};
struct Base { int a; };
struct Derived : Base { int b; };
struct Bit { unsigned bit: 1; };
struct CharChar      { char c; char c2; };
struct CharCharInt   { char c; char c2; int i; };
struct IntCharChar   { int i;  char c;  char c2; };
struct CharIntChar   { char c; int i;   char c2; };
struct CharShortChar { char c; short s; char c2; };
 
int main()
{
    switch(sizeof(void*)) {
     case 8:
         std::cout << "64-bit system" << std::endl;
         break;
     default:
         std::cout << "unknown bit size system" << std::endl;
    }
 
    Empty e;
    Derived d;
    Base& b = d;
    Bit bit;
    int a[10];
    std::cout 
      << "sizeof empty class:              " << sizeof e         << '\n'
      << "sizeof pointer:                  " << sizeof &e        << '\n'
//    << "sizeof function:                 " << sizeof(void())   << '\n' // error
//    << "sizeof incomplete type:          " << sizeof(int[])    << '\n' // error
//    << "sizeof bit field:                " << sizeof bit.bit   << '\n' // error
      << "sizeof(Bit) class:               " << sizeof(Bit)      << '\n'
      << "sizeof(Bit) instance:            " << sizeof(bit)      << '\n'
      << "sizeof(int[10]) array of 10 int: " << sizeof(int[10])  << '\n'
      << "sizeof a        array of 10 int: " << sizeof a         << '\n'
      << "length of array of 10 int:       " << ((sizeof a) / (sizeof *a))   << '\n'
      << "length of array of 10 int (2):   " << ((sizeof a) / (sizeof a[0])) << '\n'
      << "sizeof the Derived class:        " << sizeof d         << '\n'
      << "sizeof the Derived through Base: " << sizeof b         << '\n'
      << "sizeof(unsigned)                 " << sizeof(unsigned) << '\n'
      << "sizeof(int)                      " << sizeof(int)      << '\n'
      << "sizeof(long)                     " << sizeof(long)      << '\n'
      << "sizeof(long long)                " << sizeof(long long) << '\n'
      << "sizeof(uint8_t)                " << sizeof(uint8_t) << '\n'
      << "sizeof(uint16_t)                " << sizeof(uint16_t) << '\n'
      << "sizeof(uint32_t)                " << sizeof(uint32_t) << '\n'
      << "sizeof(uint64_t)                " << sizeof(uint64_t) << '\n'
      << "sizeof(unsigned long)                " << sizeof(unsigned long) << '\n'
      << "sizeof(unsigned long long)                " << sizeof(unsigned long long) << '\n'
      << "sizeof(short)                    " << sizeof(short)    << '\n'
      << "sizeof(char)                     " << sizeof(char)     << '\n'
      << "sizeof(CharChar)                 " << sizeof(CharChar) << '\n'
      << "sizeof(CharCharInt)              " << sizeof(CharCharInt) << '\n'
      << "sizeof(IntCharChar)              " << sizeof(IntCharChar) << '\n'
      << "sizeof(CharIntChar)              " << sizeof(CharIntChar) << '\n'
      << "sizeof(CharShortChar)            " << sizeof(CharShortChar) << '\n';
 
  return 0;
}
