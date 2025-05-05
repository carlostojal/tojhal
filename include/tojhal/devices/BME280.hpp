
#include <tojhal/comms_interfaces/I2C.hpp>
#include <tojhal/devices/EnvironmentalSensor.hpp>

namespace tojhal::devices {

	/**
	 * @class BME280
	 * @brief Bosch BME280 sensor interface.
	 */
	class BME280 : public EnvironmentalSensor<comms_interfaces::I2C> {

		public:

			/// Constructor.
			BME280();

			/**
			 * @brief Measure the temperature.
			 *
			 * @return Temperature in Celsius.
			 */
			float getTemperature() override;

			/**
			 * @brief Measure the humidity.
			 *
			 * @return Humidity percentage.
			 */
			float getHumidity() override;

			/**
			 * @brief Measure the pressure.
			 * 
			 * @return Pressure.
			 */
			float getPressure() override;
	};

}
