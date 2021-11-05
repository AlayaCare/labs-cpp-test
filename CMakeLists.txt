cmake_minimum_required(VERSION 3.0)

# Project settings
project(term_frequency CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Compiler checks
set(CLANG FALSE)
set(GCC FALSE)
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CLANG TRUE)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(GCC TRUE)
endif()

# Warnings
if(MSVC)
    add_compile_options(${MSVC_WARNINGS})
elseif(${CLANG})
    add_compile_options(${CLANG_WARNINGS})
elseif(${GCC})
    add_compile_options(${GCC_WARNINGS})
endif()

set(PROJECT_SOURCE_DIR "source")
set(PROJECT_INCLUDE_DIR "include")

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/*.cpp)
include_directories(${PROJECT_INCLUDE_DIR})
set(SOURCE_FILES ${SOURCES})
# Executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES}  )

# Install settings
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
