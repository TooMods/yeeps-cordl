#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializableEnum)
namespace System {
class Enum;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SerializableEnum;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SerializableEnum);
// Type: UnityEngine.Rendering::SerializableEnum
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::SerializableEnum*
class CORDL_TYPE SerializableEnum : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_EnumType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumType, put = __cordl_internal_set_m_EnumType))::System::Type* m_EnumType;

  /// @brief Field m_EnumValueAsString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumValueAsString, put = __cordl_internal_set_m_EnumValueAsString))::StringW m_EnumValueAsString;

  __declspec(property(get = get_value, put = set_value))::System::Enum* value;

  static inline ::UnityEngine::Rendering::SerializableEnum* New_ctor(::System::Type* enumType);

  constexpr ::System::Type*& __cordl_internal_get_m_EnumType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_EnumType() const;

  constexpr ::StringW const& __cordl_internal_get_m_EnumValueAsString() const;

  constexpr ::StringW& __cordl_internal_get_m_EnumValueAsString();

  constexpr void __cordl_internal_set_m_EnumType(::System::Type* value);

  constexpr void __cordl_internal_set_m_EnumValueAsString(::StringW value);

  /// @brief Method .ctor, addr 0x1bd2628, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* enumType);

  /// @brief Method get_value, addr 0x1bd2540, size 0xb8, virtual false, abstract: false, final false
  inline ::bs_hook::EnumPtr get_value();

  /// @brief Method set_value, addr 0x1bd25f8, size 0x30, virtual false, abstract: false, final false
  inline void set_value(::bs_hook::EnumPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableEnum(SerializableEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableEnum(SerializableEnum const&) = delete;

  /// @brief Field m_EnumValueAsString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_EnumValueAsString;

  /// @brief Field m_EnumType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___m_EnumType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SerializableEnum, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SerializableEnum, ___m_EnumValueAsString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SerializableEnum, ___m_EnumType) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SerializableEnum);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SerializableEnum*, "UnityEngine.Rendering", "SerializableEnum");
