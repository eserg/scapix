// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION_H
#define SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class Exception; }
namespace java::lang { class String; }

namespace android::widget {

class RemoteViews_ActionException : public object_base<SCAPIX_META_STRING("android/widget/RemoteViews$ActionException"),
	java::lang::RuntimeException>
{
public:

	static ref<RemoteViews_ActionException> new_object(ref<java::lang::Exception> ex);
	static ref<RemoteViews_ActionException> new_object(ref<java::lang::String> message);

protected:

	RemoteViews_ActionException(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<RemoteViews_ActionException> RemoteViews_ActionException::new_object(ref<java::lang::Exception> ex) { return base_::new_object(ex); }
inline ref<RemoteViews_ActionException> RemoteViews_ActionException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION_H
