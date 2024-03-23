#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarHand)
namespace DitzelGames::FastIK {
class FastIKFabric;
}
namespace GlobalNamespace {
class __AvatarHand__GripData;
}
namespace GlobalNamespace {
struct __AvatarHand__GripType;
}
namespace GlobalNamespace {
struct __AvatarHand__Pose;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AvatarHand__GripType;
}
namespace GlobalNamespace {
class AvatarHand;
}
namespace GlobalNamespace {
class __AvatarHand__GripData;
}
namespace GlobalNamespace {
struct __AvatarHand__Pose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AvatarHand__GripType);
MARK_REF_PTR_T(::GlobalNamespace::AvatarHand);
MARK_REF_PTR_T(::GlobalNamespace::__AvatarHand__GripData);
MARK_VAL_T(::GlobalNamespace::__AvatarHand__Pose);
// Type: ::GripType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AvatarHand::GripType
struct CORDL_TYPE __AvatarHand__GripType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AvatarHand__GripType_Unwrapped
  enum struct ____AvatarHand__GripType_Unwrapped : int32_t {
    __E_fist = static_cast<int32_t>(0x0),
    __E_fistThumbUp = static_cast<int32_t>(0x1),
    __E_ballSmall = static_cast<int32_t>(0x2),
    __E_ballBig = static_cast<int32_t>(0x3),
    __E_disc = static_cast<int32_t>(0x4),
    __E_gun = static_cast<int32_t>(0x5),
    __E_detonator = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AvatarHand__GripType_Unwrapped() const noexcept {
    return static_cast<____AvatarHand__GripType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarHand__GripType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AvatarHand__GripType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ballBig value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__AvatarHand__GripType const ballBig;

  /// @brief Field ballSmall value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AvatarHand__GripType const ballSmall;

  /// @brief Field detonator value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__AvatarHand__GripType const detonator;

  /// @brief Field disc value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__AvatarHand__GripType const disc;

  /// @brief Field fist value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AvatarHand__GripType const fist;

  /// @brief Field fistThumbUp value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AvatarHand__GripType const fistThumbUp;

  /// @brief Field gun value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__AvatarHand__GripType const gun;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarHand__GripType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__GripType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GripData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarHand::GripData*
class CORDL_TYPE __AvatarHand__GripData : public ::System::Object {
public:
  // Declarations
  /// @brief Field indexFingerRatio, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_indexFingerRatio, put = __cordl_internal_set_indexFingerRatio)) float_t indexFingerRatio;

  /// @brief Field middleFingerRatio, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_middleFingerRatio, put = __cordl_internal_set_middleFingerRatio)) float_t middleFingerRatio;

  /// @brief Field thumbFingerRatio, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_thumbFingerRatio, put = __cordl_internal_set_thumbFingerRatio)) float_t thumbFingerRatio;

  /// @brief Method Apply, addr 0x158acb4, size 0x14, virtual false, abstract: false, final false
  inline void Apply(ByRef<::GlobalNamespace::__AvatarHand__Pose> pose);

  static inline ::GlobalNamespace::__AvatarHand__GripData* New_ctor(float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio);

  constexpr float_t const& __cordl_internal_get_indexFingerRatio() const;

  constexpr float_t& __cordl_internal_get_indexFingerRatio();

  constexpr float_t const& __cordl_internal_get_middleFingerRatio() const;

  constexpr float_t& __cordl_internal_get_middleFingerRatio();

  constexpr float_t const& __cordl_internal_get_thumbFingerRatio() const;

  constexpr float_t& __cordl_internal_get_thumbFingerRatio();

  constexpr void __cordl_internal_set_indexFingerRatio(float_t value);

  constexpr void __cordl_internal_set_middleFingerRatio(float_t value);

  constexpr void __cordl_internal_set_thumbFingerRatio(float_t value);

  /// @brief Method .ctor, addr 0x158ac78, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarHand__GripData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AvatarHand__GripData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarHand__GripData(__AvatarHand__GripData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarHand__GripData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarHand__GripData(__AvatarHand__GripData const&) = delete;

  /// @brief Field indexFingerRatio, offset: 0x10, size: 0x4, def value: None
  float_t ___indexFingerRatio;

  /// @brief Field middleFingerRatio, offset: 0x14, size: 0x4, def value: None
  float_t ___middleFingerRatio;

  /// @brief Field thumbFingerRatio, offset: 0x18, size: 0x4, def value: None
  float_t ___thumbFingerRatio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarHand__GripData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__GripData, ___indexFingerRatio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__GripData, ___middleFingerRatio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__GripData, ___thumbFingerRatio) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pose
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AvatarHand::Pose
struct CORDL_TYPE __AvatarHand__Pose {
public:
  // Declarations
  /// @brief Field leftControllerToWristJoint, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_leftControllerToWristJoint, put = setStaticF_leftControllerToWristJoint))::UnityEngine::Vector3 leftControllerToWristJoint;

  /// @brief Field rightControllerToWristJoint, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_rightControllerToWristJoint, put = setStaticF_rightControllerToWristJoint))::UnityEngine::Vector3 rightControllerToWristJoint;

  /// @brief Method GetWristJointPosition, addr 0x158a6a0, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetWristJointPosition(bool right);

  /// @brief Method LerpUnclamped, addr 0x1589c54, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AvatarHand__Pose LerpUnclamped(::GlobalNamespace::__AvatarHand__Pose a, ::GlobalNamespace::__AvatarHand__Pose b, float_t p);

  /// @brief Method .ctor, addr 0x158acc8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio);

  static inline ::UnityEngine::Vector3 getStaticF_leftControllerToWristJoint();

  static inline ::UnityEngine::Vector3 getStaticF_rightControllerToWristJoint();

  static inline void setStaticF_leftControllerToWristJoint(::UnityEngine::Vector3 value);

  static inline void setStaticF_rightControllerToWristJoint(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarHand__Pose();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "indexFingerRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "middleFingerRatio", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "thumbFingerRatio", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __AvatarHand__Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field indexFingerRatio, offset: 0x1c, size: 0x4, def value: None
  float_t indexFingerRatio;

  /// @brief Field middleFingerRatio, offset: 0x20, size: 0x4, def value: None
  float_t middleFingerRatio;

  /// @brief Field thumbFingerRatio, offset: 0x24, size: 0x4, def value: None
  float_t thumbFingerRatio;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarHand__Pose, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__Pose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__Pose, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__Pose, indexFingerRatio) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__Pose, middleFingerRatio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarHand__Pose, thumbFingerRatio) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarHand
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarHand*
class CORDL_TYPE AvatarHand : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GripData = ::GlobalNamespace::__AvatarHand__GripData;

  using GripType = ::GlobalNamespace::__AvatarHand__GripType;

  using Pose = ::GlobalNamespace::__AvatarHand__Pose;

  /// @brief Field IKFabric, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_IKFabric, put = __cordl_internal_set_IKFabric))::UnityW<::DitzelGames::FastIK::FastIKFabric> IKFabric;

  /// @brief Field IKTarget, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_IKTarget, put = __cordl_internal_set_IKTarget))::UnityW<::UnityEngine::Transform> IKTarget;

  /// @brief Field <velocity>k__BackingField, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__velocity_k__BackingField, put = __cordl_internal_set__velocity_k__BackingField))::UnityEngine::Vector3 _velocity_k__BackingField;

  /// @brief Field animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field calculateVelocity, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_calculateVelocity, put = __cordl_internal_set_calculateVelocity)) bool calculateVelocity;

  /// @brief Field grabbedItemContainer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_grabbedItemContainer, put = __cordl_internal_set_grabbedItemContainer))::UnityW<::UnityEngine::Transform> grabbedItemContainer;

  /// @brief Field gripDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_gripDatas,
                             put = setStaticF_gripDatas))::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*> gripDatas;

  /// @brief Field lastIndexRatio, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastIndexRatio, put = __cordl_internal_set_lastIndexRatio)) float_t lastIndexRatio;

  /// @brief Field lastMiddleRatio, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_lastMiddleRatio, put = __cordl_internal_set_lastMiddleRatio)) float_t lastMiddleRatio;

  /// @brief Field lastPositionRelativeToReference, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPositionRelativeToReference, put = __cordl_internal_set_lastPositionRelativeToReference))::UnityEngine::Vector3 lastPositionRelativeToReference;

  /// @brief Field lastThumbRatio, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_lastThumbRatio, put = __cordl_internal_set_lastThumbRatio)) float_t lastThumbRatio;

  /// @brief Field leftHandRotationOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_leftHandRotationOffset, put = setStaticF_leftHandRotationOffset))::UnityEngine::Quaternion leftHandRotationOffset;

  /// @brief Field right, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) bool right;

  /// @brief Field rightHandRotationOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_rightHandRotationOffset, put = setStaticF_rightHandRotationOffset))::UnityEngine::Quaternion rightHandRotationOffset;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method ExpressPose, addr 0x1588398, size 0x4ac, virtual false, abstract: false, final false
  inline void ExpressPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__AvatarHand__Pose pose, bool doLerp);

  /// @brief Method GetGripData, addr 0x158a788, size 0x7c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AvatarHand__GripData* GetGripData(::GlobalNamespace::__AvatarHand__GripType gripType);

  static inline ::GlobalNamespace::AvatarHand* New_ctor();

  constexpr ::UnityW<::DitzelGames::FastIK::FastIKFabric> const& __cordl_internal_get_IKFabric() const;

  constexpr ::UnityW<::DitzelGames::FastIK::FastIKFabric>& __cordl_internal_get_IKFabric();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_IKTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_IKTarget();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr bool const& __cordl_internal_get_calculateVelocity() const;

  constexpr bool& __cordl_internal_get_calculateVelocity();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabbedItemContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabbedItemContainer();

  constexpr float_t const& __cordl_internal_get_lastIndexRatio() const;

  constexpr float_t& __cordl_internal_get_lastIndexRatio();

  constexpr float_t const& __cordl_internal_get_lastMiddleRatio() const;

  constexpr float_t& __cordl_internal_get_lastMiddleRatio();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPositionRelativeToReference() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPositionRelativeToReference();

  constexpr float_t const& __cordl_internal_get_lastThumbRatio() const;

  constexpr float_t& __cordl_internal_get_lastThumbRatio();

  constexpr bool const& __cordl_internal_get_right() const;

  constexpr bool& __cordl_internal_get_right();

  constexpr void __cordl_internal_set_IKFabric(::UnityW<::DitzelGames::FastIK::FastIKFabric> value);

  constexpr void __cordl_internal_set_IKTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__velocity_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_calculateVelocity(bool value);

  constexpr void __cordl_internal_set_grabbedItemContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lastIndexRatio(float_t value);

  constexpr void __cordl_internal_set_lastMiddleRatio(float_t value);

  constexpr void __cordl_internal_set_lastPositionRelativeToReference(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastThumbRatio(float_t value);

  constexpr void __cordl_internal_set_right(bool value);

  /// @brief Method .ctor, addr 0x158a804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*> getStaticF_gripDatas();

  static inline ::UnityEngine::Quaternion getStaticF_leftHandRotationOffset();

  static inline ::UnityEngine::Quaternion getStaticF_rightHandRotationOffset();

  /// @brief Method get_velocity, addr 0x158a688, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  static inline void setStaticF_gripDatas(::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*> value);

  static inline void setStaticF_leftHandRotationOffset(::UnityEngine::Quaternion value);

  static inline void setStaticF_rightHandRotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method set_velocity, addr 0x158a694, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarHand(AvatarHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarHand(AvatarHand const&) = delete;

  /// @brief Field right, offset: 0x18, size: 0x1, def value: None
  bool ___right;

  /// @brief Field animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field IKTarget, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___IKTarget;

  /// @brief Field grabbedItemContainer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___grabbedItemContainer;

  /// @brief Field IKFabric, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::DitzelGames::FastIK::FastIKFabric> ___IKFabric;

  /// @brief Field calculateVelocity, offset: 0x40, size: 0x1, def value: None
  bool ___calculateVelocity;

  /// @brief Field lastPositionRelativeToReference, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPositionRelativeToReference;

  /// @brief Field <velocity>k__BackingField, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____velocity_k__BackingField;

  /// @brief Field lastIndexRatio, offset: 0x5c, size: 0x4, def value: None
  float_t ___lastIndexRatio;

  /// @brief Field lastMiddleRatio, offset: 0x60, size: 0x4, def value: None
  float_t ___lastMiddleRatio;

  /// @brief Field lastThumbRatio, offset: 0x64, size: 0x4, def value: None
  float_t ___lastThumbRatio;

  /// @brief Field fingerLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t fingerLerpSpeed{ 15.0 };

  /// @brief Field handDownTurn offset 0xffffffff size 0x4
  static constexpr float_t handDownTurn{ 15.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarHand, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___right) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___IKTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___grabbedItemContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___IKFabric) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___calculateVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___lastPositionRelativeToReference) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ____velocity_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___lastIndexRatio) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___lastMiddleRatio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHand, ___lastThumbRatio) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarHand__GripType, "", "AvatarHand/GripType");
NEED_NO_BOX(::GlobalNamespace::AvatarHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarHand*, "", "AvatarHand");
NEED_NO_BOX(::GlobalNamespace::__AvatarHand__GripData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarHand__GripData*, "", "AvatarHand/GripData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarHand__Pose, "", "AvatarHand/Pose");
