cmake_minimum_required(VERSION 3.22)
project(basic_test)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(uniTests
	gtest.cpp
	hanoi.c
	)

target_link_libraries(uniTests ${GTEST_LIBRARY_DEBUG} ${GTEST_MAIN_LIBRARY_DEBUG} GTest::gtest_main)

add_test(
	NAME unitTests
	COMMAND unitTests

	)

