cmake_minimum_required(VERSION 2.8)

project(AdonEngine)

FIND_PACKAGE(OpenGL)

include_directories(${AdonEngine_SOURCE_DIR}/Source
 ${AdonEngine_SOURCE_DIR}/libs/GLEW 
${AdonEngine_SOURCE_DIR}/libs/GLFW)

add_executable(AdonEngineSource ${AdonEngine_SOURCE_DIR}/Source/Source.cc)

LINK_DIRECTORIES(${AdonEngine_SOURCE_DIR}/libs/GLEW
${AdonEngine_SOURCE_DIR}/libs/GLFW)

target_link_libraries(AdonEngineSource ${AdonEngine_SOURCE_DIR}/libs/GLEW/glew32.lib ${AdonEngine_SOURCE_DIR}/libs/GLFW/glfw3.lib ${OPENGL_LIBRARIES})