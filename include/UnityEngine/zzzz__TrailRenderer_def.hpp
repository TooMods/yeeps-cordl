#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrailRenderer)
// Forward declare root types
namespace UnityEngine {
class TrailRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TrailRenderer);
// Type: UnityEngine::TrailRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TrailRenderer*
class CORDL_TYPE TrailRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_emitting, put = set_emitting)) bool emitting;

  __declspec(property(get = get_time)) float_t time;

  /// @brief Method get_emitting, addr 0x27e79dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_emitting();

  /// @brief Method get_time, addr 0x27e79a0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method set_emitting, addr 0x27e7a18, size 0x44, virtual false, abstract: false, final false
  inline void set_emitting(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrailRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrailRenderer(TrailRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrailRenderer(TrailRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TrailRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TrailRenderer*, "UnityEngine", "TrailRenderer");
