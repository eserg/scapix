// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_RESTRICTIONSMANAGER_H
#define SCAPIX_ANDROID_CONTENT_RESTRICTIONSMANAGER_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::os { class Bundle; }
namespace android::os { class PersistableBundle; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::content {

class RestrictionsManager : public object_base<SCAPIX_META_STRING("android/content/RestrictionsManager"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ACTION_PERMISSION_RESPONSE_RECEIVED_();
	static ref<java::lang::String> ACTION_REQUEST_LOCAL_APPROVAL_();
	static ref<java::lang::String> ACTION_REQUEST_PERMISSION_();
	static ref<java::lang::String> EXTRA_PACKAGE_NAME_();
	static ref<java::lang::String> EXTRA_REQUEST_BUNDLE_();
	static ref<java::lang::String> EXTRA_REQUEST_ID_();
	static ref<java::lang::String> EXTRA_REQUEST_TYPE_();
	static ref<java::lang::String> EXTRA_RESPONSE_BUNDLE_();
	static ref<java::lang::String> META_DATA_APP_RESTRICTIONS_();
	static ref<java::lang::String> REQUEST_KEY_APPROVE_LABEL_();
	static ref<java::lang::String> REQUEST_KEY_DATA_();
	static ref<java::lang::String> REQUEST_KEY_DENY_LABEL_();
	static ref<java::lang::String> REQUEST_KEY_ICON_();
	static ref<java::lang::String> REQUEST_KEY_ID_();
	static ref<java::lang::String> REQUEST_KEY_MESSAGE_();
	static ref<java::lang::String> REQUEST_KEY_NEW_REQUEST_();
	static ref<java::lang::String> REQUEST_KEY_TITLE_();
	static ref<java::lang::String> REQUEST_TYPE_APPROVAL_();
	static ref<java::lang::String> RESPONSE_KEY_ERROR_CODE_();
	static ref<java::lang::String> RESPONSE_KEY_MESSAGE_();
	static ref<java::lang::String> RESPONSE_KEY_RESPONSE_TIMESTAMP_();
	static ref<java::lang::String> RESPONSE_KEY_RESULT_();
	static jint RESULT_APPROVED_();
	static jint RESULT_DENIED_();
	static jint RESULT_ERROR_();
	static jint RESULT_ERROR_BAD_REQUEST_();
	static jint RESULT_ERROR_INTERNAL_();
	static jint RESULT_ERROR_NETWORK_();
	static jint RESULT_NO_RESPONSE_();
	static jint RESULT_UNKNOWN_REQUEST_();

	ref<android::os::Bundle> getApplicationRestrictions();
	jboolean hasRestrictionsProvider();
	void requestPermission(ref<java::lang::String> requestType, ref<java::lang::String> requestId, ref<android::os::PersistableBundle> request);
	ref<android::content::Intent> createLocalApprovalIntent();
	void notifyPermissionResponse(ref<java::lang::String> packageName, ref<android::os::PersistableBundle> response);
	ref<java::util::List> getManifestRestrictions(ref<java::lang::String> packageName);
	static ref<android::os::Bundle> convertRestrictionsToBundle(ref<java::util::List> entries);

protected:

	RestrictionsManager(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::content {

inline ref<java::lang::String> RestrictionsManager::ACTION_PERMISSION_RESPONSE_RECEIVED_() { return get_static_field<SCAPIX_META_STRING("ACTION_PERMISSION_RESPONSE_RECEIVED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::ACTION_REQUEST_LOCAL_APPROVAL_() { return get_static_field<SCAPIX_META_STRING("ACTION_REQUEST_LOCAL_APPROVAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::ACTION_REQUEST_PERMISSION_() { return get_static_field<SCAPIX_META_STRING("ACTION_REQUEST_PERMISSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::EXTRA_PACKAGE_NAME_() { return get_static_field<SCAPIX_META_STRING("EXTRA_PACKAGE_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::EXTRA_REQUEST_BUNDLE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_REQUEST_BUNDLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::EXTRA_REQUEST_ID_() { return get_static_field<SCAPIX_META_STRING("EXTRA_REQUEST_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::EXTRA_REQUEST_TYPE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_REQUEST_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::EXTRA_RESPONSE_BUNDLE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_RESPONSE_BUNDLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::META_DATA_APP_RESTRICTIONS_() { return get_static_field<SCAPIX_META_STRING("META_DATA_APP_RESTRICTIONS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_APPROVE_LABEL_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_APPROVE_LABEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_DATA_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_DENY_LABEL_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_DENY_LABEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_ICON_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_ICON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_ID_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_MESSAGE_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_MESSAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_NEW_REQUEST_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_NEW_REQUEST"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_KEY_TITLE_() { return get_static_field<SCAPIX_META_STRING("REQUEST_KEY_TITLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::REQUEST_TYPE_APPROVAL_() { return get_static_field<SCAPIX_META_STRING("REQUEST_TYPE_APPROVAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::RESPONSE_KEY_ERROR_CODE_() { return get_static_field<SCAPIX_META_STRING("RESPONSE_KEY_ERROR_CODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::RESPONSE_KEY_MESSAGE_() { return get_static_field<SCAPIX_META_STRING("RESPONSE_KEY_MESSAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::RESPONSE_KEY_RESPONSE_TIMESTAMP_() { return get_static_field<SCAPIX_META_STRING("RESPONSE_KEY_RESPONSE_TIMESTAMP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionsManager::RESPONSE_KEY_RESULT_() { return get_static_field<SCAPIX_META_STRING("RESPONSE_KEY_RESULT"), ref<java::lang::String>>(); }
inline jint RestrictionsManager::RESULT_APPROVED_() { return get_static_field<SCAPIX_META_STRING("RESULT_APPROVED"), jint>(); }
inline jint RestrictionsManager::RESULT_DENIED_() { return get_static_field<SCAPIX_META_STRING("RESULT_DENIED"), jint>(); }
inline jint RestrictionsManager::RESULT_ERROR_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR"), jint>(); }
inline jint RestrictionsManager::RESULT_ERROR_BAD_REQUEST_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_BAD_REQUEST"), jint>(); }
inline jint RestrictionsManager::RESULT_ERROR_INTERNAL_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_INTERNAL"), jint>(); }
inline jint RestrictionsManager::RESULT_ERROR_NETWORK_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_NETWORK"), jint>(); }
inline jint RestrictionsManager::RESULT_NO_RESPONSE_() { return get_static_field<SCAPIX_META_STRING("RESULT_NO_RESPONSE"), jint>(); }
inline jint RestrictionsManager::RESULT_UNKNOWN_REQUEST_() { return get_static_field<SCAPIX_META_STRING("RESULT_UNKNOWN_REQUEST"), jint>(); }
inline ref<android::os::Bundle> RestrictionsManager::getApplicationRestrictions() { return call_method<SCAPIX_META_STRING("getApplicationRestrictions"), ref<android::os::Bundle>>(); }
inline jboolean RestrictionsManager::hasRestrictionsProvider() { return call_method<SCAPIX_META_STRING("hasRestrictionsProvider"), jboolean>(); }
inline void RestrictionsManager::requestPermission(ref<java::lang::String> requestType, ref<java::lang::String> requestId, ref<android::os::PersistableBundle> request) { return call_method<SCAPIX_META_STRING("requestPermission"), void>(requestType, requestId, request); }
inline ref<android::content::Intent> RestrictionsManager::createLocalApprovalIntent() { return call_method<SCAPIX_META_STRING("createLocalApprovalIntent"), ref<android::content::Intent>>(); }
inline void RestrictionsManager::notifyPermissionResponse(ref<java::lang::String> packageName, ref<android::os::PersistableBundle> response) { return call_method<SCAPIX_META_STRING("notifyPermissionResponse"), void>(packageName, response); }
inline ref<java::util::List> RestrictionsManager::getManifestRestrictions(ref<java::lang::String> packageName) { return call_method<SCAPIX_META_STRING("getManifestRestrictions"), ref<java::util::List>>(packageName); }
inline ref<android::os::Bundle> RestrictionsManager::convertRestrictionsToBundle(ref<java::util::List> entries) { return call_static_method<SCAPIX_META_STRING("convertRestrictionsToBundle"), ref<android::os::Bundle>>(entries); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RESTRICTIONSMANAGER_H
