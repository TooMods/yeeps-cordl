#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TravelToFriendListItem)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace GlobalNamespace {
class __TravelToFriendListItem__OnSelected;
}
namespace GlobalNamespace {
class __TravelToFriendListItem____c__DisplayClass22_0;
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
class Image;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TravelToFriendListItem;
}
namespace GlobalNamespace {
class __TravelToFriendListItem__OnSelected;
}
namespace GlobalNamespace {
class __TravelToFriendListItem____c__DisplayClass22_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TravelToFriendListItem);
MARK_REF_PTR_T(::GlobalNamespace::__TravelToFriendListItem__OnSelected);
MARK_REF_PTR_T(::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0);
// Type: ::OnSelected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TravelToFriendListItem::OnSelected*
class CORDL_TYPE __TravelToFriendListItem__OnSelected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf26c20, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW accountID, ::StringW displayName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf26c48, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf26c0c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW accountID, ::StringW displayName);

  static inline ::GlobalNamespace::__TravelToFriendListItem__OnSelected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf264ac, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TravelToFriendListItem__OnSelected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendListItem__OnSelected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TravelToFriendListItem__OnSelected(__TravelToFriendListItem__OnSelected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendListItem__OnSelected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TravelToFriendListItem__OnSelected(__TravelToFriendListItem__OnSelected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TravelToFriendListItem__OnSelected, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TravelToFriendListItem::<>c__DisplayClass22_0*
class CORDL_TYPE __TravelToFriendListItem____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::TravelToFriendListItem> __4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curFetchPlayerApperanceAccountID, put = __cordl_internal_set_curFetchPlayerApperanceAccountID))::StringW curFetchPlayerApperanceAccountID;

  static inline ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0* New_ctor();

  /// @brief Method <Initialize>b__0, addr 0xf26c54, size 0x108, virtual false, abstract: false, final false
  inline void _Initialize_b__0(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method <Initialize>b__1, addr 0xf26d5c, size 0xb4, virtual false, abstract: false, final false
  inline void _Initialize_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::TravelToFriendListItem> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::TravelToFriendListItem>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_curFetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_curFetchPlayerApperanceAccountID();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TravelToFriendListItem> value);

  constexpr void __cordl_internal_set_curFetchPlayerApperanceAccountID(::StringW value);

  /// @brief Method .ctor, addr 0xf26ba0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TravelToFriendListItem____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendListItem____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TravelToFriendListItem____c__DisplayClass22_0(__TravelToFriendListItem____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendListItem____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TravelToFriendListItem____c__DisplayClass22_0(__TravelToFriendListItem____c__DisplayClass22_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TravelToFriendListItem> _____4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___curFetchPlayerApperanceAccountID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0, ___curFetchPlayerApperanceAccountID) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TravelToFriendListItem
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TravelToFriendListItem*
class CORDL_TYPE TravelToFriendListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnSelected = ::GlobalNamespace::__TravelToFriendListItem__OnSelected;

  using __c__DisplayClass22_0 = ::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0;

  /// @brief Field <accountID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__accountID_k__BackingField, put = __cordl_internal_set__accountID_k__BackingField))::StringW _accountID_k__BackingField;

  /// @brief Field <isLocked>k__BackingField, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__isLocked_k__BackingField, put = __cordl_internal_set__isLocked_k__BackingField)) bool _isLocked_k__BackingField;

  /// @brief Field <isSelected>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isSelected_k__BackingField, put = __cordl_internal_set__isSelected_k__BackingField)) bool _isSelected_k__BackingField;

  __declspec(property(get = get_accountID, put = set_accountID))::StringW accountID;

  /// @brief Field avatar, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field backgroundImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundImage, put = __cordl_internal_set_backgroundImage))::UnityW<::UnityEngine::UI::Image> backgroundImage;

  /// @brief Field displayName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  /// @brief Field fetchPlayerApperanceAccountID, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_fetchPlayerApperanceAccountID, put = __cordl_internal_set_fetchPlayerApperanceAccountID))::StringW fetchPlayerApperanceAccountID;

  __declspec(property(get = get_isLocked, put = set_isLocked)) bool isLocked;

  __declspec(property(get = get_isSelected, put = set_isSelected)) bool isSelected;

  /// @brief Field onSelectedCallback, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_onSelectedCallback, put = __cordl_internal_set_onSelectedCallback))::GlobalNamespace::__TravelToFriendListItem__OnSelected* onSelectedCallback;

  /// @brief Field playerNameText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNameText, put = __cordl_internal_set_playerNameText))::UnityW<::UnityEngine::UI::Text> playerNameText;

  /// @brief Field selectButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_selectButton, put = __cordl_internal_set_selectButton))::UnityW<::GlobalNamespace::SimpleButtonController> selectButton;

  /// @brief Field selectedBackgroundColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_selectedBackgroundColor, put = __cordl_internal_set_selectedBackgroundColor))::UnityEngine::Color selectedBackgroundColor;

  /// @brief Field unselectedBackgroundColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_unselectedBackgroundColor, put = __cordl_internal_set_unselectedBackgroundColor))::UnityEngine::Color unselectedBackgroundColor;

  /// @brief Method DestroySelf, addr 0xf26210, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0xf26584, size 0x1ac, virtual false, abstract: false, final false
  inline void Initialize(::StringW accountID, ::GlobalNamespace::__TravelToFriendListItem__OnSelected* onSelected);

  static inline ::GlobalNamespace::TravelToFriendListItem* New_ctor();

  /// @brief Method OnSelectButtonPressed, addr 0xf26ba8, size 0x28, virtual false, abstract: false, final false
  inline void OnSelectButtonPressed();

  /// @brief Method SetIsLocked, addr 0xf26bd0, size 0x34, virtual false, abstract: false, final false
  inline void SetIsLocked(bool newIsLocked);

  /// @brief Method SetIsSelected, addr 0xf26730, size 0x6c, virtual false, abstract: false, final false
  inline void SetIsSelected(bool newIsSelected);

  constexpr ::StringW const& __cordl_internal_get__accountID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__accountID_k__BackingField();

  constexpr bool const& __cordl_internal_get__isLocked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLocked_k__BackingField();

  constexpr bool const& __cordl_internal_get__isSelected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isSelected_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_backgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_backgroundImage();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::StringW const& __cordl_internal_get_fetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_fetchPlayerApperanceAccountID();

  constexpr ::GlobalNamespace::__TravelToFriendListItem__OnSelected*& __cordl_internal_get_onSelectedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TravelToFriendListItem__OnSelected*> const& __cordl_internal_get_onSelectedCallback() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerNameText();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_selectButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_selectButton();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_selectedBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_selectedBackgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_unselectedBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_unselectedBackgroundColor();

  constexpr void __cordl_internal_set__accountID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__isLocked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isSelected_k__BackingField(bool value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_fetchPlayerApperanceAccountID(::StringW value);

  constexpr void __cordl_internal_set_onSelectedCallback(::GlobalNamespace::__TravelToFriendListItem__OnSelected* value);

  constexpr void __cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_selectButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_selectedBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_unselectedBackgroundColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0xf26c04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_accountID, addr 0xf26b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_accountID();

  /// @brief Method get_isLocked, addr 0xf26b8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLocked();

  /// @brief Method get_isSelected, addr 0xf26b78, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSelected();

  /// @brief Method set_accountID, addr 0xf26b70, size 0x8, virtual false, abstract: false, final false
  inline void set_accountID(::StringW value);

  /// @brief Method set_isLocked, addr 0xf26b94, size 0xc, virtual false, abstract: false, final false
  inline void set_isLocked(bool value);

  /// @brief Method set_isSelected, addr 0xf26b80, size 0xc, virtual false, abstract: false, final false
  inline void set_isSelected(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TravelToFriendListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TravelToFriendListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TravelToFriendListItem(TravelToFriendListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TravelToFriendListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TravelToFriendListItem(TravelToFriendListItem const&) = delete;

  /// @brief Field <accountID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____accountID_k__BackingField;

  /// @brief Field displayName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field playerNameText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___playerNameText;

  /// @brief Field backgroundImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___backgroundImage;

  /// @brief Field avatar, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field selectButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___selectButton;

  /// @brief Field selectedBackgroundColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___selectedBackgroundColor;

  /// @brief Field unselectedBackgroundColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___unselectedBackgroundColor;

  /// @brief Field onSelectedCallback, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__TravelToFriendListItem__OnSelected* ___onSelectedCallback;

  /// @brief Field <isSelected>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____isSelected_k__BackingField;

  /// @brief Field <isLocked>k__BackingField, offset: 0x71, size: 0x1, def value: None
  bool ____isLocked_k__BackingField;

  /// @brief Field fetchPlayerApperanceAccountID, offset: 0x78, size: 0x8, def value: None
  ::StringW ___fetchPlayerApperanceAccountID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TravelToFriendListItem, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ____accountID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___playerNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___backgroundImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___avatar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___selectButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___selectedBackgroundColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___unselectedBackgroundColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___onSelectedCallback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ____isSelected_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ____isLocked_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendListItem, ___fetchPlayerApperanceAccountID) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TravelToFriendListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TravelToFriendListItem*, "", "TravelToFriendListItem");
NEED_NO_BOX(::GlobalNamespace::__TravelToFriendListItem__OnSelected);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TravelToFriendListItem__OnSelected*, "", "TravelToFriendListItem/OnSelected");
NEED_NO_BOX(::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TravelToFriendListItem____c__DisplayClass22_0*, "", "TravelToFriendListItem/<>c__DisplayClass22_0");
