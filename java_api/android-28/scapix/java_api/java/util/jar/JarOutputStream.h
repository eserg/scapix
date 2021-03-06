// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/ZipOutputStream.h>

#ifndef SCAPIX_JAVA_UTIL_JAR_JAROUTPUTSTREAM_H
#define SCAPIX_JAVA_UTIL_JAR_JAROUTPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }
namespace java::util::jar { class Manifest; }
namespace java::util::zip { class ZipEntry; }

namespace java::util::jar {

class JarOutputStream : public object_base<SCAPIX_META_STRING("java/util/jar/JarOutputStream"),
	java::util::zip::ZipOutputStream>
{
public:

	static jint CENATT_();
	static jint CENATX_();
	static jint CENCOM_();
	static jint CENCRC_();
	static jint CENDSK_();
	static jint CENEXT_();
	static jint CENFLG_();
	static jint CENHDR_();
	static jint CENHOW_();
	static jint CENLEN_();
	static jint CENNAM_();
	static jint CENOFF_();
	static jlong CENSIG_();
	static jint CENSIZ_();
	static jint CENTIM_();
	static jint CENVEM_();
	static jint CENVER_();
	static jint ENDCOM_();
	static jint ENDHDR_();
	static jint ENDOFF_();
	static jlong ENDSIG_();
	static jint ENDSIZ_();
	static jint ENDSUB_();
	static jint ENDTOT_();
	static jint EXTCRC_();
	static jint EXTHDR_();
	static jint EXTLEN_();
	static jlong EXTSIG_();
	static jint EXTSIZ_();
	static jint LOCCRC_();
	static jint LOCEXT_();
	static jint LOCFLG_();
	static jint LOCHDR_();
	static jint LOCHOW_();
	static jint LOCLEN_();
	static jint LOCNAM_();
	static jlong LOCSIG_();
	static jint LOCSIZ_();
	static jint LOCTIM_();
	static jint LOCVER_();

	static ref<JarOutputStream> new_object(ref<java::io::OutputStream> out, ref<java::util::jar::Manifest> man);
	static ref<JarOutputStream> new_object(ref<java::io::OutputStream> out);
	void putNextEntry(ref<java::util::zip::ZipEntry> ze);

protected:

	JarOutputStream(handle_type h) : base_(h) {}

};

} // namespace java::util::jar
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>

