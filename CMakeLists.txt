cmake_minimum_required(VERSION 2.8)
project(ThisIsMyPurpose)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
#to powoduje ze plik exe pojawia sie w glownym folderze

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Og")
#jak chcesz zeby byla optymalizacja to zmien -Og na -Ofast

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lsfml-system -lsfml-window -lsfml-graphics")

set(THREADS_PREFER_PTHREAD_FLAG ON)
#odpala thready

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(ThisIsMyPurpose ${SOURCES})


