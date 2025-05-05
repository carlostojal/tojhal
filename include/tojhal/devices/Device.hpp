
namespace tojhal::devices {

	/**
	 * @class Device
	 * 
	 * @brief Abstract device class. Has utility methods and a communication interface.
	 *
	 * @tparam InterfaceT Communication interface type.
	 */
	template <typename InterfaceT>
	class Device {

		protected:

			/// Device communication interface.
			InterfaceT deviceInterface;
	};

}