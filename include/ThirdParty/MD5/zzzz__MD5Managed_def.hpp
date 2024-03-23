#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "ThirdParty/MD5/zzzz__ABCDStruct_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5Managed)
// Forward declare root types
namespace ThirdParty::MD5 {
class MD5Managed;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::MD5::MD5Managed);
// Type: ThirdParty.MD5::MD5Managed
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::MD5 {
// Is value type: false
// CS Name: ::ThirdParty.MD5::MD5Managed*
class CORDL_TYPE MD5Managed : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  /// @brief Field _abcd, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__abcd, put = __cordl_internal_set__abcd))::ThirdParty::MD5::ABCDStruct _abcd;

  /// @brief Field _data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _dataSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__dataSize, put = __cordl_internal_set__dataSize)) int32_t _dataSize;

  /// @brief Field _totalLength, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__totalLength, put = __cordl_internal_set__totalLength)) int64_t _totalLength;

  /// @brief Method HashCore, addr 0x149ed38, size 0x110, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x149ee48, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x149ec94, size 0x64, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::ThirdParty::MD5::MD5Managed* New_ctor();

  /// @brief Method TransformBlock, addr 0x149ecf8, size 0x10, virtual false, abstract: false, final false
  inline void TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method TransformFinalBlock, addr 0x149ed08, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr ::ThirdParty::MD5::ABCDStruct const& __cordl_internal_get__abcd() const;

  constexpr ::ThirdParty::MD5::ABCDStruct& __cordl_internal_get__abcd();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__dataSize() const;

  constexpr int32_t& __cordl_internal_get__dataSize();

  constexpr int64_t const& __cordl_internal_get__totalLength() const;

  constexpr int64_t& __cordl_internal_get__totalLength();

  constexpr void __cordl_internal_set__abcd(::ThirdParty::MD5::ABCDStruct value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__dataSize(int32_t value);

  constexpr void __cordl_internal_set__totalLength(int64_t value);

  /// @brief Method .ctor, addr 0x149ec6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5Managed(MD5Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5Managed(MD5Managed const&) = delete;

  /// @brief Field _data, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field _abcd, offset: 0x30, size: 0x10, def value: None
  ::ThirdParty::MD5::ABCDStruct ____abcd;

  /// @brief Field _totalLength, offset: 0x40, size: 0x8, def value: None
  int64_t ____totalLength;

  /// @brief Field _dataSize, offset: 0x48, size: 0x4, def value: None
  int32_t ____dataSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::MD5::MD5Managed, 0x50>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::MD5::MD5Managed, ____data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::MD5Managed, ____abcd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::MD5Managed, ____totalLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::MD5Managed, ____dataSize) == 0x48, "Offset mismatch!");

} // namespace ThirdParty::MD5
NEED_NO_BOX(::ThirdParty::MD5::MD5Managed);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::MD5::MD5Managed*, "ThirdParty.MD5", "MD5Managed");
