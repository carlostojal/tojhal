#include <tojhal/devices/Device.hpp>
#include <tojhal/comms_interfaces/I2C.hpp>

using namespace tojhal::devices;

template class Device<tojhal::comms_interfaces::I2C>;
