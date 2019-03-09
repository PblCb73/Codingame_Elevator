cmake_minimum_required(VERSION 2.8)

project(ElevatorTest)

#ѕуть к INCLUDE Google Test Framework
set(INCLUDE_GOOGLE_TEST_FRAMEWORK "$ENV{GOOGLE_TEST}include/")

#ѕуть к LIBS Google Test Framework
set(LIBS_GOOGLE_TEST_FRAMEWORK "$ENV{GOOGLE_TEST}bin/")

set(INCLUDE "include/")

include_directories(${INCLUDE_GOOGLE_TEST_FRAMEWORK})
include_directories(${INCLUDE})
link_directories(${LIBS_GOOGLE_TEST_FRAMEWORK})

set(EXE_NAME elevator_test)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall") 
set(SOURCE_SRC src/elevator_test.cpp src/elevator.cpp)
set(EXECUTABLE_OUTPUT_PATH "bin")

add_executable(${EXE_NAME} ${SOURCE_SRC})
target_link_libraries(${EXE_NAME} "$ENV{GOOGLE_TEST}include/"libgtest.dll)
