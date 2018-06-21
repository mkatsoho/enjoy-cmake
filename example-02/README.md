# Example 01 - a new hello world like a real project



The new hello world project 

- with folders (e.g. source code, docuemnts, etc) 
- with files (e.g. copyright, readme, shell scripts, etc)
- save binary files in another folder (e.g. build/bin/), or by default build/SAME-FOLDER-AS-SOURCE
- install output files to customized folders (e.g. /tmp/hello/bin/, /tmp/hello/share/doc/, etc)
- or, install output files to system folders (e.g. /usr/bin/, /usr/share/doc/)



# read CMakeLists.txt to know how how



# steps to cmake

```bash

$ pwd
/home/mk/enjoy-cmake/example-02


$ rm -rf *			# BE CAREFUL. only do this in build/


## DCMAKE_INSTALL_PREFIX in cmake cmdline, which is used for `make install`
## to install files into the customized folder, or by default to system folders (/usr/local)
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
-- Build files have been written to: /home/mk/enjoy-cmake/example-02/build


$ make
Scanning dependencies of target hello
[ 25%] Building C object base/CMakeFiles/hello.dir/main.c.o
[ 50%] Building C object base/CMakeFiles/hello.dir/func1.c.o
[ 75%] Building C object base/CMakeFiles/hello.dir/func2.c.o
[100%] Linking C executable ../bin/hello
[100%] Built target hello


## really install binary files, docs, etc to /tmp/example-02
$ make install
[100%] Built target hello
Install the project...
-- Install configuration: ""
-- Installing: /tmp/example-02/share/doc/example-02/COPYRIGHT
-- Installing: /tmp/example-02/share/doc/example-02/README.example-02
-- Up-to-date: /tmp/example-02/bin/runhello.sh
-- Up-to-date: /tmp/example-02/share/doc/example-02
-- Installing: /tmp/example-02/share/doc/example-02/help1.doc
-- Installing: /tmp/example-02/share/doc/example-02/help2.doc
-- Installing: /tmp/example-02/bin/hello


## run shell script
$ pushd /tmp/example-02/bin && ./runhello.sh && popd


## remove binary files
$ make clean	

```



# what happen if NOT using DCMAKE_INSTALL_PREFIX in cmake cmdline

`make install` will by default install files to OS system folder, /usr/local


```bash

$ sudo make install
[sudo] password for mk: 
[100%] Built target hello
Install the project...
-- Install configuration: ""
-- Up-to-date: /usr/local/share/doc/example-02/COPYRIGHT
-- Up-to-date: /usr/local/share/doc/example-02/README.example-02
-- Up-to-date: /usr/local/bin/runhello.sh
-- Up-to-date: /usr/local/share/doc/example-02
-- Up-to-date: /usr/local/share/doc/example-02/help1.doc
-- Up-to-date: /usr/local/share/doc/example-02/help2.doc
-- Installing: /usr/local/bin/hello

```



# wrap up

```bash

## vars

cmake -DCMAKE_INSTALL_PREFIX=/tmp/example-02 .						# `make install` will install files & folders to this path

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)			# `make` save binary output to this path
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)				# `make` save library output to this path


## commands

ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])		# add sub CMakeLists.txt

INSTALL(TARGETS targets... [
		[ARCHIVE|LIBRARY|RUNTIME] [DESTINATION <dir>] 
		[PERMISSIONS permissions...] 
		[CONFIGURATIONS [Debug|Release|...]] 
		[COMPONENT <component>] 
		[OPTIONAL] 
	] 
  [...])

INSTALL(FILES files... DESTINATION <dir> [								# similar as above
		[PERMISSIONS permissions...]
		[CONFIGURATIONS [Debug|Release|...]]
		[COMPONENT <component>]
		[RENAME <name>] 
		[OPTIONAL]
	] 
  [...])

INSTALL(PROGRAMS files... DESTINATION <dir> ......)				# same as above

INSTALL(DIRECTORY dirs... DESTINATION <dir> [
	[FILE_PERMISSIONS permissions...]
	[DIRECTORY_PERMISSIONS permissions...]
	[USE_SOURCE_PERMISSIONS]
	[CONFIGURATIONS [Debug|Release|...]]
	[COMPONENT <component>]
	[
		[PATTERN <pattern> | REGEX <regex>]
		[EXCLUDE] 
		[PERMISSIONS permissions...]
	] 
	[...])

```
