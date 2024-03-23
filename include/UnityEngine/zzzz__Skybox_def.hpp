#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Skybox)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Skybox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Skybox);
// Type: UnityEngine::Skybox
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Skybox*
class CORDL_TYPE Skybox : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_material))::UnityW<::UnityEngine::Material> material;

  /// @brief Method get_material, addr 0x27f2adc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Skybox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Skybox(Skybox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Skybox(Skybox const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Skybox, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Skybox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Skybox*, "UnityEngine", "Skybox");
