sizeof-viewer
=============
From [sizeof operator - cppreference.com](https://en.cppreference.com/w/cpp/language/sizeof)

### Key giveaways
- > The size of a "long" integer varies between architectures and operating systems.
    - [Size of 'long integer' data type (C++) on various architectures and OS](https://www.intel.com/content/www/us/en/developer/articles/technical/size-of-long-integer-type-on-different-architecture-and-os.html) 
- Use platform-agnostic data types all the time if you are not doing low level programming
  - [Fixed width integer types (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/types/integer)
  - [C中int8_t、int16_t、int32_t、int64_t、uint8_t、size_t、ssize_t区别_c int8-CSDN博客](https://blog.csdn.net/yz930618/article/details/84785970)

### TODOs
- [ ] add addresss increment size
  - [C语言不同类型指针自加时地址增量_c语言指针自加-CSDN博客](https://blog.csdn.net/q7727765/article/details/132438812)
- [ ] Windows Types
  - [Windows Data Types (BaseTsd.h) - Win32 apps | Microsoft Learn](https://learn.microsoft.com/en-us/windows/win32/winprog/windows-data-types?redirectedfrom=MSDN)

### Extra
- [emscripten/cmake/Modules/CheckTypeSize.c.in at main · emscripten-core/emscripten](https://github.com/emscripten-core/emscripten/blob/main/cmake/Modules/CheckTypeSize.c.in)

### Reference
- [x] [**为什么 C++ 中成员函数指针是 16 字节？ - hazir - 博客园**](https://www.cnblogs.com/hazir/p/wide-pointers.html)
