cmake_minimum_required(VERSION 3.16)
project(cmake_with_protobuf_example)

set(CMAKE_CXX_STANDARD 11)

INCLUDE(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)
# You can set a specific version like this
#FIND_PACKAGE(Protobuf 3.6.1 REQUIRED)

MESSAGE(STATUS "Using Protocol Buffers ${Protobuf_VERSION}")

ADD_SUBDIRECTORY(proto)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

add_executable(cmake_with_protobuf_example main.cpp)
TARGET_LINK_LIBRARIES(cmake_with_protobuf_example proto ${PROTOBUF_LIBRARIES})
