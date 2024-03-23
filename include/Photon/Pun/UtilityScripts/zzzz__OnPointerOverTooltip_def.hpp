#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnPointerOverTooltip)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnPointerOverTooltip;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnPointerOverTooltip);
// Type: Photon.Pun.UtilityScripts::OnPointerOverTooltip
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnPointerOverTooltip*
class CORDL_TYPE OnPointerOverTooltip : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::Photon::Pun::UtilityScripts::OnPointerOverTooltip* New_ctor();

  /// @brief Method OnDestroy, addr 0x1ecc6bc, size 0x84, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter, addr 0x1ecc7c4, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit, addr 0x1ecc740, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method .ctor, addr 0x1ecc848, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnPointerOverTooltip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnPointerOverTooltip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnPointerOverTooltip(OnPointerOverTooltip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnPointerOverTooltip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnPointerOverTooltip(OnPointerOverTooltip const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnPointerOverTooltip, 0x18>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnPointerOverTooltip);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnPointerOverTooltip*, "Photon.Pun.UtilityScripts", "OnPointerOverTooltip");
