#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ButtonInsideScrollList)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class ScrollRect;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ButtonInsideScrollList;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::ButtonInsideScrollList);
// Type: Photon.Pun.UtilityScripts::ButtonInsideScrollList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::ButtonInsideScrollList*
class CORDL_TYPE ButtonInsideScrollList : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field scrollRect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollRect, put = __cordl_internal_set_scrollRect))::UnityW<::UnityEngine::UI::ScrollRect> scrollRect;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  static inline ::Photon::Pun::UtilityScripts::ButtonInsideScrollList* New_ctor();

  /// @brief Method Start, addr 0x1ecc124, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown, addr 0x1ecc174, size 0xa0, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp, addr 0x1ecc214, size 0x9c, virtual true, abstract: false, final true
  inline void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_scrollRect() const;

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_scrollRect();

  constexpr void __cordl_internal_set_scrollRect(::UnityW<::UnityEngine::UI::ScrollRect> value);

  /// @brief Method .ctor, addr 0x1ecc2b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonInsideScrollList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonInsideScrollList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonInsideScrollList(ButtonInsideScrollList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonInsideScrollList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonInsideScrollList(ButtonInsideScrollList const&) = delete;

  /// @brief Field scrollRect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ScrollRect> ___scrollRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::ButtonInsideScrollList, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ButtonInsideScrollList, ___scrollRect) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::ButtonInsideScrollList);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::ButtonInsideScrollList*, "Photon.Pun.UtilityScripts", "ButtonInsideScrollList");
