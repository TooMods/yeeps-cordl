#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPhotonEncryptor)
// Forward declare root types
namespace ExitGames::Client::Photon::Encryption {
class IPhotonEncryptor;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor);
// Type: ExitGames.Client.Photon.Encryption::IPhotonEncryptor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::Encryption {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.Encryption::IPhotonEncryptor*
class CORDL_TYPE IPhotonEncryptor {
public:
  // Declarations
  /// @brief Method CalculateEncryptedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CalculateEncryptedSize(int32_t unencryptedSize);

  /// @brief Method CalculateFragmentLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CalculateFragmentLength();

  /// @brief Method Decrypt2, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> header, ByRef<int32_t> outLen);

  /// @brief Method Encrypt2, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Encrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> header, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOffset,
                       ByRef<int32_t> outSize);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptionSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> hmacSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes, bool chainingModeGCM,
                   int32_t mtu);

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonEncryptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPhotonEncryptor(IPhotonEncryptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonEncryptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPhotonEncryptor(IPhotonEncryptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon::Encryption
NEED_NO_BOX(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*, "ExitGames.Client.Photon.Encryption", "IPhotonEncryptor");
