include_directories(${CMAKE_SOURCE_DIR}/include/)


add_library(filters CartesianOneDimensionalWithSpeed.cpp)
target_link_libraries(filters PUBLIC Eigen3::Eigen)