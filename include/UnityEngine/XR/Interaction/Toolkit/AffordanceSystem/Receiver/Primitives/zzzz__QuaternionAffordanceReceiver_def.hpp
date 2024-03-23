#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector4AffordanceReceiver_def.hpp"
CORDL_MODULE_EXPORT(QuaternionAffordanceReceiver)
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::XR::CoreUtils {
class QuaternionUnityEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class QuaternionAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::QuaternionAffordanceReceiver
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::QuaternionAffordanceReceiver*
class CORDL_TYPE QuaternionAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver {
public:
  // Declarations
  /// @brief Field m_QuaternionValueUpdated, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_QuaternionValueUpdated, put = __cordl_internal_set_m_QuaternionValueUpdated))::Unity::XR::CoreUtils::QuaternionUnityEvent* m_QuaternionValueUpdated;

  __declspec(property(get = get_quaternionValueUpdated, put = set_quaternionValueUpdated))::Unity::XR::CoreUtils::QuaternionUnityEvent* quaternionValueUpdated;

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a31264, size 0xa8, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::Unity::Mathematics::float4 newValue);

  constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent*& __cordl_internal_get_m_QuaternionValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::QuaternionUnityEvent*> const& __cordl_internal_get_m_QuaternionValueUpdated() const;

  constexpr void __cordl_internal_set_m_QuaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent* value);

  /// @brief Method .ctor, addr 0x2a3130c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_quaternionValueUpdated, addr 0x2a31254, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* get_quaternionValueUpdated();

  /// @brief Method set_quaternionValueUpdated, addr 0x2a3125c, size 0x8, virtual false, abstract: false, final false
  inline void set_quaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionAffordanceReceiver(QuaternionAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionAffordanceReceiver(QuaternionAffordanceReceiver const&) = delete;

  /// @brief Field m_QuaternionValueUpdated, offset: 0xa8, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::QuaternionUnityEvent* ___m_QuaternionValueUpdated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver, ___m_QuaternionValueUpdated) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "QuaternionAffordanceReceiver");
