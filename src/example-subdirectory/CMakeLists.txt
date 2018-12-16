set(TARGET example)

set(TARGET_SOURCES
    include/example-subdirectory/example.h
    example.cpp
)


add_library(${TARGET} STATIC ${TARGET_SOURCES})


add_executable(example-test tests/example-test.cpp)

target_link_libraries(example-test gtest_main)
set_target_properties(example-test PROPERTIES FOLDER tests/example-test)


target_include_directories(${TARGET}
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include/

)