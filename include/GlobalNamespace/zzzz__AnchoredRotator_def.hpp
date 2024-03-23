#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnchoredRotator)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnchoredRotator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnchoredRotator);
// Type: ::AnchoredRotator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnchoredRotator*
class CORDL_TYPE AnchoredRotator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field followAnchor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_followAnchor, put = __cordl_internal_set_followAnchor))::UnityW<::UnityEngine::Transform> followAnchor;

  /// @brief Field isMovementEngaged, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isMovementEngaged, put = __cordl_internal_set_isMovementEngaged)) bool isMovementEngaged;

  /// @brief Field minAngleForDisengageMovementDegrees, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_minAngleForDisengageMovementDegrees, put = __cordl_internal_set_minAngleForDisengageMovementDegrees)) float_t minAngleForDisengageMovementDegrees;

  /// @brief Field minAngleForEngageMovementDegrees, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_minAngleForEngageMovementDegrees, put = __cordl_internal_set_minAngleForEngageMovementDegrees)) float_t minAngleForEngageMovementDegrees;

  /// @brief Field offsetFromAnchor, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_offsetFromAnchor, put = __cordl_internal_set_offsetFromAnchor))::UnityEngine::Vector3 offsetFromAnchor;

  /// @brief Field rotationLerpSpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationLerpSpeed, put = __cordl_internal_set_rotationLerpSpeed)) float_t rotationLerpSpeed;

  /// @brief Field upReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_upReference, put = __cordl_internal_set_upReference))::UnityW<::UnityEngine::Transform> upReference;

  /// @brief Method LateUpdate, addr 0x153f948, size 0x478, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::AnchoredRotator* New_ctor();

  /// @brief Method SnapToCorrectTransformation, addr 0x153f720, size 0x228, virtual false, abstract: false, final false
  inline void SnapToCorrectTransformation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followAnchor();

  constexpr bool const& __cordl_internal_get_isMovementEngaged() const;

  constexpr bool& __cordl_internal_get_isMovementEngaged();

  constexpr float_t const& __cordl_internal_get_minAngleForDisengageMovementDegrees() const;

  constexpr float_t& __cordl_internal_get_minAngleForDisengageMovementDegrees();

  constexpr float_t const& __cordl_internal_get_minAngleForEngageMovementDegrees() const;

  constexpr float_t& __cordl_internal_get_minAngleForEngageMovementDegrees();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetFromAnchor() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetFromAnchor();

  constexpr float_t const& __cordl_internal_get_rotationLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_rotationLerpSpeed();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upReference() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upReference();

  constexpr void __cordl_internal_set_followAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isMovementEngaged(bool value);

  constexpr void __cordl_internal_set_minAngleForDisengageMovementDegrees(float_t value);

  constexpr void __cordl_internal_set_minAngleForEngageMovementDegrees(float_t value);

  constexpr void __cordl_internal_set_offsetFromAnchor(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotationLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_upReference(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x153fdc0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnchoredRotator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnchoredRotator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnchoredRotator(AnchoredRotator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnchoredRotator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnchoredRotator(AnchoredRotator const&) = delete;

  /// @brief Field rotationLerpSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___rotationLerpSpeed;

  /// @brief Field minAngleForEngageMovementDegrees, offset: 0x1c, size: 0x4, def value: None
  float_t ___minAngleForEngageMovementDegrees;

  /// @brief Field minAngleForDisengageMovementDegrees, offset: 0x20, size: 0x4, def value: None
  float_t ___minAngleForDisengageMovementDegrees;

  /// @brief Field isMovementEngaged, offset: 0x24, size: 0x1, def value: None
  bool ___isMovementEngaged;

  /// @brief Field followAnchor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___followAnchor;

  /// @brief Field upReference, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___upReference;

  /// @brief Field offsetFromAnchor, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offsetFromAnchor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnchoredRotator, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___rotationLerpSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___minAngleForEngageMovementDegrees) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___minAngleForDisengageMovementDegrees) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___isMovementEngaged) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___followAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___upReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchoredRotator, ___offsetFromAnchor) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnchoredRotator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnchoredRotator*, "", "AnchoredRotator");
