// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NFC_NDEFRECORD_H
#define SCAPIX_ANDROID_NFC_NDEFRECORD_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::nfc {

class NdefRecord : public object_base<SCAPIX_META_STRING("android/nfc/NdefRecord"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static ref<link::java::array<jbyte>> RTD_ALTERNATIVE_CARRIER_();
	static ref<link::java::array<jbyte>> RTD_HANDOVER_CARRIER_();
	static ref<link::java::array<jbyte>> RTD_HANDOVER_REQUEST_();
	static ref<link::java::array<jbyte>> RTD_HANDOVER_SELECT_();
	static ref<link::java::array<jbyte>> RTD_SMART_POSTER_();
	static ref<link::java::array<jbyte>> RTD_TEXT_();
	static ref<link::java::array<jbyte>> RTD_URI_();
	static jshort TNF_ABSOLUTE_URI_();
	static jshort TNF_EMPTY_();
	static jshort TNF_EXTERNAL_TYPE_();
	static jshort TNF_MIME_MEDIA_();
	static jshort TNF_UNCHANGED_();
	static jshort TNF_UNKNOWN_();
	static jshort TNF_WELL_KNOWN_();

	static ref<NdefRecord> new_object(jshort tnf, ref<link::java::array<jbyte>> type, ref<link::java::array<jbyte>> id, ref<link::java::array<jbyte>> payload);
	static ref<NdefRecord> new_object(ref<link::java::array<jbyte>> data);
	static ref<android::nfc::NdefRecord> createApplicationRecord(ref<java::lang::String> packageName);
	static ref<android::nfc::NdefRecord> createUri(ref<android::net::Uri> uri);
	static ref<android::nfc::NdefRecord> createUri(ref<java::lang::String> uriString);
	static ref<android::nfc::NdefRecord> createMime(ref<java::lang::String> mimeType, ref<link::java::array<jbyte>> mimeData);
	static ref<android::nfc::NdefRecord> createExternal(ref<java::lang::String> domain, ref<java::lang::String> type, ref<link::java::array<jbyte>> data);
	static ref<android::nfc::NdefRecord> createTextRecord(ref<java::lang::String> languageCode, ref<java::lang::String> text);
	jshort getTnf();
	ref<link::java::array<jbyte>> getType();
	ref<link::java::array<jbyte>> getId();
	ref<link::java::array<jbyte>> getPayload();
	ref<link::java::array<jbyte>> toByteArray();
	ref<java::lang::String> toMimeType();
	ref<android::net::Uri> toUri();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();

protected:

	NdefRecord(handle_type h) : base_(h) {}

};

} // namespace android::nfc
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::nfc {

inline ref<android::os::Parcelable_Creator> NdefRecord::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_ALTERNATIVE_CARRIER_() { return get_static_field<SCAPIX_META_STRING("RTD_ALTERNATIVE_CARRIER"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_HANDOVER_CARRIER_() { return get_static_field<SCAPIX_META_STRING("RTD_HANDOVER_CARRIER"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_HANDOVER_REQUEST_() { return get_static_field<SCAPIX_META_STRING("RTD_HANDOVER_REQUEST"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_HANDOVER_SELECT_() { return get_static_field<SCAPIX_META_STRING("RTD_HANDOVER_SELECT"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_SMART_POSTER_() { return get_static_field<SCAPIX_META_STRING("RTD_SMART_POSTER"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_TEXT_() { return get_static_field<SCAPIX_META_STRING("RTD_TEXT"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::RTD_URI_() { return get_static_field<SCAPIX_META_STRING("RTD_URI"), ref<link::java::array<jbyte>>>(); }
inline jshort NdefRecord::TNF_ABSOLUTE_URI_() { return get_static_field<SCAPIX_META_STRING("TNF_ABSOLUTE_URI"), jshort>(); }
inline jshort NdefRecord::TNF_EMPTY_() { return get_static_field<SCAPIX_META_STRING("TNF_EMPTY"), jshort>(); }
inline jshort NdefRecord::TNF_EXTERNAL_TYPE_() { return get_static_field<SCAPIX_META_STRING("TNF_EXTERNAL_TYPE"), jshort>(); }
inline jshort NdefRecord::TNF_MIME_MEDIA_() { return get_static_field<SCAPIX_META_STRING("TNF_MIME_MEDIA"), jshort>(); }
inline jshort NdefRecord::TNF_UNCHANGED_() { return get_static_field<SCAPIX_META_STRING("TNF_UNCHANGED"), jshort>(); }
inline jshort NdefRecord::TNF_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("TNF_UNKNOWN"), jshort>(); }
inline jshort NdefRecord::TNF_WELL_KNOWN_() { return get_static_field<SCAPIX_META_STRING("TNF_WELL_KNOWN"), jshort>(); }
inline ref<NdefRecord> NdefRecord::new_object(jshort tnf, ref<link::java::array<jbyte>> type, ref<link::java::array<jbyte>> id, ref<link::java::array<jbyte>> payload) { return base_::new_object(tnf, type, id, payload); }
inline ref<NdefRecord> NdefRecord::new_object(ref<link::java::array<jbyte>> data) { return base_::new_object(data); }
inline ref<android::nfc::NdefRecord> NdefRecord::createApplicationRecord(ref<java::lang::String> packageName) { return call_static_method<SCAPIX_META_STRING("createApplicationRecord"), ref<android::nfc::NdefRecord>>(packageName); }
inline ref<android::nfc::NdefRecord> NdefRecord::createUri(ref<android::net::Uri> uri) { return call_static_method<SCAPIX_META_STRING("createUri"), ref<android::nfc::NdefRecord>>(uri); }
inline ref<android::nfc::NdefRecord> NdefRecord::createUri(ref<java::lang::String> uriString) { return call_static_method<SCAPIX_META_STRING("createUri"), ref<android::nfc::NdefRecord>>(uriString); }
inline ref<android::nfc::NdefRecord> NdefRecord::createMime(ref<java::lang::String> mimeType, ref<link::java::array<jbyte>> mimeData) { return call_static_method<SCAPIX_META_STRING("createMime"), ref<android::nfc::NdefRecord>>(mimeType, mimeData); }
inline ref<android::nfc::NdefRecord> NdefRecord::createExternal(ref<java::lang::String> domain, ref<java::lang::String> type, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("createExternal"), ref<android::nfc::NdefRecord>>(domain, type, data); }
inline ref<android::nfc::NdefRecord> NdefRecord::createTextRecord(ref<java::lang::String> languageCode, ref<java::lang::String> text) { return call_static_method<SCAPIX_META_STRING("createTextRecord"), ref<android::nfc::NdefRecord>>(languageCode, text); }
inline jshort NdefRecord::getTnf() { return call_method<SCAPIX_META_STRING("getTnf"), jshort>(); }
inline ref<link::java::array<jbyte>> NdefRecord::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::getPayload() { return call_method<SCAPIX_META_STRING("getPayload"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> NdefRecord::toByteArray() { return call_method<SCAPIX_META_STRING("toByteArray"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> NdefRecord::toMimeType() { return call_method<SCAPIX_META_STRING("toMimeType"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> NdefRecord::toUri() { return call_method<SCAPIX_META_STRING("toUri"), ref<android::net::Uri>>(); }
inline jint NdefRecord::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void NdefRecord::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint NdefRecord::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean NdefRecord::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> NdefRecord::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::nfc
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_NDEFRECORD_H
