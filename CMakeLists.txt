#
# project configuration
#
cmake_minimum_required(VERSION 3.19 )
get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(${ProjectId}
        LANGUAGES C CXX)

#
# OpenMP
#
find_package(OpenMP REQUIRED)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()


#
#helper functions
#

function(add_task name)
    add_executable(${name})

    file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${name}/*.cpp")
    file(GLOB HDR_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${name}/*.h")
    target_sources(${name} PRIVATE ${SRC_FILES})
    target_sources(${name} PRIVATE ${HDR_FILES})

    target_include_directories(${name} PRIVATE "${CMAKE_CURRNET_SOURCE_DIR}/${name}")
endfunction()


#
# task registration
#

add_task(B_1)
