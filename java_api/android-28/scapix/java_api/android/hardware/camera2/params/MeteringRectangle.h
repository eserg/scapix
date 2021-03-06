// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE_H

namespace scapix::java_api {

namespace android::graphics { class Point; }
namespace android::graphics { class Rect; }
namespace android::util { class Size; }
namespace java::lang { class String; }

namespace android::hardware::camera2::params {

class MeteringRectangle : public object_base<SCAPIX_META_STRING("android/hardware/camera2/params/MeteringRectangle"),
	java::lang::Object>
{
public:

	static jint METERING_WEIGHT_DONT_CARE_();
	static jint METERING_WEIGHT_MAX_();
	static jint METERING_WEIGHT_MIN_();

	static ref<MeteringRectangle> new_object(jint x, jint y, jint width, jint height, jint meteringWeight);
	static ref<MeteringRectangle> new_object(ref<android::graphics::Point> xy, ref<android::util::Size> dimensions, jint meteringWeight);
	static ref<MeteringRectangle> new_object(ref<android::graphics::Rect> rect, jint meteringWeight);
	jint getX();
	jint getY();
	jint getWidth();
	jint getHeight();
	jint getMeteringWeight();
	ref<android::graphics::Point> getUpperLeftPoint();
	ref<android::util::Size> getSize();
	ref<android::graphics::Rect> getRect();
	jboolean equals(ref<java::lang::Object> other);
	jboolean equals(ref<android::hardware::camera2::params::MeteringRectangle> other);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	MeteringRectangle(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/util/Size.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::camera2::params {

inline jint MeteringRectangle::METERING_WEIGHT_DONT_CARE_() { return get_static_field<SCAPIX_META_STRING("METERING_WEIGHT_DONT_CARE"), jint>(); }
inline jint MeteringRectangle::METERING_WEIGHT_MAX_() { return get_static_field<SCAPIX_META_STRING("METERING_WEIGHT_MAX"), jint>(); }
inline jint MeteringRectangle::METERING_WEIGHT_MIN_() { return get_static_field<SCAPIX_META_STRING("METERING_WEIGHT_MIN"), jint>(); }
inline ref<MeteringRectangle> MeteringRectangle::new_object(jint x, jint y, jint width, jint height, jint meteringWeight) { return base_::new_object(x, y, width, height, meteringWeight); }
inline ref<MeteringRectangle> MeteringRectangle::new_object(ref<android::graphics::Point> xy, ref<android::util::Size> dimensions, jint meteringWeight) { return base_::new_object(xy, dimensions, meteringWeight); }
inline ref<MeteringRectangle> MeteringRectangle::new_object(ref<android::graphics::Rect> rect, jint meteringWeight) { return base_::new_object(rect, meteringWeight); }
inline jint MeteringRectangle::getX() { return call_method<SCAPIX_META_STRING("getX"), jint>(); }
inline jint MeteringRectangle::getY() { return call_method<SCAPIX_META_STRING("getY"), jint>(); }
inline jint MeteringRectangle::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jint>(); }
inline jint MeteringRectangle::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jint>(); }
inline jint MeteringRectangle::getMeteringWeight() { return call_method<SCAPIX_META_STRING("getMeteringWeight"), jint>(); }
inline ref<android::graphics::Point> MeteringRectangle::getUpperLeftPoint() { return call_method<SCAPIX_META_STRING("getUpperLeftPoint"), ref<android::graphics::Point>>(); }
inline ref<android::util::Size> MeteringRectangle::getSize() { return call_method<SCAPIX_META_STRING("getSize"), ref<android::util::Size>>(); }
inline ref<android::graphics::Rect> MeteringRectangle::getRect() { return call_method<SCAPIX_META_STRING("getRect"), ref<android::graphics::Rect>>(); }
inline jboolean MeteringRectangle::equals(ref<java::lang::Object> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline jboolean MeteringRectangle::equals(ref<android::hardware::camera2::params::MeteringRectangle> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline jint MeteringRectangle::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> MeteringRectangle::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE_H
