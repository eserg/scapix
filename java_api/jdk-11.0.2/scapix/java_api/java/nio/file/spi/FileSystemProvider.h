// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER_H
#define SCAPIX_JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class OutputStream; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::net { class URI; }
namespace java::nio::channels { class AsynchronousFileChannel; }
namespace java::nio::channels { class FileChannel; }
namespace java::nio::channels { class SeekableByteChannel; }
namespace java::nio::file { class AccessMode; }
namespace java::nio::file { class CopyOption; }
namespace java::nio::file { class DirectoryStream; }
namespace java::nio::file { class DirectoryStream_Filter; }
namespace java::nio::file { class FileStore; }
namespace java::nio::file { class FileSystem; }
namespace java::nio::file { class LinkOption; }
namespace java::nio::file { class OpenOption; }
namespace java::nio::file { class Path; }
namespace java::nio::file::attribute { class BasicFileAttributes; }
namespace java::nio::file::attribute { class FileAttribute; }
namespace java::nio::file::attribute { class FileAttributeView; }
namespace java::util { class List; }
namespace java::util { class Map; }
namespace java::util { class Set; }
namespace java::util::concurrent { class ExecutorService; }

namespace java::nio::file::spi {

class FileSystemProvider : public object_base<SCAPIX_META_STRING("java/nio/file/spi/FileSystemProvider"),
	java::lang::Object>
{
public:

	static ref<java::util::List> installedProviders();
	ref<java::lang::String> getScheme();
	ref<java::nio::file::FileSystem> newFileSystem(ref<java::net::URI> p1, ref<java::util::Map> p2);
	ref<java::nio::file::FileSystem> getFileSystem(ref<java::net::URI> p1);
	ref<java::nio::file::Path> getPath(ref<java::net::URI> p1);
	ref<java::nio::file::FileSystem> newFileSystem(ref<java::nio::file::Path> path, ref<java::util::Map> env);
	ref<java::io::InputStream> newInputStream(ref<java::nio::file::Path> path, ref<link::java::array<java::nio::file::OpenOption>> options);
	ref<java::io::OutputStream> newOutputStream(ref<java::nio::file::Path> path, ref<link::java::array<java::nio::file::OpenOption>> options);
	ref<java::nio::channels::FileChannel> newFileChannel(ref<java::nio::file::Path> path, ref<java::util::Set> options, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs);
	ref<java::nio::channels::AsynchronousFileChannel> newAsynchronousFileChannel(ref<java::nio::file::Path> path, ref<java::util::Set> options, ref<java::util::concurrent::ExecutorService> executor, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs);
	ref<java::nio::channels::SeekableByteChannel> newByteChannel(ref<java::nio::file::Path> p1, ref<java::util::Set> p2, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p3);
	ref<java::nio::file::DirectoryStream> newDirectoryStream(ref<java::nio::file::Path> p1, ref<java::nio::file::DirectoryStream_Filter> p2);
	void createDirectory(ref<java::nio::file::Path> p1, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p2);
	void createSymbolicLink(ref<java::nio::file::Path> link, ref<java::nio::file::Path> target, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs);
	void createLink(ref<java::nio::file::Path> link, ref<java::nio::file::Path> existing);
	void delete_(ref<java::nio::file::Path> p1);
	jboolean deleteIfExists(ref<java::nio::file::Path> path);
	ref<java::nio::file::Path> readSymbolicLink(ref<java::nio::file::Path> link);
	void copy(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2, ref<link::java::array<java::nio::file::CopyOption>> p3);
	void move(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2, ref<link::java::array<java::nio::file::CopyOption>> p3);
	jboolean isSameFile(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2);
	jboolean isHidden(ref<java::nio::file::Path> p1);
	ref<java::nio::file::FileStore> getFileStore(ref<java::nio::file::Path> p1);
	void checkAccess(ref<java::nio::file::Path> p1, ref<link::java::array<java::nio::file::AccessMode>> p2);
	ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(ref<java::nio::file::Path> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3);
	ref<java::nio::file::attribute::BasicFileAttributes> readAttributes(ref<java::nio::file::Path> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3);
	ref<java::util::Map> readAttributes(ref<java::nio::file::Path> p1, ref<java::lang::String> p2, ref<link::java::array<java::nio::file::LinkOption>> p3);
	void setAttribute(ref<java::nio::file::Path> p1, ref<java::lang::String> p2, ref<java::lang::Object> p3, ref<link::java::array<java::nio::file::LinkOption>> p4);

protected:

	FileSystemProvider(handle_type h) : base_(h) {}

};

} // namespace java::nio::file::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/nio/channels/AsynchronousFileChannel.h>
#include <scapix/java_api/java/nio/channels/FileChannel.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#include <scapix/java_api/java/nio/file/AccessMode.h>
#include <scapix/java_api/java/nio/file/CopyOption.h>
#include <scapix/java_api/java/nio/file/DirectoryStream.h>
#include <scapix/java_api/java/nio/file/DirectoryStream_Filter.h>
#include <scapix/java_api/java/nio/file/FileStore.h>
#include <scapix/java_api/java/nio/file/FileSystem.h>
#include <scapix/java_api/java/nio/file/LinkOption.h>
#include <scapix/java_api/java/nio/file/OpenOption.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributes.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttributeView.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>

