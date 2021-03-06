// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_TELEPHONY_CARRIERID_H
#define SCAPIX_ANDROID_PROVIDER_TELEPHONY_CARRIERID_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class Telephony_CarrierId : public object_base<SCAPIX_META_STRING("android/provider/Telephony$CarrierId"),
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static ref<java::lang::String> CARRIER_ID_();
	static ref<java::lang::String> CARRIER_NAME_();
	static ref<android::net::Uri> CONTENT_URI_();

	static ref<android::net::Uri> getUriForSubscriptionId(jint subscriptionId);

protected:

	Telephony_CarrierId(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Telephony_CarrierId::CARRIER_ID_() { return get_static_field<SCAPIX_META_STRING("CARRIER_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_CarrierId::CARRIER_NAME_() { return get_static_field<SCAPIX_META_STRING("CARRIER_NAME"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> Telephony_CarrierId::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> Telephony_CarrierId::getUriForSubscriptionId(jint subscriptionId) { return call_static_method<SCAPIX_META_STRING("getUriForSubscriptionId"), ref<android::net::Uri>>(subscriptionId); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_TELEPHONY_CARRIERID_H
