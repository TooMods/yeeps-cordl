#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsCommon)
namespace GlobalNamespace {
class __DebugDisplaySettingsCommon__SettingsPanel____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsCommon__WidgetFactory____c;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsCommon__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsCommon__WidgetFactory;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class __DebugDisplaySettingsCommon__SettingsPanel____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsCommon__WidgetFactory____c;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsCommon__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsCommon__WidgetFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__WidgetFactory);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsCommon::WidgetFactory::<>c*
class CORDL_TYPE __DebugDisplaySettingsCommon__WidgetFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_1<bool>* __9__0_0;

  static inline ::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c* New_ctor();

  /// @brief Method <CreateMissingDebugShadersWarning>b__0_0, addr 0x2c5d4f8, size 0xc8, virtual false, abstract: false, final false
  inline bool _CreateMissingDebugShadersWarning_b__0_0();

  /// @brief Method .ctor, addr 0x2c5d4f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__0_0();

  static inline void setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c* value);

  static inline void setStaticF___9__0_0(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsCommon__WidgetFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__WidgetFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsCommon__WidgetFactory____c(__DebugDisplaySettingsCommon__WidgetFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__WidgetFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsCommon__WidgetFactory____c(__DebugDisplaySettingsCommon__WidgetFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::WidgetFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsCommon::WidgetFactory*
class CORDL_TYPE __DebugDisplaySettingsCommon__WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c;

  /// @brief Method CreateMissingDebugShadersWarning, addr 0x2c5d360, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMissingDebugShadersWarning();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsCommon__WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsCommon__WidgetFactory(__DebugDisplaySettingsCommon__WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsCommon__WidgetFactory(__DebugDisplaySettingsCommon__WidgetFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsCommon::SettingsPanel::<>c*
class CORDL_TYPE __DebugDisplaySettingsCommon__SettingsPanel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Action* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1))::System::Action* __9__3_1;

  /// @brief Field <>9__3_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_2, put = setStaticF___9__3_2))::System::Action* __9__3_2;

  static inline ::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x2c5ea00, size 0x64, virtual false, abstract: false, final false
  inline void __ctor_b__3_0();

  /// @brief Method <.ctor>b__3_1, addr 0x2c5ea64, size 0x64, virtual false, abstract: false, final false
  inline void __ctor_b__3_1();

  /// @brief Method <.ctor>b__3_2, addr 0x2c5eac8, size 0x64, virtual false, abstract: false, final false
  inline void __ctor_b__3_2();

  /// @brief Method .ctor, addr 0x2c5e9f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__3_0();

  static inline ::System::Action* getStaticF___9__3_1();

  static inline ::System::Action* getStaticF___9__3_2();

  static inline void setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c* value);

  static inline void setStaticF___9__3_0(::System::Action* value);

  static inline void setStaticF___9__3_1(::System::Action* value);

  static inline void setStaticF___9__3_2(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsCommon__SettingsPanel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__SettingsPanel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsCommon__SettingsPanel____c(__DebugDisplaySettingsCommon__SettingsPanel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__SettingsPanel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsCommon__SettingsPanel____c(__DebugDisplaySettingsCommon__SettingsPanel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsPanel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsCommon::SettingsPanel*
class CORDL_TYPE __DebugDisplaySettingsCommon__SettingsPanel : public ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c;

  __declspec(property(get = get_PanelName))::StringW PanelName;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel* New_ctor();

  /// @brief Method .ctor, addr 0x2c5cc8c, size 0x6d4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PanelName, addr 0x2c5d5c0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsCommon__SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsCommon__SettingsPanel(__DebugDisplaySettingsCommon__SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsCommon__SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsCommon__SettingsPanel(__DebugDisplaySettingsCommon__SettingsPanel const&) = delete;

  /// @brief Field k_GoToSectionString offset 0xffffffff size 0x8
  static constexpr ::ConstString k_GoToSectionString{ u"Go to Section..." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsCommon
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsCommon*
class CORDL_TYPE DebugDisplaySettingsCommon : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x2c5cc34, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* New_ctor();

  /// @brief Method TryGetScreenClearColor, addr 0x2c5cbd4, size 0x60, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  /// @brief Method .ctor, addr 0x2c5c1c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c5cacc, size 0x58, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x2c5cb7c, size 0x58, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c5cb24, size 0x58, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsCommon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsCommon(DebugDisplaySettingsCommon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsCommon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsCommon(DebugDisplaySettingsCommon const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsCommon__SettingsPanel____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/SettingsPanel/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsCommon__WidgetFactory____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/WidgetFactory/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsCommon__WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/WidgetFactory");