namespace scapix::java_api {
namespace java::util::jar {

inline jint JarOutputStream::CENATT_() { return get_static_field<SCAPIX_META_STRING("CENATT"), jint>(); }
inline jint JarOutputStream::CENATX_() { return get_static_field<SCAPIX_META_STRING("CENATX"), jint>(); }
inline jint JarOutputStream::CENCOM_() { return get_static_field<SCAPIX_META_STRING("CENCOM"), jint>(); }
inline jint JarOutputStream::CENCRC_() { return get_static_field<SCAPIX_META_STRING("CENCRC"), jint>(); }
inline jint JarOutputStream::CENDSK_() { return get_static_field<SCAPIX_META_STRING("CENDSK"), jint>(); }
inline jint JarOutputStream::CENEXT_() { return get_static_field<SCAPIX_META_STRING("CENEXT"), jint>(); }
inline jint JarOutputStream::CENFLG_() { return get_static_field<SCAPIX_META_STRING("CENFLG"), jint>(); }
inline jint JarOutputStream::CENHDR_() { return get_static_field<SCAPIX_META_STRING("CENHDR"), jint>(); }
inline jint JarOutputStream::CENHOW_() { return get_static_field<SCAPIX_META_STRING("CENHOW"), jint>(); }
inline jint JarOutputStream::CENLEN_() { return get_static_field<SCAPIX_META_STRING("CENLEN"), jint>(); }
inline jint JarOutputStream::CENNAM_() { return get_static_field<SCAPIX_META_STRING("CENNAM"), jint>(); }
inline jint JarOutputStream::CENOFF_() { return get_static_field<SCAPIX_META_STRING("CENOFF"), jint>(); }
inline jlong JarOutputStream::CENSIG_() { return get_static_field<SCAPIX_META_STRING("CENSIG"), jlong>(); }
inline jint JarOutputStream::CENSIZ_() { return get_static_field<SCAPIX_META_STRING("CENSIZ"), jint>(); }
inline jint JarOutputStream::CENTIM_() { return get_static_field<SCAPIX_META_STRING("CENTIM"), jint>(); }
inline jint JarOutputStream::CENVEM_() { return get_static_field<SCAPIX_META_STRING("CENVEM"), jint>(); }
inline jint JarOutputStream::CENVER_() { return get_static_field<SCAPIX_META_STRING("CENVER"), jint>(); }
inline jint JarOutputStream::ENDCOM_() { return get_static_field<SCAPIX_META_STRING("ENDCOM"), jint>(); }
inline jint JarOutputStream::ENDHDR_() { return get_static_field<SCAPIX_META_STRING("ENDHDR"), jint>(); }
inline jint JarOutputStream::ENDOFF_() { return get_static_field<SCAPIX_META_STRING("ENDOFF"), jint>(); }
inline jlong JarOutputStream::ENDSIG_() { return get_static_field<SCAPIX_META_STRING("ENDSIG"), jlong>(); }
inline jint JarOutputStream::ENDSIZ_() { return get_static_field<SCAPIX_META_STRING("ENDSIZ"), jint>(); }
inline jint JarOutputStream::ENDSUB_() { return get_static_field<SCAPIX_META_STRING("ENDSUB"), jint>(); }
inline jint JarOutputStream::ENDTOT_() { return get_static_field<SCAPIX_META_STRING("ENDTOT"), jint>(); }
inline jint JarOutputStream::EXTCRC_() { return get_static_field<SCAPIX_META_STRING("EXTCRC"), jint>(); }
inline jint JarOutputStream::EXTHDR_() { return get_static_field<SCAPIX_META_STRING("EXTHDR"), jint>(); }
inline jint JarOutputStream::EXTLEN_() { return get_static_field<SCAPIX_META_STRING("EXTLEN"), jint>(); }
inline jlong JarOutputStream::EXTSIG_() { return get_static_field<SCAPIX_META_STRING("EXTSIG"), jlong>(); }
inline jint JarOutputStream::EXTSIZ_() { return get_static_field<SCAPIX_META_STRING("EXTSIZ"), jint>(); }
inline jint JarOutputStream::LOCCRC_() { return get_static_field<SCAPIX_META_STRING("LOCCRC"), jint>(); }
inline jint JarOutputStream::LOCEXT_() { return get_static_field<SCAPIX_META_STRING("LOCEXT"), jint>(); }
inline jint JarOutputStream::LOCFLG_() { return get_static_field<SCAPIX_META_STRING("LOCFLG"), jint>(); }
inline jint JarOutputStream::LOCHDR_() { return get_static_field<SCAPIX_META_STRING("LOCHDR"), jint>(); }
inline jint JarOutputStream::LOCHOW_() { return get_static_field<SCAPIX_META_STRING("LOCHOW"), jint>(); }
inline jint JarOutputStream::LOCLEN_() { return get_static_field<SCAPIX_META_STRING("LOCLEN"), jint>(); }
inline jint JarOutputStream::LOCNAM_() { return get_static_field<SCAPIX_META_STRING("LOCNAM"), jint>(); }
inline jlong JarOutputStream::LOCSIG_() { return get_static_field<SCAPIX_META_STRING("LOCSIG"), jlong>(); }
inline jint JarOutputStream::LOCSIZ_() { return get_static_field<SCAPIX_META_STRING("LOCSIZ"), jint>(); }
inline jint JarOutputStream::LOCTIM_() { return get_static_field<SCAPIX_META_STRING("LOCTIM"), jint>(); }
inline jint JarOutputStream::LOCVER_() { return get_static_field<SCAPIX_META_STRING("LOCVER"), jint>(); }
inline ref<JarOutputStream> JarOutputStream::new_object(ref<java::io::OutputStream> out, ref<java::util::jar::Manifest> man) { return base_::new_object(out, man); }
inline ref<JarOutputStream> JarOutputStream::new_object(ref<java::io::OutputStream> out) { return base_::new_object(out); }
inline void JarOutputStream::putNextEntry(ref<java::util::zip::ZipEntry> ze) { return call_method<SCAPIX_META_STRING("putNextEntry"), void>(ze); }

} // namespace java::util::jar
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_JAR_JAROUTPUTSTREAM_H
