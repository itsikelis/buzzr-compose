cmake_minimum_required(VERSION 3.15)

project(euterpe VERSION 1.0)

# Create executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Link libraries and add compiler options
target_compile_options(${PROJECT_NAME} PUBLIC "-Wall;-Wextra;-Werror;-O3")