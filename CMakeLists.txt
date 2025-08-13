cmake_minimum_required(VERSION 3.10)
project(chronosaur)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

add_executable(chronosaur examples/main.cpp src/ChronoTimer.cpp)

target_include_directories(chronosaur PRIVATE include)

target_link_libraries(chronosaur PRIVATE Threads::Threads)
