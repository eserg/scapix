// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/KeyManager.h>

#ifndef SCAPIX_JAVAX_NET_SSL_X509KEYMANAGER_H
#define SCAPIX_JAVAX_NET_SSL_X509KEYMANAGER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::net { class Socket; }
namespace java::security { class Principal; }
namespace java::security { class PrivateKey; }
namespace java::security::cert { class X509Certificate; }

namespace javax::net::ssl {

class X509KeyManager : public object_base<SCAPIX_META_STRING("javax/net/ssl/X509KeyManager"),
	java::lang::Object,
	javax::net::ssl::KeyManager>
{
public:

	ref<link::java::array<java::lang::String>> getClientAliases(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2);
	ref<java::lang::String> chooseClientAlias(ref<link::java::array<java::lang::String>> p1, ref<link::java::array<java::security::Principal>> p2, ref<java::net::Socket> p3);
	ref<link::java::array<java::lang::String>> getServerAliases(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2);
	ref<java::lang::String> chooseServerAlias(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2, ref<java::net::Socket> p3);
	ref<link::java::array<java::security::cert::X509Certificate>> getCertificateChain(ref<java::lang::String> p1);
	ref<java::security::PrivateKey> getPrivateKey(ref<java::lang::String> p1);

protected:

	X509KeyManager(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<link::java::array<java::lang::String>> X509KeyManager::getClientAliases(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2) { return call_method<SCAPIX_META_STRING("getClientAliases"), ref<link::java::array<java::lang::String>>>(p1, p2); }
inline ref<java::lang::String> X509KeyManager::chooseClientAlias(ref<link::java::array<java::lang::String>> p1, ref<link::java::array<java::security::Principal>> p2, ref<java::net::Socket> p3) { return call_method<SCAPIX_META_STRING("chooseClientAlias"), ref<java::lang::String>>(p1, p2, p3); }
inline ref<link::java::array<java::lang::String>> X509KeyManager::getServerAliases(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2) { return call_method<SCAPIX_META_STRING("getServerAliases"), ref<link::java::array<java::lang::String>>>(p1, p2); }
inline ref<java::lang::String> X509KeyManager::chooseServerAlias(ref<java::lang::String> p1, ref<link::java::array<java::security::Principal>> p2, ref<java::net::Socket> p3) { return call_method<SCAPIX_META_STRING("chooseServerAlias"), ref<java::lang::String>>(p1, p2, p3); }
inline ref<link::java::array<java::security::cert::X509Certificate>> X509KeyManager::getCertificateChain(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getCertificateChain"), ref<link::java::array<java::security::cert::X509Certificate>>>(p1); }
inline ref<java::security::PrivateKey> X509KeyManager::getPrivateKey(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getPrivateKey"), ref<java::security::PrivateKey>>(p1); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_X509KEYMANAGER_H
