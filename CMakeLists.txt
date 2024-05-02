cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_COMPILER "clang-18")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(RandomCode VERSION 1.0)
file(GLOB CPP_FILES "*.cpp")
# Iterate over each.cpp file
foreach(CPP_FILE ${CPP_FILES})
    # Extract the base name of the file without the extension
    get_filename_component(BASE_NAME ${CPP_FILE} NAME_WE)
    
    # Create an executable with the base name
    add_executable(${BASE_NAME} ${CPP_FILE})
    
    # Link any necessary libraries here if needed
    # target_link_libraries(${BASE_NAME} YourLibrary)
endforeach()

