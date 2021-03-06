// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/SyncStateContract_Columns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS_H
#define SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class SyncStateContract_Constants : public object_base<SCAPIX_META_STRING("android/provider/SyncStateContract$Constants"),
	java::lang::Object,
	android::provider::SyncStateContract_Columns>
{
public:

	static ref<java::lang::String> CONTENT_DIRECTORY_();

	static ref<SyncStateContract_Constants> new_object();

protected:

	SyncStateContract_Constants(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> SyncStateContract_Constants::CONTENT_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("CONTENT_DIRECTORY"), ref<java::lang::String>>(); }
inline ref<SyncStateContract_Constants> SyncStateContract_Constants::new_object() { return base_::new_object(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS_H
