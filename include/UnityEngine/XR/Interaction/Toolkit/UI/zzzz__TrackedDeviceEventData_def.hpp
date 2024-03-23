#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceEventData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceEventData
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 384, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceEventData*
class CORDL_TYPE TrackedDeviceEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
  // Declarations
  /// @brief Field <layerMask>k__BackingField, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get__layerMask_k__BackingField, put = __cordl_internal_set__layerMask_k__BackingField))::UnityEngine::LayerMask _layerMask_k__BackingField;

  /// @brief Field <rayHitIndex>k__BackingField, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get__rayHitIndex_k__BackingField, put = __cordl_internal_set__rayHitIndex_k__BackingField)) int32_t _rayHitIndex_k__BackingField;

  /// @brief Field <rayPoints>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__rayPoints_k__BackingField,
                      put = __cordl_internal_set__rayPoints_k__BackingField))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _rayPoints_k__BackingField;

  __declspec(property(get = get_interactor))::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor;

  __declspec(property(get = get_layerMask, put = set_layerMask))::UnityEngine::LayerMask layerMask;

  __declspec(property(get = get_rayHitIndex, put = set_rayHitIndex)) int32_t rayHitIndex;

  __declspec(property(get = get_rayPoints, put = set_rayPoints))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* rayPoints;

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__rayHitIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__rayHitIndex_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__rayPoints_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__rayPoints_k__BackingField() const;

  constexpr void __cordl_internal_set__layerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__rayHitIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__rayPoints_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x3025e44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_interactor, addr 0x3025e7c, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* get_interactor();

  /// @brief Method get_layerMask, addr 0x3025e6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_layerMask();

  /// @brief Method get_rayHitIndex, addr 0x3025e5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rayHitIndex();

  /// @brief Method get_rayPoints, addr 0x3025e4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_rayPoints();

  /// @brief Method set_layerMask, addr 0x3025e74, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_rayHitIndex, addr 0x3025e64, size 0x8, virtual false, abstract: false, final false
  inline void set_rayHitIndex(int32_t value);

  /// @brief Method set_rayPoints, addr 0x3025e54, size 0x8, virtual false, abstract: false, final false
  inline void set_rayPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDeviceEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedDeviceEventData(TrackedDeviceEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedDeviceEventData(TrackedDeviceEventData const&) = delete;

  /// @brief Field <rayPoints>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____rayPoints_k__BackingField;

  /// @brief Field <rayHitIndex>k__BackingField, offset: 0x178, size: 0x4, def value: None
  int32_t ____rayHitIndex_k__BackingField;

  /// @brief Field <layerMask>k__BackingField, offset: 0x17c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layerMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, 0x180>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____rayPoints_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____rayHitIndex_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____layerMask_k__BackingField) == 0x17c, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceEventData");
