// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_ALERTDIALOG_BUILDER_H
#define SCAPIX_ANDROID_APP_ALERTDIALOG_BUILDER_H

namespace scapix::java_api {

namespace android::app { class AlertDialog; }
namespace android::content { class Context; }
namespace android::content { class DialogInterface_OnCancelListener; }
namespace android::content { class DialogInterface_OnClickListener; }
namespace android::content { class DialogInterface_OnDismissListener; }
namespace android::content { class DialogInterface_OnKeyListener; }
namespace android::content { class DialogInterface_OnMultiChoiceClickListener; }
namespace android::database { class Cursor; }
namespace android::graphics::drawable { class Drawable; }
namespace android::view { class View; }
namespace android::widget { class AdapterView_OnItemSelectedListener; }
namespace android::widget { class ListAdapter; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::app {

class AlertDialog_Builder : public object_base<SCAPIX_META_STRING("android/app/AlertDialog$Builder"),
	java::lang::Object>
{
public:

	static ref<AlertDialog_Builder> new_object(ref<android::content::Context> context);
	static ref<AlertDialog_Builder> new_object(ref<android::content::Context> context, jint themeResId);
	ref<android::content::Context> getContext();
	ref<android::app::AlertDialog_Builder> setTitle(jint titleId);
	ref<android::app::AlertDialog_Builder> setTitle(ref<java::lang::CharSequence> title);
	ref<android::app::AlertDialog_Builder> setCustomTitle(ref<android::view::View> customTitleView);
	ref<android::app::AlertDialog_Builder> setMessage(jint messageId);
	ref<android::app::AlertDialog_Builder> setMessage(ref<java::lang::CharSequence> message);
	ref<android::app::AlertDialog_Builder> setIcon(jint iconId);
	ref<android::app::AlertDialog_Builder> setIcon(ref<android::graphics::drawable::Drawable> icon);
	ref<android::app::AlertDialog_Builder> setIconAttribute(jint attrId);
	ref<android::app::AlertDialog_Builder> setPositiveButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setPositiveButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setNegativeButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setNegativeButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setNeutralButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setNeutralButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setCancelable(jboolean cancelable);
	ref<android::app::AlertDialog_Builder> setOnCancelListener(ref<android::content::DialogInterface_OnCancelListener> onCancelListener);
	ref<android::app::AlertDialog_Builder> setOnDismissListener(ref<android::content::DialogInterface_OnDismissListener> onDismissListener);
	ref<android::app::AlertDialog_Builder> setOnKeyListener(ref<android::content::DialogInterface_OnKeyListener> onKeyListener);
	ref<android::app::AlertDialog_Builder> setItems(jint itemsId, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setItems(ref<link::java::array<java::lang::CharSequence>> items, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setAdapter(ref<android::widget::ListAdapter> adapter, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setCursor(ref<android::database::Cursor> cursor, ref<android::content::DialogInterface_OnClickListener> listener, ref<java::lang::String> labelColumn);
	ref<android::app::AlertDialog_Builder> setMultiChoiceItems(jint itemsId, ref<link::java::array<jboolean>> checkedItems, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener);
	ref<android::app::AlertDialog_Builder> setMultiChoiceItems(ref<link::java::array<java::lang::CharSequence>> items, ref<link::java::array<jboolean>> checkedItems, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener);
	ref<android::app::AlertDialog_Builder> setMultiChoiceItems(ref<android::database::Cursor> cursor, ref<java::lang::String> isCheckedColumn, ref<java::lang::String> labelColumn, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener);
	ref<android::app::AlertDialog_Builder> setSingleChoiceItems(jint itemsId, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setSingleChoiceItems(ref<android::database::Cursor> cursor, jint checkedItem, ref<java::lang::String> labelColumn, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setSingleChoiceItems(ref<link::java::array<java::lang::CharSequence>> items, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setSingleChoiceItems(ref<android::widget::ListAdapter> adapter, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::app::AlertDialog_Builder> setOnItemSelectedListener(ref<android::widget::AdapterView_OnItemSelectedListener> listener);
	ref<android::app::AlertDialog_Builder> setView(jint layoutResId);
	ref<android::app::AlertDialog_Builder> setView(ref<android::view::View> view);
	ref<android::app::AlertDialog_Builder> setInverseBackgroundForced(jboolean useInverseBackground);
	ref<android::app::AlertDialog> create();
	ref<android::app::AlertDialog> show();

protected:

	AlertDialog_Builder(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/AlertDialog.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/DialogInterface_OnCancelListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnClickListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnDismissListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnKeyListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnMultiChoiceClickListener.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/AdapterView_OnItemSelectedListener.h>
#include <scapix/java_api/android/widget/ListAdapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<AlertDialog_Builder> AlertDialog_Builder::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<AlertDialog_Builder> AlertDialog_Builder::new_object(ref<android::content::Context> context, jint themeResId) { return base_::new_object(context, themeResId); }
inline ref<android::content::Context> AlertDialog_Builder::getContext() { return call_method<SCAPIX_META_STRING("getContext"), ref<android::content::Context>>(); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setTitle(jint titleId) { return call_method<SCAPIX_META_STRING("setTitle"), ref<android::app::AlertDialog_Builder>>(titleId); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setTitle"), ref<android::app::AlertDialog_Builder>>(title); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setCustomTitle(ref<android::view::View> customTitleView) { return call_method<SCAPIX_META_STRING("setCustomTitle"), ref<android::app::AlertDialog_Builder>>(customTitleView); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setMessage(jint messageId) { return call_method<SCAPIX_META_STRING("setMessage"), ref<android::app::AlertDialog_Builder>>(messageId); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setMessage(ref<java::lang::CharSequence> message) { return call_method<SCAPIX_META_STRING("setMessage"), ref<android::app::AlertDialog_Builder>>(message); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setIcon(jint iconId) { return call_method<SCAPIX_META_STRING("setIcon"), ref<android::app::AlertDialog_Builder>>(iconId); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setIcon(ref<android::graphics::drawable::Drawable> icon) { return call_method<SCAPIX_META_STRING("setIcon"), ref<android::app::AlertDialog_Builder>>(icon); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setIconAttribute(jint attrId) { return call_method<SCAPIX_META_STRING("setIconAttribute"), ref<android::app::AlertDialog_Builder>>(attrId); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setPositiveButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setPositiveButton"), ref<android::app::AlertDialog_Builder>>(textId, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setPositiveButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setPositiveButton"), ref<android::app::AlertDialog_Builder>>(text, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setNegativeButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setNegativeButton"), ref<android::app::AlertDialog_Builder>>(textId, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setNegativeButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setNegativeButton"), ref<android::app::AlertDialog_Builder>>(text, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setNeutralButton(jint textId, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setNeutralButton"), ref<android::app::AlertDialog_Builder>>(textId, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setNeutralButton(ref<java::lang::CharSequence> text, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setNeutralButton"), ref<android::app::AlertDialog_Builder>>(text, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setCancelable(jboolean cancelable) { return call_method<SCAPIX_META_STRING("setCancelable"), ref<android::app::AlertDialog_Builder>>(cancelable); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setOnCancelListener(ref<android::content::DialogInterface_OnCancelListener> onCancelListener) { return call_method<SCAPIX_META_STRING("setOnCancelListener"), ref<android::app::AlertDialog_Builder>>(onCancelListener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setOnDismissListener(ref<android::content::DialogInterface_OnDismissListener> onDismissListener) { return call_method<SCAPIX_META_STRING("setOnDismissListener"), ref<android::app::AlertDialog_Builder>>(onDismissListener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setOnKeyListener(ref<android::content::DialogInterface_OnKeyListener> onKeyListener) { return call_method<SCAPIX_META_STRING("setOnKeyListener"), ref<android::app::AlertDialog_Builder>>(onKeyListener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setItems(jint itemsId, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setItems"), ref<android::app::AlertDialog_Builder>>(itemsId, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setItems(ref<link::java::array<java::lang::CharSequence>> items, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setItems"), ref<android::app::AlertDialog_Builder>>(items, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setAdapter(ref<android::widget::ListAdapter> adapter, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setAdapter"), ref<android::app::AlertDialog_Builder>>(adapter, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setCursor(ref<android::database::Cursor> cursor, ref<android::content::DialogInterface_OnClickListener> listener, ref<java::lang::String> labelColumn) { return call_method<SCAPIX_META_STRING("setCursor"), ref<android::app::AlertDialog_Builder>>(cursor, listener, labelColumn); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setMultiChoiceItems(jint itemsId, ref<link::java::array<jboolean>> checkedItems, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener) { return call_method<SCAPIX_META_STRING("setMultiChoiceItems"), ref<android::app::AlertDialog_Builder>>(itemsId, checkedItems, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setMultiChoiceItems(ref<link::java::array<java::lang::CharSequence>> items, ref<link::java::array<jboolean>> checkedItems, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener) { return call_method<SCAPIX_META_STRING("setMultiChoiceItems"), ref<android::app::AlertDialog_Builder>>(items, checkedItems, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setMultiChoiceItems(ref<android::database::Cursor> cursor, ref<java::lang::String> isCheckedColumn, ref<java::lang::String> labelColumn, ref<android::content::DialogInterface_OnMultiChoiceClickListener> listener) { return call_method<SCAPIX_META_STRING("setMultiChoiceItems"), ref<android::app::AlertDialog_Builder>>(cursor, isCheckedColumn, labelColumn, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setSingleChoiceItems(jint itemsId, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setSingleChoiceItems"), ref<android::app::AlertDialog_Builder>>(itemsId, checkedItem, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setSingleChoiceItems(ref<android::database::Cursor> cursor, jint checkedItem, ref<java::lang::String> labelColumn, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setSingleChoiceItems"), ref<android::app::AlertDialog_Builder>>(cursor, checkedItem, labelColumn, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setSingleChoiceItems(ref<link::java::array<java::lang::CharSequence>> items, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setSingleChoiceItems"), ref<android::app::AlertDialog_Builder>>(items, checkedItem, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setSingleChoiceItems(ref<android::widget::ListAdapter> adapter, jint checkedItem, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setSingleChoiceItems"), ref<android::app::AlertDialog_Builder>>(adapter, checkedItem, listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setOnItemSelectedListener(ref<android::widget::AdapterView_OnItemSelectedListener> listener) { return call_method<SCAPIX_META_STRING("setOnItemSelectedListener"), ref<android::app::AlertDialog_Builder>>(listener); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setView(jint layoutResId) { return call_method<SCAPIX_META_STRING("setView"), ref<android::app::AlertDialog_Builder>>(layoutResId); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setView(ref<android::view::View> view) { return call_method<SCAPIX_META_STRING("setView"), ref<android::app::AlertDialog_Builder>>(view); }
inline ref<android::app::AlertDialog_Builder> AlertDialog_Builder::setInverseBackgroundForced(jboolean useInverseBackground) { return call_method<SCAPIX_META_STRING("setInverseBackgroundForced"), ref<android::app::AlertDialog_Builder>>(useInverseBackground); }
inline ref<android::app::AlertDialog> AlertDialog_Builder::create() { return call_method<SCAPIX_META_STRING("create"), ref<android::app::AlertDialog>>(); }
inline ref<android::app::AlertDialog> AlertDialog_Builder::show() { return call_method<SCAPIX_META_STRING("show"), ref<android::app::AlertDialog>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ALERTDIALOG_BUILDER_H
