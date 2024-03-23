#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseGrabTransformer)
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRBaseGrabTransformer__RegistrationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRBaseGrabTransformer__RegistrationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRBaseGrabTransformer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer);
// Type: ::RegistrationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: true
// CS Name: ::XRBaseGrabTransformer::RegistrationMode
struct CORDL_TYPE __XRBaseGrabTransformer__RegistrationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRBaseGrabTransformer__RegistrationMode_Unwrapped
  enum struct ____XRBaseGrabTransformer__RegistrationMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Single = static_cast<int32_t>(0x1),
    __E_Multiple = static_cast<int32_t>(0x2),
    __E_SingleAndMultiple = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRBaseGrabTransformer__RegistrationMode_Unwrapped() const noexcept {
    return static_cast<____XRBaseGrabTransformer__RegistrationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseGrabTransformer__RegistrationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRBaseGrabTransformer__RegistrationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Multiple value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode const Multiple;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode const None;

  /// @brief Field Single value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode const Single;

  /// @brief Field SingleAndMultiple value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode const SingleAndMultiple;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::XRBaseGrabTransformer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::XRBaseGrabTransformer*
class CORDL_TYPE XRBaseGrabTransformer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RegistrationMode = ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode;

  __declspec(property(get = get_canProcess)) bool canProcess;

  __declspec(property(get = get_registrationMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode registrationMode;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer* New_ctor();

  /// @brief Method OnDestroy, addr 0x2feaf0c, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnGrab, addr 0x2feaf9c, size 0x4, virtual true, abstract: false, final false
  inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method OnGrabCountChanged, addr 0x2feafa0, size 0x4, virtual true, abstract: false, final false
  inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);

  /// @brief Method OnLink, addr 0x2feaf98, size 0x4, virtual true, abstract: false, final false
  inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method OnUnlink, addr 0x2feafa4, size 0x4, virtual true, abstract: false, final false
  inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method Start, addr 0x2fead7c, size 0x190, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method .ctor, addr 0x2feafa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canProcess, addr 0x2fead6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_canProcess();

  /// @brief Method get_registrationMode, addr 0x2fead74, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode get_registrationMode();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseGrabTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseGrabTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseGrabTransformer(XRBaseGrabTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseGrabTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseGrabTransformer(XRBaseGrabTransformer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode, "UnityEngine.XR.Interaction.Toolkit.Transformers",
                       "XRBaseGrabTransformer/RegistrationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRBaseGrabTransformer");
