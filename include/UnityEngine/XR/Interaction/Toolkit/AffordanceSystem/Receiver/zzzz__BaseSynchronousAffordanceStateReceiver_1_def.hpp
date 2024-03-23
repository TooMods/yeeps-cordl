#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAffordanceStateReceiver_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseSynchronousAffordanceStateReceiver_1)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class ISynchronousAffordanceStateReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
template <typename T> class BaseSynchronousAffordanceStateReceiver_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::BaseSynchronousAffordanceStateReceiver`1
// SizeInfo { instance_size: 80, native_size: 73, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::BaseSynchronousAffordanceStateReceiver`1<T>*
class CORDL_TYPE BaseSynchronousAffordanceStateReceiver_1 : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T> {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*() noexcept;

  /// @brief Method HandleTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleTween(float_t tweenTarget);

  /// @brief Method Interpolate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Interpolate(T startValue, T targetValue, float_t interpolationAmount);

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__ISynchronousAffordanceStateReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSynchronousAffordanceStateReceiver_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseSynchronousAffordanceStateReceiver_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseSynchronousAffordanceStateReceiver_1(BaseSynchronousAffordanceStateReceiver_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseSynchronousAffordanceStateReceiver_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseSynchronousAffordanceStateReceiver_1(BaseSynchronousAffordanceStateReceiver_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1,
                                     "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "BaseSynchronousAffordanceStateReceiver`1");
