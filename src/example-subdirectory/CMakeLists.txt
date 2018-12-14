set(TARGET example)

set(TARGET_SOURCES
    include/example-subdirectory/example.h
    example.cpp
)


add_library(${TARGET} STATIC ${TARGET_SOURCES})


target_include_directories(${TARGET}
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include/

)