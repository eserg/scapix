// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SYSTEM_OS_H
#define SCAPIX_ANDROID_SYSTEM_OS_H

namespace scapix::java_api {

namespace android::system { class Int64Ref; }
namespace android::system { class StructPollfd; }
namespace android::system { class StructStat; }
namespace android::system { class StructStatVfs; }
namespace android::system { class StructUtsname; }
namespace java::io { class FileDescriptor; }
namespace java::lang { class String; }
namespace java::net { class InetAddress; }
namespace java::net { class InetSocketAddress; }
namespace java::net { class SocketAddress; }
namespace java::nio { class ByteBuffer; }

namespace android::system {

class Os : public object_base<SCAPIX_META_STRING("android/system/Os"),
	java::lang::Object>
{
public:

	static ref<java::io::FileDescriptor> accept(ref<java::io::FileDescriptor> fd, ref<java::net::InetSocketAddress> peerAddress);
	static jboolean access(ref<java::lang::String> path, jint mode);
	static void bind(ref<java::io::FileDescriptor> fd, ref<java::net::InetAddress> address, jint port);
	static void chmod(ref<java::lang::String> path, jint mode);
	static void chown(ref<java::lang::String> path, jint uid, jint gid);
	static void close(ref<java::io::FileDescriptor> fd);
	static void connect(ref<java::io::FileDescriptor> fd, ref<java::net::InetAddress> address, jint port);
	static ref<java::io::FileDescriptor> dup(ref<java::io::FileDescriptor> oldFd);
	static ref<java::io::FileDescriptor> dup2(ref<java::io::FileDescriptor> oldFd, jint newFd);
	static ref<link::java::array<java::lang::String>> environ();
	static void execv(ref<java::lang::String> filename, ref<link::java::array<java::lang::String>> argv);
	static void execve(ref<java::lang::String> filename, ref<link::java::array<java::lang::String>> argv, ref<link::java::array<java::lang::String>> envp);
	static void fchmod(ref<java::io::FileDescriptor> fd, jint mode);
	static void fchown(ref<java::io::FileDescriptor> fd, jint uid, jint gid);
	static void fdatasync(ref<java::io::FileDescriptor> fd);
	static ref<android::system::StructStat> fstat(ref<java::io::FileDescriptor> fd);
	static ref<android::system::StructStatVfs> fstatvfs(ref<java::io::FileDescriptor> fd);
	static void fsync(ref<java::io::FileDescriptor> fd);
	static void ftruncate(ref<java::io::FileDescriptor> fd, jlong length);
	static ref<java::lang::String> gai_strerror(jint error);
	static jint getegid();
	static jint geteuid();
	static jint getgid();
	static ref<java::lang::String> getenv(ref<java::lang::String> name);
	static ref<java::net::SocketAddress> getpeername(ref<java::io::FileDescriptor> fd);
	static jint getpid();
	static jint getppid();
	static ref<java::net::SocketAddress> getsockname(ref<java::io::FileDescriptor> fd);
	static jint gettid();
	static jint getuid();
	static ref<link::java::array<jbyte>> getxattr(ref<java::lang::String> path, ref<java::lang::String> name);
	static ref<java::lang::String> if_indextoname(jint index);
	static jint if_nametoindex(ref<java::lang::String> name);
	static ref<java::net::InetAddress> inet_pton(jint family, ref<java::lang::String> address);
	static jboolean isatty(ref<java::io::FileDescriptor> fd);
	static void kill(jint pid, jint signal);
	static void lchown(ref<java::lang::String> path, jint uid, jint gid);
	static void link(ref<java::lang::String> oldPath, ref<java::lang::String> newPath);
	static void listen(ref<java::io::FileDescriptor> fd, jint backlog);
	static ref<link::java::array<java::lang::String>> listxattr(ref<java::lang::String> path);
	static jlong lseek(ref<java::io::FileDescriptor> fd, jlong offset, jint p3);
	static ref<android::system::StructStat> lstat(ref<java::lang::String> path);
	static void mincore(jlong address, jlong p2, ref<link::java::array<jbyte>> byteCount);
	static void mkdir(ref<java::lang::String> path, jint mode);
	static void mkfifo(ref<java::lang::String> path, jint mode);
	static void mlock(jlong address, jlong p2);
	static jlong mmap(jlong address, jlong p2, jint byteCount, jint p4, ref<java::io::FileDescriptor> prot, jlong flags);
	static void msync(jlong address, jlong p2, jint byteCount);
	static void munlock(jlong address, jlong p2);
	static void munmap(jlong address, jlong p2);
	static ref<java::io::FileDescriptor> open(ref<java::lang::String> path, jint flags, jint mode);
	static ref<link::java::array<java::io::FileDescriptor>> pipe();
	static jint poll(ref<link::java::array<android::system::StructPollfd>> fds, jint timeoutMs);
	static void posix_fallocate(ref<java::io::FileDescriptor> fd, jlong offset, jlong p3);
	static jint prctl(jint option, jlong arg2, jlong p3, jlong arg3, jlong p5);
	static jint pread(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jlong offset);
	static jint pread(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset);
	static jint pwrite(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jlong offset);
	static jint pwrite(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset);
	static jint read(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer);
	static jint read(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount);
	static ref<java::lang::String> readlink(ref<java::lang::String> path);
	static jint readv(ref<java::io::FileDescriptor> fd, ref<link::java::array<java::lang::Object>> buffers, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> byteCounts);
	static jint recvfrom(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jint flags, ref<java::net::InetSocketAddress> srcAddress);
	static jint recvfrom(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, ref<java::net::InetSocketAddress> srcAddress);
	static void remove(ref<java::lang::String> path);
	static void removexattr(ref<java::lang::String> path, ref<java::lang::String> name);
	static void rename(ref<java::lang::String> oldPath, ref<java::lang::String> newPath);
	static jlong sendfile(ref<java::io::FileDescriptor> outFd, ref<java::io::FileDescriptor> inFd, ref<android::system::Int64Ref> offset, jlong byteCount);
	static jint sendto(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jint flags, ref<java::net::InetAddress> inetAddress, jint port);
	static jint sendto(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, ref<java::net::InetAddress> inetAddress, jint port);
	static void setegid(jint egid);
	static void setenv(ref<java::lang::String> name, ref<java::lang::String> value, jboolean overwrite);
	static void seteuid(jint euid);
	static void setgid(jint gid);
	static jint setsid();
	static void setsockoptInt(ref<java::io::FileDescriptor> fd, jint level, jint option, jint value);
	static void setuid(jint uid);
	static void setxattr(ref<java::lang::String> path, ref<java::lang::String> name, ref<link::java::array<jbyte>> value, jint flags);
	static void shutdown(ref<java::io::FileDescriptor> fd, jint how);
	static ref<java::io::FileDescriptor> socket(jint domain, jint type, jint protocol);
	static void socketpair(jint domain, jint type, jint protocol, ref<java::io::FileDescriptor> fd1, ref<java::io::FileDescriptor> fd2);
	static ref<android::system::StructStat> stat(ref<java::lang::String> path);
	static ref<android::system::StructStatVfs> statvfs(ref<java::lang::String> path);
	static ref<java::lang::String> strerror(jint errno);
	static ref<java::lang::String> strsignal(jint signal);
	static void symlink(ref<java::lang::String> oldPath, ref<java::lang::String> newPath);
	static jlong sysconf(jint name);
	static void tcdrain(ref<java::io::FileDescriptor> fd);
	static void tcsendbreak(ref<java::io::FileDescriptor> fd, jint duration);
	static jint umask(jint mask);
	static ref<android::system::StructUtsname> uname();
	static void unsetenv(ref<java::lang::String> name);
	static jint write(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer);
	static jint write(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount);
	static jint writev(ref<java::io::FileDescriptor> fd, ref<link::java::array<java::lang::Object>> buffers, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> byteCounts);

protected:

	Os(handle_type h) : base_(h) {}

};

} // namespace android::system
} // namespace scapix::java_api

