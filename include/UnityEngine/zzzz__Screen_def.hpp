#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScreenOrientation;
}
// Forward declare root types
namespace UnityEngine {
class Screen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Screen);
// Type: UnityEngine::Screen
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Screen*
class CORDL_TYPE Screen : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetScreenOrientation, addr 0x27f62ac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation GetScreenOrientation();

  /// @brief Method get_dpi, addr 0x27f6284, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_dpi();

  /// @brief Method get_fullScreen, addr 0x27f6338, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fullScreen();

  /// @brief Method get_height, addr 0x27f625c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_height();

  /// @brief Method get_orientation, addr 0x27f62d4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ScreenOrientation get_orientation();

  /// @brief Method get_safeArea, addr 0x27f639c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_safeArea();

  /// @brief Method get_safeArea_Injected, addr 0x27f63e4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_safeArea_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_width, addr 0x27f6234, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_width();

  /// @brief Method set_fullScreen, addr 0x27f6360, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fullScreen(bool value);

  /// @brief Method set_sleepTimeout, addr 0x27f62fc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sleepTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Screen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Screen(Screen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Screen(Screen const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Screen, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Screen*, "UnityEngine", "Screen");
