set(TARGET piper)

set(TARGET_SOURCES
    main.cpp
)



add_executable(${TARGET} ${TARGET_SOURCES})
add_executable(test test.cpp)
target_link_libraries(test gtest_main)

set_target_properties(${TARGET} PROPERTIES CXX_STANDARD 14)