#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationSign)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class RoomNavigation;
}
namespace GlobalNamespace {
class __NavigationSign____c__DisplayClass17_0;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace UnityEngine::UI {
class HorizontalLayoutGroup;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class NavigationSign;
}
namespace GlobalNamespace {
class __NavigationSign____c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NavigationSign);
MARK_REF_PTR_T(::GlobalNamespace::__NavigationSign____c__DisplayClass17_0);
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NavigationSign::<>c__DisplayClass17_0*
class CORDL_TYPE __NavigationSign____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::NavigationSign> __4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curFetchPlayerApperanceAccountID, put = __cordl_internal_set_curFetchPlayerApperanceAccountID))::StringW curFetchPlayerApperanceAccountID;

  static inline ::GlobalNamespace::__NavigationSign____c__DisplayClass17_0* New_ctor();

  /// @brief Method <Display>b__0, addr 0x175c578, size 0x104, virtual false, abstract: false, final false
  inline void _Display_b__0(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method <Display>b__1, addr 0x175c67c, size 0xb4, virtual false, abstract: false, final false
  inline void _Display_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::NavigationSign> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::NavigationSign>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_curFetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_curFetchPlayerApperanceAccountID();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NavigationSign> value);

  constexpr void __cordl_internal_set_curFetchPlayerApperanceAccountID(::StringW value);

  /// @brief Method .ctor, addr 0x175c4dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationSign____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigationSign____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigationSign____c__DisplayClass17_0(__NavigationSign____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigationSign____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigationSign____c__DisplayClass17_0(__NavigationSign____c__DisplayClass17_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NavigationSign> _____4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___curFetchPlayerApperanceAccountID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NavigationSign____c__DisplayClass17_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NavigationSign____c__DisplayClass17_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NavigationSign____c__DisplayClass17_0, ___curFetchPlayerApperanceAccountID) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NavigationSign
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NavigationSign*
class CORDL_TYPE NavigationSign : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass17_0 = ::GlobalNamespace::__NavigationSign____c__DisplayClass17_0;

  /// @brief Field UILayout, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_UILayout, put = __cordl_internal_set_UILayout))::UnityW<::UnityEngine::UI::HorizontalLayoutGroup> UILayout;

  /// @brief Field <signIndex>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__signIndex_k__BackingField, put = __cordl_internal_set__signIndex_k__BackingField)) int32_t _signIndex_k__BackingField;

  /// @brief Field <travelDirection>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__travelDirection_k__BackingField,
                      put = __cordl_internal_set__travelDirection_k__BackingField))::GlobalNamespace::__RoomManager__TravelDirection _travelDirection_k__BackingField;

  /// @brief Field avatar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field destinationNameText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationNameText, put = __cordl_internal_set_destinationNameText))::UnityW<::UnityEngine::UI::Text> destinationNameText;

  /// @brief Field distanceText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_distanceText, put = __cordl_internal_set_distanceText))::UnityW<::UnityEngine::UI::Text> distanceText;

  /// @brief Field fetchPlayerApperanceAccountID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_fetchPlayerApperanceAccountID, put = __cordl_internal_set_fetchPlayerApperanceAccountID))::StringW fetchPlayerApperanceAccountID;

  __declspec(property(get = get_signIndex, put = set_signIndex)) int32_t signIndex;

  /// @brief Field signTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signTransform, put = __cordl_internal_set_signTransform))::UnityW<::UnityEngine::Transform> signTransform;

  __declspec(property(get = get_travelDirection, put = set_travelDirection))::GlobalNamespace::__RoomManager__TravelDirection travelDirection;

  /// @brief Field verboseContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_verboseContainer, put = __cordl_internal_set_verboseContainer))::UnityW<::UnityEngine::GameObject> verboseContainer;

  /// @brief Method DestroySelf, addr 0x175c504, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Display, addr 0x175c0d4, size 0x408, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::RoomNavigation* navigation, int32_t distance);

  static inline ::GlobalNamespace::NavigationSign* New_ctor();

  /// @brief Method SetPosition, addr 0x175c010, size 0xc4, virtual false, abstract: false, final false
  inline void SetPosition(::GlobalNamespace::__RoomManager__TravelDirection travelDirection, int32_t index, bool isFlipped);

  /// @brief Method SetVerbose, addr 0x175c4e4, size 0x20, virtual false, abstract: false, final false
  inline void SetVerbose(bool newIsVerbose);

  constexpr ::UnityW<::UnityEngine::UI::HorizontalLayoutGroup> const& __cordl_internal_get_UILayout() const;

  constexpr ::UnityW<::UnityEngine::UI::HorizontalLayoutGroup>& __cordl_internal_get_UILayout();

  constexpr int32_t const& __cordl_internal_get__signIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__signIndex_k__BackingField();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get__travelDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get__travelDirection_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_destinationNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_destinationNameText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_distanceText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_distanceText();

  constexpr ::StringW const& __cordl_internal_get_fetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_fetchPlayerApperanceAccountID();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_signTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_signTransform();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_verboseContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_verboseContainer();

  constexpr void __cordl_internal_set_UILayout(::UnityW<::UnityEngine::UI::HorizontalLayoutGroup> value);

  constexpr void __cordl_internal_set__signIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__travelDirection_k__BackingField(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_destinationNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_distanceText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_fetchPlayerApperanceAccountID(::StringW value);

  constexpr void __cordl_internal_set_signTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_verboseContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x175c570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_signIndex, addr 0x175c000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_signIndex();

  /// @brief Method get_travelDirection, addr 0x175bff0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomManager__TravelDirection get_travelDirection();

  /// @brief Method set_signIndex, addr 0x175c008, size 0x8, virtual false, abstract: false, final false
  inline void set_signIndex(int32_t value);

  /// @brief Method set_travelDirection, addr 0x175bff8, size 0x8, virtual false, abstract: false, final false
  inline void set_travelDirection(::GlobalNamespace::__RoomManager__TravelDirection value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationSign();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationSign", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationSign(NavigationSign&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSign", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationSign(NavigationSign const&) = delete;

  /// @brief Field signTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___signTransform;

  /// @brief Field verboseContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___verboseContainer;

  /// @brief Field UILayout, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::HorizontalLayoutGroup> ___UILayout;

  /// @brief Field destinationNameText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___destinationNameText;

  /// @brief Field distanceText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___distanceText;

  /// @brief Field avatar, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field <travelDirection>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ____travelDirection_k__BackingField;

  /// @brief Field <signIndex>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____signIndex_k__BackingField;

  /// @brief Field fetchPlayerApperanceAccountID, offset: 0x50, size: 0x8, def value: None
  ::StringW ___fetchPlayerApperanceAccountID;

  /// @brief Field height offset 0xffffffff size 0x4
  static constexpr float_t height{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NavigationSign, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___signTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___verboseContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___UILayout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___destinationNameText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___distanceText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___avatar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ____travelDirection_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ____signIndex_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSign, ___fetchPlayerApperanceAccountID) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NavigationSign);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NavigationSign*, "", "NavigationSign");
NEED_NO_BOX(::GlobalNamespace::__NavigationSign____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NavigationSign____c__DisplayClass17_0*, "", "NavigationSign/<>c__DisplayClass17_0");
