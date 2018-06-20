cmake_minimum_required(VERSION 2.8)     # minimal cmake version

PROJECT(HELLOWORLD)

# suggest to run `cmake ..` in build folder

SET(SRC_LIST main.c func1.c func2.c)										# set a var, which can be a list or one item
MESSAGE(STATUS "BINARY DIR = " ${PROJECT_BINARY_DIR})		# PROJECT_BINARY_DIR is a predefined var of CMake
MESSAGE(STATUS "SOURCE DIR = " ${PROJECT_SOURCE_DIR})		# PROJECT_SOURCE_DIR is a predefined var of CMake
ADD_EXECUTABLE(hello ${SRC_LIST})												# compile list of files as hello, the binary file to be executed
