cmake_minimum_required(VERSION 3.12.4)

project(froggy)

add_subdirectory(src)

if(BUILD_TESTING)
  enable_testing()
  add_subdirectory(test)
endif()
