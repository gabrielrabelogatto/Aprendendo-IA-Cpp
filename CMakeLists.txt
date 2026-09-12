cmake_minimum_required(VERSION 3.20)

project(MinhaIA)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    libtorch
    URL https://download.pytorch.org/libtorch/cpu/libtorch-win-shared-with-deps-latest.zip
)

FetchContent_MakeAvailable(libtorch)

list(APPEND CMAKE_PREFIX_PATH "${libtorch_SOURCE_DIR}")

find_package(Torch REQUIRED)

add_executable(MinhaIA
    src/main.cpp
)

target_link_libraries(MinhaIA PRIVATE "${TORCH_LIBRARIES}")

file(GLOB TORCH_DLLS "${libtorch_SOURCE_DIR}/lib/*.dll")

add_custom_command(
    TARGET MinhaIA
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${TORCH_DLLS}
    $<TARGET_FILE_DIR:MinhaIA>
)