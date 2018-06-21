# vars
FILE(GLOB SRC_LIST . "*.c")									# glob ./ all *.c, and save into var
FILE(GLOB HEAD_LIST . "*.h")								# glob ./ all *.h, and save into var



# used by `cmake` and `make`
## make calc.so
ADD_LIBRARY(calc SHARED ${SRC_LIST})				# shared lib, cmake translates target `calc` to output file `libcalc.so`

## link libcalc.so -> libcalc.so.1 -> libcalc.so.1.2
SET_TARGET_PROPERTIES(calc PROPERTIES VERSION 1.2 SOVERSION 1)

## make calc_static.a
ADD_LIBRARY(calc_static STATIC ${SRC_LIST})	# static lib, cmake translates target `calc_static` to output file `libcalc_static.a`
																						# NOTE: target must be unique, so static lib uses `calc_static` instead
## make calc.a instead of calc_static.a
SET_TARGET_PROPERTIES(calc_static PROPERTIES OUTPUT_NAME "calc")		# workaround: make this target to output file `libcalc.a`



# used by `make install`
## install lib files
INSTALL(TARGETS calc calc_static
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)

## intall header files
INSTALL(FILES ${HEAD_LIST} DESTINATION include)
