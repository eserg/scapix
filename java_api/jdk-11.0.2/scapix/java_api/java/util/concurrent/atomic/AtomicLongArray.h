// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class LongBinaryOperator; }
namespace java::util::function { class LongUnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicLongArray : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicLongArray"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<AtomicLongArray> new_object(jint length);
	static ref<AtomicLongArray> new_object(ref<link::java::array<jlong>> array);
	jint length();
	jlong get(jint i);
	void set(jint i, jlong newValue);
	void lazySet(jint i, jlong newValue);
	jlong getAndSet(jint i, jlong newValue);
	jboolean compareAndSet(jint i, jlong expectedValue, jlong p3);
	jboolean weakCompareAndSet(jint i, jlong expectedValue, jlong p3);
	jboolean weakCompareAndSetPlain(jint i, jlong expectedValue, jlong p3);
	jlong getAndIncrement(jint i);
	jlong getAndDecrement(jint i);
	jlong getAndAdd(jint i, jlong delta);
	jlong incrementAndGet(jint i);
	jlong decrementAndGet(jint i);
	jlong addAndGet(jint i, jlong delta);
	jlong getAndUpdate(jint i, ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong updateAndGet(jint i, ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong getAndAccumulate(jint i, jlong x, ref<java::util::function::LongBinaryOperator> p3);
	jlong accumulateAndGet(jint i, jlong x, ref<java::util::function::LongBinaryOperator> p3);
	ref<java::lang::String> toString();
	jlong getPlain(jint i);
	void setPlain(jint i, jlong newValue);
	jlong getOpaque(jint i);
	void setOpaque(jint i, jlong newValue);
	jlong getAcquire(jint i);
	void setRelease(jint i, jlong newValue);
	jlong compareAndExchange(jint i, jlong expectedValue, jlong p3);
	jlong compareAndExchangeAcquire(jint i, jlong expectedValue, jlong p3);
	jlong compareAndExchangeRelease(jint i, jlong expectedValue, jlong p3);
	jboolean weakCompareAndSetVolatile(jint i, jlong expectedValue, jlong p3);
	jboolean weakCompareAndSetAcquire(jint i, jlong expectedValue, jlong p3);
	jboolean weakCompareAndSetRelease(jint i, jlong expectedValue, jlong p3);

protected:

	AtomicLongArray(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongUnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicLongArray> AtomicLongArray::new_object(jint length) { return base_::new_object(length); }
inline ref<AtomicLongArray> AtomicLongArray::new_object(ref<link::java::array<jlong>> array) { return base_::new_object(array); }
inline jint AtomicLongArray::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline jlong AtomicLongArray::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jlong>(i); }
inline void AtomicLongArray::set(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("set"), void>(i, newValue); }
inline void AtomicLongArray::lazySet(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("lazySet"), void>(i, newValue); }
inline jlong AtomicLongArray::getAndSet(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), jlong>(i, newValue); }
inline jboolean AtomicLongArray::compareAndSet(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(i, expectedValue, p3); }
inline jboolean AtomicLongArray::weakCompareAndSet(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(i, expectedValue, p3); }
inline jboolean AtomicLongArray::weakCompareAndSetPlain(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSetPlain"), jboolean>(i, expectedValue, p3); }
inline jlong AtomicLongArray::getAndIncrement(jint i) { return call_method<SCAPIX_META_STRING("getAndIncrement"), jlong>(i); }
inline jlong AtomicLongArray::getAndDecrement(jint i) { return call_method<SCAPIX_META_STRING("getAndDecrement"), jlong>(i); }
inline jlong AtomicLongArray::getAndAdd(jint i, jlong delta) { return call_method<SCAPIX_META_STRING("getAndAdd"), jlong>(i, delta); }
inline jlong AtomicLongArray::incrementAndGet(jint i) { return call_method<SCAPIX_META_STRING("incrementAndGet"), jlong>(i); }
inline jlong AtomicLongArray::decrementAndGet(jint i) { return call_method<SCAPIX_META_STRING("decrementAndGet"), jlong>(i); }
inline jlong AtomicLongArray::addAndGet(jint i, jlong delta) { return call_method<SCAPIX_META_STRING("addAndGet"), jlong>(i, delta); }
inline jlong AtomicLongArray::getAndUpdate(jint i, ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), jlong>(i, updateFunction); }
inline jlong AtomicLongArray::updateAndGet(jint i, ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), jlong>(i, updateFunction); }
inline jlong AtomicLongArray::getAndAccumulate(jint i, jlong x, ref<java::util::function::LongBinaryOperator> p3) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), jlong>(i, x, p3); }
inline jlong AtomicLongArray::accumulateAndGet(jint i, jlong x, ref<java::util::function::LongBinaryOperator> p3) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), jlong>(i, x, p3); }
inline ref<java::lang::String> AtomicLongArray::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jlong AtomicLongArray::getPlain(jint i) { return call_method<SCAPIX_META_STRING("getPlain"), jlong>(i); }
inline void AtomicLongArray::setPlain(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("setPlain"), void>(i, newValue); }
inline jlong AtomicLongArray::getOpaque(jint i) { return call_method<SCAPIX_META_STRING("getOpaque"), jlong>(i); }
inline void AtomicLongArray::setOpaque(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("setOpaque"), void>(i, newValue); }
inline jlong AtomicLongArray::getAcquire(jint i) { return call_method<SCAPIX_META_STRING("getAcquire"), jlong>(i); }
inline void AtomicLongArray::setRelease(jint i, jlong newValue) { return call_method<SCAPIX_META_STRING("setRelease"), void>(i, newValue); }
inline jlong AtomicLongArray::compareAndExchange(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("compareAndExchange"), jlong>(i, expectedValue, p3); }
inline jlong AtomicLongArray::compareAndExchangeAcquire(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("compareAndExchangeAcquire"), jlong>(i, expectedValue, p3); }
inline jlong AtomicLongArray::compareAndExchangeRelease(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("compareAndExchangeRelease"), jlong>(i, expectedValue, p3); }
inline jboolean AtomicLongArray::weakCompareAndSetVolatile(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSetVolatile"), jboolean>(i, expectedValue, p3); }
inline jboolean AtomicLongArray::weakCompareAndSetAcquire(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSetAcquire"), jboolean>(i, expectedValue, p3); }
inline jboolean AtomicLongArray::weakCompareAndSetRelease(jint i, jlong expectedValue, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSetRelease"), jboolean>(i, expectedValue, p3); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_H
