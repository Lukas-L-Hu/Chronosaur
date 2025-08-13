cmake_minimum_required(VERSION 3.10)
project(chronosaur)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

enable_testing()

add_executable(chronosaur examples/main.cpp src/ChronoTimer.cpp)

add_executable(test_complexity examples/test_complexity.cpp src/ChronoTimer.cpp)

add_test(NAME complexity_test COMMAND test_complexity)

target_include_directories(chronosaur PRIVATE include)

target_link_libraries(chronosaur PRIVATE Threads::Threads)
