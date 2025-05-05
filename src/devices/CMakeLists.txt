
add_library(devices STATIC Device.cpp BME280.cpp)
target_include_directories(devices PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(devices PUBLIC comms_interfaces)
