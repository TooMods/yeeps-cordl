#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinkedCameraInFirstPersonIndicator)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class LinkedCameraInFirstPersonIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LinkedCameraInFirstPersonIndicator);
// Type: ::LinkedCameraInFirstPersonIndicator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LinkedCameraInFirstPersonIndicator*
class CORDL_TYPE LinkedCameraInFirstPersonIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field blinkTimer, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_blinkTimer, put = __cordl_internal_set_blinkTimer)) float_t blinkTimer;

  /// @brief Field isActive, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isInBlink, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isInBlink, put = __cordl_internal_set_isInBlink)) bool isInBlink;

  /// @brief Field isRegistered, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_meshRenderer, put = __cordl_internal_set_meshRenderer))::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  /// @brief Method Deregister, addr 0x2c87870, size 0x12c, virtual false, abstract: false, final false
  inline void Deregister();

  static inline ::GlobalNamespace::LinkedCameraInFirstPersonIndicator* New_ctor();

  /// @brief Method OnDisable, addr 0x2c87860, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2c8772c, size 0x10, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Register, addr 0x2c8773c, size 0x124, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetActive, addr 0x2c8799c, size 0x38, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetInBlink, addr 0x2c879d4, size 0x2c, virtual false, abstract: false, final false
  inline void SetInBlink(bool newInBlink);

  /// @brief Method Update, addr 0x2c87a00, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr float_t const& __cordl_internal_get_blinkTimer() const;

  constexpr float_t& __cordl_internal_get_blinkTimer();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isInBlink() const;

  constexpr bool& __cordl_internal_get_isInBlink();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_blinkTimer(float_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isInBlink(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x2c87a04, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedCameraInFirstPersonIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedCameraInFirstPersonIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedCameraInFirstPersonIndicator(LinkedCameraInFirstPersonIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedCameraInFirstPersonIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedCameraInFirstPersonIndicator(LinkedCameraInFirstPersonIndicator const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___meshRenderer;

  /// @brief Field isInBlink, offset: 0x28, size: 0x1, def value: None
  bool ___isInBlink;

  /// @brief Field blinkTimer, offset: 0x2c, size: 0x4, def value: None
  float_t ___blinkTimer;

  /// @brief Field isActive, offset: 0x30, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegistered, offset: 0x31, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field blinkDuration offset 0xffffffff size 0x4
  static constexpr float_t blinkDuration{ 1.0 };

  /// @brief Field doBlinking offset 0xffffffff size 0x1
  static constexpr bool doBlinking{ false };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LinkedCameraInFirstPersonIndicator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___isInBlink) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___blinkTimer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___isActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinkedCameraInFirstPersonIndicator, ___isRegistered) == 0x31, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LinkedCameraInFirstPersonIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinkedCameraInFirstPersonIndicator*, "", "LinkedCameraInFirstPersonIndicator");
