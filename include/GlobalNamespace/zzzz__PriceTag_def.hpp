#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PriceTag)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class __PriceTag__OnHovered;
}
namespace GlobalNamespace {
class __PriceTag__OnPurchased;
}
namespace GlobalNamespace {
class __PriceTag__OnSelected;
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
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGrabInteractable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
class __PriceTag__OnHovered;
}
namespace GlobalNamespace {
class __PriceTag__OnPurchased;
}
namespace GlobalNamespace {
class __PriceTag__OnSelected;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PriceTag);
MARK_REF_PTR_T(::GlobalNamespace::__PriceTag__OnHovered);
MARK_REF_PTR_T(::GlobalNamespace::__PriceTag__OnPurchased);
MARK_REF_PTR_T(::GlobalNamespace::__PriceTag__OnSelected);
// Type: ::OnHovered
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PriceTag::OnHovered*
class CORDL_TYPE __PriceTag__OnHovered : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x276a27c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsHovered, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x276a304, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x276a264, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsHovered);

  static inline ::GlobalNamespace::__PriceTag__OnHovered* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2767618, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriceTag__OnHovered();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnHovered", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriceTag__OnHovered(__PriceTag__OnHovered&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnHovered", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriceTag__OnHovered(__PriceTag__OnHovered const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PriceTag__OnHovered, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSelected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PriceTag::OnSelected*
class CORDL_TYPE __PriceTag__OnSelected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x276a3e0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x276a400, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x276a3cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PriceTag__OnSelected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x276a310, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriceTag__OnSelected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnSelected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriceTag__OnSelected(__PriceTag__OnSelected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnSelected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriceTag__OnSelected(__PriceTag__OnSelected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PriceTag__OnSelected, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPurchased
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PriceTag::OnPurchased*
class CORDL_TYPE __PriceTag__OnPurchased : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x276a4dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x276a4fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x276a4c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PriceTag__OnPurchased* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x276a40c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriceTag__OnPurchased();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnPurchased", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriceTag__OnPurchased(__PriceTag__OnPurchased&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriceTag__OnPurchased", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriceTag__OnPurchased(__PriceTag__OnPurchased const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PriceTag__OnPurchased, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PriceTag
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PriceTag*
class CORDL_TYPE PriceTag : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnHovered = ::GlobalNamespace::__PriceTag__OnHovered;

  using OnPurchased = ::GlobalNamespace::__PriceTag__OnPurchased;

  using OnSelected = ::GlobalNamespace::__PriceTag__OnSelected;

  /// @brief Field <canAfford>k__BackingField, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get__canAfford_k__BackingField, put = __cordl_internal_set__canAfford_k__BackingField)) bool _canAfford_k__BackingField;

  /// @brief Field <isHovered>k__BackingField, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovered_k__BackingField, put = __cordl_internal_set__isHovered_k__BackingField)) bool _isHovered_k__BackingField;

  /// @brief Field <isSelected>k__BackingField, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__isSelected_k__BackingField, put = __cordl_internal_set__isSelected_k__BackingField)) bool _isSelected_k__BackingField;

  /// @brief Field <price>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__price_k__BackingField, put = __cordl_internal_set__price_k__BackingField)) int32_t _price_k__BackingField;

  __declspec(property(get = get_canAfford, put = set_canAfford)) bool canAfford;

  /// @brief Field canvas, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_canvas, put = __cordl_internal_set_canvas))::UnityW<::UnityEngine::GameObject> canvas;

  /// @brief Field defaultInteractableLocalPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultInteractableLocalPosition, put = __cordl_internal_set_defaultInteractableLocalPosition))::UnityEngine::Vector3 defaultInteractableLocalPosition;

  /// @brief Field defaultInteractableLocalRotation, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultInteractableLocalRotation,
                      put = __cordl_internal_set_defaultInteractableLocalRotation))::UnityEngine::Quaternion defaultInteractableLocalRotation;

  /// @brief Field defaultRadius, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultRadius, put = __cordl_internal_set_defaultRadius)) float_t defaultRadius;

  /// @brief Field grabSoundKey, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_grabSoundKey, put = __cordl_internal_set_grabSoundKey))::StringW grabSoundKey;

  /// @brief Field hoverTargetScale, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_hoverTargetScale, put = __cordl_internal_set_hoverTargetScale)) float_t hoverTargetScale;

  /// @brief Field interactable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_interactable, put = __cordl_internal_set_interactable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable> interactable;

  /// @brief Field interactableTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_interactableTransform, put = __cordl_internal_set_interactableTransform))::UnityW<::UnityEngine::Transform> interactableTransform;

  /// @brief Field isCanvasActive, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_isCanvasActive, put = __cordl_internal_set_isCanvasActive)) bool isCanvasActive;

  __declspec(property(get = get_isHovered, put = set_isHovered)) bool isHovered;

  __declspec(property(get = get_isSelected, put = set_isSelected)) bool isSelected;

  /// @brief Field maxStringLRWidth, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStringLRWidth, put = __cordl_internal_set_maxStringLRWidth)) float_t maxStringLRWidth;

  /// @brief Field onHoveredCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_onHoveredCallback, put = __cordl_internal_set_onHoveredCallback))::GlobalNamespace::__PriceTag__OnHovered* onHoveredCallback;

  /// @brief Field onPurchasedCallback, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_onPurchasedCallback, put = __cordl_internal_set_onPurchasedCallback))::GlobalNamespace::__PriceTag__OnPurchased* onPurchasedCallback;

  /// @brief Field onSelectedCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_onSelectedCallback, put = __cordl_internal_set_onSelectedCallback))::GlobalNamespace::__PriceTag__OnSelected* onSelectedCallback;

  __declspec(property(get = get_price, put = set_price)) int32_t price;

  /// @brief Field priceText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_priceText, put = __cordl_internal_set_priceText))::UnityW<::UnityEngine::UI::Text> priceText;

  /// @brief Field pullRadius, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_pullRadius, put = __cordl_internal_set_pullRadius)) float_t pullRadius;

  /// @brief Field snapSoundKey, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_snapSoundKey, put = __cordl_internal_set_snapSoundKey))::StringW snapSoundKey;

  /// @brief Field stringLR, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_stringLR, put = __cordl_internal_set_stringLR))::UnityW<::UnityEngine::LineRenderer> stringLR;

  /// @brief Field stringLREnd, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_stringLREnd, put = __cordl_internal_set_stringLREnd))::UnityW<::UnityEngine::Transform> stringLREnd;

  /// @brief Field stringLRStart, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_stringLRStart, put = __cordl_internal_set_stringLRStart))::UnityW<::UnityEngine::Transform> stringLRStart;

  /// @brief Field tagMeshFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tagMeshFilter, put = __cordl_internal_set_tagMeshFilter))::UnityW<::UnityEngine::MeshFilter> tagMeshFilter;

  /// @brief Field tagScaleContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tagScaleContainer, put = __cordl_internal_set_tagScaleContainer))::UnityW<::UnityEngine::Transform> tagScaleContainer;

  /// @brief Method CancelActiveSelections, addr 0x2769480, size 0x1d4, virtual false, abstract: false, final false
  inline void CancelActiveSelections();

  /// @brief Method DebugTriggerPurchase, addr 0x2769b30, size 0x4, virtual false, abstract: false, final false
  inline void DebugTriggerPurchase();

  /// @brief Method DestroySelf, addr 0x27693f0, size 0x90, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0x2768e1c, size 0x360, virtual false, abstract: false, final false
  inline void Initialize(int32_t price, ::GlobalNamespace::__PriceTag__OnHovered* onHovered, ::GlobalNamespace::__PriceTag__OnSelected* onSelected,
                         ::GlobalNamespace::__PriceTag__OnPurchased* onPurchased);

  static inline ::GlobalNamespace::PriceTag* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x27693e8, size 0x8, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnCurrencyUpdated, addr 0x2769b34, size 0x30, virtual false, abstract: false, final false
  inline void OnCurrencyUpdated(int32_t newCurrency, bool isDeduction);

  /// @brief Method OnDisable, addr 0x2769b64, size 0x1d4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2769d38, size 0x1c0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFirstHoverEnter, addr 0x276a038, size 0x128, virtual false, abstract: false, final false
  inline void OnFirstHoverEnter();

  /// @brief Method OnLastHoverExit, addr 0x276a160, size 0xf4, virtual false, abstract: false, final false
  inline void OnLastHoverExit();

  /// @brief Method OnSelectEntered, addr 0x2769ef8, size 0x138, virtual false, abstract: false, final false
  inline void OnSelectEntered();

  /// @brief Method OnSelectExited, addr 0x276a030, size 0x8, virtual false, abstract: false, final false
  inline void OnSelectExited();

  /// @brief Method SetCanAfford, addr 0x276917c, size 0x20, virtual false, abstract: false, final false
  inline void SetCanAfford(bool newCanAfford);

  /// @brief Method SetCanvasActive, addr 0x276919c, size 0x180, virtual false, abstract: false, final false
  inline void SetCanvasActive(bool newActive);

  /// @brief Method SetIsInteractable, addr 0x2769654, size 0x28, virtual false, abstract: false, final false
  inline void SetIsInteractable(bool newIsInteractable);

  /// @brief Method TriggerPurchase, addr 0x276998c, size 0x1a4, virtual false, abstract: false, final false
  inline void TriggerPurchase();

  /// @brief Method Update, addr 0x276967c, size 0x310, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateStringLine, addr 0x276931c, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateStringLine(float_t interactableDistanceFromCenter);

  constexpr bool const& __cordl_internal_get__canAfford_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canAfford_k__BackingField();

  constexpr bool const& __cordl_internal_get__isHovered_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isHovered_k__BackingField();

  constexpr bool const& __cordl_internal_get__isSelected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isSelected_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__price_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__price_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultInteractableLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultInteractableLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultInteractableLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultInteractableLocalRotation();

  constexpr float_t const& __cordl_internal_get_defaultRadius() const;

  constexpr float_t& __cordl_internal_get_defaultRadius();

  constexpr ::StringW const& __cordl_internal_get_grabSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_grabSoundKey();

  constexpr float_t const& __cordl_internal_get_hoverTargetScale() const;

  constexpr float_t& __cordl_internal_get_hoverTargetScale();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable> const& __cordl_internal_get_interactable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable>& __cordl_internal_get_interactable();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_interactableTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_interactableTransform();

  constexpr bool const& __cordl_internal_get_isCanvasActive() const;

  constexpr bool& __cordl_internal_get_isCanvasActive();

  constexpr float_t const& __cordl_internal_get_maxStringLRWidth() const;

  constexpr float_t& __cordl_internal_get_maxStringLRWidth();

  constexpr ::GlobalNamespace::__PriceTag__OnHovered*& __cordl_internal_get_onHoveredCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PriceTag__OnHovered*> const& __cordl_internal_get_onHoveredCallback() const;

  constexpr ::GlobalNamespace::__PriceTag__OnPurchased*& __cordl_internal_get_onPurchasedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PriceTag__OnPurchased*> const& __cordl_internal_get_onPurchasedCallback() const;

  constexpr ::GlobalNamespace::__PriceTag__OnSelected*& __cordl_internal_get_onSelectedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PriceTag__OnSelected*> const& __cordl_internal_get_onSelectedCallback() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_priceText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_priceText();

  constexpr float_t const& __cordl_internal_get_pullRadius() const;

  constexpr float_t& __cordl_internal_get_pullRadius();

  constexpr ::StringW const& __cordl_internal_get_snapSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_snapSoundKey();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_stringLR() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_stringLR();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stringLREnd() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stringLREnd();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stringLRStart() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stringLRStart();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_tagMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_tagMeshFilter();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tagScaleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tagScaleContainer();

  constexpr void __cordl_internal_set__canAfford_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isHovered_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isSelected_k__BackingField(bool value);

  constexpr void __cordl_internal_set__price_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_defaultInteractableLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultInteractableLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_defaultRadius(float_t value);

  constexpr void __cordl_internal_set_grabSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hoverTargetScale(float_t value);

  constexpr void __cordl_internal_set_interactable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable> value);

  constexpr void __cordl_internal_set_interactableTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isCanvasActive(bool value);

  constexpr void __cordl_internal_set_maxStringLRWidth(float_t value);

  constexpr void __cordl_internal_set_onHoveredCallback(::GlobalNamespace::__PriceTag__OnHovered* value);

  constexpr void __cordl_internal_set_onPurchasedCallback(::GlobalNamespace::__PriceTag__OnPurchased* value);

  constexpr void __cordl_internal_set_onSelectedCallback(::GlobalNamespace::__PriceTag__OnSelected* value);

  constexpr void __cordl_internal_set_priceText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_pullRadius(float_t value);

  constexpr void __cordl_internal_set_snapSoundKey(::StringW value);

  constexpr void __cordl_internal_set_stringLR(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_stringLREnd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_stringLRStart(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_tagMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_tagScaleContainer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x276a254, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canAfford, addr 0x2768de0, size 0x8, virtual false, abstract: false, final false
  inline bool get_canAfford();

  /// @brief Method get_isHovered, addr 0x2768e08, size 0x8, virtual false, abstract: false, final false
  inline bool get_isHovered();

  /// @brief Method get_isSelected, addr 0x2768df4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSelected();

  /// @brief Method get_price, addr 0x2768dd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_price();

  /// @brief Method set_canAfford, addr 0x2768de8, size 0xc, virtual false, abstract: false, final false
  inline void set_canAfford(bool value);

  /// @brief Method set_isHovered, addr 0x2768e10, size 0xc, virtual false, abstract: false, final false
  inline void set_isHovered(bool value);

  /// @brief Method set_isSelected, addr 0x2768dfc, size 0xc, virtual false, abstract: false, final false
  inline void set_isSelected(bool value);

  /// @brief Method set_price, addr 0x2768dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_price(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PriceTag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PriceTag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PriceTag(PriceTag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PriceTag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PriceTag(PriceTag const&) = delete;

  /// @brief Field tagScaleContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___tagScaleContainer;

  /// @brief Field tagMeshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___tagMeshFilter;

  /// @brief Field canvas, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___canvas;

  /// @brief Field priceText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___priceText;

  /// @brief Field <price>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____price_k__BackingField;

  /// @brief Field isCanvasActive, offset: 0x3c, size: 0x1, def value: None
  bool ___isCanvasActive;

  /// @brief Field <canAfford>k__BackingField, offset: 0x3d, size: 0x1, def value: None
  bool ____canAfford_k__BackingField;

  /// @brief Field interactable, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable> ___interactable;

  /// @brief Field interactableTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___interactableTransform;

  /// @brief Field defaultInteractableLocalPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultInteractableLocalPosition;

  /// @brief Field defaultInteractableLocalRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultInteractableLocalRotation;

  /// @brief Field stringLR, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___stringLR;

  /// @brief Field stringLRStart, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___stringLRStart;

  /// @brief Field stringLREnd, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___stringLREnd;

  /// @brief Field maxStringLRWidth, offset: 0x88, size: 0x4, def value: None
  float_t ___maxStringLRWidth;

  /// @brief Field defaultRadius, offset: 0x8c, size: 0x4, def value: None
  float_t ___defaultRadius;

  /// @brief Field pullRadius, offset: 0x90, size: 0x4, def value: None
  float_t ___pullRadius;

  /// @brief Field <isSelected>k__BackingField, offset: 0x94, size: 0x1, def value: None
  bool ____isSelected_k__BackingField;

  /// @brief Field <isHovered>k__BackingField, offset: 0x95, size: 0x1, def value: None
  bool ____isHovered_k__BackingField;

  /// @brief Field hoverTargetScale, offset: 0x98, size: 0x4, def value: None
  float_t ___hoverTargetScale;

  /// @brief Field grabSoundKey, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___grabSoundKey;

  /// @brief Field snapSoundKey, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___snapSoundKey;

  /// @brief Field onHoveredCallback, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__PriceTag__OnHovered* ___onHoveredCallback;

  /// @brief Field onSelectedCallback, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__PriceTag__OnSelected* ___onSelectedCallback;

  /// @brief Field onPurchasedCallback, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__PriceTag__OnPurchased* ___onPurchasedCallback;

  /// @brief Field buyPullDistance offset 0xffffffff size 0x4
  static constexpr float_t buyPullDistance{ 0.35 };

  /// @brief Field hoverScaleLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t hoverScaleLerpSpeed{ 4.0 };

  /// @brief Field hoveredScale offset 0xffffffff size 0x4
  static constexpr float_t hoveredScale{ 1.35 };

  /// @brief Field tagLerpBackSpeed offset 0xffffffff size 0x4
  static constexpr float_t tagLerpBackSpeed{ 0.15 };

  /// @brief Field unhoveredScale offset 0xffffffff size 0x4
  static constexpr float_t unhoveredScale{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PriceTag, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___tagScaleContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___tagMeshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___canvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___priceText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ____price_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___isCanvasActive) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ____canAfford_k__BackingField) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___interactable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___interactableTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___defaultInteractableLocalPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___defaultInteractableLocalRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___stringLR) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___stringLRStart) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___stringLREnd) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___maxStringLRWidth) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___defaultRadius) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___pullRadius) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ____isSelected_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ____isHovered_k__BackingField) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___hoverTargetScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___grabSoundKey) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___snapSoundKey) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___onHoveredCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___onSelectedCallback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PriceTag, ___onPurchasedCallback) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PriceTag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PriceTag*, "", "PriceTag");
NEED_NO_BOX(::GlobalNamespace::__PriceTag__OnHovered);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PriceTag__OnHovered*, "", "PriceTag/OnHovered");
NEED_NO_BOX(::GlobalNamespace::__PriceTag__OnPurchased);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PriceTag__OnPurchased*, "", "PriceTag/OnPurchased");
NEED_NO_BOX(::GlobalNamespace::__PriceTag__OnSelected);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PriceTag__OnSelected*, "", "PriceTag/OnSelected");
