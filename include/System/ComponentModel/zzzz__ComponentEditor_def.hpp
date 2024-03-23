#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentEditor)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentEditor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentEditor);
// Type: System.ComponentModel::ComponentEditor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ComponentEditor*
class CORDL_TYPE ComponentEditor : public ::System::Object {
public:
  // Declarations
  /// @brief Method EditComponent, addr 0x1aeaedc, size 0x14, virtual false, abstract: false, final false
  inline bool EditComponent(::System::Object* component);

  /// @brief Method EditComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool EditComponent(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* component);

  static inline ::System::ComponentModel::ComponentEditor* New_ctor();

  /// @brief Method .ctor, addr 0x1aeaef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentEditor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentEditor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentEditor(ComponentEditor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentEditor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentEditor(ComponentEditor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentEditor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentEditor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentEditor*, "System.ComponentModel", "ComponentEditor");
