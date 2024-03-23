#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_def.hpp"
CORDL_MODULE_EXPORT(MobileDynamicUIActivatedElement)
// Forward declare root types
namespace GlobalNamespace {
class MobileDynamicUIActivatedElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileDynamicUIActivatedElement);
// Type: ::MobileDynamicUIActivatedElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileDynamicUIActivatedElement*
class CORDL_TYPE MobileDynamicUIActivatedElement : public ::GlobalNamespace::MobileDynamicUIElement {
public:
  // Declarations
  /// @brief Field isActiveWhenLandscape, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveWhenLandscape, put = __cordl_internal_set_isActiveWhenLandscape)) bool isActiveWhenLandscape;

  /// @brief Field isOnlyOnPhone, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_isOnlyOnPhone, put = __cordl_internal_set_isOnlyOnPhone)) bool isOnlyOnPhone;

  /// @brief Method Initialize, addr 0x3085c78, size 0xa4, virtual true, abstract: false, final false
  inline void Initialize(bool initialIsLandscape);

  static inline ::GlobalNamespace::MobileDynamicUIActivatedElement* New_ctor();

  /// @brief Method OnOrientationChanged, addr 0x3085d1c, size 0x98, virtual true, abstract: false, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  constexpr bool const& __cordl_internal_get_isActiveWhenLandscape() const;

  constexpr bool& __cordl_internal_get_isActiveWhenLandscape();

  constexpr bool const& __cordl_internal_get_isOnlyOnPhone() const;

  constexpr bool& __cordl_internal_get_isOnlyOnPhone();

  constexpr void __cordl_internal_set_isActiveWhenLandscape(bool value);

  constexpr void __cordl_internal_set_isOnlyOnPhone(bool value);

  /// @brief Method .ctor, addr 0x3085db4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileDynamicUIActivatedElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIActivatedElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileDynamicUIActivatedElement(MobileDynamicUIActivatedElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIActivatedElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileDynamicUIActivatedElement(MobileDynamicUIActivatedElement const&) = delete;

  /// @brief Field isActiveWhenLandscape, offset: 0x18, size: 0x1, def value: None
  bool ___isActiveWhenLandscape;

  /// @brief Field isOnlyOnPhone, offset: 0x19, size: 0x1, def value: None
  bool ___isOnlyOnPhone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileDynamicUIActivatedElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIActivatedElement, ___isActiveWhenLandscape) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIActivatedElement, ___isOnlyOnPhone) == 0x19, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileDynamicUIActivatedElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileDynamicUIActivatedElement*, "", "MobileDynamicUIActivatedElement");
