#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SphericalHarmonicsL2Utils)
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SphericalHarmonicsL2Utils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SphericalHarmonicsL2Utils);
// Type: UnityEngine.Rendering::SphericalHarmonicsL2Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::SphericalHarmonicsL2Utils*
class CORDL_TYPE SphericalHarmonicsL2Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCoefficient, addr 0x19fea90, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetCoefficient(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, int32_t index);

  /// @brief Method GetL1, addr 0x19fe584, size 0x114, virtual false, abstract: false, final false
  static inline void GetL1(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ByRef<::UnityEngine::Vector3> L1_R, ByRef<::UnityEngine::Vector3> L1_G, ByRef<::UnityEngine::Vector3> L1_B);

  /// @brief Method GetL2, addr 0x19fe698, size 0x1bc, virtual false, abstract: false, final false
  static inline void GetL2(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ByRef<::UnityEngine::Vector3> L2_0, ByRef<::UnityEngine::Vector3> L2_1, ByRef<::UnityEngine::Vector3> L2_2,
                           ByRef<::UnityEngine::Vector3> L2_3, ByRef<::UnityEngine::Vector3> L2_4);

  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2Utils* New_ctor();

  /// @brief Method SetCoefficient, addr 0x19fea28, size 0x68, virtual false, abstract: false, final false
  static inline void SetCoefficient(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, int32_t index, ::UnityEngine::Vector3 coefficient);

  /// @brief Method SetL0, addr 0x19fe854, size 0x5c, virtual false, abstract: false, final false
  static inline void SetL0(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L0);

  /// @brief Method SetL1, addr 0x19fe9c4, size 0x64, virtual false, abstract: false, final false
  static inline void SetL1(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R, ::UnityEngine::Vector3 L1_G, ::UnityEngine::Vector3 L1_B);

  /// @brief Method SetL1B, addr 0x19fe968, size 0x5c, virtual false, abstract: false, final false
  static inline void SetL1B(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_B);

  /// @brief Method SetL1G, addr 0x19fe90c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetL1G(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_G);

  /// @brief Method SetL1R, addr 0x19fe8b0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetL1R(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R);

  /// @brief Method .ctor, addr 0x19feb00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphericalHarmonicsL2Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphericalHarmonicsL2Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphericalHarmonicsL2Utils(SphericalHarmonicsL2Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphericalHarmonicsL2Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphericalHarmonicsL2Utils(SphericalHarmonicsL2Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SphericalHarmonicsL2Utils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SphericalHarmonicsL2Utils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SphericalHarmonicsL2Utils*, "UnityEngine.Rendering", "SphericalHarmonicsL2Utils");
