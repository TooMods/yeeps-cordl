#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MACTripleDES)
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
class TailStream;
}
namespace System::Security::Cryptography {
class TripleDES;
}
// Forward declare root types
namespace System::Security::Cryptography {
class MACTripleDES;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::MACTripleDES);
// Type: System.Security.Cryptography::MACTripleDES
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::MACTripleDES*
class CORDL_TYPE MACTripleDES : public ::System::Security::Cryptography::KeyedHashAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_Padding, put = set_Padding))::System::Security::Cryptography::PaddingMode Padding;

  /// @brief Field _cs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cs, put = __cordl_internal_set__cs))::System::Security::Cryptography::CryptoStream* _cs;

  /// @brief Field _ts, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ts, put = __cordl_internal_set__ts))::System::Security::Cryptography::TailStream* _ts;

  /// @brief Field des, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_des, put = __cordl_internal_set_des))::System::Security::Cryptography::TripleDES* des;

  /// @brief Field m_bytesPerBlock, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_bytesPerBlock, put = __cordl_internal_set_m_bytesPerBlock)) int32_t m_bytesPerBlock;

  /// @brief Field m_encryptor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encryptor, put = __cordl_internal_set_m_encryptor))::System::Security::Cryptography::ICryptoTransform* m_encryptor;

  /// @brief Method Dispose, addr 0x1d20194, size 0x104, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method HashCore, addr 0x1d1fdc8, size 0x174, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x1d1ffcc, size 0x150, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x1d1fd10, size 0x8, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::MACTripleDES* New_ctor();

  static inline ::System::Security::Cryptography::MACTripleDES* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  static inline ::System::Security::Cryptography::MACTripleDES* New_ctor(::StringW strTripleDES, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  constexpr ::System::Security::Cryptography::CryptoStream*& __cordl_internal_get__cs();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CryptoStream*> const& __cordl_internal_get__cs() const;

  constexpr ::System::Security::Cryptography::TailStream*& __cordl_internal_get__ts();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TailStream*> const& __cordl_internal_get__ts() const;

  constexpr ::System::Security::Cryptography::TripleDES*& __cordl_internal_get_des();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TripleDES*> const& __cordl_internal_get_des() const;

  constexpr int32_t const& __cordl_internal_get_m_bytesPerBlock() const;

  constexpr int32_t& __cordl_internal_get_m_bytesPerBlock();

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_m_encryptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& __cordl_internal_get_m_encryptor() const;

  constexpr void __cordl_internal_set__cs(::System::Security::Cryptography::CryptoStream* value);

  constexpr void __cordl_internal_set__ts(::System::Security::Cryptography::TailStream* value);

  constexpr void __cordl_internal_set_des(::System::Security::Cryptography::TripleDES* value);

  constexpr void __cordl_internal_set_m_bytesPerBlock(int32_t value);

  constexpr void __cordl_internal_set_m_encryptor(::System::Security::Cryptography::ICryptoTransform* value);

  /// @brief Method .ctor, addr 0x1d1f998, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d1faf4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method .ctor, addr 0x1d1fb4c, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::StringW strTripleDES, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method get_Padding, addr 0x1d1fd18, size 0x24, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::PaddingMode get_Padding();

  /// @brief Method set_Padding, addr 0x1d1fd3c, size 0x8c, virtual false, abstract: false, final false
  inline void set_Padding(::System::Security::Cryptography::PaddingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MACTripleDES();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MACTripleDES(MACTripleDES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MACTripleDES(MACTripleDES const&) = delete;

  /// @brief Field m_encryptor, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::ICryptoTransform* ___m_encryptor;

  /// @brief Field _cs, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* ____cs;

  /// @brief Field _ts, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::TailStream* ____ts;

  /// @brief Field m_bytesPerBlock, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_bytesPerBlock;

  /// @brief Field des, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::TripleDES* ___des;

  /// @brief Field m_bitsPerByte offset 0xffffffff size 0x4
  static constexpr int32_t m_bitsPerByte{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::MACTripleDES, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___m_encryptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ____cs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ____ts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___m_bytesPerBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___des) == 0x50, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::MACTripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MACTripleDES*, "System.Security.Cryptography", "MACTripleDES");
