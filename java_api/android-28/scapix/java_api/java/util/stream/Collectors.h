// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_COLLECTORS_H
#define SCAPIX_JAVA_UTIL_STREAM_COLLECTORS_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::util { class Comparator; }
namespace java::util::function { class BinaryOperator; }
namespace java::util::function { class Function; }
namespace java::util::function { class Predicate; }
namespace java::util::function { class Supplier; }
namespace java::util::function { class ToDoubleFunction; }
namespace java::util::function { class ToIntFunction; }
namespace java::util::function { class ToLongFunction; }
namespace java::util::stream { class Collector; }

namespace java::util::stream {

class Collectors : public object_base<SCAPIX_META_STRING("java/util/stream/Collectors"),
	java::lang::Object>
{
public:

	static ref<java::util::stream::Collector> toCollection(ref<java::util::function::Supplier> collectionFactory);
	static ref<java::util::stream::Collector> toList();
	static ref<java::util::stream::Collector> toSet();
	static ref<java::util::stream::Collector> joining();
	static ref<java::util::stream::Collector> joining(ref<java::lang::CharSequence> delimiter);
	static ref<java::util::stream::Collector> joining(ref<java::lang::CharSequence> delimiter, ref<java::lang::CharSequence> prefix, ref<java::lang::CharSequence> suffix);
	static ref<java::util::stream::Collector> mapping(ref<java::util::function::Function> mapper, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> collectingAndThen(ref<java::util::stream::Collector> downstream, ref<java::util::function::Function> finisher);
	static ref<java::util::stream::Collector> counting();
	static ref<java::util::stream::Collector> minBy(ref<java::util::Comparator> comparator);
	static ref<java::util::stream::Collector> maxBy(ref<java::util::Comparator> comparator);
	static ref<java::util::stream::Collector> summingInt(ref<java::util::function::ToIntFunction> mapper);
	static ref<java::util::stream::Collector> summingLong(ref<java::util::function::ToLongFunction> mapper);
	static ref<java::util::stream::Collector> summingDouble(ref<java::util::function::ToDoubleFunction> mapper);
	static ref<java::util::stream::Collector> averagingInt(ref<java::util::function::ToIntFunction> mapper);
	static ref<java::util::stream::Collector> averagingLong(ref<java::util::function::ToLongFunction> mapper);
	static ref<java::util::stream::Collector> averagingDouble(ref<java::util::function::ToDoubleFunction> mapper);
	static ref<java::util::stream::Collector> reducing(ref<java::lang::Object> identity, ref<java::util::function::BinaryOperator> op);
	static ref<java::util::stream::Collector> reducing(ref<java::util::function::BinaryOperator> op);
	static ref<java::util::stream::Collector> reducing(ref<java::lang::Object> identity, ref<java::util::function::Function> mapper, ref<java::util::function::BinaryOperator> op);
	static ref<java::util::stream::Collector> groupingBy(ref<java::util::function::Function> classifier);
	static ref<java::util::stream::Collector> groupingBy(ref<java::util::function::Function> classifier, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> groupingBy(ref<java::util::function::Function> classifier, ref<java::util::function::Supplier> mapFactory, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> groupingByConcurrent(ref<java::util::function::Function> classifier);
	static ref<java::util::stream::Collector> groupingByConcurrent(ref<java::util::function::Function> classifier, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> groupingByConcurrent(ref<java::util::function::Function> classifier, ref<java::util::function::Supplier> mapFactory, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> partitioningBy(ref<java::util::function::Predicate> predicate);
	static ref<java::util::stream::Collector> partitioningBy(ref<java::util::function::Predicate> predicate, ref<java::util::stream::Collector> downstream);
	static ref<java::util::stream::Collector> toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper);
	static ref<java::util::stream::Collector> toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction);
	static ref<java::util::stream::Collector> toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction, ref<java::util::function::Supplier> mapSupplier);
	static ref<java::util::stream::Collector> toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper);
	static ref<java::util::stream::Collector> toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction);
	static ref<java::util::stream::Collector> toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction, ref<java::util::function::Supplier> mapSupplier);
	static ref<java::util::stream::Collector> summarizingInt(ref<java::util::function::ToIntFunction> mapper);
	static ref<java::util::stream::Collector> summarizingLong(ref<java::util::function::ToLongFunction> mapper);
	static ref<java::util::stream::Collector> summarizingDouble(ref<java::util::function::ToDoubleFunction> mapper);

protected:

