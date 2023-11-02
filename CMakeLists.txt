cmake_minimum_required(VERSION 3.26)
project(Laba_5)

set(CMAKE_CXX_STANDARD 14)

find_program(FLEX_EXECUTABLE NAMES flex)
find_program(BISON_EXECUTABLE NAMES bison)

if(NOT FLEX_EXECUTABLE)
    message(FATAL_ERROR "Flex not found!")
endif()

if(NOT BISON_EXECUTABLE)
    message(FATAL_ERROR "Bison not found!")
endif()

set(FLEX_OUTPUT_SOURCE ${CMAKE_BINARY_DIR}/lexer.cpp)
set(BISON_OUTPUT_SOURCE ${CMAKE_BINARY_DIR}/parser.cpp)
set(BISON_OUTPUT_HEADER ${CMAKE_BINARY_DIR}/parser.tab.h)

add_custom_command(
        OUTPUT ${FLEX_OUTPUT_SOURCE}
        COMMAND ${FLEX_EXECUTABLE} -o ${FLEX_OUTPUT_SOURCE} ${CMAKE_SOURCE_DIR}/lexer.l
        DEPENDS ${CMAKE_SOURCE_DIR}/lexer.l
        COMMENT "Generating lexer.cpp with Flex"
)

add_custom_command(
        OUTPUT ${BISON_OUTPUT_SOURCE} ${BISON_OUTPUT_HEADER}
        COMMAND ${BISON_EXECUTABLE} --defines=${BISON_OUTPUT_HEADER} -o ${BISON_OUTPUT_SOURCE} ${CMAKE_SOURCE_DIR}/parser.y
        DEPENDS ${CMAKE_SOURCE_DIR}/parser.y
        COMMENT "Generating parser.cpp and parser.tab.h with Bison"
)

include_directories(${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR})

add_executable(Laba_5
        main.cpp
        ${FLEX_OUTPUT_SOURCE}
        ${BISON_OUTPUT_SOURCE}
)
