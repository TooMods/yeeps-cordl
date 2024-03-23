#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEditableObject)
// Forward declare root types
namespace System::ComponentModel {
class IEditableObject;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IEditableObject);
// Type: System.ComponentModel::IEditableObject
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IEditableObject*
class CORDL_TYPE IEditableObject {
public:
  // Declarations
  /// @brief Method BeginEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BeginEdit();

  /// @brief Method CancelEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelEdit();

  /// @brief Method EndEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndEdit();

  // Ctor Parameters [CppParam { name: "", ty: "IEditableObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEditableObject(IEditableObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEditableObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEditableObject(IEditableObject const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IEditableObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IEditableObject*, "System.ComponentModel", "IEditableObject");
