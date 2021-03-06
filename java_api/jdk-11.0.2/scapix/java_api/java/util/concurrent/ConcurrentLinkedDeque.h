// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractCollection.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class Collection; }
namespace java::util { class Iterator; }
namespace java::util { class Spliterator; }
namespace java::util::function { class Consumer; }
namespace java::util::function { class Predicate; }

namespace java::util::concurrent {

class ConcurrentLinkedDeque : public object_base<SCAPIX_META_STRING("java/util/concurrent/ConcurrentLinkedDeque"),
	java::util::AbstractCollection,
	java::util::Deque,
	java::io::Serializable>
{
public:

	static ref<ConcurrentLinkedDeque> new_object();
	static ref<ConcurrentLinkedDeque> new_object(ref<java::util::Collection> c);
	void addFirst(ref<java::lang::Object> e);
	void addLast(ref<java::lang::Object> e);
	jboolean offerFirst(ref<java::lang::Object> e);
	jboolean offerLast(ref<java::lang::Object> e);
	ref<java::lang::Object> peekFirst();
	ref<java::lang::Object> peekLast();
	ref<java::lang::Object> getFirst();
	ref<java::lang::Object> getLast();
	ref<java::lang::Object> pollFirst();
	ref<java::lang::Object> pollLast();
	ref<java::lang::Object> removeFirst();
	ref<java::lang::Object> removeLast();
	jboolean offer(ref<java::lang::Object> e);
	jboolean add(ref<java::lang::Object> e);
	ref<java::lang::Object> poll();
	ref<java::lang::Object> peek();
	ref<java::lang::Object> remove();
	ref<java::lang::Object> pop();
	ref<java::lang::Object> element();
	void push(ref<java::lang::Object> e);
	jboolean removeFirstOccurrence(ref<java::lang::Object> o);
	jboolean removeLastOccurrence(ref<java::lang::Object> o);
	jboolean contains(ref<java::lang::Object> o);
	jboolean isEmpty();
	jint size();
	jboolean remove(ref<java::lang::Object> o);
	jboolean addAll(ref<java::util::Collection> c);
	void clear();
	ref<java::lang::String> toString();
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> a);
	ref<java::util::Iterator> iterator();
	ref<java::util::Iterator> descendingIterator();
	ref<java::util::Spliterator> spliterator();
	jboolean removeIf(ref<java::util::function::Predicate> filter);
	jboolean removeAll(ref<java::util::Collection> c);
	jboolean retainAll(ref<java::util::Collection> c);
	void forEach(ref<java::util::function::Consumer> action);

protected:

	ConcurrentLinkedDeque(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<ConcurrentLinkedDeque> ConcurrentLinkedDeque::new_object() { return base_::new_object(); }
inline ref<ConcurrentLinkedDeque> ConcurrentLinkedDeque::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline void ConcurrentLinkedDeque::addFirst(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("addFirst"), void>(e); }
inline void ConcurrentLinkedDeque::addLast(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("addLast"), void>(e); }
inline jboolean ConcurrentLinkedDeque::offerFirst(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("offerFirst"), jboolean>(e); }
inline jboolean ConcurrentLinkedDeque::offerLast(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("offerLast"), jboolean>(e); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::peekFirst() { return call_method<SCAPIX_META_STRING("peekFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::peekLast() { return call_method<SCAPIX_META_STRING("peekLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::getFirst() { return call_method<SCAPIX_META_STRING("getFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::getLast() { return call_method<SCAPIX_META_STRING("getLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::pollFirst() { return call_method<SCAPIX_META_STRING("pollFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::pollLast() { return call_method<SCAPIX_META_STRING("pollLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::removeFirst() { return call_method<SCAPIX_META_STRING("removeFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::removeLast() { return call_method<SCAPIX_META_STRING("removeLast"), ref<java::lang::Object>>(); }
inline jboolean ConcurrentLinkedDeque::offer(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(e); }
inline jboolean ConcurrentLinkedDeque::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::poll() { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::peek() { return call_method<SCAPIX_META_STRING("peek"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::remove() { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::pop() { return call_method<SCAPIX_META_STRING("pop"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentLinkedDeque::element() { return call_method<SCAPIX_META_STRING("element"), ref<java::lang::Object>>(); }
inline void ConcurrentLinkedDeque::push(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("push"), void>(e); }
inline jboolean ConcurrentLinkedDeque::removeFirstOccurrence(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("removeFirstOccurrence"), jboolean>(o); }
inline jboolean ConcurrentLinkedDeque::removeLastOccurrence(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("removeLastOccurrence"), jboolean>(o); }
inline jboolean ConcurrentLinkedDeque::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline jboolean ConcurrentLinkedDeque::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jint ConcurrentLinkedDeque::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean ConcurrentLinkedDeque::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline jboolean ConcurrentLinkedDeque::addAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(c); }
inline void ConcurrentLinkedDeque::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline ref<java::lang::String> ConcurrentLinkedDeque::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<link::java::array<java::lang::Object>> ConcurrentLinkedDeque::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> ConcurrentLinkedDeque::toArray(ref<link::java::array<java::lang::Object>> a) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(a); }
inline ref<java::util::Iterator> ConcurrentLinkedDeque::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Iterator> ConcurrentLinkedDeque::descendingIterator() { return call_method<SCAPIX_META_STRING("descendingIterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Spliterator> ConcurrentLinkedDeque::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }
inline jboolean ConcurrentLinkedDeque::removeIf(ref<java::util::function::Predicate> filter) { return call_method<SCAPIX_META_STRING("removeIf"), jboolean>(filter); }
inline jboolean ConcurrentLinkedDeque::removeAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(c); }
inline jboolean ConcurrentLinkedDeque::retainAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("retainAll"), jboolean>(c); }
inline void ConcurrentLinkedDeque::forEach(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_H
