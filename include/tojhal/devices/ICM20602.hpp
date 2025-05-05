#include <tojhal/devices/IMU.hpp>
#include <tojhal/comms_interfaces/I2C.hpp>

namespace tojhal::devices {

	class ICM20602 : public IMU<tojhal::comms_interfaces::I2C> {

		public:

			ICM20602();

			float getAccelX() override;
			float getAccelY() override;
			float getAccelZ() override;

	};

}
