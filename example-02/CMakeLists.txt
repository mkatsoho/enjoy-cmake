cmake_minimum_required(VERSION 2.8)			# minimal cmake version

PROJECT(HELLOWORLD)

# suggest to run `cmake -DCMAKE_INSTALL_PREFIX=/tmp/t2 ..` in folder `build/`

# include CMakeLists.txt in the subdirectory
ADD_SUBDIRECTORY(src/base base)					#  build files in `src/base/` and save outputs in `build/base/`

# ADD_EXECUTABLE is not used here, in the subdirectory instead
# ADD_EXECUTABLE(hello ${SRC_LIST})			


# install files to either under OS official directories (by default), or under a customized directory
INSTALL(FILES COPYRIGHT README.example-02 DESTINATION share/doc/cmake/t2)		# install common files
INSTALL(PROGRAMS runhello.sh DESTINATION bin)											# install executable files and change its rwx
INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)						# install folder

# install bin/lib/libstatic in src/base/CMakeLists.txt
# INSTALL(TARGETS hello RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION libstatic) # install bin, lib, static 
