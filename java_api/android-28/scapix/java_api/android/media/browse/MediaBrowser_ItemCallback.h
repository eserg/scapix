// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_ITEMCALLBACK_H
#define SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_ITEMCALLBACK_H

namespace scapix::java_api {

namespace android::media::browse { class MediaBrowser_MediaItem; }
namespace java::lang { class String; }

namespace android::media::browse {

class MediaBrowser_ItemCallback : public object_base<SCAPIX_META_STRING("android/media/browse/MediaBrowser$ItemCallback"),
	java::lang::Object>
{
public:

	static ref<MediaBrowser_ItemCallback> new_object();
	void onItemLoaded(ref<android::media::browse::MediaBrowser_MediaItem> item);
	void onError(ref<java::lang::String> mediaId);

protected:

	MediaBrowser_ItemCallback(handle_type h) : base_(h) {}

};

} // namespace android::media::browse
} // namespace scapix::java_api

#include <scapix/java_api/android/media/browse/MediaBrowser_MediaItem.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::browse {

inline ref<MediaBrowser_ItemCallback> MediaBrowser_ItemCallback::new_object() { return base_::new_object(); }
inline void MediaBrowser_ItemCallback::onItemLoaded(ref<android::media::browse::MediaBrowser_MediaItem> item) { return call_method<SCAPIX_META_STRING("onItemLoaded"), void>(item); }
inline void MediaBrowser_ItemCallback::onError(ref<java::lang::String> mediaId) { return call_method<SCAPIX_META_STRING("onError"), void>(mediaId); }

} // namespace android::media::browse
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_ITEMCALLBACK_H