	Collectors(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>
#include <scapix/java_api/java/util/stream/Collector.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::Collector> Collectors::toCollection(ref<java::util::function::Supplier> collectionFactory) { return call_static_method<SCAPIX_META_STRING("toCollection"), ref<java::util::stream::Collector>>(collectionFactory); }
inline ref<java::util::stream::Collector> Collectors::toList() { return call_static_method<SCAPIX_META_STRING("toList"), ref<java::util::stream::Collector>>(); }
inline ref<java::util::stream::Collector> Collectors::toSet() { return call_static_method<SCAPIX_META_STRING("toSet"), ref<java::util::stream::Collector>>(); }
inline ref<java::util::stream::Collector> Collectors::joining() { return call_static_method<SCAPIX_META_STRING("joining"), ref<java::util::stream::Collector>>(); }
inline ref<java::util::stream::Collector> Collectors::joining(ref<java::lang::CharSequence> delimiter) { return call_static_method<SCAPIX_META_STRING("joining"), ref<java::util::stream::Collector>>(delimiter); }
inline ref<java::util::stream::Collector> Collectors::joining(ref<java::lang::CharSequence> delimiter, ref<java::lang::CharSequence> prefix, ref<java::lang::CharSequence> suffix) { return call_static_method<SCAPIX_META_STRING("joining"), ref<java::util::stream::Collector>>(delimiter, prefix, suffix); }
inline ref<java::util::stream::Collector> Collectors::mapping(ref<java::util::function::Function> mapper, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("mapping"), ref<java::util::stream::Collector>>(mapper, downstream); }
inline ref<java::util::stream::Collector> Collectors::collectingAndThen(ref<java::util::stream::Collector> downstream, ref<java::util::function::Function> finisher) { return call_static_method<SCAPIX_META_STRING("collectingAndThen"), ref<java::util::stream::Collector>>(downstream, finisher); }
inline ref<java::util::stream::Collector> Collectors::counting() { return call_static_method<SCAPIX_META_STRING("counting"), ref<java::util::stream::Collector>>(); }
inline ref<java::util::stream::Collector> Collectors::minBy(ref<java::util::Comparator> comparator) { return call_static_method<SCAPIX_META_STRING("minBy"), ref<java::util::stream::Collector>>(comparator); }
inline ref<java::util::stream::Collector> Collectors::maxBy(ref<java::util::Comparator> comparator) { return call_static_method<SCAPIX_META_STRING("maxBy"), ref<java::util::stream::Collector>>(comparator); }
inline ref<java::util::stream::Collector> Collectors::summingInt(ref<java::util::function::ToIntFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summingInt"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::summingLong(ref<java::util::function::ToLongFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summingLong"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::summingDouble(ref<java::util::function::ToDoubleFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summingDouble"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::averagingInt(ref<java::util::function::ToIntFunction> mapper) { return call_static_method<SCAPIX_META_STRING("averagingInt"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::averagingLong(ref<java::util::function::ToLongFunction> mapper) { return call_static_method<SCAPIX_META_STRING("averagingLong"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::averagingDouble(ref<java::util::function::ToDoubleFunction> mapper) { return call_static_method<SCAPIX_META_STRING("averagingDouble"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::reducing(ref<java::lang::Object> identity, ref<java::util::function::BinaryOperator> op) { return call_static_method<SCAPIX_META_STRING("reducing"), ref<java::util::stream::Collector>>(identity, op); }
inline ref<java::util::stream::Collector> Collectors::reducing(ref<java::util::function::BinaryOperator> op) { return call_static_method<SCAPIX_META_STRING("reducing"), ref<java::util::stream::Collector>>(op); }
inline ref<java::util::stream::Collector> Collectors::reducing(ref<java::lang::Object> identity, ref<java::util::function::Function> mapper, ref<java::util::function::BinaryOperator> op) { return call_static_method<SCAPIX_META_STRING("reducing"), ref<java::util::stream::Collector>>(identity, mapper, op); }
inline ref<java::util::stream::Collector> Collectors::groupingBy(ref<java::util::function::Function> classifier) { return call_static_method<SCAPIX_META_STRING("groupingBy"), ref<java::util::stream::Collector>>(classifier); }
inline ref<java::util::stream::Collector> Collectors::groupingBy(ref<java::util::function::Function> classifier, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("groupingBy"), ref<java::util::stream::Collector>>(classifier, downstream); }
inline ref<java::util::stream::Collector> Collectors::groupingBy(ref<java::util::function::Function> classifier, ref<java::util::function::Supplier> mapFactory, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("groupingBy"), ref<java::util::stream::Collector>>(classifier, mapFactory, downstream); }
inline ref<java::util::stream::Collector> Collectors::groupingByConcurrent(ref<java::util::function::Function> classifier) { return call_static_method<SCAPIX_META_STRING("groupingByConcurrent"), ref<java::util::stream::Collector>>(classifier); }
inline ref<java::util::stream::Collector> Collectors::groupingByConcurrent(ref<java::util::function::Function> classifier, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("groupingByConcurrent"), ref<java::util::stream::Collector>>(classifier, downstream); }
inline ref<java::util::stream::Collector> Collectors::groupingByConcurrent(ref<java::util::function::Function> classifier, ref<java::util::function::Supplier> mapFactory, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("groupingByConcurrent"), ref<java::util::stream::Collector>>(classifier, mapFactory, downstream); }
inline ref<java::util::stream::Collector> Collectors::partitioningBy(ref<java::util::function::Predicate> predicate) { return call_static_method<SCAPIX_META_STRING("partitioningBy"), ref<java::util::stream::Collector>>(predicate); }
inline ref<java::util::stream::Collector> Collectors::partitioningBy(ref<java::util::function::Predicate> predicate, ref<java::util::stream::Collector> downstream) { return call_static_method<SCAPIX_META_STRING("partitioningBy"), ref<java::util::stream::Collector>>(predicate, downstream); }
inline ref<java::util::stream::Collector> Collectors::toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper) { return call_static_method<SCAPIX_META_STRING("toMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper); }
inline ref<java::util::stream::Collector> Collectors::toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction) { return call_static_method<SCAPIX_META_STRING("toMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper, mergeFunction); }
inline ref<java::util::stream::Collector> Collectors::toMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction, ref<java::util::function::Supplier> mapSupplier) { return call_static_method<SCAPIX_META_STRING("toMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper, mergeFunction, mapSupplier); }
inline ref<java::util::stream::Collector> Collectors::toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper) { return call_static_method<SCAPIX_META_STRING("toConcurrentMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper); }
inline ref<java::util::stream::Collector> Collectors::toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction) { return call_static_method<SCAPIX_META_STRING("toConcurrentMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper, mergeFunction); }
inline ref<java::util::stream::Collector> Collectors::toConcurrentMap(ref<java::util::function::Function> keyMapper, ref<java::util::function::Function> valueMapper, ref<java::util::function::BinaryOperator> mergeFunction, ref<java::util::function::Supplier> mapSupplier) { return call_static_method<SCAPIX_META_STRING("toConcurrentMap"), ref<java::util::stream::Collector>>(keyMapper, valueMapper, mergeFunction, mapSupplier); }
inline ref<java::util::stream::Collector> Collectors::summarizingInt(ref<java::util::function::ToIntFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summarizingInt"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::summarizingLong(ref<java::util::function::ToLongFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summarizingLong"), ref<java::util::stream::Collector>>(mapper); }
inline ref<java::util::stream::Collector> Collectors::summarizingDouble(ref<java::util::function::ToDoubleFunction> mapper) { return call_static_method<SCAPIX_META_STRING("summarizingDouble"), ref<java::util::stream::Collector>>(mapper); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_COLLECTORS_H
