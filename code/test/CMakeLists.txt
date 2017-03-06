project(test_tlpbook)

include_directories($ENV{GTEST_HOME}/include)

file(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

link_directories($ENV{GTEST_HOME}/lib)

add_executable(test_tlpbook ${all_files})

target_link_libraries(test_tlpbook tlpbook gtest)