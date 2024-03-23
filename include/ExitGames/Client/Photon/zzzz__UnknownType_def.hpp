#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnknownType)
// Forward declare root types
namespace ExitGames::Client::Photon {
class UnknownType;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::UnknownType);
// Type: ExitGames.Client.Photon::UnknownType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::UnknownType*
class CORDL_TYPE UnknownType : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  /// @brief Field Size, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  /// @brief Field TypeCode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_TypeCode, put = __cordl_internal_set_TypeCode)) uint8_t TypeCode;

  static inline ::ExitGames::Client::Photon::UnknownType* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Data();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr uint8_t const& __cordl_internal_get_TypeCode() const;

  constexpr uint8_t& __cordl_internal_get_TypeCode();

  constexpr void __cordl_internal_set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  constexpr void __cordl_internal_set_TypeCode(uint8_t value);

  /// @brief Method .ctor, addr 0x277402c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnknownType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownType(UnknownType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownType(UnknownType const&) = delete;

  /// @brief Field TypeCode, offset: 0x10, size: 0x1, def value: None
  uint8_t ___TypeCode;

  /// @brief Field Size, offset: 0x14, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field Data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::UnknownType, 0x20>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::UnknownType, ___TypeCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::UnknownType, ___Size) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::UnknownType, ___Data) == 0x18, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::UnknownType);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::UnknownType*, "ExitGames.Client.Photon", "UnknownType");
