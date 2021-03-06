// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/javax/security/cert/Certificate.h>

#ifndef SCAPIX_JAVAX_SECURITY_CERT_X509CERTIFICATE_H
#define SCAPIX_JAVAX_SECURITY_CERT_X509CERTIFICATE_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace java::math { class BigInteger; }
namespace java::security { class Principal; }
namespace java::util { class Date; }

namespace javax::security::cert {

class X509Certificate : public object_base<SCAPIX_META_STRING("javax/security/cert/X509Certificate"),
	javax::security::cert::Certificate>
{
public:

	static ref<X509Certificate> new_object();
	static ref<javax::security::cert::X509Certificate> getInstance(ref<java::io::InputStream> inStream);
	static ref<javax::security::cert::X509Certificate> getInstance(ref<link::java::array<jbyte>> certData);
	void checkValidity();
	void checkValidity(ref<java::util::Date> p1);
	jint getVersion();
	ref<java::math::BigInteger> getSerialNumber();
	ref<java::security::Principal> getIssuerDN();
	ref<java::security::Principal> getSubjectDN();
	ref<java::util::Date> getNotBefore();
	ref<java::util::Date> getNotAfter();
	ref<java::lang::String> getSigAlgName();
	ref<java::lang::String> getSigAlgOID();
	ref<link::java::array<jbyte>> getSigAlgParams();

protected:

	X509Certificate(handle_type h) : base_(h) {}

};

} // namespace javax::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/util/Date.h>

namespace scapix::java_api {
namespace javax::security::cert {

inline ref<X509Certificate> X509Certificate::new_object() { return base_::new_object(); }
inline ref<javax::security::cert::X509Certificate> X509Certificate::getInstance(ref<java::io::InputStream> inStream) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::security::cert::X509Certificate>>(inStream); }
inline ref<javax::security::cert::X509Certificate> X509Certificate::getInstance(ref<link::java::array<jbyte>> certData) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::security::cert::X509Certificate>>(certData); }
inline void X509Certificate::checkValidity() { return call_method<SCAPIX_META_STRING("checkValidity"), void>(); }
inline void X509Certificate::checkValidity(ref<java::util::Date> p1) { return call_method<SCAPIX_META_STRING("checkValidity"), void>(p1); }
inline jint X509Certificate::getVersion() { return call_method<SCAPIX_META_STRING("getVersion"), jint>(); }
inline ref<java::math::BigInteger> X509Certificate::getSerialNumber() { return call_method<SCAPIX_META_STRING("getSerialNumber"), ref<java::math::BigInteger>>(); }
inline ref<java::security::Principal> X509Certificate::getIssuerDN() { return call_method<SCAPIX_META_STRING("getIssuerDN"), ref<java::security::Principal>>(); }
inline ref<java::security::Principal> X509Certificate::getSubjectDN() { return call_method<SCAPIX_META_STRING("getSubjectDN"), ref<java::security::Principal>>(); }
inline ref<java::util::Date> X509Certificate::getNotBefore() { return call_method<SCAPIX_META_STRING("getNotBefore"), ref<java::util::Date>>(); }
inline ref<java::util::Date> X509Certificate::getNotAfter() { return call_method<SCAPIX_META_STRING("getNotAfter"), ref<java::util::Date>>(); }
inline ref<java::lang::String> X509Certificate::getSigAlgName() { return call_method<SCAPIX_META_STRING("getSigAlgName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> X509Certificate::getSigAlgOID() { return call_method<SCAPIX_META_STRING("getSigAlgOID"), ref<java::lang::String>>(); }
inline ref<link::java::array<jbyte>> X509Certificate::getSigAlgParams() { return call_method<SCAPIX_META_STRING("getSigAlgParams"), ref<link::java::array<jbyte>>>(); }

} // namespace javax::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_CERT_X509CERTIFICATE_H
