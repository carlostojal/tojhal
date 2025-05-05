#pragma once

#include <cstdint>
#include <tojhal/comms_interfaces/CommsInterface.hpp>

namespace tojhal::comms_interfaces {

	/**
	 * @class RegisterInterface
	 *
	 * @brief Communication interface over registers. (Eg: I2C, SPI)
	 */
	class RegisterInterface : public CommsInterface {

		protected:

			/// Device address.
			uint8_t deviceAddr;

			/**
			 * @brief Read a register.
			 * 
			 * @param address Register address to read.
			 * @param len Number of bytes to read.
			 * @param buffer Destination buffer.
			 */
			virtual void readRegister(uint8_t address, uint32_t len, char* buffer) = 0;

			/**
			 * @brief Write a register.
			 * 
			 * @param address Register address to write.
			 * @param buffer Buffer to write.
			 * @param len Number of bytes to write.
			 */
			virtual void writeRegister(uint8_t address, char* buffer, uint32_t len) = 0;

	};

}
