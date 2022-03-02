C++ using Python
===

## Install & Dependence
> C++
- cmake
> Python
- ctypes
- loguru

## Use
- for cmake
  ```bash
  mkdir build
  cd build
  cmake ..; make all
  ```
- for python
  ```bash
  python call_c++.py
  ```

## Directory Hierarchy
```
|—— CMakeLists.txt
|—— call_c++.py
|—— simple.cpp
|—— simple.h
```
## Code Details
### Tested Platform
- software
  ```
  OS: Debian unstable (May 2021), Ubuntu LTS
  Python: 3.8.5 (anaconda)
  ```
