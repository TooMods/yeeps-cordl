#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorOverrideController)
namespace System {
class Object;
}
namespace UnityEngine {
class __AnimatorOverrideController__OnOverrideControllerDirtyCallback;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorOverrideController;
}
namespace UnityEngine {
class __AnimatorOverrideController__OnOverrideControllerDirtyCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimatorOverrideController);
MARK_REF_PTR_T(::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback);
// Type: ::OnOverrideControllerDirtyCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::AnimatorOverrideController::OnOverrideControllerDirtyCallback*
class CORDL_TYPE __AnimatorOverrideController__OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x19f9bf4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x19f9b38, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimatorOverrideController__OnOverrideControllerDirtyCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AnimatorOverrideController__OnOverrideControllerDirtyCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimatorOverrideController__OnOverrideControllerDirtyCallback(__AnimatorOverrideController__OnOverrideControllerDirtyCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatorOverrideController__OnOverrideControllerDirtyCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimatorOverrideController__OnOverrideControllerDirtyCallback(__AnimatorOverrideController__OnOverrideControllerDirtyCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::AnimatorOverrideController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AnimatorOverrideController*
class CORDL_TYPE AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
public:
  // Declarations
  using OnOverrideControllerDirtyCallback = ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback;

  /// @brief Field OnOverrideControllerDirty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OnOverrideControllerDirty,
                      put = __cordl_internal_set_OnOverrideControllerDirty))::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;

  /// @brief Method OnInvalidateOverrideController, addr 0x19f9b08, size 0x30, virtual false, abstract: false, final false
  static inline void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller);

  constexpr ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*& __cordl_internal_get_OnOverrideControllerDirty();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*> const& __cordl_internal_get_OnOverrideControllerDirty() const;

  constexpr void __cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorOverrideController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorOverrideController(AnimatorOverrideController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorOverrideController(AnimatorOverrideController const&) = delete;

  /// @brief Field OnOverrideControllerDirty, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* ___OnOverrideControllerDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorOverrideController, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorOverrideController, ___OnOverrideControllerDirty) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
NEED_NO_BOX(::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*, "UnityEngine", "AnimatorOverrideController/OnOverrideControllerDirtyCallback");
