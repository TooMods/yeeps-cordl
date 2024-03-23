#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntity)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalEntity);
// Type: UnityEngine.Rendering.Universal::DecalEntity
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DecalEntity
struct CORDL_TYPE DecalEntity {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntity();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalEntity(int32_t index, int32_t version) noexcept;

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field version, offset: 0x4, size: 0x4, def value: None
  int32_t version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntity, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntity, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntity, version) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntity, "UnityEngine.Rendering.Universal", "DecalEntity");
