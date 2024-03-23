#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitializationEventAttribute)
// Forward declare root types
namespace System::ComponentModel {
class InitializationEventAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InitializationEventAttribute);
// Type: System.ComponentModel::InitializationEventAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::InitializationEventAttribute*
class CORDL_TYPE InitializationEventAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_EventName))::StringW EventName;

  /// @brief Field <EventName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__EventName_k__BackingField, put = __cordl_internal_set__EventName_k__BackingField))::StringW _EventName_k__BackingField;

  static inline ::System::ComponentModel::InitializationEventAttribute* New_ctor(::StringW eventName);

  constexpr ::StringW const& __cordl_internal_get__EventName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EventName_k__BackingField();

  constexpr void __cordl_internal_set__EventName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ae8498, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventName);

  /// @brief Method get_EventName, addr 0x1ae84c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationEventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationEventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationEventAttribute(InitializationEventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationEventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationEventAttribute(InitializationEventAttribute const&) = delete;

  /// @brief Field <EventName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____EventName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InitializationEventAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::InitializationEventAttribute, ____EventName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InitializationEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InitializationEventAttribute*, "System.ComponentModel", "InitializationEventAttribute");