namespace scapix::java_api {
namespace java::nio::file::spi {

inline ref<java::util::List> FileSystemProvider::installedProviders() { return call_static_method<SCAPIX_META_STRING("installedProviders"), ref<java::util::List>>(); }
inline ref<java::lang::String> FileSystemProvider::getScheme() { return call_method<SCAPIX_META_STRING("getScheme"), ref<java::lang::String>>(); }
inline ref<java::nio::file::FileSystem> FileSystemProvider::newFileSystem(ref<java::net::URI> p1, ref<java::util::Map> p2) { return call_method<SCAPIX_META_STRING("newFileSystem"), ref<java::nio::file::FileSystem>>(p1, p2); }
inline ref<java::nio::file::FileSystem> FileSystemProvider::getFileSystem(ref<java::net::URI> p1) { return call_method<SCAPIX_META_STRING("getFileSystem"), ref<java::nio::file::FileSystem>>(p1); }
inline ref<java::nio::file::Path> FileSystemProvider::getPath(ref<java::net::URI> p1) { return call_method<SCAPIX_META_STRING("getPath"), ref<java::nio::file::Path>>(p1); }
inline ref<java::nio::file::FileSystem> FileSystemProvider::newFileSystem(ref<java::nio::file::Path> path, ref<java::util::Map> env) { return call_method<SCAPIX_META_STRING("newFileSystem"), ref<java::nio::file::FileSystem>>(path, env); }
inline ref<java::io::InputStream> FileSystemProvider::newInputStream(ref<java::nio::file::Path> path, ref<link::java::array<java::nio::file::OpenOption>> options) { return call_method<SCAPIX_META_STRING("newInputStream"), ref<java::io::InputStream>>(path, options); }
inline ref<java::io::OutputStream> FileSystemProvider::newOutputStream(ref<java::nio::file::Path> path, ref<link::java::array<java::nio::file::OpenOption>> options) { return call_method<SCAPIX_META_STRING("newOutputStream"), ref<java::io::OutputStream>>(path, options); }
inline ref<java::nio::channels::FileChannel> FileSystemProvider::newFileChannel(ref<java::nio::file::Path> path, ref<java::util::Set> options, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<SCAPIX_META_STRING("newFileChannel"), ref<java::nio::channels::FileChannel>>(path, options, attrs); }
inline ref<java::nio::channels::AsynchronousFileChannel> FileSystemProvider::newAsynchronousFileChannel(ref<java::nio::file::Path> path, ref<java::util::Set> options, ref<java::util::concurrent::ExecutorService> executor, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<SCAPIX_META_STRING("newAsynchronousFileChannel"), ref<java::nio::channels::AsynchronousFileChannel>>(path, options, executor, attrs); }
inline ref<java::nio::channels::SeekableByteChannel> FileSystemProvider::newByteChannel(ref<java::nio::file::Path> p1, ref<java::util::Set> p2, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p3) { return call_method<SCAPIX_META_STRING("newByteChannel"), ref<java::nio::channels::SeekableByteChannel>>(p1, p2, p3); }
inline ref<java::nio::file::DirectoryStream> FileSystemProvider::newDirectoryStream(ref<java::nio::file::Path> p1, ref<java::nio::file::DirectoryStream_Filter> p2) { return call_method<SCAPIX_META_STRING("newDirectoryStream"), ref<java::nio::file::DirectoryStream>>(p1, p2); }
inline void FileSystemProvider::createDirectory(ref<java::nio::file::Path> p1, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p2) { return call_method<SCAPIX_META_STRING("createDirectory"), void>(p1, p2); }
inline void FileSystemProvider::createSymbolicLink(ref<java::nio::file::Path> link, ref<java::nio::file::Path> target, ref<link::java::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<SCAPIX_META_STRING("createSymbolicLink"), void>(link, target, attrs); }
inline void FileSystemProvider::createLink(ref<java::nio::file::Path> link, ref<java::nio::file::Path> existing) { return call_method<SCAPIX_META_STRING("createLink"), void>(link, existing); }
inline void FileSystemProvider::delete_(ref<java::nio::file::Path> p1) { return call_method<SCAPIX_META_STRING("delete"), void>(p1); }
inline jboolean FileSystemProvider::deleteIfExists(ref<java::nio::file::Path> path) { return call_method<SCAPIX_META_STRING("deleteIfExists"), jboolean>(path); }
inline ref<java::nio::file::Path> FileSystemProvider::readSymbolicLink(ref<java::nio::file::Path> link) { return call_method<SCAPIX_META_STRING("readSymbolicLink"), ref<java::nio::file::Path>>(link); }
inline void FileSystemProvider::copy(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2, ref<link::java::array<java::nio::file::CopyOption>> p3) { return call_method<SCAPIX_META_STRING("copy"), void>(p1, p2, p3); }
inline void FileSystemProvider::move(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2, ref<link::java::array<java::nio::file::CopyOption>> p3) { return call_method<SCAPIX_META_STRING("move"), void>(p1, p2, p3); }
inline jboolean FileSystemProvider::isSameFile(ref<java::nio::file::Path> p1, ref<java::nio::file::Path> p2) { return call_method<SCAPIX_META_STRING("isSameFile"), jboolean>(p1, p2); }
inline jboolean FileSystemProvider::isHidden(ref<java::nio::file::Path> p1) { return call_method<SCAPIX_META_STRING("isHidden"), jboolean>(p1); }
inline ref<java::nio::file::FileStore> FileSystemProvider::getFileStore(ref<java::nio::file::Path> p1) { return call_method<SCAPIX_META_STRING("getFileStore"), ref<java::nio::file::FileStore>>(p1); }
inline void FileSystemProvider::checkAccess(ref<java::nio::file::Path> p1, ref<link::java::array<java::nio::file::AccessMode>> p2) { return call_method<SCAPIX_META_STRING("checkAccess"), void>(p1, p2); }
inline ref<java::nio::file::attribute::FileAttributeView> FileSystemProvider::getFileAttributeView(ref<java::nio::file::Path> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3) { return call_method<SCAPIX_META_STRING("getFileAttributeView"), ref<java::nio::file::attribute::FileAttributeView>>(p1, p2, p3); }
inline ref<java::nio::file::attribute::BasicFileAttributes> FileSystemProvider::readAttributes(ref<java::nio::file::Path> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3) { return call_method<SCAPIX_META_STRING("readAttributes"), ref<java::nio::file::attribute::BasicFileAttributes>>(p1, p2, p3); }
inline ref<java::util::Map> FileSystemProvider::readAttributes(ref<java::nio::file::Path> p1, ref<java::lang::String> p2, ref<link::java::array<java::nio::file::LinkOption>> p3) { return call_method<SCAPIX_META_STRING("readAttributes"), ref<java::util::Map>>(p1, p2, p3); }
inline void FileSystemProvider::setAttribute(ref<java::nio::file::Path> p1, ref<java::lang::String> p2, ref<java::lang::Object> p3, ref<link::java::array<java::nio::file::LinkOption>> p4) { return call_method<SCAPIX_META_STRING("setAttribute"), void>(p1, p2, p3, p4); }

} // namespace java::nio::file::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER_H
