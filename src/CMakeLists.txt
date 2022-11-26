add_library(algo STATIC zero.cpp)
target_include_directories(algo PUBLIC .)

# add_executable(bootstrap bootstrap.cpp)
# target_include_directories(bootstrap PRIVATE algo)
