add_executable(main main.cpp)
target_link_libraries(main Catch2::Catch2)
include(Catch REQUIRED)
catch_discover_tests(main)
