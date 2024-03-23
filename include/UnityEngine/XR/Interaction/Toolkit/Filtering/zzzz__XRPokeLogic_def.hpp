#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRPokeLogic)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRPokeLogic
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRPokeLogic*
class CORDL_TYPE XRPokeLogic : public ::System::Object {
public:
  // Declarations
  /// @brief Field <interactionAxisLength>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__interactionAxisLength_k__BackingField,
                      put = __cordl_internal_set__interactionAxisLength_k__BackingField)) float_t _interactionAxisLength_k__BackingField;

  /// @brief Field <squaredInteractionAxisLength>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__squaredInteractionAxisLength_k__BackingField,
                      put = __cordl_internal_set__squaredInteractionAxisLength_k__BackingField)) float_t _squaredInteractionAxisLength_k__BackingField;

  __declspec(property(get = get_interactionAxisLength, put = set_interactionAxisLength)) float_t interactionAxisLength;

  /// @brief Field m_HoldingHoverCheck, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoldingHoverCheck,
                      put = __cordl_internal_set_m_HoldingHoverCheck))::System::Collections::Generic::Dictionary_2<::System::Object*, bool>* m_HoldingHoverCheck;

  /// @brief Field m_InitialTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InitialTransform, put = __cordl_internal_set_m_InitialTransform))::UnityW<::UnityEngine::Transform> m_InitialTransform;

  /// @brief Field m_LastHoverEnterLocalPosition, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastHoverEnterLocalPosition,
                      put = __cordl_internal_set_m_LastHoverEnterLocalPosition))::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Vector3>* m_LastHoverEnterLocalPosition;

  /// @brief Field m_LastHoveredTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastHoveredTransform,
                      put = __cordl_internal_set_m_LastHoveredTransform))::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityW<::UnityEngine::Transform>>* m_LastHoveredTransform;

  /// @brief Field m_PokeStateData, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PokeStateData,
      put = __cordl_internal_set_m_PokeStateData))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* m_PokeStateData;

  /// @brief Field m_PokeThresholdData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeThresholdData,
                      put = __cordl_internal_set_m_PokeThresholdData))::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* m_PokeThresholdData;

  /// @brief Field m_SelectEntranceVectorDotThreshold, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectEntranceVectorDotThreshold, put = __cordl_internal_set_m_SelectEntranceVectorDotThreshold)) float_t m_SelectEntranceVectorDotThreshold;

  __declspec(
      property(get = get_pokeStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* pokeStateData;

  __declspec(property(get = get_squaredInteractionAxisLength, put = set_squaredInteractionAxisLength)) float_t squaredInteractionAxisLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BoundsLocalToWorld, addr 0x2ff1228, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds BoundsLocalToWorld(::UnityEngine::Bounds targetBounds, ::UnityEngine::Transform* targetTransform, bool rotateBoundsScale);

  /// @brief Method ComputeBounds, addr 0x2ff0a48, size 0x300, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds ComputeBounds(::UnityEngine::Collider* targetCollider, bool rotateBoundsScale, ::UnityEngine::Space targetSpace);

  /// @brief Method ComputeInteractionAxisLength, addr 0x2ff0d48, size 0x170, virtual false, abstract: false, final false
  inline float_t ComputeInteractionAxisLength(::UnityEngine::Bounds bounds);

  /// @brief Method ComputeRotatedDepthEvaluationAxis, addr 0x2ff0ff4, size 0x234, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeRotatedDepthEvaluationAxis(::UnityEngine::Transform* associatedTransform, bool isWorldSpace);

  /// @brief Method Dispose, addr 0x2fef8a8, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DrawGizmos, addr 0x2ff136c, size 0x214, virtual false, abstract: false, final false
  inline void DrawGizmos();

  /// @brief Method Initialize, addr 0x2ff0834, size 0xdc, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Transform* associatedTransform, ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* pokeThresholdData, ::UnityEngine::Collider* collider);

  /// @brief Method MeetsRequirementsForSelectAction, addr 0x2fefb04, size 0x740, virtual false, abstract: false, final false
  inline bool MeetsRequirementsForSelectAction(::System::Object* interactor, ::UnityEngine::Vector3 pokableAttachPosition, ::UnityEngine::Vector3 pokerAttachPosition, float_t pokeInteractionOffset,
                                               ::UnityEngine::Transform* pokedTransform);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* New_ctor();

  /// @brief Method OnHoverEntered, addr 0x2ff04b4, size 0xb0, virtual false, abstract: false, final false
  inline void OnHoverEntered(::System::Object* interactor, ::UnityEngine::Pose updatedPose, ::UnityEngine::Transform* pokedTransform);

  /// @brief Method OnHoverExited, addr 0x2ff059c, size 0x104, virtual false, abstract: false, final false
  inline void OnHoverExited(::System::Object* interactor);

  /// @brief Method ResetPokeStateData, addr 0x2ff0eb8, size 0x12c, virtual false, abstract: false, final false
  inline void ResetPokeStateData(::UnityEngine::Transform* transform);

  /// @brief Method SetPokeDepth, addr 0x2ff0fe4, size 0x10, virtual false, abstract: false, final false
  inline void SetPokeDepth(float_t pokeDepth);

  constexpr float_t const& __cordl_internal_get__interactionAxisLength_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__interactionAxisLength_k__BackingField();

  constexpr float_t const& __cordl_internal_get__squaredInteractionAxisLength_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__squaredInteractionAxisLength_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, bool>*& __cordl_internal_get_m_HoldingHoverCheck();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, bool>*> const& __cordl_internal_get_m_HoldingHoverCheck() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_InitialTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_InitialTransform();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Vector3>*& __cordl_internal_get_m_LastHoverEnterLocalPosition();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Vector3>*> const&
  __cordl_internal_get_m_LastHoverEnterLocalPosition() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_LastHoveredTransform();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityW<::UnityEngine::Transform>>*> const&
  __cordl_internal_get_m_LastHoveredTransform() const;

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*& __cordl_internal_get_m_PokeStateData();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*> const&
  __cordl_internal_get_m_PokeStateData() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*& __cordl_internal_get_m_PokeThresholdData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*> const& __cordl_internal_get_m_PokeThresholdData() const;

  constexpr float_t const& __cordl_internal_get_m_SelectEntranceVectorDotThreshold() const;

  constexpr float_t& __cordl_internal_get_m_SelectEntranceVectorDotThreshold();

  constexpr void __cordl_internal_set__interactionAxisLength_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__squaredInteractionAxisLength_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_HoldingHoverCheck(::System::Collections::Generic::Dictionary_2<::System::Object*, bool>* value);

  constexpr void __cordl_internal_set_m_InitialTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_LastHoverEnterLocalPosition(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_LastHoveredTransform(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set_m_PokeStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* value);

  constexpr void __cordl_internal_set_m_PokeThresholdData(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* value);

  constexpr void __cordl_internal_set_m_SelectEntranceVectorDotThreshold(float_t value);

  /// @brief Method .ctor, addr 0x2ff06a0, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_interactionAxisLength, addr 0x2ff0a20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_interactionAxisLength();

  /// @brief Method get_pokeStateData, addr 0x2ff0a30, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData();

  /// @brief Method get_squaredInteractionAxisLength, addr 0x2ff0a38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_squaredInteractionAxisLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_interactionAxisLength, addr 0x2ff0a28, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionAxisLength(float_t value);

  /// @brief Method set_squaredInteractionAxisLength, addr 0x2ff0a40, size 0x8, virtual false, abstract: false, final false
  inline void set_squaredInteractionAxisLength(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPokeLogic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPokeLogic(XRPokeLogic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPokeLogic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPokeLogic(XRPokeLogic const&) = delete;

  /// @brief Field <interactionAxisLength>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____interactionAxisLength_k__BackingField;

  /// @brief Field m_PokeStateData, offset: 0x18, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* ___m_PokeStateData;

  /// @brief Field <squaredInteractionAxisLength>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____squaredInteractionAxisLength_k__BackingField;

  /// @brief Field m_InitialTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_InitialTransform;

  /// @brief Field m_PokeThresholdData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* ___m_PokeThresholdData;

  /// @brief Field m_SelectEntranceVectorDotThreshold, offset: 0x38, size: 0x4, def value: None
  float_t ___m_SelectEntranceVectorDotThreshold;

  /// @brief Field m_LastHoverEnterLocalPosition, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Vector3>* ___m_LastHoverEnterLocalPosition;

  /// @brief Field m_LastHoveredTransform, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityW<::UnityEngine::Transform>>* ___m_LastHoveredTransform;

  /// @brief Field m_HoldingHoverCheck, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, bool>* ___m_HoldingHoverCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ____interactionAxisLength_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_PokeStateData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ____squaredInteractionAxisLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_InitialTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_PokeThresholdData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_SelectEntranceVectorDotThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_LastHoverEnterLocalPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_LastHoveredTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic, ___m_HoldingHoverCheck) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeLogic");
