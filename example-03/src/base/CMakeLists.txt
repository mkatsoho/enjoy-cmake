
# used by `make`
## change binary files destination to build/bin/ & build/lib
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)		# where to save executable files. create the dir if not exist.
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)			# where to save library files. create the dir if not exist.


## build execuatable files
SET(SRC_LIST main.c func1.c func2.c)										
ADD_EXECUTABLE(hello ${SRC_LIST})


# use by `make install`
## install the specific target binary files (e.g. bin, lib, libstatic) into ???
INSTALL(TARGETS hello 
	RUNTIME DESTINATION bin 
	LIBRARY DESTINATION lib 
	ARCHIVE DESTINATION libstatic) # install bin, lib, static 
