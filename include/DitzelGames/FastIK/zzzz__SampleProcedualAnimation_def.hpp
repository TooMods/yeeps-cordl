#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SampleProcedualAnimation)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace DitzelGames::FastIK {
class SampleProcedualAnimation;
}
// Write type traits
MARK_REF_PTR_T(::DitzelGames::FastIK::SampleProcedualAnimation);
// Type: DitzelGames.FastIK::SampleProcedualAnimation
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace DitzelGames::FastIK {
// Is value type: false
// CS Name: ::DitzelGames.FastIK::SampleProcedualAnimation*
class CORDL_TYPE SampleProcedualAnimation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Attraction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Attraction, put = __cordl_internal_set_Attraction))::UnityW<::UnityEngine::Transform> Attraction;

  /// @brief Field FootTarget, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FootTarget,
                      put = __cordl_internal_set_FootTarget))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> FootTarget;

  /// @brief Field HandPole, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_HandPole, put = __cordl_internal_set_HandPole))::UnityW<::UnityEngine::Transform> HandPole;

  /// @brief Field HandTarget, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_HandTarget, put = __cordl_internal_set_HandTarget))::UnityW<::UnityEngine::Transform> HandTarget;

  /// @brief Field LookTarget, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_LookTarget, put = __cordl_internal_set_LookTarget))::UnityW<::UnityEngine::Transform> LookTarget;

  /// @brief Field Step, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Step, put = __cordl_internal_set_Step))::UnityW<::UnityEngine::Transform> Step;

  /// @brief Method LateUpdate, addr 0x1086fcc, size 0x6dc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::DitzelGames::FastIK::SampleProcedualAnimation* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Attraction() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Attraction();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_FootTarget() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_FootTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_HandPole() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_HandPole();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_HandTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_HandTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_LookTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_LookTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Step() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Step();

  constexpr void __cordl_internal_set_Attraction(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_FootTarget(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_HandPole(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_HandTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_LookTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_Step(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x10876a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleProcedualAnimation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleProcedualAnimation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleProcedualAnimation(SampleProcedualAnimation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleProcedualAnimation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleProcedualAnimation(SampleProcedualAnimation const&) = delete;

  /// @brief Field FootTarget, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___FootTarget;

  /// @brief Field LookTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___LookTarget;

  /// @brief Field HandTarget, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___HandTarget;

  /// @brief Field HandPole, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___HandPole;

  /// @brief Field Step, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Step;

  /// @brief Field Attraction, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Attraction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DitzelGames::FastIK::SampleProcedualAnimation, 0x48>, "Size mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___FootTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___LookTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___HandTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___HandPole) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___Step) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleProcedualAnimation, ___Attraction) == 0x40, "Offset mismatch!");

} // namespace DitzelGames::FastIK
NEED_NO_BOX(::DitzelGames::FastIK::SampleProcedualAnimation);
DEFINE_IL2CPP_ARG_TYPE(::DitzelGames::FastIK::SampleProcedualAnimation*, "DitzelGames.FastIK", "SampleProcedualAnimation");
