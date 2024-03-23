#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MobilePCOnlyActivatedElement)
// Forward declare root types
namespace GlobalNamespace {
class MobilePCOnlyActivatedElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobilePCOnlyActivatedElement);
// Type: ::MobilePCOnlyActivatedElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobilePCOnlyActivatedElement*
class CORDL_TYPE MobilePCOnlyActivatedElement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field isOnlyVisibleOnPC, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isOnlyVisibleOnPC, put = __cordl_internal_set_isOnlyVisibleOnPC)) bool isOnlyVisibleOnPC;

  static inline ::GlobalNamespace::MobilePCOnlyActivatedElement* New_ctor();

  /// @brief Method Start, addr 0x30861c4, size 0x88, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_isOnlyVisibleOnPC() const;

  constexpr bool& __cordl_internal_get_isOnlyVisibleOnPC();

  constexpr void __cordl_internal_set_isOnlyVisibleOnPC(bool value);

  /// @brief Method .ctor, addr 0x308624c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobilePCOnlyActivatedElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobilePCOnlyActivatedElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobilePCOnlyActivatedElement(MobilePCOnlyActivatedElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobilePCOnlyActivatedElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobilePCOnlyActivatedElement(MobilePCOnlyActivatedElement const&) = delete;

  /// @brief Field isOnlyVisibleOnPC, offset: 0x18, size: 0x1, def value: None
  bool ___isOnlyVisibleOnPC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobilePCOnlyActivatedElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePCOnlyActivatedElement, ___isOnlyVisibleOnPC) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobilePCOnlyActivatedElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobilePCOnlyActivatedElement*, "", "MobilePCOnlyActivatedElement");
