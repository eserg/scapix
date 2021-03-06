// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PDEVICE_H
#define SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PDEVICE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::net::wifi::p2p {

class WifiP2pDevice : public object_base<SCAPIX_META_STRING("android/net/wifi/p2p/WifiP2pDevice"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint AVAILABLE_();
	static jint CONNECTED_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint FAILED_();
	static jint INVITED_();
	static jint UNAVAILABLE_();
	ref<java::lang::String> deviceAddress();
	void deviceAddress(ref<java::lang::String>);
	ref<java::lang::String> deviceName();
	void deviceName(ref<java::lang::String>);
	ref<java::lang::String> primaryDeviceType();
	void primaryDeviceType(ref<java::lang::String>);
	ref<java::lang::String> secondaryDeviceType();
	void secondaryDeviceType(ref<java::lang::String>);
	jint status();
	void status(jint);

	static ref<WifiP2pDevice> new_object();
	static ref<WifiP2pDevice> new_object(ref<android::net::wifi::p2p::WifiP2pDevice> source);
	jboolean wpsPbcSupported();
	jboolean wpsKeypadSupported();
	jboolean wpsDisplaySupported();
	jboolean isServiceDiscoveryCapable();
	jboolean isGroupOwner();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	WifiP2pDevice(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi::p2p {

inline jint WifiP2pDevice::AVAILABLE_() { return get_static_field<SCAPIX_META_STRING("AVAILABLE"), jint>(); }
inline jint WifiP2pDevice::CONNECTED_() { return get_static_field<SCAPIX_META_STRING("CONNECTED"), jint>(); }
inline ref<android::os::Parcelable_Creator> WifiP2pDevice::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint WifiP2pDevice::FAILED_() { return get_static_field<SCAPIX_META_STRING("FAILED"), jint>(); }
inline jint WifiP2pDevice::INVITED_() { return get_static_field<SCAPIX_META_STRING("INVITED"), jint>(); }
inline jint WifiP2pDevice::UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("UNAVAILABLE"), jint>(); }
inline ref<java::lang::String> WifiP2pDevice::deviceAddress() { return get_field<SCAPIX_META_STRING("deviceAddress"), ref<java::lang::String>>(); }
inline void WifiP2pDevice::deviceAddress(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("deviceAddress"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> WifiP2pDevice::deviceName() { return get_field<SCAPIX_META_STRING("deviceName"), ref<java::lang::String>>(); }
inline void WifiP2pDevice::deviceName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("deviceName"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> WifiP2pDevice::primaryDeviceType() { return get_field<SCAPIX_META_STRING("primaryDeviceType"), ref<java::lang::String>>(); }
inline void WifiP2pDevice::primaryDeviceType(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("primaryDeviceType"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> WifiP2pDevice::secondaryDeviceType() { return get_field<SCAPIX_META_STRING("secondaryDeviceType"), ref<java::lang::String>>(); }
inline void WifiP2pDevice::secondaryDeviceType(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("secondaryDeviceType"), ref<java::lang::String>>(v); }
inline jint WifiP2pDevice::status() { return get_field<SCAPIX_META_STRING("status"), jint>(); }
inline void WifiP2pDevice::status(jint v) { set_field<SCAPIX_META_STRING("status"), jint>(v); }
inline ref<WifiP2pDevice> WifiP2pDevice::new_object() { return base_::new_object(); }
inline ref<WifiP2pDevice> WifiP2pDevice::new_object(ref<android::net::wifi::p2p::WifiP2pDevice> source) { return base_::new_object(source); }
inline jboolean WifiP2pDevice::wpsPbcSupported() { return call_method<SCAPIX_META_STRING("wpsPbcSupported"), jboolean>(); }
inline jboolean WifiP2pDevice::wpsKeypadSupported() { return call_method<SCAPIX_META_STRING("wpsKeypadSupported"), jboolean>(); }
inline jboolean WifiP2pDevice::wpsDisplaySupported() { return call_method<SCAPIX_META_STRING("wpsDisplaySupported"), jboolean>(); }
inline jboolean WifiP2pDevice::isServiceDiscoveryCapable() { return call_method<SCAPIX_META_STRING("isServiceDiscoveryCapable"), jboolean>(); }
inline jboolean WifiP2pDevice::isGroupOwner() { return call_method<SCAPIX_META_STRING("isGroupOwner"), jboolean>(); }
inline jboolean WifiP2pDevice::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> WifiP2pDevice::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint WifiP2pDevice::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void WifiP2pDevice::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PDEVICE_H
