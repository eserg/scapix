// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/microedition/khronos/opengles/GL.h>

#ifndef SCAPIX_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_H
#define SCAPIX_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_H

namespace scapix::java_api {

namespace java::nio { class IntBuffer; }

namespace javax::microedition::khronos::opengles {

class GL10Ext : public object_base<SCAPIX_META_STRING("javax/microedition/khronos/opengles/GL10Ext"),
	java::lang::Object,
	javax::microedition::khronos::opengles::GL>
{
public:

	jint glQueryMatrixxOES(ref<link::java::array<jint>> p1, jint p2, ref<link::java::array<jint>> p3, jint p4);
	jint glQueryMatrixxOES(ref<java::nio::IntBuffer> p1, ref<java::nio::IntBuffer> p2);

protected:

	GL10Ext(handle_type h) : base_(h) {}

};

} // namespace javax::microedition::khronos::opengles
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/IntBuffer.h>

namespace scapix::java_api {
namespace javax::microedition::khronos::opengles {

inline jint GL10Ext::glQueryMatrixxOES(ref<link::java::array<jint>> p1, jint p2, ref<link::java::array<jint>> p3, jint p4) { return call_method<SCAPIX_META_STRING("glQueryMatrixxOES"), jint>(p1, p2, p3, p4); }
inline jint GL10Ext::glQueryMatrixxOES(ref<java::nio::IntBuffer> p1, ref<java::nio::IntBuffer> p2) { return call_method<SCAPIX_META_STRING("glQueryMatrixxOES"), jint>(p1, p2); }

} // namespace javax::microedition::khronos::opengles
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_H
