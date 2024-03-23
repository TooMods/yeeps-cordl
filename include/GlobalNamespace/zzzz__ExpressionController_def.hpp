#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExpressionController)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ExpressionController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExpressionController);
// Type: ::ExpressionController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExpressionController*
class CORDL_TYPE ExpressionController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field closedLowerMouthAngle, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_closedLowerMouthAngle, put = __cordl_internal_set_closedLowerMouthAngle)) float_t closedLowerMouthAngle;

  /// @brief Field closedUpperMouthAngle, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_closedUpperMouthAngle, put = __cordl_internal_set_closedUpperMouthAngle)) float_t closedUpperMouthAngle;

  /// @brief Field isMaster, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaster, put = __cordl_internal_set_isMaster)) bool isMaster;

  /// @brief Field lowerMouthBone, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lowerMouthBone, put = __cordl_internal_set_lowerMouthBone))::UnityW<::UnityEngine::Transform> lowerMouthBone;

  /// @brief Field maxAudioEnergy, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAudioEnergy, put = __cordl_internal_set_maxAudioEnergy)) float_t maxAudioEnergy;

  /// @brief Field maxLowerMouthOpenAmount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_maxLowerMouthOpenAmount, put = __cordl_internal_set_maxLowerMouthOpenAmount)) float_t maxLowerMouthOpenAmount;

  /// @brief Field maxUpperMouthOpenAmount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxUpperMouthOpenAmount, put = __cordl_internal_set_maxUpperMouthOpenAmount)) float_t maxUpperMouthOpenAmount;

  /// @brief Field mouthOpenCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mouthOpenCurve, put = __cordl_internal_set_mouthOpenCurve))::UnityEngine::AnimationCurve* mouthOpenCurve;

  /// @brief Field mouthOpenRatio, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_mouthOpenRatio, put = __cordl_internal_set_mouthOpenRatio)) float_t mouthOpenRatio;

  /// @brief Field mouthOpenRatioLerpSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mouthOpenRatioLerpSpeed, put = __cordl_internal_set_mouthOpenRatioLerpSpeed)) float_t mouthOpenRatioLerpSpeed;

  /// @brief Field openLowerMouthAngle, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_openLowerMouthAngle, put = __cordl_internal_set_openLowerMouthAngle)) float_t openLowerMouthAngle;

  /// @brief Field openMouthThreshold, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_openMouthThreshold, put = __cordl_internal_set_openMouthThreshold)) float_t openMouthThreshold;

  /// @brief Field openUpperMouthAngle, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_openUpperMouthAngle, put = __cordl_internal_set_openUpperMouthAngle)) float_t openUpperMouthAngle;

  /// @brief Field registeredUserID, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredUserID, put = __cordl_internal_set_registeredUserID))::StringW registeredUserID;

  /// @brief Field targetMouthOpenRatio, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_targetMouthOpenRatio, put = __cordl_internal_set_targetMouthOpenRatio)) float_t targetMouthOpenRatio;

  /// @brief Field upperMouthBone, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_upperMouthBone, put = __cordl_internal_set_upperMouthBone))::UnityW<::UnityEngine::Transform> upperMouthBone;

  /// @brief Field userID, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_userID, put = __cordl_internal_set_userID))::StringW userID;

  /// @brief Method Deregister, addr 0x158cde8, size 0x158, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method Initialize, addr 0x158cd6c, size 0x7c, virtual false, abstract: false, final false
  inline void Initialize(::StringW userID, bool isMaster);

  static inline ::GlobalNamespace::ExpressionController* New_ctor();

  /// @brief Method OnDisable, addr 0x158d0bc, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x158d0a4, size 0x18, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSpeakingVolumeUpdated, addr 0x158d0cc, size 0xd8, virtual false, abstract: false, final false
  inline void OnSpeakingVolumeUpdated(float_t volume);

  /// @brief Method Register, addr 0x158cf40, size 0x164, virtual false, abstract: false, final false
  inline void Register();

  constexpr float_t const& __cordl_internal_get_closedLowerMouthAngle() const;

  constexpr float_t& __cordl_internal_get_closedLowerMouthAngle();

  constexpr float_t const& __cordl_internal_get_closedUpperMouthAngle() const;

  constexpr float_t& __cordl_internal_get_closedUpperMouthAngle();

  constexpr bool const& __cordl_internal_get_isMaster() const;

  constexpr bool& __cordl_internal_get_isMaster();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lowerMouthBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lowerMouthBone();

  constexpr float_t const& __cordl_internal_get_maxAudioEnergy() const;

  constexpr float_t& __cordl_internal_get_maxAudioEnergy();

  constexpr float_t const& __cordl_internal_get_maxLowerMouthOpenAmount() const;

  constexpr float_t& __cordl_internal_get_maxLowerMouthOpenAmount();

  constexpr float_t const& __cordl_internal_get_maxUpperMouthOpenAmount() const;

  constexpr float_t& __cordl_internal_get_maxUpperMouthOpenAmount();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mouthOpenCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_mouthOpenCurve() const;

  constexpr float_t const& __cordl_internal_get_mouthOpenRatio() const;

  constexpr float_t& __cordl_internal_get_mouthOpenRatio();

  constexpr float_t const& __cordl_internal_get_mouthOpenRatioLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_mouthOpenRatioLerpSpeed();

  constexpr float_t const& __cordl_internal_get_openLowerMouthAngle() const;

  constexpr float_t& __cordl_internal_get_openLowerMouthAngle();

  constexpr float_t const& __cordl_internal_get_openMouthThreshold() const;

  constexpr float_t& __cordl_internal_get_openMouthThreshold();

  constexpr float_t const& __cordl_internal_get_openUpperMouthAngle() const;

  constexpr float_t& __cordl_internal_get_openUpperMouthAngle();

  constexpr ::StringW const& __cordl_internal_get_registeredUserID() const;

  constexpr ::StringW& __cordl_internal_get_registeredUserID();

  constexpr float_t const& __cordl_internal_get_targetMouthOpenRatio() const;

  constexpr float_t& __cordl_internal_get_targetMouthOpenRatio();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upperMouthBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upperMouthBone();

  constexpr ::StringW const& __cordl_internal_get_userID() const;

  constexpr ::StringW& __cordl_internal_get_userID();

  constexpr void __cordl_internal_set_closedLowerMouthAngle(float_t value);

  constexpr void __cordl_internal_set_closedUpperMouthAngle(float_t value);

  constexpr void __cordl_internal_set_isMaster(bool value);

  constexpr void __cordl_internal_set_lowerMouthBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_maxAudioEnergy(float_t value);

  constexpr void __cordl_internal_set_maxLowerMouthOpenAmount(float_t value);

  constexpr void __cordl_internal_set_maxUpperMouthOpenAmount(float_t value);

  constexpr void __cordl_internal_set_mouthOpenCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_mouthOpenRatio(float_t value);

  constexpr void __cordl_internal_set_mouthOpenRatioLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_openLowerMouthAngle(float_t value);

  constexpr void __cordl_internal_set_openMouthThreshold(float_t value);

  constexpr void __cordl_internal_set_openUpperMouthAngle(float_t value);

  constexpr void __cordl_internal_set_registeredUserID(::StringW value);

  constexpr void __cordl_internal_set_targetMouthOpenRatio(float_t value);

  constexpr void __cordl_internal_set_upperMouthBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_userID(::StringW value);

  /// @brief Method .ctor, addr 0x158d1a4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionController(ExpressionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionController(ExpressionController const&) = delete;

  /// @brief Field openMouthThreshold, offset: 0x18, size: 0x4, def value: None
  float_t ___openMouthThreshold;

  /// @brief Field maxAudioEnergy, offset: 0x1c, size: 0x4, def value: None
  float_t ___maxAudioEnergy;

  /// @brief Field maxUpperMouthOpenAmount, offset: 0x20, size: 0x4, def value: None
  float_t ___maxUpperMouthOpenAmount;

  /// @brief Field maxLowerMouthOpenAmount, offset: 0x24, size: 0x4, def value: None
  float_t ___maxLowerMouthOpenAmount;

  /// @brief Field mouthOpenRatioLerpSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___mouthOpenRatioLerpSpeed;

  /// @brief Field lowerMouthBone, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lowerMouthBone;

  /// @brief Field upperMouthBone, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___upperMouthBone;

  /// @brief Field mouthOpenCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___mouthOpenCurve;

  /// @brief Field closedUpperMouthAngle, offset: 0x48, size: 0x4, def value: None
  float_t ___closedUpperMouthAngle;

  /// @brief Field closedLowerMouthAngle, offset: 0x4c, size: 0x4, def value: None
  float_t ___closedLowerMouthAngle;

  /// @brief Field openUpperMouthAngle, offset: 0x50, size: 0x4, def value: None
  float_t ___openUpperMouthAngle;

  /// @brief Field openLowerMouthAngle, offset: 0x54, size: 0x4, def value: None
  float_t ___openLowerMouthAngle;

  /// @brief Field mouthOpenRatio, offset: 0x58, size: 0x4, def value: None
  float_t ___mouthOpenRatio;

  /// @brief Field targetMouthOpenRatio, offset: 0x5c, size: 0x4, def value: None
  float_t ___targetMouthOpenRatio;

  /// @brief Field isMaster, offset: 0x60, size: 0x1, def value: None
  bool ___isMaster;

  /// @brief Field userID, offset: 0x68, size: 0x8, def value: None
  ::StringW ___userID;

  /// @brief Field registeredUserID, offset: 0x70, size: 0x8, def value: None
  ::StringW ___registeredUserID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExpressionController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___openMouthThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___maxAudioEnergy) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___maxUpperMouthOpenAmount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___maxLowerMouthOpenAmount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___mouthOpenRatioLerpSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___lowerMouthBone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___upperMouthBone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___mouthOpenCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___closedUpperMouthAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___closedLowerMouthAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___openUpperMouthAngle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___openLowerMouthAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___mouthOpenRatio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___targetMouthOpenRatio) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___isMaster) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___userID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionController, ___registeredUserID) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExpressionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExpressionController*, "", "ExpressionController");
