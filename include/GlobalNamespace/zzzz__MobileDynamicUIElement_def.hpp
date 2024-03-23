#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MobileDynamicUIElement)
// Forward declare root types
namespace GlobalNamespace {
class MobileDynamicUIElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileDynamicUIElement);
// Type: ::MobileDynamicUIElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileDynamicUIElement*
class CORDL_TYPE MobileDynamicUIElement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x3085e3c, size 0x4, virtual true, abstract: false, final false
  inline void Initialize(bool initialIsLandscape);

  static inline ::GlobalNamespace::MobileDynamicUIElement* New_ctor();

  /// @brief Method OnOrientationChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  /// @brief Method Start, addr 0x3085dc4, size 0x78, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method .ctor, addr 0x3085dbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileDynamicUIElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileDynamicUIElement(MobileDynamicUIElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileDynamicUIElement(MobileDynamicUIElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileDynamicUIElement, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileDynamicUIElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileDynamicUIElement*, "", "MobileDynamicUIElement");
