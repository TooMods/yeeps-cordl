#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(VolumeComponentDeprecated)
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeComponentDeprecated;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponentDeprecated);
// Type: UnityEngine.Rendering::VolumeComponentDeprecated
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::VolumeComponentDeprecated*
class CORDL_TYPE VolumeComponentDeprecated : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::VolumeComponentDeprecated* New_ctor();

  /// @brief Method .ctor, addr 0x17d30d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponentDeprecated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentDeprecated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponentDeprecated(VolumeComponentDeprecated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentDeprecated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponentDeprecated(VolumeComponentDeprecated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponentDeprecated, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponentDeprecated);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponentDeprecated*, "UnityEngine.Rendering", "VolumeComponentDeprecated");
