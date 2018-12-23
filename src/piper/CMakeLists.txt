set(TARGET piper)

set(TARGET_SOURCES
    main.cpp
)


add_executable(${TARGET} ${TARGET_SOURCES})

target_link_libraries(${TARGET}
    example
)

set_target_properties(${TARGET} PROPERTIES CXX_STANDARD 14)

install(TARGETS piper DESTINATION bin)