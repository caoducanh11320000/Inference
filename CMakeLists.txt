cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

include_directories(include)
# Tìm gói OpenCV 1
find_package(OpenCV REQUIRED)
# Bao gồm thư viện OpenCV 1
include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})
# Liên kết với thư viện OpenCV 1
target_link_libraries(main PRIVATE ${OpenCV_LIBS})