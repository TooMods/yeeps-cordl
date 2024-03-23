#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerContainer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerContainer____c__DisplayClass3_0;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerContainer____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerContainer);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::DebugUIHandlerContainer::<>c__DisplayClass3_0*
class CORDL_TYPE __DebugUIHandlerContainer____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field widget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_widget, put = __cordl_internal_set_widget))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> widget;

  static inline ::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0* New_ctor();

  /// @brief Method <IsDirectChild>b__0, addr 0x1d94a9c, size 0x6c, virtual false, abstract: false, final false
  inline bool _IsDirectChild_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* x);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get_widget() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get_widget();

  constexpr void __cordl_internal_set_widget(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  /// @brief Method .ctor, addr 0x1d94a8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUIHandlerContainer____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerContainer____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUIHandlerContainer____c__DisplayClass3_0(__DebugUIHandlerContainer____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerContainer____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUIHandlerContainer____c__DisplayClass3_0(__DebugUIHandlerContainer____c__DisplayClass3_0 const&) = delete;

  /// @brief Field widget, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ___widget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0, ___widget) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
// Type: UnityEngine.Rendering.UI::DebugUIHandlerContainer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerContainer*
class CORDL_TYPE DebugUIHandlerContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0;

  /// @brief Field contentHolder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentHolder, put = __cordl_internal_set_contentHolder))::UnityW<::UnityEngine::RectTransform> contentHolder;

  /// @brief Method GetActiveChildren, addr 0x1d94668, size 0x424, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>* GetActiveChildren();

  /// @brief Method GetFirstItem, addr 0x1d916ac, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> GetFirstItem();

  /// @brief Method GetLastItem, addr 0x1d913b8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> GetLastItem();

  /// @brief Method IsDirectChild, addr 0x1d912b4, size 0x104, virtual false, abstract: false, final false
  inline bool IsDirectChild(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget);

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerContainer* New_ctor();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_contentHolder() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_contentHolder();

  constexpr void __cordl_internal_set_contentHolder(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x1d94a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerContainer(DebugUIHandlerContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerContainer(DebugUIHandlerContainer const&) = delete;

  /// @brief Field contentHolder, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___contentHolder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerContainer, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerContainer, ___contentHolder) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerContainer*, "UnityEngine.Rendering.UI", "DebugUIHandlerContainer");
NEED_NO_BOX(::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::__DebugUIHandlerContainer____c__DisplayClass3_0*, "UnityEngine.Rendering.UI", "DebugUIHandlerContainer/<>c__DisplayClass3_0");
