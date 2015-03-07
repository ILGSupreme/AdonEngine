cmake_minimum_required(VERSION 2.8)

project(AdonEngine)

include_directories(${PROJECT_SOURCE_DIR}/libs/GLEW)

add_executable(AdonEngine ${PROJECT_SOURCE_DIR}/Source/Source.cc)

target_link_libraries(AdonEngine LINK_PUBLIC GLEW)

