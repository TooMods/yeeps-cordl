#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRItemInteractable)
namespace GlobalNamespace {
class __XRItemInteractable__CalculateThrowVelocity;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class XRItemInteractable;
}
namespace GlobalNamespace {
class __XRItemInteractable__CalculateThrowVelocity;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XRItemInteractable);
MARK_REF_PTR_T(::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity);
// Type: ::CalculateThrowVelocity
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XRItemInteractable::CalculateThrowVelocity*
class CORDL_TYPE __XRItemInteractable__CalculateThrowVelocity : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2f69594, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2f69638, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2f69580, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity);

  static inline ::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f694a8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRItemInteractable__CalculateThrowVelocity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRItemInteractable__CalculateThrowVelocity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRItemInteractable__CalculateThrowVelocity(__XRItemInteractable__CalculateThrowVelocity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRItemInteractable__CalculateThrowVelocity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRItemInteractable__CalculateThrowVelocity(__XRItemInteractable__CalculateThrowVelocity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::XRItemInteractable
// SizeInfo { instance_size: 784, native_size: -1, calculated_instance_size: 784, calculated_native_size: 784, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::XRItemInteractable*
class CORDL_TYPE XRItemInteractable : public ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable {
public:
  // Declarations
  using CalculateThrowVelocity = ::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity;

  /// @brief Field calculateThrowVelocity, offset 0x308, size 0x8
  __declspec(property(get = __cordl_internal_get_calculateThrowVelocity,
                      put = __cordl_internal_set_calculateThrowVelocity))::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity* calculateThrowVelocity;

  /// @brief Field doThrowAssist, offset 0x2f9, size 0x1
  __declspec(property(get = __cordl_internal_get_doThrowAssist, put = __cordl_internal_set_doThrowAssist)) bool doThrowAssist;

  __declspec(property(get = get_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field rb_cache, offset 0x300, size 0x8
  __declspec(property(get = __cordl_internal_get_rb_cache, put = __cordl_internal_set_rb_cache))::UnityW<::UnityEngine::Rigidbody> rb_cache;

  /// @brief Field zeroVelocityOnThrow, offset 0x2f8, size 0x1
  __declspec(property(get = __cordl_internal_get_zeroVelocityOnThrow, put = __cordl_internal_set_zeroVelocityOnThrow)) bool zeroVelocityOnThrow;

  /// @brief Method Detach, addr 0x2f68e34, size 0x164, virtual true, abstract: false, final false
  inline void Detach();

  static inline ::GlobalNamespace::XRItemInteractable* New_ctor();

  /// @brief Method RunThrowAssit, addr 0x2f68f98, size 0x4b8, virtual false, abstract: false, final false
  inline void RunThrowAssit();

  /// @brief Method SetupRigidbodyDrop, addr 0x2f68e08, size 0x2c, virtual true, abstract: false, final false
  inline void SetupRigidbodyDrop(::UnityEngine::Rigidbody* rigidbody);

  constexpr ::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity*& __cordl_internal_get_calculateThrowVelocity();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity*> const& __cordl_internal_get_calculateThrowVelocity() const;

  constexpr bool const& __cordl_internal_get_doThrowAssist() const;

  constexpr bool& __cordl_internal_get_doThrowAssist();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb_cache() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb_cache();

  constexpr bool const& __cordl_internal_get_zeroVelocityOnThrow() const;

  constexpr bool& __cordl_internal_get_zeroVelocityOnThrow();

  constexpr void __cordl_internal_set_calculateThrowVelocity(::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity* value);

  constexpr void __cordl_internal_set_doThrowAssist(bool value);

  constexpr void __cordl_internal_set_rb_cache(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_zeroVelocityOnThrow(bool value);

  /// @brief Method .ctor, addr 0x2f69450, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rb, addr 0x2f68d74, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_rb();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRItemInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRItemInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRItemInteractable(XRItemInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRItemInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRItemInteractable(XRItemInteractable const&) = delete;

  /// @brief Field zeroVelocityOnThrow, offset: 0x2f8, size: 0x1, def value: None
  bool ___zeroVelocityOnThrow;

  /// @brief Field doThrowAssist, offset: 0x2f9, size: 0x1, def value: None
  bool ___doThrowAssist;

  /// @brief Field rb_cache, offset: 0x300, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rb_cache;

  /// @brief Field calculateThrowVelocity, offset: 0x308, size: 0x8, def value: None
  ::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity* ___calculateThrowVelocity;

  /// @brief Field maxThrowAssitDistance offset 0xffffffff size 0x4
  static constexpr float_t maxThrowAssitDistance{ 15.0 };

  /// @brief Field throwAssistMaxVelocity offset 0xffffffff size 0x4
  static constexpr float_t throwAssistMaxVelocity{ 25.0 };

  /// @brief Field throwAssistMaxVelocityRadius offset 0xffffffff size 0x4
  static constexpr float_t throwAssistMaxVelocityRadius{ 2.0 };

  /// @brief Field throwAssistMinVelocity offset 0xffffffff size 0x4
  static constexpr float_t throwAssistMinVelocity{ 6.0 };

  /// @brief Field throwAssitMinVelocityRadius offset 0xffffffff size 0x4
  static constexpr float_t throwAssitMinVelocityRadius{ 0.7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XRItemInteractable, 0x310>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::XRItemInteractable, ___zeroVelocityOnThrow) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRItemInteractable, ___doThrowAssist) == 0x2f9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRItemInteractable, ___rb_cache) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRItemInteractable, ___calculateThrowVelocity) == 0x308, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XRItemInteractable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XRItemInteractable*, "", "XRItemInteractable");
NEED_NO_BOX(::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XRItemInteractable__CalculateThrowVelocity*, "", "XRItemInteractable/CalculateThrowVelocity");
