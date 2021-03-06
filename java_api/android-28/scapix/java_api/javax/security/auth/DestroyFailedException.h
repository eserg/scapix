// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_H
#define SCAPIX_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::security::auth {

class DestroyFailedException : public object_base<SCAPIX_META_STRING("javax/security/auth/DestroyFailedException"),
	java::lang::Exception>
{
public:

	static ref<DestroyFailedException> new_object();
	static ref<DestroyFailedException> new_object(ref<java::lang::String> msg);

protected:

	DestroyFailedException(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::security::auth {

inline ref<DestroyFailedException> DestroyFailedException::new_object() { return base_::new_object(); }
inline ref<DestroyFailedException> DestroyFailedException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace javax::security::auth
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_H
