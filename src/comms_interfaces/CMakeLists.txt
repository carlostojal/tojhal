
add_library(comms_interfaces STATIC I2C.cpp)
target_include_directories(comms_interfaces PUBLIC ${CMAKE_SOURCE_DIR}/include)
