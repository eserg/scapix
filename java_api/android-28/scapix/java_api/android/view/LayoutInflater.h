// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_H
#define SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class LayoutInflater_Factory; }
namespace android::view { class LayoutInflater_Factory2; }
namespace android::view { class LayoutInflater_Filter; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace java::lang { class String; }
namespace org::xmlpull::v1 { class XmlPullParser; }

namespace android::view {

class LayoutInflater : public object_base<SCAPIX_META_STRING("android/view/LayoutInflater"),
	java::lang::Object>
{
public:

	using Filter = LayoutInflater_Filter;
	using Factory2 = LayoutInflater_Factory2;
	using Factory = LayoutInflater_Factory;

	static ref<android::view::LayoutInflater> from(ref<android::content::Context> context);
	ref<android::view::LayoutInflater> cloneInContext(ref<android::content::Context> p1);
	ref<android::content::Context> getContext();
	ref<android::view::LayoutInflater_Factory> getFactory();
	ref<android::view::LayoutInflater_Factory2> getFactory2();
	void setFactory(ref<android::view::LayoutInflater_Factory> factory);
	void setFactory2(ref<android::view::LayoutInflater_Factory2> factory);
	ref<android::view::LayoutInflater_Filter> getFilter();
	void setFilter(ref<android::view::LayoutInflater_Filter> filter);
	ref<android::view::View> inflate(jint resource, ref<android::view::ViewGroup> root);
	ref<android::view::View> inflate(ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::view::ViewGroup> root);
	ref<android::view::View> inflate(jint resource, ref<android::view::ViewGroup> root, jboolean attachToRoot);
	ref<android::view::View> inflate(ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::view::ViewGroup> root, jboolean attachToRoot);
	ref<android::view::View> createView(ref<java::lang::String> name, ref<java::lang::String> prefix, ref<android::util::AttributeSet> attrs);

protected:

	LayoutInflater(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/LayoutInflater_Factory.h>
#include <scapix/java_api/android/view/LayoutInflater_Factory2.h>
#include <scapix/java_api/android/view/LayoutInflater_Filter.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>

namespace scapix::java_api {
namespace android::view {

inline ref<android::view::LayoutInflater> LayoutInflater::from(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("from"), ref<android::view::LayoutInflater>>(context); }
inline ref<android::view::LayoutInflater> LayoutInflater::cloneInContext(ref<android::content::Context> p1) { return call_method<SCAPIX_META_STRING("cloneInContext"), ref<android::view::LayoutInflater>>(p1); }
inline ref<android::content::Context> LayoutInflater::getContext() { return call_method<SCAPIX_META_STRING("getContext"), ref<android::content::Context>>(); }
inline ref<android::view::LayoutInflater_Factory> LayoutInflater::getFactory() { return call_method<SCAPIX_META_STRING("getFactory"), ref<android::view::LayoutInflater_Factory>>(); }
inline ref<android::view::LayoutInflater_Factory2> LayoutInflater::getFactory2() { return call_method<SCAPIX_META_STRING("getFactory2"), ref<android::view::LayoutInflater_Factory2>>(); }
inline void LayoutInflater::setFactory(ref<android::view::LayoutInflater_Factory> factory) { return call_method<SCAPIX_META_STRING("setFactory"), void>(factory); }
inline void LayoutInflater::setFactory2(ref<android::view::LayoutInflater_Factory2> factory) { return call_method<SCAPIX_META_STRING("setFactory2"), void>(factory); }
inline ref<android::view::LayoutInflater_Filter> LayoutInflater::getFilter() { return call_method<SCAPIX_META_STRING("getFilter"), ref<android::view::LayoutInflater_Filter>>(); }
inline void LayoutInflater::setFilter(ref<android::view::LayoutInflater_Filter> filter) { return call_method<SCAPIX_META_STRING("setFilter"), void>(filter); }
inline ref<android::view::View> LayoutInflater::inflate(jint resource, ref<android::view::ViewGroup> root) { return call_method<SCAPIX_META_STRING("inflate"), ref<android::view::View>>(resource, root); }
inline ref<android::view::View> LayoutInflater::inflate(ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::view::ViewGroup> root) { return call_method<SCAPIX_META_STRING("inflate"), ref<android::view::View>>(parser, root); }
inline ref<android::view::View> LayoutInflater::inflate(jint resource, ref<android::view::ViewGroup> root, jboolean attachToRoot) { return call_method<SCAPIX_META_STRING("inflate"), ref<android::view::View>>(resource, root, attachToRoot); }
inline ref<android::view::View> LayoutInflater::inflate(ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::view::ViewGroup> root, jboolean attachToRoot) { return call_method<SCAPIX_META_STRING("inflate"), ref<android::view::View>>(parser, root, attachToRoot); }
inline ref<android::view::View> LayoutInflater::createView(ref<java::lang::String> name, ref<java::lang::String> prefix, ref<android::util::AttributeSet> attrs) { return call_method<SCAPIX_META_STRING("createView"), ref<android::view::View>>(name, prefix, attrs); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_H
