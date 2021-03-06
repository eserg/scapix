// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/ByteBufferAsCharBufferL.h>

#ifndef SCAPIX_JAVA_NIO_BYTEBUFFERASCHARBUFFERRL_H
#define SCAPIX_JAVA_NIO_BYTEBUFFERASCHARBUFFERRL_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio { class ByteOrder; }
namespace java::nio { class CharBuffer; }

namespace java::nio {

// private
class ByteBufferAsCharBufferRL : public object_base<SCAPIX_META_STRING("java/nio/ByteBufferAsCharBufferRL"),
	java::nio::ByteBufferAsCharBufferL>
{
public:

	ref<java::nio::CharBuffer> slice();
	ref<java::nio::CharBuffer> duplicate();
	ref<java::nio::CharBuffer> asReadOnlyBuffer();
	ref<java::nio::CharBuffer> put(jchar x);
	ref<java::nio::CharBuffer> put(jint i, jchar x);
	ref<java::nio::CharBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::lang::String> toString(jint start, jint end);
	ref<java::nio::CharBuffer> subSequence(jint start, jint end);
	ref<java::nio::ByteOrder> order();

protected:

	ByteBufferAsCharBufferRL(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/CharBuffer.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::put(jchar x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(x); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::put(jint i, jchar x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(i, x); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::CharBuffer>>(); }
inline jboolean ByteBufferAsCharBufferRL::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean ByteBufferAsCharBufferRL::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::lang::String> ByteBufferAsCharBufferRL::toString(jint start, jint end) { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(start, end); }
inline ref<java::nio::CharBuffer> ByteBufferAsCharBufferRL::subSequence(jint start, jint end) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::nio::CharBuffer>>(start, end); }
inline ref<java::nio::ByteOrder> ByteBufferAsCharBufferRL::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_BYTEBUFFERASCHARBUFFERRL_H
