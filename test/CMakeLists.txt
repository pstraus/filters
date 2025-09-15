project(unitTests)

enable_testing()
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

find_package(Eigen3 REQUIRED)

add_executable(unitTests)

target_include_directories(unitTests 
                            PUBLIC "${CMAKE_SOURCE_DIR}/include/"
)
target_sources(unitTests
                PUBLIC
                    "TestCartesianOneDimensionalWithSpeed.cpp"
                    )

target_link_libraries(unitTests 
                            PRIVATE filters 
                            PRIVATE Eigen3::Eigen 
                            PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)


gtest_discover_tests(unitTests)