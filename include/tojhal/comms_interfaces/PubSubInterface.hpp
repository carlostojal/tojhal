#pragma once

#include <string>
#include <tojhal/comms_interfaces/CommsInterface.hpp>


namespace tojhal::comms_interfaces {

	/**
	 * @class PubSubInterface
	 * 
	 * @brief Abstract pub/sub communication interface.
	 */
	class PubSubInterface : public CommsInterface {

		protected:

			/**
			 * @brief Publish a buffer to a topic.
			 * 
			 * @param topic Topic to publish to.
			 * @param buffer Buffer to publish.
			 * @param len Number of bytes to publish.
			 */
			void publish(const std::string& topic, char* buffer, uint32_t len);

	}

}
