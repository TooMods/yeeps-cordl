#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnClickInstantiate)
namespace Photon::Pun::UtilityScripts {
struct __OnClickInstantiate__InstantiateOption;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
struct __OnClickInstantiate__InstantiateOption;
}
namespace Photon::Pun::UtilityScripts {
class OnClickInstantiate;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnClickInstantiate);
// Type: ::InstantiateOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: true
// CS Name: ::OnClickInstantiate::InstantiateOption
struct CORDL_TYPE __OnClickInstantiate__InstantiateOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OnClickInstantiate__InstantiateOption_Unwrapped
  enum struct ____OnClickInstantiate__InstantiateOption_Unwrapped : int32_t {
    __E_Mine = static_cast<int32_t>(0x0),
    __E_Scene = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OnClickInstantiate__InstantiateOption_Unwrapped() const noexcept {
    return static_cast<____OnClickInstantiate__InstantiateOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OnClickInstantiate__InstantiateOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OnClickInstantiate__InstantiateOption(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Mine value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption const Mine;

  /// @brief Field Scene value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption const Scene;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::OnClickInstantiate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnClickInstantiate*
class CORDL_TYPE OnClickInstantiate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InstantiateOption = ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption;

  /// @brief Field Button, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Button, put = __cordl_internal_set_Button))::UnityEngine::EventSystems::__PointerEventData__InputButton Button;

  /// @brief Field InstantiateType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_InstantiateType, put = __cordl_internal_set_InstantiateType))::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption InstantiateType;

  /// @brief Field ModifierKey, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_ModifierKey, put = __cordl_internal_set_ModifierKey))::UnityEngine::KeyCode ModifierKey;

  /// @brief Field Prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Prefab, put = __cordl_internal_set_Prefab))::UnityW<::UnityEngine::GameObject> Prefab;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  static inline ::Photon::Pun::UtilityScripts::OnClickInstantiate* New_ctor();

  /// @brief Method UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick, addr 0x1ec8d0c, size 0x264, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __cordl_internal_get_Button() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __cordl_internal_get_Button();

  constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption const& __cordl_internal_get_InstantiateType() const;

  constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption& __cordl_internal_get_InstantiateType();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_ModifierKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_ModifierKey();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Prefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Prefab();

  constexpr void __cordl_internal_set_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr void __cordl_internal_set_InstantiateType(::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption value);

  constexpr void __cordl_internal_set_ModifierKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_Prefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x1ec8f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnClickInstantiate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnClickInstantiate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnClickInstantiate(OnClickInstantiate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnClickInstantiate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnClickInstantiate(OnClickInstantiate const&) = delete;

  /// @brief Field Button, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ___Button;

  /// @brief Field ModifierKey, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___ModifierKey;

  /// @brief Field Prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___Prefab;

  /// @brief Field InstantiateType, offset: 0x28, size: 0x4, def value: None
  ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption ___InstantiateType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnClickInstantiate, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___Button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___ModifierKey) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___Prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___InstantiateType) == 0x28, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption, "Photon.Pun.UtilityScripts", "OnClickInstantiate/InstantiateOption");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnClickInstantiate);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnClickInstantiate*, "Photon.Pun.UtilityScripts", "OnClickInstantiate");
