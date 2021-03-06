// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/animation/Animator.h>

#ifndef SCAPIX_ANDROID_ANIMATION_ANIMATORSET_H
#define SCAPIX_ANDROID_ANIMATION_ANIMATORSET_H

namespace scapix::java_api {

namespace android::animation { class AnimatorSet_Builder; }
namespace android::animation { class TimeInterpolator; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class ArrayList; }
namespace java::util { class Collection; }
namespace java::util { class List; }

namespace android::animation {

class AnimatorSet : public object_base<SCAPIX_META_STRING("android/animation/AnimatorSet"),
	android::animation::Animator>
{
public:

	using Builder = AnimatorSet_Builder;

	static ref<AnimatorSet> new_object();
	void playTogether(ref<link::java::array<android::animation::Animator>> items);
	void playTogether(ref<java::util::Collection> items);
	void playSequentially(ref<link::java::array<android::animation::Animator>> items);
	void playSequentially(ref<java::util::List> items);
	ref<java::util::ArrayList> getChildAnimations();
	void setTarget(ref<java::lang::Object> target);
	void setInterpolator(ref<android::animation::TimeInterpolator> interpolator);
	ref<android::animation::TimeInterpolator> getInterpolator();
	ref<android::animation::AnimatorSet_Builder> play(ref<android::animation::Animator> anim);
	void cancel();
	void end();
	jboolean isRunning();
	jboolean isStarted();
	jlong getStartDelay();
	void setStartDelay(jlong startDelay);
	jlong getDuration();
	ref<android::animation::AnimatorSet> setDuration(jlong duration);
	void setupStartValues();
	void setupEndValues();
	void pause();
	void resume();
	void start();
	void setCurrentPlayTime(jlong playTime);
	jlong getCurrentPlayTime();
	ref<android::animation::AnimatorSet> clone();
	void reverse();
	ref<java::lang::String> toString();
	jlong getTotalDuration();

protected:

	AnimatorSet(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/AnimatorSet_Builder.h>
#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::animation {

inline ref<AnimatorSet> AnimatorSet::new_object() { return base_::new_object(); }
inline void AnimatorSet::playTogether(ref<link::java::array<android::animation::Animator>> items) { return call_method<SCAPIX_META_STRING("playTogether"), void>(items); }
inline void AnimatorSet::playTogether(ref<java::util::Collection> items) { return call_method<SCAPIX_META_STRING("playTogether"), void>(items); }
inline void AnimatorSet::playSequentially(ref<link::java::array<android::animation::Animator>> items) { return call_method<SCAPIX_META_STRING("playSequentially"), void>(items); }
inline void AnimatorSet::playSequentially(ref<java::util::List> items) { return call_method<SCAPIX_META_STRING("playSequentially"), void>(items); }
inline ref<java::util::ArrayList> AnimatorSet::getChildAnimations() { return call_method<SCAPIX_META_STRING("getChildAnimations"), ref<java::util::ArrayList>>(); }
inline void AnimatorSet::setTarget(ref<java::lang::Object> target) { return call_method<SCAPIX_META_STRING("setTarget"), void>(target); }
inline void AnimatorSet::setInterpolator(ref<android::animation::TimeInterpolator> interpolator) { return call_method<SCAPIX_META_STRING("setInterpolator"), void>(interpolator); }
inline ref<android::animation::TimeInterpolator> AnimatorSet::getInterpolator() { return call_method<SCAPIX_META_STRING("getInterpolator"), ref<android::animation::TimeInterpolator>>(); }
inline ref<android::animation::AnimatorSet_Builder> AnimatorSet::play(ref<android::animation::Animator> anim) { return call_method<SCAPIX_META_STRING("play"), ref<android::animation::AnimatorSet_Builder>>(anim); }
inline void AnimatorSet::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline void AnimatorSet::end() { return call_method<SCAPIX_META_STRING("end"), void>(); }
inline jboolean AnimatorSet::isRunning() { return call_method<SCAPIX_META_STRING("isRunning"), jboolean>(); }
inline jboolean AnimatorSet::isStarted() { return call_method<SCAPIX_META_STRING("isStarted"), jboolean>(); }
inline jlong AnimatorSet::getStartDelay() { return call_method<SCAPIX_META_STRING("getStartDelay"), jlong>(); }
inline void AnimatorSet::setStartDelay(jlong startDelay) { return call_method<SCAPIX_META_STRING("setStartDelay"), void>(startDelay); }
inline jlong AnimatorSet::getDuration() { return call_method<SCAPIX_META_STRING("getDuration"), jlong>(); }
inline ref<android::animation::AnimatorSet> AnimatorSet::setDuration(jlong duration) { return call_method<SCAPIX_META_STRING("setDuration"), ref<android::animation::AnimatorSet>>(duration); }
inline void AnimatorSet::setupStartValues() { return call_method<SCAPIX_META_STRING("setupStartValues"), void>(); }
inline void AnimatorSet::setupEndValues() { return call_method<SCAPIX_META_STRING("setupEndValues"), void>(); }
inline void AnimatorSet::pause() { return call_method<SCAPIX_META_STRING("pause"), void>(); }
inline void AnimatorSet::resume() { return call_method<SCAPIX_META_STRING("resume"), void>(); }
inline void AnimatorSet::start() { return call_method<SCAPIX_META_STRING("start"), void>(); }
inline void AnimatorSet::setCurrentPlayTime(jlong playTime) { return call_method<SCAPIX_META_STRING("setCurrentPlayTime"), void>(playTime); }
inline jlong AnimatorSet::getCurrentPlayTime() { return call_method<SCAPIX_META_STRING("getCurrentPlayTime"), jlong>(); }
inline ref<android::animation::AnimatorSet> AnimatorSet::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::animation::AnimatorSet>>(); }
inline void AnimatorSet::reverse() { return call_method<SCAPIX_META_STRING("reverse"), void>(); }
inline ref<java::lang::String> AnimatorSet::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jlong AnimatorSet::getTotalDuration() { return call_method<SCAPIX_META_STRING("getTotalDuration"), jlong>(); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_ANIMATORSET_H
