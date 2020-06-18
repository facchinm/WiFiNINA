#include "WiFiNINA.h"
#include "ArduinoBLE.h"
#include "utility/wifi_drv.h"

class WiFiNINABLE {
public:
	static void begin() {
		// should be called after WiFi.begin()
		WiFiDrv::enableBLECoexistence();
	}
};