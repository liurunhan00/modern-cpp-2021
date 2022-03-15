cmake_minimum_required(VERSION 3.10)
project(guessing_game)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # generate compile_commands.json
set(CMAKE_CXX_FLAGS "-Wall")
# aux_source_directory(bin/ source)
## SET FOLDER
# set executables folder
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(task_1)
file (GLOB source CONFIGURE_DEPENDS src/*.cpp src/*.h)
target_sources(task_1 PUBLIC ${source})
