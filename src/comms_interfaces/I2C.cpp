#include <tojhal/comms_interfaces/I2C.hpp>

using namespace tojhal::comms_interfaces;

I2C::I2C() {

}

I2C::I2C(uint8_t device) {
	this->deviceAddr = device;
}

void I2C::readRegister(uint8_t address, uint32_t len, char* buffer) {

}

void I2C::writeRegister(uint8_t address, char* buffer, uint32_t len) {

}
