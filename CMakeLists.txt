cmake_minimum_required(VERSION 3.4.3)
project(CallCounterPass)

find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_library(CallCounterPass MODULE CallCounterPass.cpp)
set_target_properties(CallCounterPass PROPERTIES COMPILE_FLAGS "-fno-rtti")
