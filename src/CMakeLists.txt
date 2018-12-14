set(TARGET piper)

set(TARGET_SOURCES
    main.cpp
)

add_subdirectory(example-subdirectory)


add_executable(${TARGET} ${TARGET_SOURCES})


target_link_libraries(${TARGET}
    example
)

set_target_properties(${TARGET} PROPERTIES CXX_STANDARD 14)

#############################################################
# Set up tests
#############################################################
add_executable(test test.cpp)
target_link_libraries(test gtest_main)

