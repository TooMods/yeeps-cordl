#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputActionManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class InputActionManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs::InputActionManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs::InputActionManager*
class CORDL_TYPE InputActionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_actionAssets, put = set_actionAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* actionAssets;

  /// @brief Field m_ActionAssets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionAssets,
                      put = __cordl_internal_set_m_ActionAssets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* m_ActionAssets;

  /// @brief Method DisableInput, addr 0x2ff58e8, size 0x194, virtual false, abstract: false, final false
  inline void DisableInput();

  /// @brief Method EnableInput, addr 0x2ff5750, size 0x194, virtual false, abstract: false, final false
  inline void EnableInput();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager* New_ctor();

  /// @brief Method OnDisable, addr 0x2ff58e4, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ff574c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*& __cordl_internal_get_m_ActionAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*> const& __cordl_internal_get_m_ActionAssets() const;

  constexpr void __cordl_internal_set_m_ActionAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* value);

  /// @brief Method .ctor, addr 0x2ff5a7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_actionAssets, addr 0x2ff56d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* get_actionAssets();

  /// @brief Method set_actionAssets, addr 0x2ff56dc, size 0x70, virtual false, abstract: false, final false
  inline void set_actionAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionManager(InputActionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionManager(InputActionManager const&) = delete;

  /// @brief Field m_ActionAssets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* ___m_ActionAssets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager, ___m_ActionAssets) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionManager");
