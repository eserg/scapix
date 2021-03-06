// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_SENSORADDITIONALINFO_H
#define SCAPIX_ANDROID_HARDWARE_SENSORADDITIONALINFO_H

namespace scapix::java_api {

namespace android::hardware { class Sensor; }

namespace android::hardware {

class SensorAdditionalInfo : public object_base<SCAPIX_META_STRING("android/hardware/SensorAdditionalInfo"),
	java::lang::Object>
{
public:

	static jint TYPE_FRAME_BEGIN_();
	static jint TYPE_FRAME_END_();
	static jint TYPE_INTERNAL_TEMPERATURE_();
	static jint TYPE_SAMPLING_();
	static jint TYPE_SENSOR_PLACEMENT_();
	static jint TYPE_UNTRACKED_DELAY_();
	static jint TYPE_VEC3_CALIBRATION_();
	ref<link::java::array<jfloat>> floatValues();
	ref<link::java::array<jint>> intValues();
	ref<android::hardware::Sensor> sensor();
	jint serial();
	jint type();


protected:

	SensorAdditionalInfo(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/Sensor.h>

namespace scapix::java_api {
namespace android::hardware {

inline jint SensorAdditionalInfo::TYPE_FRAME_BEGIN_() { return get_static_field<SCAPIX_META_STRING("TYPE_FRAME_BEGIN"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_FRAME_END_() { return get_static_field<SCAPIX_META_STRING("TYPE_FRAME_END"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_INTERNAL_TEMPERATURE_() { return get_static_field<SCAPIX_META_STRING("TYPE_INTERNAL_TEMPERATURE"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_SAMPLING_() { return get_static_field<SCAPIX_META_STRING("TYPE_SAMPLING"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_SENSOR_PLACEMENT_() { return get_static_field<SCAPIX_META_STRING("TYPE_SENSOR_PLACEMENT"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_UNTRACKED_DELAY_() { return get_static_field<SCAPIX_META_STRING("TYPE_UNTRACKED_DELAY"), jint>(); }
inline jint SensorAdditionalInfo::TYPE_VEC3_CALIBRATION_() { return get_static_field<SCAPIX_META_STRING("TYPE_VEC3_CALIBRATION"), jint>(); }
inline ref<link::java::array<jfloat>> SensorAdditionalInfo::floatValues() { return get_field<SCAPIX_META_STRING("floatValues"), ref<link::java::array<jfloat>>>(); }
inline ref<link::java::array<jint>> SensorAdditionalInfo::intValues() { return get_field<SCAPIX_META_STRING("intValues"), ref<link::java::array<jint>>>(); }
inline ref<android::hardware::Sensor> SensorAdditionalInfo::sensor() { return get_field<SCAPIX_META_STRING("sensor"), ref<android::hardware::Sensor>>(); }
inline jint SensorAdditionalInfo::serial() { return get_field<SCAPIX_META_STRING("serial"), jint>(); }
inline jint SensorAdditionalInfo::type() { return get_field<SCAPIX_META_STRING("type"), jint>(); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_SENSORADDITIONALINFO_H
