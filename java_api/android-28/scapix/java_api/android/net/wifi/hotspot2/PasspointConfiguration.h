// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_H
#define SCAPIX_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_H

namespace scapix::java_api {

namespace android::net::wifi::hotspot2::pps { class Credential; }
namespace android::net::wifi::hotspot2::pps { class HomeSp; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::net::wifi::hotspot2 {

class PasspointConfiguration : public object_base<SCAPIX_META_STRING("android/net/wifi/hotspot2/PasspointConfiguration"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<PasspointConfiguration> new_object();
	static ref<PasspointConfiguration> new_object(ref<android::net::wifi::hotspot2::PasspointConfiguration> source);
	void setHomeSp(ref<android::net::wifi::hotspot2::pps::HomeSp> homeSp);
	ref<android::net::wifi::hotspot2::pps::HomeSp> getHomeSp();
	void setCredential(ref<android::net::wifi::hotspot2::pps::Credential> credential);
	ref<android::net::wifi::hotspot2::pps::Credential> getCredential();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jboolean equals(ref<java::lang::Object> thatObject);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	PasspointConfiguration(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::hotspot2
} // namespace scapix::java_api

#include <scapix/java_api/android/net/wifi/hotspot2/pps/Credential.h>
#include <scapix/java_api/android/net/wifi/hotspot2/pps/HomeSp.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi::hotspot2 {

inline ref<android::os::Parcelable_Creator> PasspointConfiguration::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<PasspointConfiguration> PasspointConfiguration::new_object() { return base_::new_object(); }
inline ref<PasspointConfiguration> PasspointConfiguration::new_object(ref<android::net::wifi::hotspot2::PasspointConfiguration> source) { return base_::new_object(source); }
inline void PasspointConfiguration::setHomeSp(ref<android::net::wifi::hotspot2::pps::HomeSp> homeSp) { return call_method<SCAPIX_META_STRING("setHomeSp"), void>(homeSp); }
inline ref<android::net::wifi::hotspot2::pps::HomeSp> PasspointConfiguration::getHomeSp() { return call_method<SCAPIX_META_STRING("getHomeSp"), ref<android::net::wifi::hotspot2::pps::HomeSp>>(); }
inline void PasspointConfiguration::setCredential(ref<android::net::wifi::hotspot2::pps::Credential> credential) { return call_method<SCAPIX_META_STRING("setCredential"), void>(credential); }
inline ref<android::net::wifi::hotspot2::pps::Credential> PasspointConfiguration::getCredential() { return call_method<SCAPIX_META_STRING("getCredential"), ref<android::net::wifi::hotspot2::pps::Credential>>(); }
inline jint PasspointConfiguration::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void PasspointConfiguration::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jboolean PasspointConfiguration::equals(ref<java::lang::Object> thatObject) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(thatObject); }
inline jint PasspointConfiguration::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> PasspointConfiguration::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::net::wifi::hotspot2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_H
