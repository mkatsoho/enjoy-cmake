SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)		# where to save executable files. create the dir if not exist.
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)			# where to save library files. create the dir if not exist.

SET(SRC_LIST main.c func1.c func2.c)										# set a var, which can be a list or one item
ADD_EXECUTABLE(hello ${SRC_LIST})


# install bin/lib/libstatic in src/base/CMakeLists.txt                                                                               
INSTALL(TARGETS hello RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION libstatic) # install bin, lib, static 
