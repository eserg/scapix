// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/ShortBuffer.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_NIO_DIRECTSHORTBUFFERS_H
#define SCAPIX_JAVA_NIO_DIRECTSHORTBUFFERS_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::nio { class ByteOrder; }
namespace jdk::internal::ref { class Cleaner; }

namespace java::nio {

// private
class DirectShortBufferS : public object_base<SCAPIX_META_STRING("java/nio/DirectShortBufferS"),
	java::nio::ShortBuffer,
	sun::nio::ch::DirectBuffer>
{
public:

	ref<java::lang::Object> attachment();
	ref<jdk::internal::ref::Cleaner> cleaner();
	ref<java::nio::ShortBuffer> slice();
	ref<java::nio::ShortBuffer> duplicate();
	ref<java::nio::ShortBuffer> asReadOnlyBuffer();
	jlong address();
	jshort get();
	jshort get(jint i);
	ref<java::nio::ShortBuffer> get(ref<link::java::array<jshort>> dst, jint offset, jint length);
	ref<java::nio::ShortBuffer> put(jshort x);
	ref<java::nio::ShortBuffer> put(jint i, jshort x);
	ref<java::nio::ShortBuffer> put(ref<java::nio::ShortBuffer> src);
	ref<java::nio::ShortBuffer> put(ref<link::java::array<jshort>> src, jint offset, jint length);
	ref<java::nio::ShortBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::ByteOrder> order();

protected:

	DirectShortBufferS(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/jdk/internal/ref/Cleaner.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::lang::Object> DirectShortBufferS::attachment() { return call_method<SCAPIX_META_STRING("attachment"), ref<java::lang::Object>>(); }
inline ref<jdk::internal::ref::Cleaner> DirectShortBufferS::cleaner() { return call_method<SCAPIX_META_STRING("cleaner"), ref<jdk::internal::ref::Cleaner>>(); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::ShortBuffer>>(); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::ShortBuffer>>(); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::ShortBuffer>>(); }
inline jlong DirectShortBufferS::address() { return call_method<SCAPIX_META_STRING("address"), jlong>(); }
inline jshort DirectShortBufferS::get() { return call_method<SCAPIX_META_STRING("get"), jshort>(); }
inline jshort DirectShortBufferS::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jshort>(i); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::get(ref<link::java::array<jshort>> dst, jint offset, jint length) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::ShortBuffer>>(dst, offset, length); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::put(jshort x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(x); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::put(jint i, jshort x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(i, x); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::put(ref<java::nio::ShortBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(src); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::put(ref<link::java::array<jshort>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(src, offset, length); }
inline ref<java::nio::ShortBuffer> DirectShortBufferS::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::ShortBuffer>>(); }
inline jboolean DirectShortBufferS::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean DirectShortBufferS::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::ByteOrder> DirectShortBufferS::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_DIRECTSHORTBUFFERS_H
