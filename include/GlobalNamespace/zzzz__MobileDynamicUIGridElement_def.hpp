#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileDynamicUIGridElement)
namespace UnityEngine::UI {
class GridLayoutGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileDynamicUIGridElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileDynamicUIGridElement);
// Type: ::MobileDynamicUIGridElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileDynamicUIGridElement*
class CORDL_TYPE MobileDynamicUIGridElement : public ::GlobalNamespace::MobileDynamicUIElement {
public:
  // Declarations
  /// @brief Field gridLayoutGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gridLayoutGroup, put = __cordl_internal_set_gridLayoutGroup))::UnityW<::UnityEngine::UI::GridLayoutGroup> gridLayoutGroup;

  /// @brief Field landscapeColumnCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_landscapeColumnCount, put = __cordl_internal_set_landscapeColumnCount)) int32_t landscapeColumnCount;

  /// @brief Field portraitColumnCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_portraitColumnCount, put = __cordl_internal_set_portraitColumnCount)) int32_t portraitColumnCount;

  /// @brief Method Initialize, addr 0x3085e40, size 0x10, virtual true, abstract: false, final false
  inline void Initialize(bool initialIsLandscape);

  static inline ::GlobalNamespace::MobileDynamicUIGridElement* New_ctor();

  /// @brief Method OnOrientationChanged, addr 0x3085e50, size 0x34, virtual true, abstract: false, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup> const& __cordl_internal_get_gridLayoutGroup() const;

  constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup>& __cordl_internal_get_gridLayoutGroup();

  constexpr int32_t const& __cordl_internal_get_landscapeColumnCount() const;

  constexpr int32_t& __cordl_internal_get_landscapeColumnCount();

  constexpr int32_t const& __cordl_internal_get_portraitColumnCount() const;

  constexpr int32_t& __cordl_internal_get_portraitColumnCount();

  constexpr void __cordl_internal_set_gridLayoutGroup(::UnityW<::UnityEngine::UI::GridLayoutGroup> value);

  constexpr void __cordl_internal_set_landscapeColumnCount(int32_t value);

  constexpr void __cordl_internal_set_portraitColumnCount(int32_t value);

  /// @brief Method .ctor, addr 0x3085e84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileDynamicUIGridElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIGridElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileDynamicUIGridElement(MobileDynamicUIGridElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIGridElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileDynamicUIGridElement(MobileDynamicUIGridElement const&) = delete;

  /// @brief Field gridLayoutGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::GridLayoutGroup> ___gridLayoutGroup;

  /// @brief Field portraitColumnCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___portraitColumnCount;

  /// @brief Field landscapeColumnCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___landscapeColumnCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileDynamicUIGridElement, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIGridElement, ___gridLayoutGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIGridElement, ___portraitColumnCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIGridElement, ___landscapeColumnCount) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileDynamicUIGridElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileDynamicUIGridElement*, "", "MobileDynamicUIGridElement");
