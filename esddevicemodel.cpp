#include "esddevicemodel.h"

bool ESDDeviceModel::fromJson(const QJsonObject &json) {
	this->deviceId = json["device"].toString();
	this->event = json["event"].toString();
	this->deviceInfo = json["deviceInfo"].toObject();
	return true;
}
