#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsDisplay)
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct __Avatar__AvatarPortion;
}
namespace GlobalNamespace {
class __CosmeticsDisplay__ActiveCosmeticData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsDisplay;
}
namespace GlobalNamespace {
class __CosmeticsDisplay__ActiveCosmeticData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData);
// Type: ::ActiveCosmeticData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsDisplay::ActiveCosmeticData*
class CORDL_TYPE __CosmeticsDisplay__ActiveCosmeticData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cosmeticData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticData, put = __cordl_internal_set_cosmeticData))::GlobalNamespace::CosmeticData* cosmeticData;

  /// @brief Field defaultMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultMaterial, put = __cordl_internal_set_defaultMaterial))::UnityW<::UnityEngine::Material> defaultMaterial;

  /// @brief Field gameObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field highlightCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_highlightCount, put = __cordl_internal_set_highlightCount)) int32_t highlightCount;

  /// @brief Method AddHighlight, addr 0x158ba5c, size 0x1c, virtual false, abstract: false, final false
  inline void AddHighlight();

  static inline ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData* New_ctor(::GlobalNamespace::CosmeticData* cosmeticData, ::UnityEngine::GameObject* gameObject);

  /// @brief Method RemoveAllHighlights, addr 0x158bef0, size 0x1c, virtual false, abstract: false, final false
  inline void RemoveAllHighlights();

  /// @brief Method RemoveHighlight, addr 0x158bd50, size 0x44, virtual false, abstract: false, final false
  inline void RemoveHighlight();

  /// @brief Method SetIsHighlighted, addr 0x158c3fc, size 0x1b8, virtual false, abstract: false, final false
  inline void SetIsHighlighted(bool newIsHighlighted);

  constexpr ::GlobalNamespace::CosmeticData*& __cordl_internal_get_cosmeticData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticData*> const& __cordl_internal_get_cosmeticData() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterial();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr int32_t const& __cordl_internal_get_highlightCount() const;

  constexpr int32_t& __cordl_internal_get_highlightCount();

  constexpr void __cordl_internal_set_cosmeticData(::GlobalNamespace::CosmeticData* value);

  constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_highlightCount(int32_t value);

  /// @brief Method .ctor, addr 0x158b744, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::CosmeticData* cosmeticData, ::UnityEngine::GameObject* gameObject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsDisplay__ActiveCosmeticData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsDisplay__ActiveCosmeticData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CosmeticsDisplay__ActiveCosmeticData(__CosmeticsDisplay__ActiveCosmeticData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CosmeticsDisplay__ActiveCosmeticData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CosmeticsDisplay__ActiveCosmeticData(__CosmeticsDisplay__ActiveCosmeticData const&) = delete;

  /// @brief Field cosmeticData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticData* ___cosmeticData;

  /// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field highlightCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___highlightCount;

  /// @brief Field defaultMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___defaultMaterial;

  /// @brief Field brightnessBoostProppertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString brightnessBoostProppertyName{ u"_BrightnessBoost" };

  /// @brief Field hoveredToPickupBrightnessBoost offset 0xffffffff size 0x4
  static constexpr float_t hoveredToPickupBrightnessBoost{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData, ___cosmeticData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData, ___highlightCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData, ___defaultMaterial) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsDisplay
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsDisplay*
class CORDL_TYPE CosmeticsDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ActiveCosmeticData = ::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData;

  /// @brief Field activeCosmetics, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_activeCosmetics,
                      put = __cordl_internal_set_activeCosmetics))::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>* activeCosmetics;

  /// @brief Field avatarCosmeticsReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarCosmeticsReference, put = __cordl_internal_set_avatarCosmeticsReference))::UnityW<::UnityEngine::SkinnedMeshRenderer> avatarCosmeticsReference;

  /// @brief Field avatarPortion, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarPortion, put = __cordl_internal_set_avatarPortion))::GlobalNamespace::__Avatar__AvatarPortion avatarPortion;

  /// @brief Field cosmetics, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmetics, put = __cordl_internal_set_cosmetics))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics;

  /// @brief Field hideInvisibleToSelfCosmetics, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hideInvisibleToSelfCosmetics, put = __cordl_internal_set_hideInvisibleToSelfCosmetics)) bool hideInvisibleToSelfCosmetics;

  /// @brief Field isHeadOnly, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isHeadOnly, put = __cordl_internal_set_isHeadOnly)) bool isHeadOnly;

  /// @brief Field mirroredDisplays, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mirroredDisplays,
                      put = __cordl_internal_set_mirroredDisplays))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>* mirroredDisplays;

  /// @brief Field selectedLayer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLayer, put = __cordl_internal_set_selectedLayer)) int32_t selectedLayer;

  /// @brief Field zipperAnchor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperAnchor, put = __cordl_internal_set_zipperAnchor))::UnityW<::UnityEngine::Transform> zipperAnchor;

  /// @brief Method AddHighlight, addr 0x158b770, size 0x2ec, virtual false, abstract: false, final false
  inline void AddHighlight(::StringW cosmeticKey);

  /// @brief Method AddMirroredDisplay, addr 0x158bf0c, size 0x3e4, virtual false, abstract: false, final false
  inline void AddMirroredDisplay(::GlobalNamespace::CosmeticsDisplay* mirroredDisplay);

  /// @brief Method Display, addr 0x1589074, size 0x380, virtual false, abstract: false, final false
  inline void Display(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  static inline ::GlobalNamespace::CosmeticsDisplay* New_ctor();

  /// @brief Method RemoveAllHighlights, addr 0x158bd94, size 0x15c, virtual false, abstract: false, final false
  inline void RemoveAllHighlights();

  /// @brief Method RemoveHighlight, addr 0x158ba78, size 0x2d8, virtual false, abstract: false, final false
  inline void RemoveHighlight(::StringW cosmeticKey);

  /// @brief Method RemoveMirroredDisplay, addr 0x158c2f0, size 0x90, virtual false, abstract: false, final false
  inline void RemoveMirroredDisplay(::GlobalNamespace::CosmeticsDisplay* mirroredDisplay);

  /// @brief Method SetAvatarPortion, addr 0x15895e4, size 0x1c0, virtual false, abstract: false, final false
  inline void SetAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion);

  /// @brief Method SetLayer, addr 0x1588ee0, size 0x174, virtual false, abstract: false, final false
  inline void SetLayer(int32_t newLayer);

  /// @brief Method ShowCosmetics, addr 0x158b0d0, size 0x674, virtual false, abstract: false, final false
  inline void ShowCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>*& __cordl_internal_get_activeCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>*> const&
  __cordl_internal_get_activeCosmetics() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_avatarCosmeticsReference() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_avatarCosmeticsReference();

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& __cordl_internal_get_avatarPortion() const;

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion& __cordl_internal_get_avatarPortion();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*& __cordl_internal_get_cosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*> const& __cordl_internal_get_cosmetics() const;

  constexpr bool const& __cordl_internal_get_hideInvisibleToSelfCosmetics() const;

  constexpr bool& __cordl_internal_get_hideInvisibleToSelfCosmetics();

  constexpr bool const& __cordl_internal_get_isHeadOnly() const;

  constexpr bool& __cordl_internal_get_isHeadOnly();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>*& __cordl_internal_get_mirroredDisplays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>*> const& __cordl_internal_get_mirroredDisplays() const;

  constexpr int32_t const& __cordl_internal_get_selectedLayer() const;

  constexpr int32_t& __cordl_internal_get_selectedLayer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zipperAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zipperAnchor();

  constexpr void __cordl_internal_set_activeCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>* value);

  constexpr void __cordl_internal_set_avatarCosmeticsReference(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set_avatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value);

  constexpr void __cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value);

  constexpr void __cordl_internal_set_hideInvisibleToSelfCosmetics(bool value);

  constexpr void __cordl_internal_set_isHeadOnly(bool value);

  constexpr void __cordl_internal_set_mirroredDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>* value);

  constexpr void __cordl_internal_set_selectedLayer(int32_t value);

  constexpr void __cordl_internal_set_zipperAnchor(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x158c380, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsDisplay(CosmeticsDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsDisplay(CosmeticsDisplay const&) = delete;

  /// @brief Field avatarCosmeticsReference, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___avatarCosmeticsReference;

  /// @brief Field zipperAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zipperAnchor;

  /// @brief Field hideInvisibleToSelfCosmetics, offset: 0x28, size: 0x1, def value: None
  bool ___hideInvisibleToSelfCosmetics;

  /// @brief Field cosmetics, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* ___cosmetics;

  /// @brief Field activeCosmetics, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*>* ___activeCosmetics;

  /// @brief Field mirroredDisplays, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsDisplay>>* ___mirroredDisplays;

  /// @brief Field isHeadOnly, offset: 0x48, size: 0x1, def value: None
  bool ___isHeadOnly;

  /// @brief Field avatarPortion, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__Avatar__AvatarPortion ___avatarPortion;

  /// @brief Field selectedLayer, offset: 0x50, size: 0x4, def value: None
  int32_t ___selectedLayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsDisplay, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___avatarCosmeticsReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___zipperAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___hideInvisibleToSelfCosmetics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___cosmetics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___activeCosmetics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___mirroredDisplays) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___isHeadOnly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___avatarPortion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDisplay, ___selectedLayer) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsDisplay*, "", "CosmeticsDisplay");
NEED_NO_BOX(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsDisplay__ActiveCosmeticData*, "", "CosmeticsDisplay/ActiveCosmeticData");
