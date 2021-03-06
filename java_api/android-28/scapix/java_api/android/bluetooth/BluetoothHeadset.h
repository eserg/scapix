// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEADSET_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEADSET_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::bluetooth {

class BluetoothHeadset : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothHeadset"),
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	static ref<java::lang::String> ACTION_AUDIO_STATE_CHANGED_();
	static ref<java::lang::String> ACTION_CONNECTION_STATE_CHANGED_();
	static ref<java::lang::String> ACTION_VENDOR_SPECIFIC_HEADSET_EVENT_();
	static jint AT_CMD_TYPE_ACTION_();
	static jint AT_CMD_TYPE_BASIC_();
	static jint AT_CMD_TYPE_READ_();
	static jint AT_CMD_TYPE_SET_();
	static jint AT_CMD_TYPE_TEST_();
	static ref<java::lang::String> EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS_();
	static ref<java::lang::String> EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_();
	static ref<java::lang::String> EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE_();
	static jint STATE_AUDIO_CONNECTED_();
	static jint STATE_AUDIO_CONNECTING_();
	static jint STATE_AUDIO_DISCONNECTED_();
	static ref<java::lang::String> VENDOR_RESULT_CODE_COMMAND_ANDROID_();
	static ref<java::lang::String> VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY_();

	ref<java::util::List> getConnectedDevices();
	ref<java::util::List> getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states);
	jint getConnectionState(ref<android::bluetooth::BluetoothDevice> device);
	jboolean startVoiceRecognition(ref<android::bluetooth::BluetoothDevice> device);
	jboolean stopVoiceRecognition(ref<android::bluetooth::BluetoothDevice> device);
	jboolean isAudioConnected(ref<android::bluetooth::BluetoothDevice> device);
	jboolean sendVendorSpecificResultCode(ref<android::bluetooth::BluetoothDevice> device, ref<java::lang::String> command, ref<java::lang::String> arg);

protected:

	BluetoothHeadset(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline ref<java::lang::String> BluetoothHeadset::ACTION_AUDIO_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_AUDIO_STATE_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothHeadset::ACTION_CONNECTION_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_CONNECTION_STATE_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothHeadset::ACTION_VENDOR_SPECIFIC_HEADSET_EVENT_() { return get_static_field<SCAPIX_META_STRING("ACTION_VENDOR_SPECIFIC_HEADSET_EVENT"), ref<java::lang::String>>(); }
inline jint BluetoothHeadset::AT_CMD_TYPE_ACTION_() { return get_static_field<SCAPIX_META_STRING("AT_CMD_TYPE_ACTION"), jint>(); }
inline jint BluetoothHeadset::AT_CMD_TYPE_BASIC_() { return get_static_field<SCAPIX_META_STRING("AT_CMD_TYPE_BASIC"), jint>(); }
inline jint BluetoothHeadset::AT_CMD_TYPE_READ_() { return get_static_field<SCAPIX_META_STRING("AT_CMD_TYPE_READ"), jint>(); }
inline jint BluetoothHeadset::AT_CMD_TYPE_SET_() { return get_static_field<SCAPIX_META_STRING("AT_CMD_TYPE_SET"), jint>(); }
inline jint BluetoothHeadset::AT_CMD_TYPE_TEST_() { return get_static_field<SCAPIX_META_STRING("AT_CMD_TYPE_TEST"), jint>(); }
inline ref<java::lang::String> BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_ARGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothHeadset::EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VENDOR_SPECIFIC_HEADSET_EVENT_CMD_TYPE"), ref<java::lang::String>>(); }
inline jint BluetoothHeadset::STATE_AUDIO_CONNECTED_() { return get_static_field<SCAPIX_META_STRING("STATE_AUDIO_CONNECTED"), jint>(); }
inline jint BluetoothHeadset::STATE_AUDIO_CONNECTING_() { return get_static_field<SCAPIX_META_STRING("STATE_AUDIO_CONNECTING"), jint>(); }
inline jint BluetoothHeadset::STATE_AUDIO_DISCONNECTED_() { return get_static_field<SCAPIX_META_STRING("STATE_AUDIO_DISCONNECTED"), jint>(); }
inline ref<java::lang::String> BluetoothHeadset::VENDOR_RESULT_CODE_COMMAND_ANDROID_() { return get_static_field<SCAPIX_META_STRING("VENDOR_RESULT_CODE_COMMAND_ANDROID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothHeadset::VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY_() { return get_static_field<SCAPIX_META_STRING("VENDOR_SPECIFIC_HEADSET_EVENT_COMPANY_ID_CATEGORY"), ref<java::lang::String>>(); }
inline ref<java::util::List> BluetoothHeadset::getConnectedDevices() { return call_method<SCAPIX_META_STRING("getConnectedDevices"), ref<java::util::List>>(); }
inline ref<java::util::List> BluetoothHeadset::getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states) { return call_method<SCAPIX_META_STRING("getDevicesMatchingConnectionStates"), ref<java::util::List>>(states); }
inline jint BluetoothHeadset::getConnectionState(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("getConnectionState"), jint>(device); }
inline jboolean BluetoothHeadset::startVoiceRecognition(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("startVoiceRecognition"), jboolean>(device); }
inline jboolean BluetoothHeadset::stopVoiceRecognition(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("stopVoiceRecognition"), jboolean>(device); }
inline jboolean BluetoothHeadset::isAudioConnected(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("isAudioConnected"), jboolean>(device); }
inline jboolean BluetoothHeadset::sendVendorSpecificResultCode(ref<android::bluetooth::BluetoothDevice> device, ref<java::lang::String> command, ref<java::lang::String> arg) { return call_method<SCAPIX_META_STRING("sendVendorSpecificResultCode"), jboolean>(device, command, arg); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEADSET_H
