set(BINARY ${CMAKE_PROJECT_NAME})

#add_executable(Main main.cpp tuple.cpp tuple.hpp)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})
