#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DataObjectMethodType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataObjectMethodAttribute)
namespace System::ComponentModel {
struct DataObjectMethodType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DataObjectMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DataObjectMethodAttribute);
// Type: System.ComponentModel::DataObjectMethodAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DataObjectMethodAttribute*
class CORDL_TYPE DataObjectMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_MethodType))::System::ComponentModel::DataObjectMethodType MethodType;

  /// @brief Field <IsDefault>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDefault_k__BackingField, put = __cordl_internal_set__IsDefault_k__BackingField)) bool _IsDefault_k__BackingField;

  /// @brief Field <MethodType>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__MethodType_k__BackingField,
                      put = __cordl_internal_set__MethodType_k__BackingField))::System::ComponentModel::DataObjectMethodType _MethodType_k__BackingField;

  /// @brief Method Equals, addr 0x1af3c04, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1af3cac, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Match, addr 0x1af3cf4, size 0x8c, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  static inline ::System::ComponentModel::DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType methodType);

  static inline ::System::ComponentModel::DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType methodType, bool isDefault);

  constexpr bool const& __cordl_internal_get__IsDefault_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDefault_k__BackingField();

  constexpr ::System::ComponentModel::DataObjectMethodType const& __cordl_internal_get__MethodType_k__BackingField() const;

  constexpr ::System::ComponentModel::DataObjectMethodType& __cordl_internal_get__MethodType_k__BackingField();

  constexpr void __cordl_internal_set__IsDefault_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MethodType_k__BackingField(::System::ComponentModel::DataObjectMethodType value);

  /// @brief Method .ctor, addr 0x1af3b98, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::DataObjectMethodType methodType);

  /// @brief Method .ctor, addr 0x1af3bc4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::DataObjectMethodType methodType, bool isDefault);

  /// @brief Method get_IsDefault, addr 0x1af3bf4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_MethodType, addr 0x1af3bfc, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::DataObjectMethodType get_MethodType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataObjectMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataObjectMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataObjectMethodAttribute(DataObjectMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataObjectMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataObjectMethodAttribute(DataObjectMethodAttribute const&) = delete;

  /// @brief Field <IsDefault>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsDefault_k__BackingField;

  /// @brief Field <MethodType>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::System::ComponentModel::DataObjectMethodType ____MethodType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DataObjectMethodAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectMethodAttribute, ____IsDefault_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectMethodAttribute, ____MethodType_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DataObjectMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DataObjectMethodAttribute*, "System.ComponentModel", "DataObjectMethodAttribute");
