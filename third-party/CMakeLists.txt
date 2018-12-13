
set_property(GLOBAL PROPERTY USE_FOLDERS ON)



set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest)
set_target_properties(gmock gmock_main gtest gtest_main PROPERTIES FOLDER third-party/googletest)