// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_POPUPWINDOW_ONDISMISSLISTENER_H
#define SCAPIX_ANDROID_WIDGET_POPUPWINDOW_ONDISMISSLISTENER_H

namespace scapix::java_api {


namespace android::widget {

class PopupWindow_OnDismissListener : public object_base<SCAPIX_META_STRING("android/widget/PopupWindow$OnDismissListener"),
	java::lang::Object>
{
public:

	void onDismiss();

protected:

	PopupWindow_OnDismissListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::widget {

inline void PopupWindow_OnDismissListener::onDismiss() { return call_method<SCAPIX_META_STRING("onDismiss"), void>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_POPUPWINDOW_ONDISMISSLISTENER_H
