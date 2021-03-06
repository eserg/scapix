// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_H
#define SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_H

namespace scapix::java_api {

namespace android::content { class ComponentName; }
namespace android::content { class Context; }
namespace android::media::browse { class MediaBrowser_ConnectionCallback; }
namespace android::media::browse { class MediaBrowser_ItemCallback; }
namespace android::media::browse { class MediaBrowser_SubscriptionCallback; }
namespace android::media::session { class MediaSession_Token; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }
namespace android::media::browse { class MediaBrowser_MediaItem; }

namespace android::media::browse {

class MediaBrowser : public object_base<SCAPIX_META_STRING("android/media/browse/MediaBrowser"),
	java::lang::Object>
{
public:

	using SubscriptionCallback = MediaBrowser_SubscriptionCallback;
	using MediaItem = MediaBrowser_MediaItem;
	using ItemCallback = MediaBrowser_ItemCallback;
	using ConnectionCallback = MediaBrowser_ConnectionCallback;

	static ref<java::lang::String> EXTRA_PAGE_();
	static ref<java::lang::String> EXTRA_PAGE_SIZE_();

	static ref<MediaBrowser> new_object(ref<android::content::Context> context, ref<android::content::ComponentName> serviceComponent, ref<android::media::browse::MediaBrowser_ConnectionCallback> callback, ref<android::os::Bundle> rootHints);
	void connect();
	void disconnect();
	jboolean isConnected();
	ref<android::content::ComponentName> getServiceComponent();
	ref<java::lang::String> getRoot();
	ref<android::os::Bundle> getExtras();
	ref<android::media::session::MediaSession_Token> getSessionToken();
	void subscribe(ref<java::lang::String> parentId, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback);
	void subscribe(ref<java::lang::String> parentId, ref<android::os::Bundle> options, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback);
	void unsubscribe(ref<java::lang::String> parentId);
	void unsubscribe(ref<java::lang::String> parentId, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback);
	void getItem(ref<java::lang::String> mediaId, ref<android::media::browse::MediaBrowser_ItemCallback> cb);

protected:

	MediaBrowser(handle_type h) : base_(h) {}

};

} // namespace android::media::browse
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/browse/MediaBrowser_ConnectionCallback.h>
#include <scapix/java_api/android/media/browse/MediaBrowser_ItemCallback.h>
#include <scapix/java_api/android/media/browse/MediaBrowser_SubscriptionCallback.h>
#include <scapix/java_api/android/media/session/MediaSession_Token.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::browse {

inline ref<java::lang::String> MediaBrowser::EXTRA_PAGE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_PAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaBrowser::EXTRA_PAGE_SIZE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_PAGE_SIZE"), ref<java::lang::String>>(); }
inline ref<MediaBrowser> MediaBrowser::new_object(ref<android::content::Context> context, ref<android::content::ComponentName> serviceComponent, ref<android::media::browse::MediaBrowser_ConnectionCallback> callback, ref<android::os::Bundle> rootHints) { return base_::new_object(context, serviceComponent, callback, rootHints); }
inline void MediaBrowser::connect() { return call_method<SCAPIX_META_STRING("connect"), void>(); }
inline void MediaBrowser::disconnect() { return call_method<SCAPIX_META_STRING("disconnect"), void>(); }
inline jboolean MediaBrowser::isConnected() { return call_method<SCAPIX_META_STRING("isConnected"), jboolean>(); }
inline ref<android::content::ComponentName> MediaBrowser::getServiceComponent() { return call_method<SCAPIX_META_STRING("getServiceComponent"), ref<android::content::ComponentName>>(); }
inline ref<java::lang::String> MediaBrowser::getRoot() { return call_method<SCAPIX_META_STRING("getRoot"), ref<java::lang::String>>(); }
inline ref<android::os::Bundle> MediaBrowser::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<android::media::session::MediaSession_Token> MediaBrowser::getSessionToken() { return call_method<SCAPIX_META_STRING("getSessionToken"), ref<android::media::session::MediaSession_Token>>(); }
inline void MediaBrowser::subscribe(ref<java::lang::String> parentId, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback) { return call_method<SCAPIX_META_STRING("subscribe"), void>(parentId, callback); }
inline void MediaBrowser::subscribe(ref<java::lang::String> parentId, ref<android::os::Bundle> options, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback) { return call_method<SCAPIX_META_STRING("subscribe"), void>(parentId, options, callback); }
inline void MediaBrowser::unsubscribe(ref<java::lang::String> parentId) { return call_method<SCAPIX_META_STRING("unsubscribe"), void>(parentId); }
inline void MediaBrowser::unsubscribe(ref<java::lang::String> parentId, ref<android::media::browse::MediaBrowser_SubscriptionCallback> callback) { return call_method<SCAPIX_META_STRING("unsubscribe"), void>(parentId, callback); }
inline void MediaBrowser::getItem(ref<java::lang::String> mediaId, ref<android::media::browse::MediaBrowser_ItemCallback> cb) { return call_method<SCAPIX_META_STRING("getItem"), void>(mediaId, cb); }

} // namespace android::media::browse
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_H
