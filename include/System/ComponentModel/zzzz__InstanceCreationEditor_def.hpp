#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InstanceCreationEditor)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InstanceCreationEditor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InstanceCreationEditor);
// Type: System.ComponentModel::InstanceCreationEditor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::InstanceCreationEditor*
class CORDL_TYPE InstanceCreationEditor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Text))::StringW Text;

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* instanceType);

  static inline ::System::ComponentModel::InstanceCreationEditor* New_ctor();

  /// @brief Method .ctor, addr 0x1af9678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Text, addr 0x1af9638, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Text();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCreationEditor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCreationEditor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCreationEditor(InstanceCreationEditor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCreationEditor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCreationEditor(InstanceCreationEditor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InstanceCreationEditor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InstanceCreationEditor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InstanceCreationEditor*, "System.ComponentModel", "InstanceCreationEditor");
