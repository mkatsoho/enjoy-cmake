cmake_minimum_required(VERSION 2.8)

PROJECT(HELLOWORLD)

# suggest to run `cd build/ && cmake -DCMAKE_INSTALL_PREFIX=/tmp/t2 ..`


# include CMakeLists.txt in the subdirectory
ADD_SUBDIRECTORY(src/base base)					#  build source files in `src/base/` and save outputs in `build/base/`


# ADD_EXECUTABLE is NOT placed here any more, in the subdirectory instead
# ADD_EXECUTABLE(hello ${SRC_LIST})			


# used by `make install`
## install files to either in OS official directories (by default), or in a customized directory
## depend on CMAKE_INSTALL_PREFIX var in command line
INSTALL(FILES COPYRIGHT README.example-02 DESTINATION share/doc/example-02)		# install common files
INSTALL(PROGRAMS runhello.sh DESTINATION bin)																	# install executable files and change its rwx
INSTALL(DIRECTORY doc/ DESTINATION share/doc/example-02)													# install folder


## NOT install bin/lib/libstatic hear any more, do it in the subdirectory instead
## INSTALL(TARGETS hello RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION libstatic) # install bin, lib, static 
