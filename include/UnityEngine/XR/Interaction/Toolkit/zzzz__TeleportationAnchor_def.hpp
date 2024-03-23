#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TeleportationAnchor)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportationAnchor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportationAnchor
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportationAnchor*
class CORDL_TYPE TeleportationAnchor : public ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable {
public:
  // Declarations
  /// @brief Field m_TeleportAnchorTransform, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportAnchorTransform, put = __cordl_internal_set_m_TeleportAnchorTransform))::UnityW<::UnityEngine::Transform> m_TeleportAnchorTransform;

  __declspec(property(get = get_teleportAnchorTransform, put = set_teleportAnchorTransform))::UnityW<::UnityEngine::Transform> teleportAnchorTransform;

  /// @brief Method GenerateTeleportRequest, addr 0x301ad1c, size 0xb4, virtual true, abstract: false, final false
  inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::RaycastHit raycastHit,
                                      ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);

  static inline ::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor* New_ctor();

  /// @brief Method OnDrawGizmos, addr 0x301a318, size 0x150, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  /// @brief Method OnValidate, addr 0x301a284, size 0x78, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Reset, addr 0x301a2fc, size 0x1c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_TeleportAnchorTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_TeleportAnchorTransform();

  constexpr void __cordl_internal_set_m_TeleportAnchorTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x301add0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_teleportAnchorTransform, addr 0x301a274, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_teleportAnchorTransform();

  /// @brief Method set_teleportAnchorTransform, addr 0x301a27c, size 0x8, virtual false, abstract: false, final false
  inline void set_teleportAnchorTransform(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportationAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportationAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportationAnchor(TeleportationAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportationAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportationAnchor(TeleportationAnchor const&) = delete;

  /// @brief Field m_TeleportAnchorTransform, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_TeleportAnchorTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor, 0x1d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor, ___m_TeleportAnchorTransform) == 0x1d0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportationAnchor*, "UnityEngine.XR.Interaction.Toolkit", "TeleportationAnchor");
