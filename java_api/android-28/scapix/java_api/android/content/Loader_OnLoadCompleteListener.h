// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_LOADER_ONLOADCOMPLETELISTENER_H
#define SCAPIX_ANDROID_CONTENT_LOADER_ONLOADCOMPLETELISTENER_H

namespace scapix::java_api {

namespace android::content { class Loader; }

namespace android::content {

class Loader_OnLoadCompleteListener : public object_base<SCAPIX_META_STRING("android/content/Loader$OnLoadCompleteListener"),
	java::lang::Object>
{
public:

	void onLoadComplete(ref<android::content::Loader> p1, ref<java::lang::Object> p2);

protected:

	Loader_OnLoadCompleteListener(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Loader.h>

namespace scapix::java_api {
namespace android::content {

inline void Loader_OnLoadCompleteListener::onLoadComplete(ref<android::content::Loader> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("onLoadComplete"), void>(p1, p2); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_LOADER_ONLOADCOMPLETELISTENER_H