#include <scapix/java_api/android/system/Int64Ref.h>
#include <scapix/java_api/android/system/StructPollfd.h>
#include <scapix/java_api/android/system/StructStat.h>
#include <scapix/java_api/android/system/StructStatVfs.h>
#include <scapix/java_api/android/system/StructUtsname.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace android::system {

inline ref<java::io::FileDescriptor> Os::accept(ref<java::io::FileDescriptor> fd, ref<java::net::InetSocketAddress> peerAddress) { return call_static_method<SCAPIX_META_STRING("accept"), ref<java::io::FileDescriptor>>(fd, peerAddress); }
inline jboolean Os::access(ref<java::lang::String> path, jint mode) { return call_static_method<SCAPIX_META_STRING("access"), jboolean>(path, mode); }
inline void Os::bind(ref<java::io::FileDescriptor> fd, ref<java::net::InetAddress> address, jint port) { return call_static_method<SCAPIX_META_STRING("bind"), void>(fd, address, port); }
inline void Os::chmod(ref<java::lang::String> path, jint mode) { return call_static_method<SCAPIX_META_STRING("chmod"), void>(path, mode); }
inline void Os::chown(ref<java::lang::String> path, jint uid, jint gid) { return call_static_method<SCAPIX_META_STRING("chown"), void>(path, uid, gid); }
inline void Os::close(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("close"), void>(fd); }
inline void Os::connect(ref<java::io::FileDescriptor> fd, ref<java::net::InetAddress> address, jint port) { return call_static_method<SCAPIX_META_STRING("connect"), void>(fd, address, port); }
inline ref<java::io::FileDescriptor> Os::dup(ref<java::io::FileDescriptor> oldFd) { return call_static_method<SCAPIX_META_STRING("dup"), ref<java::io::FileDescriptor>>(oldFd); }
inline ref<java::io::FileDescriptor> Os::dup2(ref<java::io::FileDescriptor> oldFd, jint newFd) { return call_static_method<SCAPIX_META_STRING("dup2"), ref<java::io::FileDescriptor>>(oldFd, newFd); }
inline ref<link::java::array<java::lang::String>> Os::environ() { return call_static_method<SCAPIX_META_STRING("environ"), ref<link::java::array<java::lang::String>>>(); }
inline void Os::execv(ref<java::lang::String> filename, ref<link::java::array<java::lang::String>> argv) { return call_static_method<SCAPIX_META_STRING("execv"), void>(filename, argv); }
inline void Os::execve(ref<java::lang::String> filename, ref<link::java::array<java::lang::String>> argv, ref<link::java::array<java::lang::String>> envp) { return call_static_method<SCAPIX_META_STRING("execve"), void>(filename, argv, envp); }
inline void Os::fchmod(ref<java::io::FileDescriptor> fd, jint mode) { return call_static_method<SCAPIX_META_STRING("fchmod"), void>(fd, mode); }
inline void Os::fchown(ref<java::io::FileDescriptor> fd, jint uid, jint gid) { return call_static_method<SCAPIX_META_STRING("fchown"), void>(fd, uid, gid); }
inline void Os::fdatasync(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("fdatasync"), void>(fd); }
inline ref<android::system::StructStat> Os::fstat(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("fstat"), ref<android::system::StructStat>>(fd); }
inline ref<android::system::StructStatVfs> Os::fstatvfs(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("fstatvfs"), ref<android::system::StructStatVfs>>(fd); }
inline void Os::fsync(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("fsync"), void>(fd); }
inline void Os::ftruncate(ref<java::io::FileDescriptor> fd, jlong length) { return call_static_method<SCAPIX_META_STRING("ftruncate"), void>(fd, length); }
inline ref<java::lang::String> Os::gai_strerror(jint error) { return call_static_method<SCAPIX_META_STRING("gai_strerror"), ref<java::lang::String>>(error); }
inline jint Os::getegid() { return call_static_method<SCAPIX_META_STRING("getegid"), jint>(); }
inline jint Os::geteuid() { return call_static_method<SCAPIX_META_STRING("geteuid"), jint>(); }
inline jint Os::getgid() { return call_static_method<SCAPIX_META_STRING("getgid"), jint>(); }
inline ref<java::lang::String> Os::getenv(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getenv"), ref<java::lang::String>>(name); }
inline ref<java::net::SocketAddress> Os::getpeername(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("getpeername"), ref<java::net::SocketAddress>>(fd); }
inline jint Os::getpid() { return call_static_method<SCAPIX_META_STRING("getpid"), jint>(); }
inline jint Os::getppid() { return call_static_method<SCAPIX_META_STRING("getppid"), jint>(); }
inline ref<java::net::SocketAddress> Os::getsockname(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("getsockname"), ref<java::net::SocketAddress>>(fd); }
inline jint Os::gettid() { return call_static_method<SCAPIX_META_STRING("gettid"), jint>(); }
inline jint Os::getuid() { return call_static_method<SCAPIX_META_STRING("getuid"), jint>(); }
inline ref<link::java::array<jbyte>> Os::getxattr(ref<java::lang::String> path, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getxattr"), ref<link::java::array<jbyte>>>(path, name); }
inline ref<java::lang::String> Os::if_indextoname(jint index) { return call_static_method<SCAPIX_META_STRING("if_indextoname"), ref<java::lang::String>>(index); }
inline jint Os::if_nametoindex(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("if_nametoindex"), jint>(name); }
inline ref<java::net::InetAddress> Os::inet_pton(jint family, ref<java::lang::String> address) { return call_static_method<SCAPIX_META_STRING("inet_pton"), ref<java::net::InetAddress>>(family, address); }
inline jboolean Os::isatty(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("isatty"), jboolean>(fd); }
inline void Os::kill(jint pid, jint signal) { return call_static_method<SCAPIX_META_STRING("kill"), void>(pid, signal); }
inline void Os::lchown(ref<java::lang::String> path, jint uid, jint gid) { return call_static_method<SCAPIX_META_STRING("lchown"), void>(path, uid, gid); }
inline void Os::link(ref<java::lang::String> oldPath, ref<java::lang::String> newPath) { return call_static_method<SCAPIX_META_STRING("link"), void>(oldPath, newPath); }
inline void Os::listen(ref<java::io::FileDescriptor> fd, jint backlog) { return call_static_method<SCAPIX_META_STRING("listen"), void>(fd, backlog); }
inline ref<link::java::array<java::lang::String>> Os::listxattr(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("listxattr"), ref<link::java::array<java::lang::String>>>(path); }
inline jlong Os::lseek(ref<java::io::FileDescriptor> fd, jlong offset, jint p3) { return call_static_method<SCAPIX_META_STRING("lseek"), jlong>(fd, offset, p3); }
inline ref<android::system::StructStat> Os::lstat(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("lstat"), ref<android::system::StructStat>>(path); }
inline void Os::mincore(jlong address, jlong p2, ref<link::java::array<jbyte>> byteCount) { return call_static_method<SCAPIX_META_STRING("mincore"), void>(address, p2, byteCount); }
inline void Os::mkdir(ref<java::lang::String> path, jint mode) { return call_static_method<SCAPIX_META_STRING("mkdir"), void>(path, mode); }
inline void Os::mkfifo(ref<java::lang::String> path, jint mode) { return call_static_method<SCAPIX_META_STRING("mkfifo"), void>(path, mode); }
inline void Os::mlock(jlong address, jlong p2) { return call_static_method<SCAPIX_META_STRING("mlock"), void>(address, p2); }
inline jlong Os::mmap(jlong address, jlong p2, jint byteCount, jint p4, ref<java::io::FileDescriptor> prot, jlong flags) { return call_static_method<SCAPIX_META_STRING("mmap"), jlong>(address, p2, byteCount, p4, prot, flags); }
inline void Os::msync(jlong address, jlong p2, jint byteCount) { return call_static_method<SCAPIX_META_STRING("msync"), void>(address, p2, byteCount); }
inline void Os::munlock(jlong address, jlong p2) { return call_static_method<SCAPIX_META_STRING("munlock"), void>(address, p2); }
inline void Os::munmap(jlong address, jlong p2) { return call_static_method<SCAPIX_META_STRING("munmap"), void>(address, p2); }
inline ref<java::io::FileDescriptor> Os::open(ref<java::lang::String> path, jint flags, jint mode) { return call_static_method<SCAPIX_META_STRING("open"), ref<java::io::FileDescriptor>>(path, flags, mode); }
inline ref<link::java::array<java::io::FileDescriptor>> Os::pipe() { return call_static_method<SCAPIX_META_STRING("pipe"), ref<link::java::array<java::io::FileDescriptor>>>(); }
inline jint Os::poll(ref<link::java::array<android::system::StructPollfd>> fds, jint timeoutMs) { return call_static_method<SCAPIX_META_STRING("poll"), jint>(fds, timeoutMs); }
inline void Os::posix_fallocate(ref<java::io::FileDescriptor> fd, jlong offset, jlong p3) { return call_static_method<SCAPIX_META_STRING("posix_fallocate"), void>(fd, offset, p3); }
inline jint Os::prctl(jint option, jlong arg2, jlong p3, jlong arg3, jlong p5) { return call_static_method<SCAPIX_META_STRING("prctl"), jint>(option, arg2, p3, arg3, p5); }
inline jint Os::pread(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jlong offset) { return call_static_method<SCAPIX_META_STRING("pread"), jint>(fd, buffer, offset); }
inline jint Os::pread(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset) { return call_static_method<SCAPIX_META_STRING("pread"), jint>(fd, bytes, byteOffset, byteCount, offset); }
inline jint Os::pwrite(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jlong offset) { return call_static_method<SCAPIX_META_STRING("pwrite"), jint>(fd, buffer, offset); }
inline jint Os::pwrite(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset) { return call_static_method<SCAPIX_META_STRING("pwrite"), jint>(fd, bytes, byteOffset, byteCount, offset); }
inline jint Os::read(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer) { return call_static_method<SCAPIX_META_STRING("read"), jint>(fd, buffer); }
inline jint Os::read(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount) { return call_static_method<SCAPIX_META_STRING("read"), jint>(fd, bytes, byteOffset, byteCount); }
inline ref<java::lang::String> Os::readlink(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("readlink"), ref<java::lang::String>>(path); }
inline jint Os::readv(ref<java::io::FileDescriptor> fd, ref<link::java::array<java::lang::Object>> buffers, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> byteCounts) { return call_static_method<SCAPIX_META_STRING("readv"), jint>(fd, buffers, offsets, byteCounts); }
inline jint Os::recvfrom(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jint flags, ref<java::net::InetSocketAddress> srcAddress) { return call_static_method<SCAPIX_META_STRING("recvfrom"), jint>(fd, buffer, flags, srcAddress); }
inline jint Os::recvfrom(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, ref<java::net::InetSocketAddress> srcAddress) { return call_static_method<SCAPIX_META_STRING("recvfrom"), jint>(fd, bytes, byteOffset, byteCount, flags, srcAddress); }
inline void Os::remove(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("remove"), void>(path); }
inline void Os::removexattr(ref<java::lang::String> path, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("removexattr"), void>(path, name); }
inline void Os::rename(ref<java::lang::String> oldPath, ref<java::lang::String> newPath) { return call_static_method<SCAPIX_META_STRING("rename"), void>(oldPath, newPath); }
inline jlong Os::sendfile(ref<java::io::FileDescriptor> outFd, ref<java::io::FileDescriptor> inFd, ref<android::system::Int64Ref> offset, jlong byteCount) { return call_static_method<SCAPIX_META_STRING("sendfile"), jlong>(outFd, inFd, offset, byteCount); }
inline jint Os::sendto(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer, jint flags, ref<java::net::InetAddress> inetAddress, jint port) { return call_static_method<SCAPIX_META_STRING("sendto"), jint>(fd, buffer, flags, inetAddress, port); }
inline jint Os::sendto(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, ref<java::net::InetAddress> inetAddress, jint port) { return call_static_method<SCAPIX_META_STRING("sendto"), jint>(fd, bytes, byteOffset, byteCount, flags, inetAddress, port); }
inline void Os::setegid(jint egid) { return call_static_method<SCAPIX_META_STRING("setegid"), void>(egid); }
inline void Os::setenv(ref<java::lang::String> name, ref<java::lang::String> value, jboolean overwrite) { return call_static_method<SCAPIX_META_STRING("setenv"), void>(name, value, overwrite); }
inline void Os::seteuid(jint euid) { return call_static_method<SCAPIX_META_STRING("seteuid"), void>(euid); }
inline void Os::setgid(jint gid) { return call_static_method<SCAPIX_META_STRING("setgid"), void>(gid); }
inline jint Os::setsid() { return call_static_method<SCAPIX_META_STRING("setsid"), jint>(); }
inline void Os::setsockoptInt(ref<java::io::FileDescriptor> fd, jint level, jint option, jint value) { return call_static_method<SCAPIX_META_STRING("setsockoptInt"), void>(fd, level, option, value); }
inline void Os::setuid(jint uid) { return call_static_method<SCAPIX_META_STRING("setuid"), void>(uid); }
inline void Os::setxattr(ref<java::lang::String> path, ref<java::lang::String> name, ref<link::java::array<jbyte>> value, jint flags) { return call_static_method<SCAPIX_META_STRING("setxattr"), void>(path, name, value, flags); }
inline void Os::shutdown(ref<java::io::FileDescriptor> fd, jint how) { return call_static_method<SCAPIX_META_STRING("shutdown"), void>(fd, how); }
inline ref<java::io::FileDescriptor> Os::socket(jint domain, jint type, jint protocol) { return call_static_method<SCAPIX_META_STRING("socket"), ref<java::io::FileDescriptor>>(domain, type, protocol); }
inline void Os::socketpair(jint domain, jint type, jint protocol, ref<java::io::FileDescriptor> fd1, ref<java::io::FileDescriptor> fd2) { return call_static_method<SCAPIX_META_STRING("socketpair"), void>(domain, type, protocol, fd1, fd2); }
inline ref<android::system::StructStat> Os::stat(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("stat"), ref<android::system::StructStat>>(path); }
inline ref<android::system::StructStatVfs> Os::statvfs(ref<java::lang::String> path) { return call_static_method<SCAPIX_META_STRING("statvfs"), ref<android::system::StructStatVfs>>(path); }
inline ref<java::lang::String> Os::strerror(jint errno) { return call_static_method<SCAPIX_META_STRING("strerror"), ref<java::lang::String>>(errno); }
inline ref<java::lang::String> Os::strsignal(jint signal) { return call_static_method<SCAPIX_META_STRING("strsignal"), ref<java::lang::String>>(signal); }
inline void Os::symlink(ref<java::lang::String> oldPath, ref<java::lang::String> newPath) { return call_static_method<SCAPIX_META_STRING("symlink"), void>(oldPath, newPath); }
inline jlong Os::sysconf(jint name) { return call_static_method<SCAPIX_META_STRING("sysconf"), jlong>(name); }
inline void Os::tcdrain(ref<java::io::FileDescriptor> fd) { return call_static_method<SCAPIX_META_STRING("tcdrain"), void>(fd); }
inline void Os::tcsendbreak(ref<java::io::FileDescriptor> fd, jint duration) { return call_static_method<SCAPIX_META_STRING("tcsendbreak"), void>(fd, duration); }
inline jint Os::umask(jint mask) { return call_static_method<SCAPIX_META_STRING("umask"), jint>(mask); }
inline ref<android::system::StructUtsname> Os::uname() { return call_static_method<SCAPIX_META_STRING("uname"), ref<android::system::StructUtsname>>(); }
inline void Os::unsetenv(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("unsetenv"), void>(name); }
inline jint Os::write(ref<java::io::FileDescriptor> fd, ref<java::nio::ByteBuffer> buffer) { return call_static_method<SCAPIX_META_STRING("write"), jint>(fd, buffer); }
inline jint Os::write(ref<java::io::FileDescriptor> fd, ref<link::java::array<jbyte>> bytes, jint byteOffset, jint byteCount) { return call_static_method<SCAPIX_META_STRING("write"), jint>(fd, bytes, byteOffset, byteCount); }
inline jint Os::writev(ref<java::io::FileDescriptor> fd, ref<link::java::array<java::lang::Object>> buffers, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> byteCounts) { return call_static_method<SCAPIX_META_STRING("writev"), jint>(fd, buffers, offsets, byteCounts); }

} // namespace android::system
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SYSTEM_OS_H
