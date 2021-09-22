# cmake_minimum_required(VERSION 3.14)

# project(${This} CXX)

# set(CMAKE_CXX_STANDARD 11)

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
# )

# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# enable_testing()

# add_subdirectory(googletest)

# add_subdirectory(src)

# add_subdirectory(test)

cmake_minimum_required(VERSION 3.14)

project(RayTracer)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(googletest)
