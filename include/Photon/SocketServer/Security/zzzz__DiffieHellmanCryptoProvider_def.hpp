#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiffieHellmanCryptoProvider)
namespace Photon::SocketServer::Security {
class ICryptoProvider;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Security::Cryptography {
class Rijndael;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::SocketServer::Security {
class DiffieHellmanCryptoProvider;
}
// Write type traits
MARK_REF_PTR_T(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider);
// Type: Photon.SocketServer.Security::DiffieHellmanCryptoProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::SocketServer::Security {
// Is value type: false
// CS Name: ::Photon.SocketServer.Security::DiffieHellmanCryptoProvider*
class CORDL_TYPE DiffieHellmanCryptoProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_PublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey;

  /// @brief Field crypto, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_crypto, put = __cordl_internal_set_crypto))::System::Security::Cryptography::Rijndael* crypto;

  /// @brief Field prime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_prime, put = __cordl_internal_set_prime))::System::Numerics::BigInteger prime;

  /// @brief Field primeRoot, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_primeRoot, put = setStaticF_primeRoot))::System::Numerics::BigInteger primeRoot;

  /// @brief Field publicKey, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey))::System::Numerics::BigInteger publicKey;

  /// @brief Field secret, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret))::System::Numerics::BigInteger secret;

  /// @brief Field sharedKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedKey, put = __cordl_internal_set_sharedKey))::ArrayW<uint8_t, ::Array<uint8_t>*> sharedKey;

  /// @brief Convert operator to "::Photon::SocketServer::Security::ICryptoProvider"
  constexpr operator ::Photon::SocketServer::Security::ICryptoProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CalculatePublicKey, addr 0x2ac9c70, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Numerics::BigInteger CalculatePublicKey();

  /// @brief Method CalculateSharedKey, addr 0x2aca218, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Numerics::BigInteger CalculateSharedKey(::System::Numerics::BigInteger otherPartyPublicKey);

  /// @brief Method Decrypt, addr 0x2aca4dc, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Decrypt, addr 0x2aca4f8, size 0x21c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method DeriveSharedKey, addr 0x2ac9ee8, size 0x288, virtual true, abstract: false, final true
  inline void DeriveSharedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> otherPartyPublicKey);

  /// @brief Method Dispose, addr 0x2aca714, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2aca76c, size 0x4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Encrypt, addr 0x2aca2a4, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Encrypt, addr 0x2aca2c0, size 0x21c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method GenerateRandomSecret, addr 0x2ac9afc, size 0x174, virtual false, abstract: false, final false
  inline ::System::Numerics::BigInteger GenerateRandomSecret(int32_t secretLength);

  /// @brief Method MsBigIntArrayToPhotonBigIntArray, addr 0x2ac9e48, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MsBigIntArrayToPhotonBigIntArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  static inline ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider* New_ctor();

  static inline ::Photon::SocketServer::Security::DiffieHellmanCryptoProvider* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> cryptoKey);

  /// @brief Method PhotonBigIntArrayToMsBigIntArray, addr 0x2aca170, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PhotonBigIntArrayToMsBigIntArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  constexpr ::System::Security::Cryptography::Rijndael*& __cordl_internal_get_crypto();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Rijndael*> const& __cordl_internal_get_crypto() const;

  constexpr ::System::Numerics::BigInteger const& __cordl_internal_get_prime() const;

  constexpr ::System::Numerics::BigInteger& __cordl_internal_get_prime();

  constexpr ::System::Numerics::BigInteger const& __cordl_internal_get_publicKey() const;

  constexpr ::System::Numerics::BigInteger& __cordl_internal_get_publicKey();

  constexpr ::System::Numerics::BigInteger const& __cordl_internal_get_secret() const;

  constexpr ::System::Numerics::BigInteger& __cordl_internal_get_secret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sharedKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sharedKey();

  constexpr void __cordl_internal_set_crypto(::System::Security::Cryptography::Rijndael* value);

  constexpr void __cordl_internal_set_prime(::System::Numerics::BigInteger value);

  constexpr void __cordl_internal_set_publicKey(::System::Numerics::BigInteger value);

  constexpr void __cordl_internal_set_secret(::System::Numerics::BigInteger value);

  constexpr void __cordl_internal_set_sharedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2ac9a58, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ac9d24, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> cryptoKey);

  static inline ::System::Numerics::BigInteger getStaticF_primeRoot();

  /// @brief Method get_IsInitialized, addr 0x2ac9e08, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsInitialized();

  /// @brief Method get_PublicKey, addr 0x2ac9e18, size 0x30, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKey();

  /// @brief Convert to "::Photon::SocketServer::Security::ICryptoProvider"
  constexpr ::Photon::SocketServer::Security::ICryptoProvider* i___Photon__SocketServer__Security__ICryptoProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_primeRoot(::System::Numerics::BigInteger value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiffieHellmanCryptoProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanCryptoProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiffieHellmanCryptoProvider(DiffieHellmanCryptoProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanCryptoProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiffieHellmanCryptoProvider(DiffieHellmanCryptoProvider const&) = delete;

  /// @brief Field prime, offset: 0x10, size: 0x10, def value: None
  ::System::Numerics::BigInteger ___prime;

  /// @brief Field secret, offset: 0x20, size: 0x10, def value: None
  ::System::Numerics::BigInteger ___secret;

  /// @brief Field publicKey, offset: 0x30, size: 0x10, def value: None
  ::System::Numerics::BigInteger ___publicKey;

  /// @brief Field crypto, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::Rijndael* ___crypto;

  /// @brief Field sharedKey, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sharedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, ___prime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, ___secret) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, ___publicKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, ___crypto) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider, ___sharedKey) == 0x48, "Offset mismatch!");

} // namespace Photon::SocketServer::Security
NEED_NO_BOX(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*, "Photon.SocketServer.Security", "DiffieHellmanCryptoProvider");
