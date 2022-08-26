cmake_minimum_required(VERSION 3.22)

SET( BINARY ${CMAKE_PROJECT_NAME})
SET( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
SET( LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

SET(SRC_FILES
	main.c

	InsertLinkedList.c
	)

add_executable(${BINARY}_run ${SRC_FILES})

add_library(${BINARY}_lib STATIC ${SRC_FILES})	
