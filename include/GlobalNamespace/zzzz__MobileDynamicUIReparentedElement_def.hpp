#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_def.hpp"
CORDL_MODULE_EXPORT(MobileDynamicUIReparentedElement)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileDynamicUIReparentedElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileDynamicUIReparentedElement);
// Type: ::MobileDynamicUIReparentedElement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileDynamicUIReparentedElement*
class CORDL_TYPE MobileDynamicUIReparentedElement : public ::GlobalNamespace::MobileDynamicUIElement {
public:
  // Declarations
  /// @brief Field landscapePCParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_landscapePCParent, put = __cordl_internal_set_landscapePCParent))::UnityW<::UnityEngine::RectTransform> landscapePCParent;

  /// @brief Field landscapeParent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_landscapeParent, put = __cordl_internal_set_landscapeParent))::UnityW<::UnityEngine::RectTransform> landscapeParent;

  /// @brief Field portraitParent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_portraitParent, put = __cordl_internal_set_portraitParent))::UnityW<::UnityEngine::RectTransform> portraitParent;

  /// @brief Method Initialize, addr 0x3085e8c, size 0x8, virtual true, abstract: false, final false
  inline void Initialize(bool initialIsLandscape);

  static inline ::GlobalNamespace::MobileDynamicUIReparentedElement* New_ctor();

  /// @brief Method OnOrientationChanged, addr 0x3085f84, size 0x8, virtual true, abstract: false, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  /// @brief Method Reparent, addr 0x3085e94, size 0xf0, virtual false, abstract: false, final false
  inline void Reparent(bool isLandscape);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_landscapePCParent() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_landscapePCParent();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_landscapeParent() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_landscapeParent();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_portraitParent() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_portraitParent();

  constexpr void __cordl_internal_set_landscapePCParent(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_landscapeParent(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_portraitParent(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x3085f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileDynamicUIReparentedElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIReparentedElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileDynamicUIReparentedElement(MobileDynamicUIReparentedElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIReparentedElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileDynamicUIReparentedElement(MobileDynamicUIReparentedElement const&) = delete;

  /// @brief Field portraitParent, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___portraitParent;

  /// @brief Field landscapeParent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___landscapeParent;

  /// @brief Field landscapePCParent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___landscapePCParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileDynamicUIReparentedElement, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIReparentedElement, ___portraitParent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIReparentedElement, ___landscapeParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIReparentedElement, ___landscapePCParent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileDynamicUIReparentedElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileDynamicUIReparentedElement*, "", "MobileDynamicUIReparentedElement");
