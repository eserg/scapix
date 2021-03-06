// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTNAMECOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTNAMECOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_ContactNameColumns : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$ContactNameColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> DISPLAY_NAME_ALTERNATIVE_();
	static ref<java::lang::String> DISPLAY_NAME_PRIMARY_();
	static ref<java::lang::String> DISPLAY_NAME_SOURCE_();
	static ref<java::lang::String> PHONETIC_NAME_();
	static ref<java::lang::String> PHONETIC_NAME_STYLE_();
	static ref<java::lang::String> SORT_KEY_ALTERNATIVE_();
	static ref<java::lang::String> SORT_KEY_PRIMARY_();


protected:

	ContactsContract_ContactNameColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_ContactNameColumns::DISPLAY_NAME_ALTERNATIVE_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_NAME_ALTERNATIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::DISPLAY_NAME_PRIMARY_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_NAME_PRIMARY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::DISPLAY_NAME_SOURCE_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_NAME_SOURCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::PHONETIC_NAME_() { return get_static_field<SCAPIX_META_STRING("PHONETIC_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::PHONETIC_NAME_STYLE_() { return get_static_field<SCAPIX_META_STRING("PHONETIC_NAME_STYLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::SORT_KEY_ALTERNATIVE_() { return get_static_field<SCAPIX_META_STRING("SORT_KEY_ALTERNATIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactNameColumns::SORT_KEY_PRIMARY_() { return get_static_field<SCAPIX_META_STRING("SORT_KEY_PRIMARY"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTNAMECOLUMNS_H
