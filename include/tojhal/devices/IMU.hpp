#include <tojhal/devices/Device.hpp>

namespace tojhal::devices {

	/**
	 * @class IMU
	 * @brief Abstract Inertial Measurement Unit device.
	 *
	 * @tparam InterfaceT Communications interface type.
	 */
	template <typename InterfaceT>
	class IMU : public Device<InterfaceT> {

		protected:
			virtual float getAccelX() = 0;
			virtual float getAccelY() = 0;
			virtual float getAccelZ() = 0;

	};

}
