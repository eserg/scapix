// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_H

namespace scapix::java_api {

namespace android::service::autofill { class BatchUpdates; }
namespace android::service::autofill { class CustomDescription; }
namespace android::service::autofill { class Transformation; }
namespace android::service::autofill { class Validator; }
namespace android::widget { class RemoteViews; }

namespace android::service::autofill {

class CustomDescription_Builder : public object_base<SCAPIX_META_STRING("android/service/autofill/CustomDescription$Builder"),
	java::lang::Object>
{
public:

	static ref<CustomDescription_Builder> new_object(ref<android::widget::RemoteViews> parentPresentation);
	ref<android::service::autofill::CustomDescription_Builder> addChild(jint id, ref<android::service::autofill::Transformation> transformation);
	ref<android::service::autofill::CustomDescription_Builder> batchUpdate(ref<android::service::autofill::Validator> condition, ref<android::service::autofill::BatchUpdates> updates);
	ref<android::service::autofill::CustomDescription> build();

protected:

	CustomDescription_Builder(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/service/autofill/BatchUpdates.h>
#include <scapix/java_api/android/service/autofill/CustomDescription.h>
#include <scapix/java_api/android/service/autofill/Transformation.h>
#include <scapix/java_api/android/service/autofill/Validator.h>
#include <scapix/java_api/android/widget/RemoteViews.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<CustomDescription_Builder> CustomDescription_Builder::new_object(ref<android::widget::RemoteViews> parentPresentation) { return base_::new_object(parentPresentation); }
inline ref<android::service::autofill::CustomDescription_Builder> CustomDescription_Builder::addChild(jint id, ref<android::service::autofill::Transformation> transformation) { return call_method<SCAPIX_META_STRING("addChild"), ref<android::service::autofill::CustomDescription_Builder>>(id, transformation); }
inline ref<android::service::autofill::CustomDescription_Builder> CustomDescription_Builder::batchUpdate(ref<android::service::autofill::Validator> condition, ref<android::service::autofill::BatchUpdates> updates) { return call_method<SCAPIX_META_STRING("batchUpdate"), ref<android::service::autofill::CustomDescription_Builder>>(condition, updates); }
inline ref<android::service::autofill::CustomDescription> CustomDescription_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::service::autofill::CustomDescription>>(); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_H
