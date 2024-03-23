#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialAccess)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEditor::Rendering::Universal {
class MaterialAccess;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Rendering::Universal::MaterialAccess);
// Type: UnityEditor.Rendering.Universal::MaterialAccess
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEditor::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEditor.Rendering.Universal::MaterialAccess*
class CORDL_TYPE MaterialAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadMaterialRawRenderQueue, addr 0x2b71918, size 0x1ac10, virtual false, abstract: false, final false
  static inline int32_t ReadMaterialRawRenderQueue(::UnityEngine::Material* mat);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialAccess(MaterialAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialAccess(MaterialAccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Rendering::Universal::MaterialAccess, 0x10>, "Size mismatch!");

} // namespace UnityEditor::Rendering::Universal
NEED_NO_BOX(::UnityEditor::Rendering::Universal::MaterialAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Rendering::Universal::MaterialAccess*, "UnityEditor.Rendering.Universal", "MaterialAccess");
