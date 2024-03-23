#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TabViewManager)
namespace Photon::Pun::UtilityScripts {
class __TabViewManager__TabChangeEvent;
}
namespace Photon::Pun::UtilityScripts {
class __TabViewManager__Tab;
}
namespace Photon::Pun::UtilityScripts {
class __TabViewManager____c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TabViewManager;
}
namespace Photon::Pun::UtilityScripts {
class __TabViewManager__Tab;
}
namespace Photon::Pun::UtilityScripts {
class __TabViewManager__TabChangeEvent;
}
namespace Photon::Pun::UtilityScripts {
class __TabViewManager____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::TabViewManager);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__TabViewManager__Tab);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0);
// Type: ::TabChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::TabViewManager::TabChangeEvent*
class CORDL_TYPE __TabViewManager__TabChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x1eccbf8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TabViewManager__TabChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager__TabChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TabViewManager__TabChangeEvent(__TabViewManager__TabChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager__TabChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TabViewManager__TabChangeEvent(__TabViewManager__TabChangeEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent, 0x30>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: ::Tab
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::TabViewManager::Tab*
class CORDL_TYPE __TabViewManager__Tab : public ::System::Object {
public:
  // Declarations
  /// @brief Field Toggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Toggle, put = __cordl_internal_set_Toggle))::UnityW<::UnityEngine::UI::Toggle> Toggle;

  /// @brief Field View, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_View, put = __cordl_internal_set_View))::UnityW<::UnityEngine::RectTransform> View;

  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID))::StringW _cordl_ID;

  static inline ::Photon::Pun::UtilityScripts::__TabViewManager__Tab* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_Toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_Toggle();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_View() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_View();

  constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

  constexpr ::StringW& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_View(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__cordl_ID(::StringW value);

  /// @brief Method .ctor, addr 0x1eccc40, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TabViewManager__Tab();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager__Tab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TabViewManager__Tab(__TabViewManager__Tab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager__Tab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TabViewManager__Tab(__TabViewManager__Tab const&) = delete;

  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____cordl_ID;

  /// @brief Field Toggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___Toggle;

  /// @brief Field View, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___View;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__TabViewManager__Tab, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__TabViewManager__Tab, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__TabViewManager__Tab, ___Toggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__TabViewManager__Tab, ___View) == 0x20, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::TabViewManager::<>c__DisplayClass7_0*
class CORDL_TYPE __TabViewManager____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> __4__this;

  /// @brief Field _tab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tab, put = __cordl_internal_set__tab))::Photon::Pun::UtilityScripts::__TabViewManager__Tab* _tab;

  static inline ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0* New_ctor();

  /// @brief Method <Start>b__0, addr 0x1eccc90, size 0x24, virtual false, abstract: false, final false
  inline void _Start_b__0(bool isSelected);

  constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>& __cordl_internal_get___4__this();

  constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*& __cordl_internal_get__tab();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*> const& __cordl_internal_get__tab() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> value);

  constexpr void __cordl_internal_set__tab(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* value);

  /// @brief Method .ctor, addr 0x1ecca4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TabViewManager____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TabViewManager____c__DisplayClass7_0(__TabViewManager____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TabViewManager____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TabViewManager____c__DisplayClass7_0(__TabViewManager____c__DisplayClass7_0 const&) = delete;

  /// @brief Field _tab, offset: 0x10, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::__TabViewManager__Tab* ____tab;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0, ____tab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::TabViewManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::TabViewManager*
class CORDL_TYPE TabViewManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Tab = ::Photon::Pun::UtilityScripts::__TabViewManager__Tab;

  using TabChangeEvent = ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent;

  using __c__DisplayClass7_0 = ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0;

  /// @brief Field CurrentTab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CurrentTab, put = __cordl_internal_set_CurrentTab))::Photon::Pun::UtilityScripts::__TabViewManager__Tab* CurrentTab;

  /// @brief Field OnTabChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnTabChanged, put = __cordl_internal_set_OnTabChanged))::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* OnTabChanged;

  /// @brief Field Tab_lut, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_Tab_lut,
               put = __cordl_internal_set_Tab_lut))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>* Tab_lut;

  /// @brief Field Tabs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Tabs,
                      put = __cordl_internal_set_Tabs))::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> Tabs;

  /// @brief Field ToggleGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ToggleGroup, put = __cordl_internal_set_ToggleGroup))::UnityW<::UnityEngine::UI::ToggleGroup> ToggleGroup;

  static inline ::Photon::Pun::UtilityScripts::TabViewManager* New_ctor();

  /// @brief Method OnTabSelected, addr 0x1eccaec, size 0x104, virtual false, abstract: false, final false
  inline void OnTabSelected(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* tab);

  /// @brief Method SelectTab, addr 0x1ecca54, size 0x98, virtual false, abstract: false, final false
  inline void SelectTab(::StringW id);

  /// @brief Method Start, addr 0x1ecc850, size 0x1fc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*& __cordl_internal_get_CurrentTab();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*> const& __cordl_internal_get_CurrentTab() const;

  constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*& __cordl_internal_get_OnTabChanged();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*> const& __cordl_internal_get_OnTabChanged() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*& __cordl_internal_get_Tab_lut();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> const&
  __cordl_internal_get_Tab_lut() const;

  constexpr ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> const& __cordl_internal_get_Tabs() const;

  constexpr ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*>& __cordl_internal_get_Tabs();

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get_ToggleGroup() const;

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get_ToggleGroup();

  constexpr void __cordl_internal_set_CurrentTab(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* value);

  constexpr void __cordl_internal_set_OnTabChanged(::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* value);

  constexpr void __cordl_internal_set_Tab_lut(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>* value);

  constexpr void __cordl_internal_set_Tabs(::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> value);

  constexpr void __cordl_internal_set_ToggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup> value);

  /// @brief Method .ctor, addr 0x1eccbf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabViewManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabViewManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabViewManager(TabViewManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabViewManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabViewManager(TabViewManager const&) = delete;

  /// @brief Field ToggleGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ToggleGroup> ___ToggleGroup;

  /// @brief Field Tabs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> ___Tabs;

  /// @brief Field OnTabChanged, offset: 0x28, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* ___OnTabChanged;

  /// @brief Field CurrentTab, offset: 0x30, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::__TabViewManager__Tab* ___CurrentTab;

  /// @brief Field Tab_lut, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>* ___Tab_lut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::TabViewManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___ToggleGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___Tabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___OnTabChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___CurrentTab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___Tab_lut) == 0x38, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TabViewManager);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TabViewManager*, "Photon.Pun.UtilityScripts", "TabViewManager");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__TabViewManager__Tab);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, "Photon.Pun.UtilityScripts", "TabViewManager/Tab");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*, "Photon.Pun.UtilityScripts", "TabViewManager/TabChangeEvent");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*, "Photon.Pun.UtilityScripts", "TabViewManager/<>c__DisplayClass7_0");
