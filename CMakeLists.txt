cmake_minimum_required(VERSION 3.29...4.0.3 FATAL_ERROR)

project(
    "inviwo-standalone-modules"
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER cmake)

# Output paths for the executables, runtimes, archives and libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

option(BUILD_SHARED_LIBS "Build shared libs, else static libs" ON)

set(default "C:/Program Files/Inviwo/0.9.12-pre")
set(Inviwo_ROOT_DIR "${default}" CACHE PATH "Path to Inviwo root directory")
set(inviwo-core_DIR ${Inviwo_ROOT_DIR}/share/inviwo)

find_package(inviwo-core CONFIG REQUIRED)
ivw_setup()
ivw_register_modules(
    MODULE_DIRS ${CMAKE_CURRENT_LIST_DIR}
    ENABLED_MODULE_TARGETS_OUT module_targets
)

add_custom_target(run_inviwo)
add_dependencies(run_inviwo ${module_targets})
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT run_inviwo)
set_target_properties(run_inviwo PROPERTIES
    VS_DEBUGGER_COMMAND ${Inviwo_ROOT_DIR}$<$<CONFIG:Debug>:/debug>/bin/inviwo.exe
    VS_DEBUGGER_COMMAND_ARGUMENTS "-m ${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
)
