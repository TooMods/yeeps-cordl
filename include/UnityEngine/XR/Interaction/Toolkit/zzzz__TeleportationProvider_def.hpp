#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleportationProvider)
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportationProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportationProvider
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportationProvider*
class CORDL_TYPE TeleportationProvider : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
public:
  // Declarations
  /// @brief Field <currentRequest>k__BackingField, offset 0x40, size 0x24
  __declspec(property(get = __cordl_internal_get__currentRequest_k__BackingField,
                      put = __cordl_internal_set__currentRequest_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::TeleportRequest _currentRequest_k__BackingField;

  /// @brief Field <validRequest>k__BackingField, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get__validRequest_k__BackingField, put = __cordl_internal_set__validRequest_k__BackingField)) bool _validRequest_k__BackingField;

  __declspec(property(get = get_currentRequest, put = set_currentRequest))::UnityEngine::XR::Interaction::Toolkit::TeleportRequest currentRequest;

  __declspec(property(get = get_delayTime, put = set_delayTime)) float_t delayTime;

  /// @brief Field m_DelayTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DelayTime, put = __cordl_internal_set_m_DelayTime)) float_t m_DelayTime;

  /// @brief Field m_HasExclusiveLocomotion, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasExclusiveLocomotion, put = __cordl_internal_set_m_HasExclusiveLocomotion)) bool m_HasExclusiveLocomotion;

  /// @brief Field m_TimeStarted, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeStarted, put = __cordl_internal_set_m_TimeStarted)) float_t m_TimeStarted;

  __declspec(property(get = get_validRequest, put = set_validRequest)) bool validRequest;

  /// @brief Method Awake, addr 0x301af14, size 0x148, virtual true, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider* New_ctor();

  /// @brief Method QueueTeleportRequest, addr 0x301aef0, size 0x24, virtual true, abstract: false, final false
  inline bool QueueTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest teleportRequest);

  /// @brief Method Update, addr 0x301b05c, size 0x328, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest const& __cordl_internal_get__currentRequest_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest& __cordl_internal_get__currentRequest_k__BackingField();

  constexpr bool const& __cordl_internal_get__validRequest_k__BackingField() const;

  constexpr bool& __cordl_internal_get__validRequest_k__BackingField();

  constexpr float_t const& __cordl_internal_get_m_DelayTime() const;

  constexpr float_t& __cordl_internal_get_m_DelayTime();

  constexpr bool const& __cordl_internal_get_m_HasExclusiveLocomotion() const;

  constexpr bool& __cordl_internal_get_m_HasExclusiveLocomotion();

  constexpr float_t const& __cordl_internal_get_m_TimeStarted() const;

  constexpr float_t& __cordl_internal_get_m_TimeStarted();

  constexpr void __cordl_internal_set__currentRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value);

  constexpr void __cordl_internal_set__validRequest_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_DelayTime(float_t value);

  constexpr void __cordl_internal_set_m_HasExclusiveLocomotion(bool value);

  constexpr void __cordl_internal_set_m_TimeStarted(float_t value);

  /// @brief Method .ctor, addr 0x301b384, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentRequest, addr 0x301aea4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest get_currentRequest();

  /// @brief Method get_delayTime, addr 0x301aee0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_delayTime();

  /// @brief Method get_validRequest, addr 0x301aecc, size 0x8, virtual false, abstract: false, final false
  inline bool get_validRequest();

  /// @brief Method set_currentRequest, addr 0x301aeb8, size 0x14, virtual false, abstract: false, final false
  inline void set_currentRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value);

  /// @brief Method set_delayTime, addr 0x301aee8, size 0x8, virtual false, abstract: false, final false
  inline void set_delayTime(float_t value);

  /// @brief Method set_validRequest, addr 0x301aed4, size 0xc, virtual false, abstract: false, final false
  inline void set_validRequest(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportationProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportationProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportationProvider(TeleportationProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportationProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportationProvider(TeleportationProvider const&) = delete;

  /// @brief Field <currentRequest>k__BackingField, offset: 0x40, size: 0x24, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest ____currentRequest_k__BackingField;

  /// @brief Field <validRequest>k__BackingField, offset: 0x64, size: 0x1, def value: None
  bool ____validRequest_k__BackingField;

  /// @brief Field m_DelayTime, offset: 0x68, size: 0x4, def value: None
  float_t ___m_DelayTime;

  /// @brief Field m_HasExclusiveLocomotion, offset: 0x6c, size: 0x1, def value: None
  bool ___m_HasExclusiveLocomotion;

  /// @brief Field m_TimeStarted, offset: 0x70, size: 0x4, def value: None
  float_t ___m_TimeStarted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, ____currentRequest_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, ____validRequest_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, ___m_DelayTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, ___m_HasExclusiveLocomotion) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider, ___m_TimeStarted) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, "UnityEngine.XR.Interaction.Toolkit", "TeleportationProvider");
