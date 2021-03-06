// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::hardware::camera2 {

class CameraManager_TorchCallback : public object_base<SCAPIX_META_STRING("android/hardware/camera2/CameraManager$TorchCallback"),
	java::lang::Object>
{
public:

	static ref<CameraManager_TorchCallback> new_object();
	void onTorchModeUnavailable(ref<java::lang::String> cameraId);
	void onTorchModeChanged(ref<java::lang::String> cameraId, jboolean enabled);

protected:

	CameraManager_TorchCallback(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::camera2 {

inline ref<CameraManager_TorchCallback> CameraManager_TorchCallback::new_object() { return base_::new_object(); }
inline void CameraManager_TorchCallback::onTorchModeUnavailable(ref<java::lang::String> cameraId) { return call_method<SCAPIX_META_STRING("onTorchModeUnavailable"), void>(cameraId); }
inline void CameraManager_TorchCallback::onTorchModeChanged(ref<java::lang::String> cameraId, jboolean enabled) { return call_method<SCAPIX_META_STRING("onTorchModeChanged"), void>(cameraId, enabled); }

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_H
