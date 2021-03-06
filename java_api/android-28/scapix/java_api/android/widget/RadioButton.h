// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/CompoundButton.h>

#ifndef SCAPIX_ANDROID_WIDGET_RADIOBUTTON_H
#define SCAPIX_ANDROID_WIDGET_RADIOBUTTON_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class RadioButton : public object_base<SCAPIX_META_STRING("android/widget/RadioButton"),
	android::widget::CompoundButton>
{
public:

	static ref<RadioButton> new_object(ref<android::content::Context> context);
	static ref<RadioButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<RadioButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<RadioButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	void toggle();
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	RadioButton(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<RadioButton> RadioButton::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<RadioButton> RadioButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<RadioButton> RadioButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<RadioButton> RadioButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline void RadioButton::toggle() { return call_method<SCAPIX_META_STRING("toggle"), void>(); }
inline ref<java::lang::CharSequence> RadioButton::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_RADIOBUTTON_H
