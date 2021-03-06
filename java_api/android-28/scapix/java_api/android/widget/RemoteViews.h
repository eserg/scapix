// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/view/LayoutInflater_Filter.h>

#ifndef SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_H
#define SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::graphics { class Bitmap; }
namespace android::graphics::drawable { class Icon; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace android::widget { class RemoteViews_RemoteView; }
namespace android::widget { class RemoteViews_ActionException; }

namespace android::widget {

class RemoteViews : public object_base<SCAPIX_META_STRING("android/widget/RemoteViews"),
	java::lang::Object,
	android::os::Parcelable,
	android::view::LayoutInflater_Filter>
{
public:

	using RemoteView = RemoteViews_RemoteView;
	using ActionException = RemoteViews_ActionException;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<RemoteViews> new_object(ref<java::lang::String> packageName, jint layoutId);
	static ref<RemoteViews> new_object(ref<android::widget::RemoteViews> landscape, ref<android::widget::RemoteViews> portrait);
	static ref<RemoteViews> new_object(ref<android::widget::RemoteViews> src);
	static ref<RemoteViews> new_object(ref<android::os::Parcel> parcel);
	ref<android::widget::RemoteViews> clone();
	ref<java::lang::String> getPackage();
	jint getLayoutId();
	void addView(jint viewId, ref<android::widget::RemoteViews> nestedView);
	void removeAllViews(jint viewId);
	void showNext(jint viewId);
	void showPrevious(jint viewId);
	void setDisplayedChild(jint viewId, jint childIndex);
	void setViewVisibility(jint viewId, jint visibility);
	void setTextViewText(jint viewId, ref<java::lang::CharSequence> text);
	void setTextViewTextSize(jint viewId, jint units, jfloat size);
	void setTextViewCompoundDrawables(jint viewId, jint left, jint top, jint right, jint bottom);
	void setTextViewCompoundDrawablesRelative(jint viewId, jint start, jint top, jint end, jint bottom);
	void setImageViewResource(jint viewId, jint srcId);
	void setImageViewUri(jint viewId, ref<android::net::Uri> uri);
	void setImageViewBitmap(jint viewId, ref<android::graphics::Bitmap> bitmap);
	void setImageViewIcon(jint viewId, ref<android::graphics::drawable::Icon> icon);
	void setEmptyView(jint viewId, jint emptyViewId);
	void setChronometer(jint viewId, jlong base, ref<java::lang::String> p3, jboolean format);
	void setChronometerCountDown(jint viewId, jboolean isCountDown);
	void setProgressBar(jint viewId, jint max, jint progress, jboolean indeterminate);
	void setOnClickPendingIntent(jint viewId, ref<android::app::PendingIntent> pendingIntent);
	void setPendingIntentTemplate(jint viewId, ref<android::app::PendingIntent> pendingIntentTemplate);
	void setOnClickFillInIntent(jint viewId, ref<android::content::Intent> fillInIntent);
	void setTextColor(jint viewId, jint color);
	void setRemoteAdapter(jint appWidgetId, jint viewId, ref<android::content::Intent> intent);
	void setRemoteAdapter(jint viewId, ref<android::content::Intent> intent);
	void setScrollPosition(jint viewId, jint position);
	void setRelativeScrollPosition(jint viewId, jint offset);
	void setViewPadding(jint viewId, jint left, jint top, jint right, jint bottom);
	void setBoolean(jint viewId, ref<java::lang::String> methodName, jboolean value);
	void setByte(jint viewId, ref<java::lang::String> methodName, jbyte value);
	void setShort(jint viewId, ref<java::lang::String> methodName, jshort value);
	void setInt(jint viewId, ref<java::lang::String> methodName, jint value);
	void setLong(jint viewId, ref<java::lang::String> methodName, jlong value);
	void setFloat(jint viewId, ref<java::lang::String> methodName, jfloat value);
	void setDouble(jint viewId, ref<java::lang::String> methodName, jdouble value);
	void setChar(jint viewId, ref<java::lang::String> methodName, jchar value);
	void setString(jint viewId, ref<java::lang::String> methodName, ref<java::lang::String> value);
	void setCharSequence(jint viewId, ref<java::lang::String> methodName, ref<java::lang::CharSequence> value);
	void setUri(jint viewId, ref<java::lang::String> methodName, ref<android::net::Uri> value);
	void setBitmap(jint viewId, ref<java::lang::String> methodName, ref<android::graphics::Bitmap> value);
	void setBundle(jint viewId, ref<java::lang::String> methodName, ref<android::os::Bundle> value);
	void setIntent(jint viewId, ref<java::lang::String> methodName, ref<android::content::Intent> value);
	void setIcon(jint viewId, ref<java::lang::String> methodName, ref<android::graphics::drawable::Icon> value);
	void setContentDescription(jint viewId, ref<java::lang::CharSequence> contentDescription);
	void setAccessibilityTraversalBefore(jint viewId, jint nextId);
	void setAccessibilityTraversalAfter(jint viewId, jint nextId);
	void setLabelFor(jint viewId, jint labeledId);
	ref<android::view::View> apply(ref<android::content::Context> context, ref<android::view::ViewGroup> parent);
	void reapply(ref<android::content::Context> context, ref<android::view::View> v);
	jboolean onLoadClass(ref<java::lang::Class> clazz);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	RemoteViews(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<android::os::Parcelable_Creator> RemoteViews::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<RemoteViews> RemoteViews::new_object(ref<java::lang::String> packageName, jint layoutId) { return base_::new_object(packageName, layoutId); }
inline ref<RemoteViews> RemoteViews::new_object(ref<android::widget::RemoteViews> landscape, ref<android::widget::RemoteViews> portrait) { return base_::new_object(landscape, portrait); }
inline ref<RemoteViews> RemoteViews::new_object(ref<android::widget::RemoteViews> src) { return base_::new_object(src); }
inline ref<RemoteViews> RemoteViews::new_object(ref<android::os::Parcel> parcel) { return base_::new_object(parcel); }
inline ref<android::widget::RemoteViews> RemoteViews::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::widget::RemoteViews>>(); }
inline ref<java::lang::String> RemoteViews::getPackage() { return call_method<SCAPIX_META_STRING("getPackage"), ref<java::lang::String>>(); }
inline jint RemoteViews::getLayoutId() { return call_method<SCAPIX_META_STRING("getLayoutId"), jint>(); }
inline void RemoteViews::addView(jint viewId, ref<android::widget::RemoteViews> nestedView) { return call_method<SCAPIX_META_STRING("addView"), void>(viewId, nestedView); }
inline void RemoteViews::removeAllViews(jint viewId) { return call_method<SCAPIX_META_STRING("removeAllViews"), void>(viewId); }
inline void RemoteViews::showNext(jint viewId) { return call_method<SCAPIX_META_STRING("showNext"), void>(viewId); }
inline void RemoteViews::showPrevious(jint viewId) { return call_method<SCAPIX_META_STRING("showPrevious"), void>(viewId); }
inline void RemoteViews::setDisplayedChild(jint viewId, jint childIndex) { return call_method<SCAPIX_META_STRING("setDisplayedChild"), void>(viewId, childIndex); }
inline void RemoteViews::setViewVisibility(jint viewId, jint visibility) { return call_method<SCAPIX_META_STRING("setViewVisibility"), void>(viewId, visibility); }
inline void RemoteViews::setTextViewText(jint viewId, ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("setTextViewText"), void>(viewId, text); }
inline void RemoteViews::setTextViewTextSize(jint viewId, jint units, jfloat size) { return call_method<SCAPIX_META_STRING("setTextViewTextSize"), void>(viewId, units, size); }
inline void RemoteViews::setTextViewCompoundDrawables(jint viewId, jint left, jint top, jint right, jint bottom) { return call_method<SCAPIX_META_STRING("setTextViewCompoundDrawables"), void>(viewId, left, top, right, bottom); }
inline void RemoteViews::setTextViewCompoundDrawablesRelative(jint viewId, jint start, jint top, jint end, jint bottom) { return call_method<SCAPIX_META_STRING("setTextViewCompoundDrawablesRelative"), void>(viewId, start, top, end, bottom); }
inline void RemoteViews::setImageViewResource(jint viewId, jint srcId) { return call_method<SCAPIX_META_STRING("setImageViewResource"), void>(viewId, srcId); }
inline void RemoteViews::setImageViewUri(jint viewId, ref<android::net::Uri> uri) { return call_method<SCAPIX_META_STRING("setImageViewUri"), void>(viewId, uri); }
inline void RemoteViews::setImageViewBitmap(jint viewId, ref<android::graphics::Bitmap> bitmap) { return call_method<SCAPIX_META_STRING("setImageViewBitmap"), void>(viewId, bitmap); }
inline void RemoteViews::setImageViewIcon(jint viewId, ref<android::graphics::drawable::Icon> icon) { return call_method<SCAPIX_META_STRING("setImageViewIcon"), void>(viewId, icon); }
inline void RemoteViews::setEmptyView(jint viewId, jint emptyViewId) { return call_method<SCAPIX_META_STRING("setEmptyView"), void>(viewId, emptyViewId); }
inline void RemoteViews::setChronometer(jint viewId, jlong base, ref<java::lang::String> p3, jboolean format) { return call_method<SCAPIX_META_STRING("setChronometer"), void>(viewId, base, p3, format); }
inline void RemoteViews::setChronometerCountDown(jint viewId, jboolean isCountDown) { return call_method<SCAPIX_META_STRING("setChronometerCountDown"), void>(viewId, isCountDown); }
inline void RemoteViews::setProgressBar(jint viewId, jint max, jint progress, jboolean indeterminate) { return call_method<SCAPIX_META_STRING("setProgressBar"), void>(viewId, max, progress, indeterminate); }
inline void RemoteViews::setOnClickPendingIntent(jint viewId, ref<android::app::PendingIntent> pendingIntent) { return call_method<SCAPIX_META_STRING("setOnClickPendingIntent"), void>(viewId, pendingIntent); }
inline void RemoteViews::setPendingIntentTemplate(jint viewId, ref<android::app::PendingIntent> pendingIntentTemplate) { return call_method<SCAPIX_META_STRING("setPendingIntentTemplate"), void>(viewId, pendingIntentTemplate); }
inline void RemoteViews::setOnClickFillInIntent(jint viewId, ref<android::content::Intent> fillInIntent) { return call_method<SCAPIX_META_STRING("setOnClickFillInIntent"), void>(viewId, fillInIntent); }
inline void RemoteViews::setTextColor(jint viewId, jint color) { return call_method<SCAPIX_META_STRING("setTextColor"), void>(viewId, color); }
inline void RemoteViews::setRemoteAdapter(jint appWidgetId, jint viewId, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("setRemoteAdapter"), void>(appWidgetId, viewId, intent); }
inline void RemoteViews::setRemoteAdapter(jint viewId, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("setRemoteAdapter"), void>(viewId, intent); }
inline void RemoteViews::setScrollPosition(jint viewId, jint position) { return call_method<SCAPIX_META_STRING("setScrollPosition"), void>(viewId, position); }
inline void RemoteViews::setRelativeScrollPosition(jint viewId, jint offset) { return call_method<SCAPIX_META_STRING("setRelativeScrollPosition"), void>(viewId, offset); }
inline void RemoteViews::setViewPadding(jint viewId, jint left, jint top, jint right, jint bottom) { return call_method<SCAPIX_META_STRING("setViewPadding"), void>(viewId, left, top, right, bottom); }
inline void RemoteViews::setBoolean(jint viewId, ref<java::lang::String> methodName, jboolean value) { return call_method<SCAPIX_META_STRING("setBoolean"), void>(viewId, methodName, value); }
inline void RemoteViews::setByte(jint viewId, ref<java::lang::String> methodName, jbyte value) { return call_method<SCAPIX_META_STRING("setByte"), void>(viewId, methodName, value); }
inline void RemoteViews::setShort(jint viewId, ref<java::lang::String> methodName, jshort value) { return call_method<SCAPIX_META_STRING("setShort"), void>(viewId, methodName, value); }
inline void RemoteViews::setInt(jint viewId, ref<java::lang::String> methodName, jint value) { return call_method<SCAPIX_META_STRING("setInt"), void>(viewId, methodName, value); }
inline void RemoteViews::setLong(jint viewId, ref<java::lang::String> methodName, jlong value) { return call_method<SCAPIX_META_STRING("setLong"), void>(viewId, methodName, value); }
inline void RemoteViews::setFloat(jint viewId, ref<java::lang::String> methodName, jfloat value) { return call_method<SCAPIX_META_STRING("setFloat"), void>(viewId, methodName, value); }
inline void RemoteViews::setDouble(jint viewId, ref<java::lang::String> methodName, jdouble value) { return call_method<SCAPIX_META_STRING("setDouble"), void>(viewId, methodName, value); }
inline void RemoteViews::setChar(jint viewId, ref<java::lang::String> methodName, jchar value) { return call_method<SCAPIX_META_STRING("setChar"), void>(viewId, methodName, value); }
inline void RemoteViews::setString(jint viewId, ref<java::lang::String> methodName, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setString"), void>(viewId, methodName, value); }
inline void RemoteViews::setCharSequence(jint viewId, ref<java::lang::String> methodName, ref<java::lang::CharSequence> value) { return call_method<SCAPIX_META_STRING("setCharSequence"), void>(viewId, methodName, value); }
inline void RemoteViews::setUri(jint viewId, ref<java::lang::String> methodName, ref<android::net::Uri> value) { return call_method<SCAPIX_META_STRING("setUri"), void>(viewId, methodName, value); }
inline void RemoteViews::setBitmap(jint viewId, ref<java::lang::String> methodName, ref<android::graphics::Bitmap> value) { return call_method<SCAPIX_META_STRING("setBitmap"), void>(viewId, methodName, value); }
inline void RemoteViews::setBundle(jint viewId, ref<java::lang::String> methodName, ref<android::os::Bundle> value) { return call_method<SCAPIX_META_STRING("setBundle"), void>(viewId, methodName, value); }
inline void RemoteViews::setIntent(jint viewId, ref<java::lang::String> methodName, ref<android::content::Intent> value) { return call_method<SCAPIX_META_STRING("setIntent"), void>(viewId, methodName, value); }
inline void RemoteViews::setIcon(jint viewId, ref<java::lang::String> methodName, ref<android::graphics::drawable::Icon> value) { return call_method<SCAPIX_META_STRING("setIcon"), void>(viewId, methodName, value); }
inline void RemoteViews::setContentDescription(jint viewId, ref<java::lang::CharSequence> contentDescription) { return call_method<SCAPIX_META_STRING("setContentDescription"), void>(viewId, contentDescription); }
inline void RemoteViews::setAccessibilityTraversalBefore(jint viewId, jint nextId) { return call_method<SCAPIX_META_STRING("setAccessibilityTraversalBefore"), void>(viewId, nextId); }
inline void RemoteViews::setAccessibilityTraversalAfter(jint viewId, jint nextId) { return call_method<SCAPIX_META_STRING("setAccessibilityTraversalAfter"), void>(viewId, nextId); }
inline void RemoteViews::setLabelFor(jint viewId, jint labeledId) { return call_method<SCAPIX_META_STRING("setLabelFor"), void>(viewId, labeledId); }
inline ref<android::view::View> RemoteViews::apply(ref<android::content::Context> context, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("apply"), ref<android::view::View>>(context, parent); }
inline void RemoteViews::reapply(ref<android::content::Context> context, ref<android::view::View> v) { return call_method<SCAPIX_META_STRING("reapply"), void>(context, v); }
inline jboolean RemoteViews::onLoadClass(ref<java::lang::Class> clazz) { return call_method<SCAPIX_META_STRING("onLoadClass"), jboolean>(clazz); }
inline jint RemoteViews::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void RemoteViews::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_REMOTEVIEWS_H
