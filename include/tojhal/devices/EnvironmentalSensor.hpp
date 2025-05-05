#include <tojhal/devices/Device.hpp>

namespace tojhal::devices {

	/**
	 * @class EnvironmentalSensor
	 * 
	 * @brief Environmental sensor. Measures temperature, humidity and pressure.
	 * 
	 * @tparam InterfaceT Communication interface type.
	 */
	template <typename InterfaceT>
	class EnvironmentalSensor : public Device<InterfaceT> {

		protected:

			/**
			 * @brief Measure the temperature.
			 *
			 * @return Temperature in Celsius.
			 */
			virtual float getTemperature() = 0;

			/**
			 * @brief Measure the humidity.
			 *
			 * @return Humidity percentage.
			 */
			virtual float getHumidity() = 0;

			/**
			 * @brief Measure the pressure.
			 * 
			 * @return Pressure.
			 */
			virtual float getPressure() = 0;

	};

}
