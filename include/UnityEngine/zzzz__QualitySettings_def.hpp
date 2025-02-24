#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct ShadowmaskMode;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::QualitySettings);
// Type: UnityEngine::QualitySettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::QualitySettings*
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method get_activeColorSpace, addr 0x27f45b4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_activeColorSpace();

  /// @brief Method get_antiAliasing, addr 0x27f4500, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing();

  /// @brief Method get_billboardsFaceCameraPosition, addr 0x27f4564, size 0x28, virtual false, abstract: false, final false
  static inline bool get_billboardsFaceCameraPosition();

  /// @brief Method get_maxQueuedFrames, addr 0x27f458c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxQueuedFrames();

  /// @brief Method get_shadowmaskMode, addr 0x27f449c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ShadowmaskMode get_shadowmaskMode();

  /// @brief Method set_antiAliasing, addr 0x27f4528, size 0x3c, virtual false, abstract: false, final false
  static inline void set_antiAliasing(int32_t value);

  /// @brief Method set_vSyncCount, addr 0x27f44c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_vSyncCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualitySettings(QualitySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualitySettings(QualitySettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::QualitySettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
