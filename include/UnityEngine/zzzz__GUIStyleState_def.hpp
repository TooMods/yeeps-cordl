#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStyleState)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyleState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIStyleState);
// Type: UnityEngine::GUIStyleState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUIStyleState*
class CORDL_TYPE GUIStyleState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Field m_SourceStyle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceStyle, put = __cordl_internal_set_m_SourceStyle))::UnityEngine::GUIStyle* m_SourceStyle;

  __declspec(property(put = set_textColor))::UnityEngine::Color textColor;

  /// @brief Method Cleanup, addr 0x2014fa4, size 0x3c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Finalize, addr 0x20150c4, size 0xf8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetGUIStyleState, addr 0x2015054, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle* sourceStyle, void* source);

  /// @brief Method Init, addr 0x2014f7c, size 0x28, virtual false, abstract: false, final false
  static inline void* Init();

  static inline ::UnityEngine::GUIStyleState* New_ctor();

  static inline ::UnityEngine::GUIStyleState* New_ctor(::UnityEngine::GUIStyle* sourceStyle, void* source);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_SourceStyle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_SourceStyle() const;

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  constexpr void __cordl_internal_set_m_SourceStyle(::UnityEngine::GUIStyle* value);

  /// @brief Method .ctor, addr 0x2014fe0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2015028, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUIStyle* sourceStyle, void* source);

  /// @brief Method set_textColor, addr 0x2011838, size 0x54, virtual false, abstract: false, final false
  inline void set_textColor(::UnityEngine::Color value);

  /// @brief Method set_textColor_Injected, addr 0x2014f38, size 0x44, virtual false, abstract: false, final false
  inline void set_textColor_Injected(ByRef<::UnityEngine::Color> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIStyleState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIStyleState(GUIStyleState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIStyleState(GUIStyleState const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  /// @brief Field m_SourceStyle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_SourceStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyleState, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyleState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyleState, ___m_SourceStyle) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIStyleState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
