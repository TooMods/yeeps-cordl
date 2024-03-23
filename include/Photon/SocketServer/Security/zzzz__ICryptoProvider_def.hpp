#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICryptoProvider)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::SocketServer::Security {
class ICryptoProvider;
}
// Write type traits
MARK_REF_PTR_T(::Photon::SocketServer::Security::ICryptoProvider);
// Type: Photon.SocketServer.Security::ICryptoProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::SocketServer::Security {
// Is value type: false
// CS Name: ::Photon.SocketServer.Security::ICryptoProvider*
class CORDL_TYPE ICryptoProvider {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_PublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Decrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Decrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method DeriveSharedKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DeriveSharedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> otherPartyPublicKey);

  /// @brief Method Encrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Encrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInitialized();

  /// @brief Method get_PublicKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKey();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICryptoProvider(ICryptoProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICryptoProvider(ICryptoProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::SocketServer::Security
NEED_NO_BOX(::Photon::SocketServer::Security::ICryptoProvider);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Security::ICryptoProvider*, "Photon.SocketServer.Security", "ICryptoProvider");
