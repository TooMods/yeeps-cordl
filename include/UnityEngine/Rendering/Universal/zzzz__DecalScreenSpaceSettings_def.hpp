#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalNormalBlend_def.hpp"
CORDL_MODULE_EXPORT(DecalScreenSpaceSettings)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings);
// Type: UnityEngine.Rendering.Universal::DecalScreenSpaceSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalScreenSpaceSettings*
class CORDL_TYPE DecalScreenSpaceSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field normalBlend, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_normalBlend, put = __cordl_internal_set_normalBlend))::UnityEngine::Rendering::Universal::DecalNormalBlend normalBlend;

  /// @brief Field useGBuffer, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_useGBuffer, put = __cordl_internal_set_useGBuffer)) bool useGBuffer;

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend const& __cordl_internal_get_normalBlend() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend& __cordl_internal_get_normalBlend();

  constexpr bool const& __cordl_internal_get_useGBuffer() const;

  constexpr bool& __cordl_internal_get_useGBuffer();

  constexpr void __cordl_internal_set_normalBlend(::UnityEngine::Rendering::Universal::DecalNormalBlend value);

  constexpr void __cordl_internal_set_useGBuffer(bool value);

  /// @brief Method .ctor, addr 0x27293d4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceSettings(DecalScreenSpaceSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceSettings(DecalScreenSpaceSettings const&) = delete;

  /// @brief Field normalBlend, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalNormalBlend ___normalBlend;

  /// @brief Field useGBuffer, offset: 0x14, size: 0x1, def value: None
  bool ___useGBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings, ___normalBlend) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings, ___useGBuffer) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceSettings");
