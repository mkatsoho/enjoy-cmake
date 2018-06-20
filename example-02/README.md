# Example 01 - a new hello world project like a real one

The new hello world project 

- with folders (e.g. source code, docuemnts, etc) 
- with files (e.g. copyright, readme, shell scripts, etc)
- save binary files in a foler (e.g. bin/)
- install files to system folders (e.g. /usr/bin/, /usr/share/doc/)




# steps to cmake

```bash

$ pwd
/home/mk/enjoy-cmake/example-02

$ cd build		

$ rm -rf *	


# installed destination is `/tmp/example-02/`
$ cmake -DCMAKE_INSTALL_PREFIX=/tmp/example-02 ..
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
-- Configuring done
-- Generating done
-- Build files have been written to: /home/mk/proj/zyx-enjoy/enjoy-cmake/example-02/build


$ make
Scanning dependencies of target hello
[ 25%] Building C object base/CMakeFiles/hello.dir/main.c.o
[ 50%] Building C object base/CMakeFiles/hello.dir/func1.c.o
[ 75%] Building C object base/CMakeFiles/hello.dir/func2.c.o
[100%] Linking C executable ../bin/hello
[100%] Built target hello
mk@chenyg-yinhe-linux:~/proj/zyx-enjoy/enjoy-cmake/example-02/build$ make install
[100%] Built target hello
Install the project...
-- Install configuration: ""
-- Up-to-date: /tmp/example-02/share/doc/cmake/t2/COPYRIGHT
-- Up-to-date: /tmp/example-02/share/doc/cmake/t2/README.example-02
-- Installing: /tmp/example-02/bin/runhello.sh
-- Up-to-date: /tmp/example-02/share/doc/cmake/t2
-- Up-to-date: /tmp/example-02/share/doc/cmake/t2/help1.doc
-- Up-to-date: /tmp/example-02/share/doc/cmake/t2/help2.doc
-- Installing: /tmp/example-02/bin/hello


$ ls -l /tmp/example-02/
total 8
drwxrwxr-x 2 mk mk 4096 6月  20 22:55 bin
drwxrwxr-x 3 mk mk 4096 6月  20 21:37 share

$ ls -l /tmp/example-02/bin
total 16
-rwxr-xr-x 1 mk mk 8728 6月  20 22:55 hello
-rwxr-xr-x 1 mk mk    6 6月  20 22:55 runhello.sh


$ pushd /tmp/example-02/bin && ./runhello.sh && popd

$ make clean	

```

# wrap up

```bash

## vars



## commands



```
