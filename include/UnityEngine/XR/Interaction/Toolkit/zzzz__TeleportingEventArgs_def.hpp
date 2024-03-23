#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
CORDL_MODULE_EXPORT(TeleportingEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportingEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportingEventArgs
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportingEventArgs*
class CORDL_TYPE TeleportingEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
  // Declarations
  /// @brief Field <teleportRequest>k__BackingField, offset 0x20, size 0x24
  __declspec(property(get = __cordl_internal_get__teleportRequest_k__BackingField,
                      put = __cordl_internal_set__teleportRequest_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::TeleportRequest _teleportRequest_k__BackingField;

  __declspec(property(get = get_teleportRequest, put = set_teleportRequest))::UnityEngine::XR::Interaction::Toolkit::TeleportRequest teleportRequest;

  static inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest const& __cordl_internal_get__teleportRequest_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest& __cordl_internal_get__teleportRequest_k__BackingField();

  constexpr void __cordl_internal_set__teleportRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value);

  /// @brief Method .ctor, addr 0x2cfe850, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_teleportRequest, addr 0x2cfe828, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest get_teleportRequest();

  /// @brief Method set_teleportRequest, addr 0x2cfe83c, size 0x14, virtual false, abstract: false, final false
  inline void set_teleportRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportingEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportingEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportingEventArgs(TeleportingEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportingEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportingEventArgs(TeleportingEventArgs const&) = delete;

  /// @brief Field <teleportRequest>k__BackingField, offset: 0x20, size: 0x24, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest ____teleportRequest_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs, ____teleportRequest_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "TeleportingEventArgs");
