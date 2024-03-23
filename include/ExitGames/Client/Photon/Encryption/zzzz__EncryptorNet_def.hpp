#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptorNet)
namespace ExitGames::Client::Photon::Encryption {
class IPhotonEncryptor;
}
namespace System::Security::Cryptography {
class Aes;
}
namespace System::Security::Cryptography {
class HMACSHA256;
}
// Forward declare root types
namespace ExitGames::Client::Photon::Encryption {
class EncryptorNet;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::Encryption::EncryptorNet);
// Type: ExitGames.Client.Photon.Encryption::EncryptorNet
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::Encryption {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.Encryption::EncryptorNet*
class CORDL_TYPE EncryptorNet : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptorIn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptorIn, put = __cordl_internal_set_encryptorIn))::System::Security::Cryptography::Aes* encryptorIn;

  /// @brief Field encryptorOut, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptorOut, put = __cordl_internal_set_encryptorOut))::System::Security::Cryptography::Aes* encryptorOut;

  /// @brief Field hmacsha256In, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hmacsha256In, put = __cordl_internal_set_hmacsha256In))::System::Security::Cryptography::HMACSHA256* hmacsha256In;

  /// @brief Field hmacsha256Out, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hmacsha256Out, put = __cordl_internal_set_hmacsha256Out))::System::Security::Cryptography::HMACSHA256* hmacsha256Out;

  /// @brief Convert operator to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
  constexpr operator ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*() noexcept;

  /// @brief Method CalculateEncryptedSize, addr 0x2ac99d0, size 0x40, virtual true, abstract: false, final true
  inline int32_t CalculateEncryptedSize(int32_t unencryptedSize);

  /// @brief Method CalculateFragmentLength, addr 0x2ac9a10, size 0x40, virtual true, abstract: false, final true
  inline int32_t CalculateFragmentLength();

  /// @brief Method Decrypt2, addr 0x2ac9990, size 0x40, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> header, ByRef<int32_t> outLen);

  /// @brief Method Encrypt2, addr 0x2ac9950, size 0x40, virtual true, abstract: false, final true
  inline void Encrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> header, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOffset,
                       ByRef<int32_t> outSize);

  /// @brief Method Init, addr 0x2ac9910, size 0x40, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptionSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> hmacSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes, bool chainingModeGCM,
                   int32_t mtu);

  static inline ::ExitGames::Client::Photon::Encryption::EncryptorNet* New_ctor();

  constexpr ::System::Security::Cryptography::Aes*& __cordl_internal_get_encryptorIn();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Aes*> const& __cordl_internal_get_encryptorIn() const;

  constexpr ::System::Security::Cryptography::Aes*& __cordl_internal_get_encryptorOut();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Aes*> const& __cordl_internal_get_encryptorOut() const;

  constexpr ::System::Security::Cryptography::HMACSHA256*& __cordl_internal_get_hmacsha256In();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HMACSHA256*> const& __cordl_internal_get_hmacsha256In() const;

  constexpr ::System::Security::Cryptography::HMACSHA256*& __cordl_internal_get_hmacsha256Out();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HMACSHA256*> const& __cordl_internal_get_hmacsha256Out() const;

  constexpr void __cordl_internal_set_encryptorIn(::System::Security::Cryptography::Aes* value);

  constexpr void __cordl_internal_set_encryptorOut(::System::Security::Cryptography::Aes* value);

  constexpr void __cordl_internal_set_hmacsha256In(::System::Security::Cryptography::HMACSHA256* value);

  constexpr void __cordl_internal_set_hmacsha256Out(::System::Security::Cryptography::HMACSHA256* value);

  /// @brief Method .ctor, addr 0x2ac9a50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
  constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* i___ExitGames__Client__Photon__Encryption__IPhotonEncryptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptorNet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptorNet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptorNet(EncryptorNet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptorNet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptorNet(EncryptorNet const&) = delete;

  /// @brief Field encryptorIn, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::Aes* ___encryptorIn;

  /// @brief Field encryptorOut, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::Aes* ___encryptorOut;

  /// @brief Field hmacsha256In, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::HMACSHA256* ___hmacsha256In;

  /// @brief Field hmacsha256Out, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::HMACSHA256* ___hmacsha256Out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Encryption::EncryptorNet, 0x30>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Encryption::EncryptorNet, ___encryptorIn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Encryption::EncryptorNet, ___encryptorOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Encryption::EncryptorNet, ___hmacsha256In) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Encryption::EncryptorNet, ___hmacsha256Out) == 0x28, "Offset mismatch!");

} // namespace ExitGames::Client::Photon::Encryption
NEED_NO_BOX(::ExitGames::Client::Photon::Encryption::EncryptorNet);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Encryption::EncryptorNet*, "ExitGames.Client.Photon.Encryption", "EncryptorNet");
