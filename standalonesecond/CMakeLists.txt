ivw_module(StandaloneSecond)

set(HEADER_FILES
    include/inviwo/standalonesecond/processors/standalonesecond.h
    include/inviwo/standalonesecond/standalonesecondmodule.h
    include/inviwo/standalonesecond/standalonesecondmoduledefine.h
)
ivw_group("Header Files" ${HEADER_FILES})

set(SOURCE_FILES
    src/processors/standalonesecond.cpp
    src/standalonesecondmodule.cpp
)
ivw_group("Source Files" ${SOURCE_FILES})

set(SHADER_FILES
	# Add shaders
)
ivw_group("Shader Files" ${SHADER_FILES})

set(TEST_FILES
    tests/unittests/standalonesecond-unittest-main.cpp
)
ivw_add_unittest(${TEST_FILES})

ivw_create_module(${SOURCE_FILES} ${HEADER_FILES} ${SHADER_FILES})

# Add shader directory to install package
#ivw_add_to_module_pack(${CMAKE_CURRENT_SOURCE_DIR}/glsl)
