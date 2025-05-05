#pragma once

#include <tojhal/comms_interfaces/RegisterInterface.hpp>

namespace tojhal::comms_interfaces {

	/**
	 * @class I2C
	 *
	 * @brief I2C communication interface.
	 */
	class I2C : public RegisterInterface {

		public:

			/// Default constructor.
			I2C();

			/**
			 * @brief Constructor.
			 * 
			 * @param device Device address.
			 */
			I2C(uint8_t device);

			/**
			 * @brief Read a I2C register.
			 * 
			 * @param address Register address to read.
			 * @param len Number of bytes to read.
			 * @param buffer Destination buffer.
			 */
			void readRegister(uint8_t address, uint32_t len, char* buffer) override;

			/**
			 * @brief Write a register.
			 * 
			 * @param address Register address to write.
			 * @param buffer Buffer to write.
			 * @param len Number of bytes to write.
			 */
			void writeRegister(uint8_t address, char* buffer, uint32_t len) override;
	};
}
