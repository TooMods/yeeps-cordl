#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastIKFabric)
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
namespace DitzelGames::FastIK {
class FastIKFabric;
}
// Write type traits
MARK_REF_PTR_T(::DitzelGames::FastIK::FastIKFabric);
// Type: DitzelGames.FastIK::FastIKFabric
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace DitzelGames::FastIK {
// Is value type: false
// CS Name: ::DitzelGames.FastIK::FastIKFabric*
class CORDL_TYPE FastIKFabric : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Bones, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_Bones, put = __cordl_internal_set_Bones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> Bones;

  /// @brief Field BonesLength, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_BonesLength, put = __cordl_internal_set_BonesLength))::ArrayW<float_t, ::Array<float_t>*> BonesLength;

  /// @brief Field ChainLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ChainLength, put = __cordl_internal_set_ChainLength)) int32_t ChainLength;

  /// @brief Field CompleteLength, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_CompleteLength, put = __cordl_internal_set_CompleteLength)) float_t CompleteLength;

  /// @brief Field Delta, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_Delta, put = __cordl_internal_set_Delta)) float_t Delta;

  /// @brief Field Iterations, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_Iterations, put = __cordl_internal_set_Iterations)) int32_t Iterations;

  /// @brief Field Pole, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Pole, put = __cordl_internal_set_Pole))::UnityW<::UnityEngine::Transform> Pole;

  /// @brief Field Positions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_Positions, put = __cordl_internal_set_Positions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> Positions;

  /// @brief Field Root, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_Root, put = __cordl_internal_set_Root))::UnityW<::UnityEngine::Transform> Root;

  /// @brief Field SnapBackStrength, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_SnapBackStrength, put = __cordl_internal_set_SnapBackStrength)) float_t SnapBackStrength;

  /// @brief Field StartDirectionSucc, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_StartDirectionSucc,
                      put = __cordl_internal_set_StartDirectionSucc))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> StartDirectionSucc;

  /// @brief Field StartRotationBone, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_StartRotationBone,
                      put = __cordl_internal_set_StartRotationBone))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> StartRotationBone;

  /// @brief Field StartRotationTarget, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_StartRotationTarget, put = __cordl_internal_set_StartRotationTarget))::UnityEngine::Quaternion StartRotationTarget;

  /// @brief Field Target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target))::UnityW<::UnityEngine::Transform> Target;

  /// @brief Field UnitBonesLength, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_UnitBonesLength, put = __cordl_internal_set_UnitBonesLength))::ArrayW<float_t, ::Array<float_t>*> UnitBonesLength;

  /// @brief Field UnitCompleteLength, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_UnitCompleteLength, put = __cordl_internal_set_UnitCompleteLength)) float_t UnitCompleteLength;

  /// @brief Field eulerOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_eulerOffset, put = __cordl_internal_set_eulerOffset))::UnityEngine::Vector3 eulerOffset;

  /// @brief Field offsetRotation, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_offsetRotation, put = __cordl_internal_set_offsetRotation))::UnityEngine::Quaternion offsetRotation;

  /// @brief Method Awake, addr 0x1085560, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetPositionRootSpace, addr 0x1085ba0, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPositionRootSpace(::UnityEngine::Transform* current);

  /// @brief Method GetRotationRootSpace, addr 0x1085a6c, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotationRootSpace(::UnityEngine::Transform* current);

  /// @brief Method Initialize, addr 0x1085564, size 0x508, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::DitzelGames::FastIK::FastIKFabric* New_ctor();

  /// @brief Method ResolveIK, addr 0x1085d54, size 0xd9c, virtual false, abstract: false, final false
  inline void ResolveIK();

  /// @brief Method SetPositionRootSpace, addr 0x1086c2c, size 0x100, virtual false, abstract: false, final false
  inline void SetPositionRootSpace(::UnityEngine::Transform* current, ::UnityEngine::Vector3 position);

  /// @brief Method SetRotationRootSpace, addr 0x1086af0, size 0x13c, virtual false, abstract: false, final false
  inline void SetRotationRootSpace(::UnityEngine::Transform* current, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetSize, addr 0x1085cd8, size 0x7c, virtual false, abstract: false, final false
  inline void SetSize(float_t newScale);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_Bones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_Bones();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_BonesLength() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_BonesLength();

  constexpr int32_t const& __cordl_internal_get_ChainLength() const;

  constexpr int32_t& __cordl_internal_get_ChainLength();

  constexpr float_t const& __cordl_internal_get_CompleteLength() const;

  constexpr float_t& __cordl_internal_get_CompleteLength();

  constexpr float_t const& __cordl_internal_get_Delta() const;

  constexpr float_t& __cordl_internal_get_Delta();

  constexpr int32_t const& __cordl_internal_get_Iterations() const;

  constexpr int32_t& __cordl_internal_get_Iterations();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Pole() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Pole();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_Positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_Positions();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Root() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Root();

  constexpr float_t const& __cordl_internal_get_SnapBackStrength() const;

  constexpr float_t& __cordl_internal_get_SnapBackStrength();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_StartDirectionSucc() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_StartDirectionSucc();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_StartRotationBone() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_StartRotationBone();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_StartRotationTarget() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_StartRotationTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_UnitBonesLength() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_UnitBonesLength();

  constexpr float_t const& __cordl_internal_get_UnitCompleteLength() const;

  constexpr float_t& __cordl_internal_get_UnitCompleteLength();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_eulerOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_eulerOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_offsetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_offsetRotation();

  constexpr void __cordl_internal_set_Bones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_BonesLength(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_ChainLength(int32_t value);

  constexpr void __cordl_internal_set_CompleteLength(float_t value);

  constexpr void __cordl_internal_set_Delta(float_t value);

  constexpr void __cordl_internal_set_Iterations(int32_t value);

  constexpr void __cordl_internal_set_Pole(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_Positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_Root(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_SnapBackStrength(float_t value);

  constexpr void __cordl_internal_set_StartDirectionSucc(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_StartRotationBone(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_StartRotationTarget(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_UnitBonesLength(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_UnitCompleteLength(float_t value);

  constexpr void __cordl_internal_set_eulerOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_offsetRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x1086d2c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastIKFabric();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastIKFabric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastIKFabric(FastIKFabric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastIKFabric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastIKFabric(FastIKFabric const&) = delete;

  /// @brief Field ChainLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___ChainLength;

  /// @brief Field Target, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Target;

  /// @brief Field Pole, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Pole;

  /// @brief Field eulerOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___eulerOffset;

  /// @brief Field offsetRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___offsetRotation;

  /// @brief Field Iterations, offset: 0x4c, size: 0x4, def value: None
  int32_t ___Iterations;

  /// @brief Field Delta, offset: 0x50, size: 0x4, def value: None
  float_t ___Delta;

  /// @brief Field SnapBackStrength, offset: 0x54, size: 0x4, def value: None
  float_t ___SnapBackStrength;

  /// @brief Field UnitBonesLength, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___UnitBonesLength;

  /// @brief Field UnitCompleteLength, offset: 0x60, size: 0x4, def value: None
  float_t ___UnitCompleteLength;

  /// @brief Field BonesLength, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___BonesLength;

  /// @brief Field CompleteLength, offset: 0x70, size: 0x4, def value: None
  float_t ___CompleteLength;

  /// @brief Field Bones, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___Bones;

  /// @brief Field Positions, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___Positions;

  /// @brief Field StartDirectionSucc, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___StartDirectionSucc;

  /// @brief Field StartRotationBone, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___StartRotationBone;

  /// @brief Field StartRotationTarget, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___StartRotationTarget;

  /// @brief Field Root, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Root;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DitzelGames::FastIK::FastIKFabric, 0xb0>, "Size mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___ChainLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Pole) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___eulerOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___offsetRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Iterations) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Delta) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___SnapBackStrength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___UnitBonesLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___UnitCompleteLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___BonesLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___CompleteLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Bones) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Positions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___StartDirectionSucc) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___StartRotationBone) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___StartRotationTarget) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKFabric, ___Root) == 0xa8, "Offset mismatch!");

} // namespace DitzelGames::FastIK
NEED_NO_BOX(::DitzelGames::FastIK::FastIKFabric);
DEFINE_IL2CPP_ARG_TYPE(::DitzelGames::FastIK::FastIKFabric*, "DitzelGames.FastIK", "FastIKFabric");
