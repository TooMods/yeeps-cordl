#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveInCreativeMode)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ActiveInCreativeMode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActiveInCreativeMode);
// Type: ::ActiveInCreativeMode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveInCreativeMode*
class CORDL_TYPE ActiveInCreativeMode : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeInCreativeMode, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_activeInCreativeMode, put = __cordl_internal_set_activeInCreativeMode)) bool activeInCreativeMode;

  /// @brief Field container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::GameObject> container;

  /// @brief Field isRegistered, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  static inline ::GlobalNamespace::ActiveInCreativeMode* New_ctor();

  /// @brief Method OnDisable, addr 0x1583c6c, size 0x134, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x15839f4, size 0x168, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x1583b5c, size 0x110, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  constexpr bool const& __cordl_internal_get_activeInCreativeMode() const;

  constexpr bool& __cordl_internal_get_activeInCreativeMode();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr void __cordl_internal_set_activeInCreativeMode(bool value);

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  /// @brief Method .ctor, addr 0x1583da0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveInCreativeMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveInCreativeMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveInCreativeMode(ActiveInCreativeMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveInCreativeMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveInCreativeMode(ActiveInCreativeMode const&) = delete;

  /// @brief Field activeInCreativeMode, offset: 0x18, size: 0x1, def value: None
  bool ___activeInCreativeMode;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___container;

  /// @brief Field isRegistered, offset: 0x28, size: 0x1, def value: None
  bool ___isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActiveInCreativeMode, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveInCreativeMode, ___activeInCreativeMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveInCreativeMode, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveInCreativeMode, ___isRegistered) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActiveInCreativeMode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActiveInCreativeMode*, "", "ActiveInCreativeMode");
