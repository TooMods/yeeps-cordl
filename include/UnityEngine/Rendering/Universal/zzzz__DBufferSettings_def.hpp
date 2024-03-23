#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSurfaceData_def.hpp"
CORDL_MODULE_EXPORT(DBufferSettings)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DBufferSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferSettings);
// Type: UnityEngine.Rendering.Universal::DBufferSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DBufferSettings*
class CORDL_TYPE DBufferSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field surfaceData, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_surfaceData, put = __cordl_internal_set_surfaceData))::UnityEngine::Rendering::Universal::DecalSurfaceData surfaceData;

  static inline ::UnityEngine::Rendering::Universal::DBufferSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData const& __cordl_internal_get_surfaceData() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData& __cordl_internal_get_surfaceData();

  constexpr void __cordl_internal_set_surfaceData(::UnityEngine::Rendering::Universal::DecalSurfaceData value);

  /// @brief Method .ctor, addr 0x27293c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferSettings(DBufferSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferSettings(DBufferSettings const&) = delete;

  /// @brief Field surfaceData, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalSurfaceData ___surfaceData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferSettings, ___surfaceData) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferSettings*, "UnityEngine.Rendering.Universal", "DBufferSettings");
