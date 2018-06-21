# Example 01 - hello world



# CMakeLists.txt is the script used by cmake

refer to CMakeLists.txt file to know more on cmake script.



# steps to do cmake

```bash

$ pwd
/home/mk/enjoy-cmake/example-01


## use build folder to do following commands
$ cd build				# run cmake in a directory, e.g. build


## remove temparary files in build folder
$ rm -rf *				# remove all files in build/ if needed


## cmake
$ cmake .. 				# cmake ../CMakeLists.txt, using build/ as working directory
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- BINARY DIR = /home/mk/enjoy-cmake/example-01/build
-- SOURCE DIR = /home/mk/enjoy-cmake/example-01
-- Configuring done
-- Generating done
-- Build files have been written to: /home/mk/enjoy-cmake/example-01/build


## make
$ make 				# cmake only generate scripts used by make, so run make to do the real job
Scanning dependencies of target hello
[ 25%] Building C object CMakeFiles/hello.dir/main.c.o
[ 50%] Building C object CMakeFiles/hello.dir/func1.c.o
[ 75%] Building C object CMakeFiles/hello.dir/func2.c.o
[100%] Linking C executable hello
[100%] Built target hello


## run binary
$ ./hello			# run the binary file
Hello World
in func1()
in func2()


## clean binary files, optional
$ make clean

```



# wrap up

```bash
## vars

PROJECT_BINARY_DIR
PROJECT_SOURCE_DIR


## commands

PROJECT(projectname [CXX] [C] [Java])

SET(VAR [VALUE...] [CACHE TYPE DOCSTRING [FORCE]])

MESSAGE([SEND_ERROR | STATUS | FATAL_ERROR] "message to display")

ADD_EXECUTABLE(BIN_FILENAME ${VAR_FOR_FILELIST})

```
