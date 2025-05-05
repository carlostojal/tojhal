#include <tojhal/devices/BME280.hpp>

using namespace tojhal::devices;

BME280::BME280() {

}

float BME280::getTemperature() {
	char buffer[64];
	this->deviceInterface.readRegister(0x00, 0, buffer);
	return 0.0f;
}

float BME280::getHumidity() {
	char buffer[64];
	this->deviceInterface.readRegister(0x00, 0, buffer);
	return 0.0f;
}

float BME280::getPressure() {
	char buffer[64];
	this->deviceInterface.readRegister(0x00, 0, buffer);
	return 0.0f;
}
