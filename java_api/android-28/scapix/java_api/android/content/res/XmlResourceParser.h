// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_H
#define SCAPIX_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::content::res {

class XmlResourceParser : public object_base<SCAPIX_META_STRING("android/content/res/XmlResourceParser"),
	java::lang::Object,
	org::xmlpull::v1::XmlPullParser,
	android::util::AttributeSet,
	java::lang::AutoCloseable>
{
public:

	ref<java::lang::String> getAttributeNamespace(jint p1);
	void close();

protected:

	XmlResourceParser(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::res {

inline ref<java::lang::String> XmlResourceParser::getAttributeNamespace(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeNamespace"), ref<java::lang::String>>(p1); }
inline void XmlResourceParser::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_H
