// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PRINT_PRINTERINFO_BUILDER_H
#define SCAPIX_ANDROID_PRINT_PRINTERINFO_BUILDER_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::print { class PrinterCapabilitiesInfo; }
namespace android::print { class PrinterId; }
namespace android::print { class PrinterInfo; }
namespace java::lang { class String; }

namespace android::print {

class PrinterInfo_Builder : public object_base<SCAPIX_META_STRING("android/print/PrinterInfo$Builder"),
	java::lang::Object>
{
public:

	static ref<PrinterInfo_Builder> new_object(ref<android::print::PrinterId> printerId, ref<java::lang::String> name, jint status);
	static ref<PrinterInfo_Builder> new_object(ref<android::print::PrinterInfo> other);
	ref<android::print::PrinterInfo_Builder> setStatus(jint status);
	ref<android::print::PrinterInfo_Builder> setIconResourceId(jint iconResourceId);
	ref<android::print::PrinterInfo_Builder> setHasCustomPrinterIcon(jboolean hasCustomPrinterIcon);
	ref<android::print::PrinterInfo_Builder> setName(ref<java::lang::String> name);
	ref<android::print::PrinterInfo_Builder> setDescription(ref<java::lang::String> description);
	ref<android::print::PrinterInfo_Builder> setInfoIntent(ref<android::app::PendingIntent> infoIntent);
	ref<android::print::PrinterInfo_Builder> setCapabilities(ref<android::print::PrinterCapabilitiesInfo> capabilities);
	ref<android::print::PrinterInfo> build();

protected:

	PrinterInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace android::print
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/print/PrinterCapabilitiesInfo.h>
#include <scapix/java_api/android/print/PrinterId.h>
#include <scapix/java_api/android/print/PrinterInfo.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::print {

inline ref<PrinterInfo_Builder> PrinterInfo_Builder::new_object(ref<android::print::PrinterId> printerId, ref<java::lang::String> name, jint status) { return base_::new_object(printerId, name, status); }
inline ref<PrinterInfo_Builder> PrinterInfo_Builder::new_object(ref<android::print::PrinterInfo> other) { return base_::new_object(other); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setStatus(jint status) { return call_method<SCAPIX_META_STRING("setStatus"), ref<android::print::PrinterInfo_Builder>>(status); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setIconResourceId(jint iconResourceId) { return call_method<SCAPIX_META_STRING("setIconResourceId"), ref<android::print::PrinterInfo_Builder>>(iconResourceId); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setHasCustomPrinterIcon(jboolean hasCustomPrinterIcon) { return call_method<SCAPIX_META_STRING("setHasCustomPrinterIcon"), ref<android::print::PrinterInfo_Builder>>(hasCustomPrinterIcon); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setName(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("setName"), ref<android::print::PrinterInfo_Builder>>(name); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setDescription(ref<java::lang::String> description) { return call_method<SCAPIX_META_STRING("setDescription"), ref<android::print::PrinterInfo_Builder>>(description); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setInfoIntent(ref<android::app::PendingIntent> infoIntent) { return call_method<SCAPIX_META_STRING("setInfoIntent"), ref<android::print::PrinterInfo_Builder>>(infoIntent); }
inline ref<android::print::PrinterInfo_Builder> PrinterInfo_Builder::setCapabilities(ref<android::print::PrinterCapabilitiesInfo> capabilities) { return call_method<SCAPIX_META_STRING("setCapabilities"), ref<android::print::PrinterInfo_Builder>>(capabilities); }
inline ref<android::print::PrinterInfo> PrinterInfo_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::print::PrinterInfo>>(); }

} // namespace android::print
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PRINT_PRINTERINFO_BUILDER_H
