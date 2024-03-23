#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(RegisteredUIInteractorCache)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::RegisteredUIInteractorCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::RegisteredUIInteractorCache*
class CORDL_TYPE RegisteredUIInteractorCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BaseInteractor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BaseInteractor, put = __cordl_internal_set_m_BaseInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> m_BaseInteractor;

  /// @brief Field m_InputModule, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputModule, put = __cordl_internal_set_m_InputModule))::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> m_InputModule;

  /// @brief Field m_RegisteredInputModule, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInputModule,
                      put = __cordl_internal_set_m_RegisteredInputModule))::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> m_RegisteredInputModule;

  /// @brief Field m_UiInteractor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UiInteractor, put = __cordl_internal_set_m_UiInteractor))::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* m_UiInteractor;

  /// @brief Method FindOrCreateXRUIInputModule, addr 0x30253a0, size 0x300, virtual false, abstract: false, final false
  inline void FindOrCreateXRUIInputModule();

  /// @brief Method IsOverUIGameObject, addr 0x30257a8, size 0xc4, virtual false, abstract: false, final false
  inline bool IsOverUIGameObject();

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* New_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* uiInteractor);

  /// @brief Method RegisterOrUnregisterXRUIInputModule, addr 0x30251ac, size 0xb0, virtual false, abstract: false, final false
  inline void RegisterOrUnregisterXRUIInputModule(bool enabled);

  /// @brief Method RegisterWithXRUIInputModule, addr 0x302525c, size 0xc0, virtual false, abstract: false, final false
  inline void RegisterWithXRUIInputModule();

  /// @brief Method TryGetUIModel, addr 0x30256a0, size 0x108, virtual false, abstract: false, final false
  inline bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  /// @brief Method UnregisterFromXRUIInputModule, addr 0x302531c, size 0x84, virtual false, abstract: false, final false
  inline void UnregisterFromXRUIInputModule();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> const& __cordl_internal_get_m_BaseInteractor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>& __cordl_internal_get_m_BaseInteractor();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> const& __cordl_internal_get_m_InputModule() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>& __cordl_internal_get_m_InputModule();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> const& __cordl_internal_get_m_RegisteredInputModule() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>& __cordl_internal_get_m_RegisteredInputModule();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*& __cordl_internal_get_m_UiInteractor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*> const& __cordl_internal_get_m_UiInteractor() const;

  constexpr void __cordl_internal_set_m_BaseInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> value);

  constexpr void __cordl_internal_set_m_InputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> value);

  constexpr void __cordl_internal_set_m_RegisteredInputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> value);

  constexpr void __cordl_internal_set_m_UiInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* value);

  /// @brief Method .ctor, addr 0x3025114, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* uiInteractor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisteredUIInteractorCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegisteredUIInteractorCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegisteredUIInteractorCache(RegisteredUIInteractorCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegisteredUIInteractorCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegisteredUIInteractorCache(RegisteredUIInteractorCache const&) = delete;

  /// @brief Field m_InputModule, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> ___m_InputModule;

  /// @brief Field m_RegisteredInputModule, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> ___m_RegisteredInputModule;

  /// @brief Field m_UiInteractor, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* ___m_UiInteractor;

  /// @brief Field m_BaseInteractor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> ___m_BaseInteractor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_InputModule) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_RegisteredInputModule) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_UiInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_BaseInteractor) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*, "UnityEngine.XR.Interaction.Toolkit.UI", "RegisteredUIInteractorCache");
