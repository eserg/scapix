// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_MATCHOPS_H
#define SCAPIX_JAVA_UTIL_STREAM_MATCHOPS_H

namespace scapix::java_api {

namespace java::util::function { class DoublePredicate; }
namespace java::util::function { class IntPredicate; }
namespace java::util::function { class LongPredicate; }
namespace java::util::function { class Predicate; }
namespace java::util::stream { class MatchOps_MatchKind; }
namespace java::util::stream { class TerminalOp; }

namespace java::util::stream {

// private
class MatchOps : public object_base<SCAPIX_META_STRING("java/util/stream/MatchOps"),
	java::lang::Object>
{
public:

	static ref<java::util::stream::TerminalOp> makeRef(ref<java::util::function::Predicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind);
	static ref<java::util::stream::TerminalOp> makeInt(ref<java::util::function::IntPredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind);
	static ref<java::util::stream::TerminalOp> makeLong(ref<java::util::function::LongPredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind);
	static ref<java::util::stream::TerminalOp> makeDouble(ref<java::util::function::DoublePredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind);

protected:

	MatchOps(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/function/DoublePredicate.h>
#include <scapix/java_api/java/util/function/IntPredicate.h>
#include <scapix/java_api/java/util/function/LongPredicate.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/stream/MatchOps_MatchKind.h>
#include <scapix/java_api/java/util/stream/TerminalOp.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::TerminalOp> MatchOps::makeRef(ref<java::util::function::Predicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind) { return call_static_method<SCAPIX_META_STRING("makeRef"), ref<java::util::stream::TerminalOp>>(predicate, matchKind); }
inline ref<java::util::stream::TerminalOp> MatchOps::makeInt(ref<java::util::function::IntPredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind) { return call_static_method<SCAPIX_META_STRING("makeInt"), ref<java::util::stream::TerminalOp>>(predicate, matchKind); }
inline ref<java::util::stream::TerminalOp> MatchOps::makeLong(ref<java::util::function::LongPredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind) { return call_static_method<SCAPIX_META_STRING("makeLong"), ref<java::util::stream::TerminalOp>>(predicate, matchKind); }
inline ref<java::util::stream::TerminalOp> MatchOps::makeDouble(ref<java::util::function::DoublePredicate> predicate, ref<java::util::stream::MatchOps_MatchKind> matchKind) { return call_static_method<SCAPIX_META_STRING("makeDouble"), ref<java::util::stream::TerminalOp>>(predicate, matchKind); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_MATCHOPS_H
