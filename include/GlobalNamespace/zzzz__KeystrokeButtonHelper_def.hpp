#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KeystrokeButtonHelper)
// Forward declare root types
namespace GlobalNamespace {
class KeystrokeButtonHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KeystrokeButtonHelper);
// Type: ::KeystrokeButtonHelper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KeystrokeButtonHelper*
class CORDL_TYPE KeystrokeButtonHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field keyCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_keyCode, put = __cordl_internal_set_keyCode))::UnityEngine::KeyCode keyCode;

  /// @brief Method IsUsable, addr 0x29d66fc, size 0xdc, virtual false, abstract: false, final false
  inline bool IsUsable();

  static inline ::GlobalNamespace::KeystrokeButtonHelper* New_ctor();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_keyCode() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_keyCode();

  constexpr void __cordl_internal_set_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method .ctor, addr 0x29d67d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeystrokeButtonHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeystrokeButtonHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeystrokeButtonHelper(KeystrokeButtonHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeystrokeButtonHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeystrokeButtonHelper(KeystrokeButtonHelper const&) = delete;

  /// @brief Field keyCode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___keyCode;

  /// @brief Field activeRange offset 0xffffffff size 0x4
  static constexpr float_t activeRange{ 1.25 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeystrokeButtonHelper, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeButtonHelper, ___keyCode) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KeystrokeButtonHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeystrokeButtonHelper*, "", "KeystrokeButtonHelper");
