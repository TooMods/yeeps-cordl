#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientValueAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AmbientValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AmbientValueAttribute);
// Type: System.ComponentModel::AmbientValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AmbientValueAttribute*
class CORDL_TYPE AmbientValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::System::Object* _Value_k__BackingField;

  /// @brief Method Equals, addr 0x1ae9364, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1ae9410, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::System::Type* type, ::StringW value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::StringW value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::System::Object* value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(bool value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(char16_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(double_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(float_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int16_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int32_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int64_t value);

  static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(uint8_t value);

  constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x1ae8e98, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW value);

  /// @brief Method .ctor, addr 0x1ae930c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1ae9334, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method .ctor, addr 0x1ae92a0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x1ae8fac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(char16_t value);

  /// @brief Method .ctor, addr 0x1ae9234, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x1ae91c8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x1ae9084, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int16_t value);

  /// @brief Method .ctor, addr 0x1ae90f0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x1ae915c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x1ae9018, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t value);

  /// @brief Method get_Value, addr 0x1ae935c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientValueAttribute(AmbientValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientValueAttribute(AmbientValueAttribute const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AmbientValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AmbientValueAttribute, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
