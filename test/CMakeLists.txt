include(FetchContent)

set(CMAKE_CXX_STANDARD 14)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY http://github.com/google/googletest.git
  GIT_TAG release-1.12.1
  )

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(
  unit_tests
  zero_test.cpp
  )
target_link_libraries(unit_tests PRIVATE algo gtest_main)
include(GoogleTest)
gtest_discover_tests(unit_tests)

