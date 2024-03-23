#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThemeDisplay)
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
class __ThemeDisplay__OnPurchased;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ThemeDisplay;
}
namespace GlobalNamespace {
class __ThemeDisplay__OnPurchased;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThemeDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__ThemeDisplay__OnPurchased);
// Type: ::OnPurchased
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThemeDisplay::OnPurchased*
class CORDL_TYPE __ThemeDisplay__OnPurchased : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf25574, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW themeKey, int32_t expectedPrice, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf25608, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf25560, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW themeKey, int32_t expectedPrice);

  static inline ::GlobalNamespace::__ThemeDisplay__OnPurchased* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf1f5cc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThemeDisplay__OnPurchased();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThemeDisplay__OnPurchased", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThemeDisplay__OnPurchased(__ThemeDisplay__OnPurchased&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThemeDisplay__OnPurchased", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThemeDisplay__OnPurchased(__ThemeDisplay__OnPurchased const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThemeDisplay__OnPurchased, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ThemeDisplay
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThemeDisplay*
class CORDL_TYPE ThemeDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnPurchased = ::GlobalNamespace::__ThemeDisplay__OnPurchased;

  /// @brief Field curPriceTag, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curPriceTag, put = __cordl_internal_set_curPriceTag))::UnityW<::GlobalNamespace::PriceTag> curPriceTag;

  /// @brief Field onPurchasedCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onPurchasedCallback, put = __cordl_internal_set_onPurchasedCallback))::GlobalNamespace::__ThemeDisplay__OnPurchased* onPurchasedCallback;

  /// @brief Field placeholderObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_placeholderObject, put = __cordl_internal_set_placeholderObject))::UnityW<::UnityEngine::GameObject> placeholderObject;

  /// @brief Field price, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_price, put = __cordl_internal_set_price)) int32_t price;

  /// @brief Field priceTagAnchor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_priceTagAnchor, put = __cordl_internal_set_priceTagAnchor))::UnityW<::UnityEngine::Transform> priceTagAnchor;

  /// @brief Field themeKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_themeKey, put = __cordl_internal_set_themeKey))::StringW themeKey;

  /// @brief Field themeRepresentativeRadius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_themeRepresentativeRadius, put = __cordl_internal_set_themeRepresentativeRadius)) float_t themeRepresentativeRadius;

  /// @brief Method DestroySelf, addr 0xf1f958, size 0xac, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0xf1f6a4, size 0x2b4, virtual false, abstract: false, final false
  inline void Initialize(::StringW themeKey, int32_t price, ::GlobalNamespace::__ThemeDisplay__OnPurchased* onPurchased);

  static inline ::GlobalNamespace::ThemeDisplay* New_ctor();

  /// @brief Method SetHasPriceTag, addr 0xf1f33c, size 0x290, virtual false, abstract: false, final false
  inline void SetHasPriceTag(bool newHasPriceTag);

  /// @brief Method TryPurchase, addr 0xf2552c, size 0x24, virtual false, abstract: false, final false
  inline void TryPurchase();

  constexpr ::UnityW<::GlobalNamespace::PriceTag> const& __cordl_internal_get_curPriceTag() const;

  constexpr ::UnityW<::GlobalNamespace::PriceTag>& __cordl_internal_get_curPriceTag();

  constexpr ::GlobalNamespace::__ThemeDisplay__OnPurchased*& __cordl_internal_get_onPurchasedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThemeDisplay__OnPurchased*> const& __cordl_internal_get_onPurchasedCallback() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_placeholderObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_placeholderObject();

  constexpr int32_t const& __cordl_internal_get_price() const;

  constexpr int32_t& __cordl_internal_get_price();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_priceTagAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_priceTagAnchor();

  constexpr ::StringW const& __cordl_internal_get_themeKey() const;

  constexpr ::StringW& __cordl_internal_get_themeKey();

  constexpr float_t const& __cordl_internal_get_themeRepresentativeRadius() const;

  constexpr float_t& __cordl_internal_get_themeRepresentativeRadius();

  constexpr void __cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value);

  constexpr void __cordl_internal_set_onPurchasedCallback(::GlobalNamespace::__ThemeDisplay__OnPurchased* value);

  constexpr void __cordl_internal_set_placeholderObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_price(int32_t value);

  constexpr void __cordl_internal_set_priceTagAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_themeKey(::StringW value);

  constexpr void __cordl_internal_set_themeRepresentativeRadius(float_t value);

  /// @brief Method .ctor, addr 0xf25550, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThemeDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThemeDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThemeDisplay(ThemeDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThemeDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThemeDisplay(ThemeDisplay const&) = delete;

  /// @brief Field themeKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___themeKey;

  /// @brief Field price, offset: 0x20, size: 0x4, def value: None
  int32_t ___price;

  /// @brief Field themeRepresentativeRadius, offset: 0x24, size: 0x4, def value: None
  float_t ___themeRepresentativeRadius;

  /// @brief Field placeholderObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___placeholderObject;

  /// @brief Field priceTagAnchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___priceTagAnchor;

  /// @brief Field curPriceTag, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PriceTag> ___curPriceTag;

  /// @brief Field onPurchasedCallback, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__ThemeDisplay__OnPurchased* ___onPurchasedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThemeDisplay, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___themeKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___price) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___themeRepresentativeRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___placeholderObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___priceTagAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___curPriceTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeDisplay, ___onPurchasedCallback) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThemeDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThemeDisplay*, "", "ThemeDisplay");
NEED_NO_BOX(::GlobalNamespace::__ThemeDisplay__OnPurchased);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThemeDisplay__OnPurchased*, "", "ThemeDisplay/OnPurchased");
