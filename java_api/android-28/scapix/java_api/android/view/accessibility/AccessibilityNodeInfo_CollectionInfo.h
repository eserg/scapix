// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO_H
#define SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO_H

namespace scapix::java_api {


namespace android::view::accessibility {

class AccessibilityNodeInfo_CollectionInfo : public object_base<SCAPIX_META_STRING("android/view/accessibility/AccessibilityNodeInfo$CollectionInfo"),
	java::lang::Object>
{
public:

	static jint SELECTION_MODE_MULTIPLE_();
	static jint SELECTION_MODE_NONE_();
	static jint SELECTION_MODE_SINGLE_();

	static ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> obtain(jint rowCount, jint columnCount, jboolean hierarchical);
	static ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> obtain(jint rowCount, jint columnCount, jboolean hierarchical, jint selectionMode);
	jint getRowCount();
	jint getColumnCount();
	jboolean isHierarchical();
	jint getSelectionMode();

protected:

	AccessibilityNodeInfo_CollectionInfo(handle_type h) : base_(h) {}

};

} // namespace android::view::accessibility
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view::accessibility {

inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_MULTIPLE_() { return get_static_field<SCAPIX_META_STRING("SELECTION_MODE_MULTIPLE"), jint>(); }
inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_NONE_() { return get_static_field<SCAPIX_META_STRING("SELECTION_MODE_NONE"), jint>(); }
inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_SINGLE_() { return get_static_field<SCAPIX_META_STRING("SELECTION_MODE_SINGLE"), jint>(); }
inline ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> AccessibilityNodeInfo_CollectionInfo::obtain(jint rowCount, jint columnCount, jboolean hierarchical) { return call_static_method<SCAPIX_META_STRING("obtain"), ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo>>(rowCount, columnCount, hierarchical); }
inline ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> AccessibilityNodeInfo_CollectionInfo::obtain(jint rowCount, jint columnCount, jboolean hierarchical, jint selectionMode) { return call_static_method<SCAPIX_META_STRING("obtain"), ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo>>(rowCount, columnCount, hierarchical, selectionMode); }
inline jint AccessibilityNodeInfo_CollectionInfo::getRowCount() { return call_method<SCAPIX_META_STRING("getRowCount"), jint>(); }
inline jint AccessibilityNodeInfo_CollectionInfo::getColumnCount() { return call_method<SCAPIX_META_STRING("getColumnCount"), jint>(); }
inline jboolean AccessibilityNodeInfo_CollectionInfo::isHierarchical() { return call_method<SCAPIX_META_STRING("isHierarchical"), jboolean>(); }
inline jint AccessibilityNodeInfo_CollectionInfo::getSelectionMode() { return call_method<SCAPIX_META_STRING("getSelectionMode"), jint>(); }

} // namespace android::view::accessibility
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_COLLECTIONINFO_H
