cmake_minimum_required(VERSION 2.8)

PROJECT(HELLOWORLD)


# suggest to run `cd build/ && cmake -DCMAKE_INSTALL_PREFIX=/tmp/example-02 ..`


# used by `cmake` and `make`
## include CMakeLists.txt in the subdirectory
ADD_SUBDIRECTORY(lib lib) 								# for lib/
ADD_SUBDIRECTORY(src/base base)					


# used by `make install`
## install files to either in OS official directories (by default), or in a customized directory
## depend on CMAKE_INSTALL_PREFIX var in command line
INSTALL(FILES COPYRIGHT help.txt DESTINATION share/doc/example-02)				# install common files
INSTALL(PROGRAMS runhello.sh DESTINATION bin)															# install executable files and change its rwx
INSTALL(DIRECTORY doc/ DESTINATION share/doc/example-02)									# install folder
# INSTALL(TARGETS hello RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION libstatic) 	# this is moved in the subdirectory CMakeLists.txt
