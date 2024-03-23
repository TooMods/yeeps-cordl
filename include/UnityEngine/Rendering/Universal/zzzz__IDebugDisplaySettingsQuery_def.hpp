#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IDebugDisplaySettingsQuery)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery);
// Type: UnityEngine.Rendering.Universal::IDebugDisplaySettingsQuery
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IDebugDisplaySettingsQuery*
class CORDL_TYPE IDebugDisplaySettingsQuery {
public:
  // Declarations
  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Method TryGetScreenClearColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  /// @brief Method get_AreAnySettingsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsPostProcessingAllowed();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDebugDisplaySettingsQuery(IDebugDisplaySettingsQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsQuery(IDebugDisplaySettingsQuery const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*, "UnityEngine.Rendering.Universal", "IDebugDisplaySettingsQuery");
