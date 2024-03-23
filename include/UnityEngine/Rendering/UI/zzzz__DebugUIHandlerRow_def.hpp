#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerFoldout_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerRow)
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerRow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerRow);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerRow
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerRow*
class CORDL_TYPE DebugUIHandlerRow : public ::UnityEngine::Rendering::UI::DebugUIHandlerFoldout {
public:
  // Declarations
  /// @brief Field m_Timer, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerRow* New_ctor();

  /// @brief Method OnEnable, addr 0x1d9766c, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x1d97674, size 0x37c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  /// @brief Method .ctor, addr 0x1d979f0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerRow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerRow(DebugUIHandlerRow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerRow(DebugUIHandlerRow const&) = delete;

  /// @brief Field m_Timer, offset: 0x78, size: 0x4, def value: None
  float_t ___m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerRow, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRow, ___m_Timer) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerRow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerRow*, "UnityEngine.Rendering.UI", "DebugUIHandlerRow");
