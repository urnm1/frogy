cmake_minimum_required(VERSION 3.12.4)

project(froggy)

add_subdirectory(src)

if(BUILD_TESTING)
  add_subdirectory(test)
endif()
