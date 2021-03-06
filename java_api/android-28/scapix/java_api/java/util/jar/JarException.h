// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/ZipException.h>

#ifndef SCAPIX_JAVA_UTIL_JAR_JAREXCEPTION_H
#define SCAPIX_JAVA_UTIL_JAR_JAREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util::jar {

class JarException : public object_base<SCAPIX_META_STRING("java/util/jar/JarException"),
	java::util::zip::ZipException>
{
public:

	static ref<JarException> new_object();
	static ref<JarException> new_object(ref<java::lang::String> s);

protected:

	JarException(handle_type h) : base_(h) {}

};

} // namespace java::util::jar
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util::jar {

inline ref<JarException> JarException::new_object() { return base_::new_object(); }
inline ref<JarException> JarException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::util::jar
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_JAR_JAREXCEPTION_H
