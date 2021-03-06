// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_LE_SCANFILTER_H
#define SCAPIX_ANDROID_BLUETOOTH_LE_SCANFILTER_H

namespace scapix::java_api {

namespace android::bluetooth::le { class ScanResult; }
namespace android::os { class Parcel; }
namespace android::os { class ParcelUuid; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::bluetooth::le { class ScanFilter_Builder; }

namespace android::bluetooth::le {

class ScanFilter : public object_base<SCAPIX_META_STRING("android/bluetooth/le/ScanFilter"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ScanFilter_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> getDeviceName();
	ref<android::os::ParcelUuid> getServiceUuid();
	ref<android::os::ParcelUuid> getServiceUuidMask();
	ref<java::lang::String> getDeviceAddress();
	ref<link::java::array<jbyte>> getServiceData();
	ref<link::java::array<jbyte>> getServiceDataMask();
	ref<android::os::ParcelUuid> getServiceDataUuid();
	jint getManufacturerId();
	ref<link::java::array<jbyte>> getManufacturerData();
	ref<link::java::array<jbyte>> getManufacturerDataMask();
	jboolean matches(ref<android::bluetooth::le::ScanResult> scanResult);
	ref<java::lang::String> toString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);

protected:

	ScanFilter(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/le/ScanResult.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelUuid.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::bluetooth::le {

inline ref<android::os::Parcelable_Creator> ScanFilter::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint ScanFilter::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ScanFilter::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> ScanFilter::getDeviceName() { return call_method<SCAPIX_META_STRING("getDeviceName"), ref<java::lang::String>>(); }
inline ref<android::os::ParcelUuid> ScanFilter::getServiceUuid() { return call_method<SCAPIX_META_STRING("getServiceUuid"), ref<android::os::ParcelUuid>>(); }
inline ref<android::os::ParcelUuid> ScanFilter::getServiceUuidMask() { return call_method<SCAPIX_META_STRING("getServiceUuidMask"), ref<android::os::ParcelUuid>>(); }
inline ref<java::lang::String> ScanFilter::getDeviceAddress() { return call_method<SCAPIX_META_STRING("getDeviceAddress"), ref<java::lang::String>>(); }
inline ref<link::java::array<jbyte>> ScanFilter::getServiceData() { return call_method<SCAPIX_META_STRING("getServiceData"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> ScanFilter::getServiceDataMask() { return call_method<SCAPIX_META_STRING("getServiceDataMask"), ref<link::java::array<jbyte>>>(); }
inline ref<android::os::ParcelUuid> ScanFilter::getServiceDataUuid() { return call_method<SCAPIX_META_STRING("getServiceDataUuid"), ref<android::os::ParcelUuid>>(); }
inline jint ScanFilter::getManufacturerId() { return call_method<SCAPIX_META_STRING("getManufacturerId"), jint>(); }
inline ref<link::java::array<jbyte>> ScanFilter::getManufacturerData() { return call_method<SCAPIX_META_STRING("getManufacturerData"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> ScanFilter::getManufacturerDataMask() { return call_method<SCAPIX_META_STRING("getManufacturerDataMask"), ref<link::java::array<jbyte>>>(); }
inline jboolean ScanFilter::matches(ref<android::bluetooth::le::ScanResult> scanResult) { return call_method<SCAPIX_META_STRING("matches"), jboolean>(scanResult); }
inline ref<java::lang::String> ScanFilter::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ScanFilter::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean ScanFilter::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_LE_SCANFILTER_H
