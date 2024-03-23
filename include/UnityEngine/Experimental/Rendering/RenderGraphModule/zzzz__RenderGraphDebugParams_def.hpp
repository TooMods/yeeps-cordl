#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderGraphDebugParams)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphDebugParams__Strings;
}
namespace UnityEngine::Rendering {
class __DebugUI__Panel;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphDebugParams__Strings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugParams__Strings);
// Type: ::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraphDebugParams::Strings*
class CORDL_TYPE __RenderGraphDebugParams__Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field ClearRenderTargetsAtCreation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ClearRenderTargetsAtCreation,
                             put = setStaticF_ClearRenderTargetsAtCreation))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip ClearRenderTargetsAtCreation;

  /// @brief Field DisablePassCulling, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_DisablePassCulling, put = setStaticF_DisablePassCulling))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip DisablePassCulling;

  /// @brief Field EnableLogging, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_EnableLogging, put = setStaticF_EnableLogging))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip EnableLogging;

  /// @brief Field ImmediateMode, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ImmediateMode, put = setStaticF_ImmediateMode))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip ImmediateMode;

  /// @brief Field LogFrameInformation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LogFrameInformation, put = setStaticF_LogFrameInformation))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip LogFrameInformation;

  /// @brief Field LogResources, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LogResources, put = setStaticF_LogResources))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip LogResources;

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_ClearRenderTargetsAtCreation();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_DisablePassCulling();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_EnableLogging();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_ImmediateMode();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_LogFrameInformation();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_LogResources();

  static inline void setStaticF_ClearRenderTargetsAtCreation(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_DisablePassCulling(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_EnableLogging(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_ImmediateMode(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_LogFrameInformation(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_LogResources(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphDebugParams__Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphDebugParams__Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphDebugParams__Strings(__RenderGraphDebugParams__Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphDebugParams__Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphDebugParams__Strings(__RenderGraphDebugParams__Strings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugParams__Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphDebugParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 39, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphDebugParams*
class CORDL_TYPE RenderGraphDebugParams : public ::System::Object {
public:
  // Declarations
  using Strings = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugParams__Strings;

  /// @brief Field clearRenderTargetsAtCreation, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtCreation, put = __cordl_internal_set_clearRenderTargetsAtCreation)) bool clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_clearRenderTargetsAtRelease, put = __cordl_internal_set_clearRenderTargetsAtRelease)) bool clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_disablePassCulling, put = __cordl_internal_set_disablePassCulling)) bool disablePassCulling;

  /// @brief Field enableLogging, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_enableLogging, put = __cordl_internal_set_enableLogging)) bool enableLogging;

  /// @brief Field immediateMode, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_immediateMode, put = __cordl_internal_set_immediateMode)) bool immediateMode;

  /// @brief Field logFrameInformation, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_logFrameInformation, put = __cordl_internal_set_logFrameInformation)) bool logFrameInformation;

  /// @brief Field logResources, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_logResources, put = __cordl_internal_set_logResources)) bool logResources;

  /// @brief Field m_DebugItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugItems,
                      put = __cordl_internal_set_m_DebugItems))::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> m_DebugItems;

  /// @brief Field m_DebugPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugPanel, put = __cordl_internal_set_m_DebugPanel))::UnityEngine::Rendering::__DebugUI__Panel* m_DebugPanel;

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* New_ctor();

  /// @brief Method RegisterDebug, addr 0x23caf78, size 0x6d0, virtual false, abstract: false, final false
  inline void RegisterDebug(::StringW name, ::UnityEngine::Rendering::__DebugUI__Panel* debugPanel);

  /// @brief Method UnRegisterDebug, addr 0x23cb648, size 0x64, virtual false, abstract: false, final false
  inline void UnRegisterDebug(::StringW name);

  /// @brief Method <RegisterDebug>b__10_0, addr 0x23cb6b4, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__10_0();

  /// @brief Method <RegisterDebug>b__10_1, addr 0x23cb6bc, size 0xc, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_1(bool value);

  /// @brief Method <RegisterDebug>b__10_2, addr 0x23cb6c8, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__10_2();

  /// @brief Method <RegisterDebug>b__10_3, addr 0x23cb6d0, size 0xc, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_3(bool value);

  /// @brief Method <RegisterDebug>b__10_4, addr 0x23cb6dc, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__10_4();

  /// @brief Method <RegisterDebug>b__10_5, addr 0x23cb6e4, size 0xc, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_5(bool value);

  /// @brief Method <RegisterDebug>b__10_6, addr 0x23cb6f0, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__10_6();

  /// @brief Method <RegisterDebug>b__10_7, addr 0x23cb6f8, size 0xc, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_7(bool value);

  /// @brief Method <RegisterDebug>b__10_8, addr 0x23cb704, size 0x80, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_8();

  /// @brief Method <RegisterDebug>b__10_9, addr 0x23cb784, size 0x80, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__10_9();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtCreation() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtCreation();

  constexpr bool const& __cordl_internal_get_clearRenderTargetsAtRelease() const;

  constexpr bool& __cordl_internal_get_clearRenderTargetsAtRelease();

  constexpr bool const& __cordl_internal_get_disablePassCulling() const;

  constexpr bool& __cordl_internal_get_disablePassCulling();

  constexpr bool const& __cordl_internal_get_enableLogging() const;

  constexpr bool& __cordl_internal_get_enableLogging();

  constexpr bool const& __cordl_internal_get_immediateMode() const;

  constexpr bool& __cordl_internal_get_immediateMode();

  constexpr bool const& __cordl_internal_get_logFrameInformation() const;

  constexpr bool& __cordl_internal_get_logFrameInformation();

  constexpr bool const& __cordl_internal_get_logResources() const;

  constexpr bool& __cordl_internal_get_logResources();

  constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> const& __cordl_internal_get_m_DebugItems() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*>& __cordl_internal_get_m_DebugItems();

  constexpr ::UnityEngine::Rendering::__DebugUI__Panel*& __cordl_internal_get_m_DebugPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Panel*> const& __cordl_internal_get_m_DebugPanel() const;

  constexpr void __cordl_internal_set_clearRenderTargetsAtCreation(bool value);

  constexpr void __cordl_internal_set_clearRenderTargetsAtRelease(bool value);

  constexpr void __cordl_internal_set_disablePassCulling(bool value);

  constexpr void __cordl_internal_set_enableLogging(bool value);

  constexpr void __cordl_internal_set_immediateMode(bool value);

  constexpr void __cordl_internal_set_logFrameInformation(bool value);

  constexpr void __cordl_internal_set_logResources(bool value);

  constexpr void __cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> value);

  constexpr void __cordl_internal_set_m_DebugPanel(::UnityEngine::Rendering::__DebugUI__Panel* value);

  /// @brief Method .ctor, addr 0x23cb6ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugParams(RenderGraphDebugParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugParams(RenderGraphDebugParams const&) = delete;

  /// @brief Field m_DebugItems, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> ___m_DebugItems;

  /// @brief Field m_DebugPanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__Panel* ___m_DebugPanel;

  /// @brief Field clearRenderTargetsAtCreation, offset: 0x20, size: 0x1, def value: None
  bool ___clearRenderTargetsAtCreation;

  /// @brief Field clearRenderTargetsAtRelease, offset: 0x21, size: 0x1, def value: None
  bool ___clearRenderTargetsAtRelease;

  /// @brief Field disablePassCulling, offset: 0x22, size: 0x1, def value: None
  bool ___disablePassCulling;

  /// @brief Field immediateMode, offset: 0x23, size: 0x1, def value: None
  bool ___immediateMode;

  /// @brief Field enableLogging, offset: 0x24, size: 0x1, def value: None
  bool ___enableLogging;

  /// @brief Field logFrameInformation, offset: 0x25, size: 0x1, def value: None
  bool ___logFrameInformation;

  /// @brief Field logResources, offset: 0x26, size: 0x1, def value: None
  bool ___logResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___m_DebugItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___m_DebugPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___clearRenderTargetsAtCreation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___clearRenderTargetsAtRelease) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___disablePassCulling) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___immediateMode) == 0x23, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___enableLogging) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logFrameInformation) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams, ___logResources) == 0x26, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphDebugParams");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugParams__Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugParams__Strings*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphDebugParams/Strings");
