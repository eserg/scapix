// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY_H
#define SCAPIX_ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::content {

class IntentFilter_AuthorityEntry : public object_base<SCAPIX_META_STRING("android/content/IntentFilter$AuthorityEntry"),
	java::lang::Object>
{
public:

	static ref<IntentFilter_AuthorityEntry> new_object(ref<java::lang::String> host, ref<java::lang::String> port);
	ref<java::lang::String> getHost();
	jint getPort();
	jboolean equals(ref<java::lang::Object> obj);
	jint match(ref<android::net::Uri> data);

protected:

	IntentFilter_AuthorityEntry(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<IntentFilter_AuthorityEntry> IntentFilter_AuthorityEntry::new_object(ref<java::lang::String> host, ref<java::lang::String> port) { return base_::new_object(host, port); }
inline ref<java::lang::String> IntentFilter_AuthorityEntry::getHost() { return call_method<SCAPIX_META_STRING("getHost"), ref<java::lang::String>>(); }
inline jint IntentFilter_AuthorityEntry::getPort() { return call_method<SCAPIX_META_STRING("getPort"), jint>(); }
inline jboolean IntentFilter_AuthorityEntry::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint IntentFilter_AuthorityEntry::match(ref<android::net::Uri> data) { return call_method<SCAPIX_META_STRING("match"), jint>(data); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_INTENTFILTER_AUTHORITYENTRY_H
