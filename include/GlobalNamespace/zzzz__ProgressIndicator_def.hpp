#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressIndicator)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgressIndicator);
// Type: ::ProgressIndicator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProgressIndicator*
class CORDL_TYPE ProgressIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::ProgressIndicator* New_ctor();

  /// @brief Method SetColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetProgress(float_t progress);

  /// @brief Method .ctor, addr 0xf20378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressIndicator(ProgressIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressIndicator(ProgressIndicator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressIndicator, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressIndicator*, "", "ProgressIndicator");
