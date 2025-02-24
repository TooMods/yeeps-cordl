#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpBox)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct HelpBoxMessageType;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HelpBox;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::HelpBox);
MARK_REF_PTR_T(::UnityEngine::UIElements::__HelpBox__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__HelpBox__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::HelpBox::UxmlTraits*
class CORDL_TYPE __HelpBox__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_MessageType, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MessageType,
                      put = __cordl_internal_set_m_MessageType))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* m_MessageType;

  /// @brief Field m_Text, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x2ce5190, size 0x154, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__HelpBox__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*& __cordl_internal_get_m_MessageType();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*> const&
  __cordl_internal_get_m_MessageType() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x2ce52e4, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HelpBox__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HelpBox__UxmlTraits(__HelpBox__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HelpBox__UxmlTraits(__HelpBox__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_MessageType, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* ___m_MessageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__HelpBox__UxmlTraits, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__HelpBox__UxmlTraits, ___m_Text) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__HelpBox__UxmlTraits, ___m_MessageType) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::HelpBox
// SizeInfo { instance_size: 976, native_size: -1, calculated_instance_size: 976, calculated_native_size: 976, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::HelpBox*
class CORDL_TYPE HelpBox : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__HelpBox__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__HelpBox__UxmlTraits;

  /// @brief Field iconErrorUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iconErrorUssClassName, put = setStaticF_iconErrorUssClassName))::StringW iconErrorUssClassName;

  /// @brief Field iconInfoUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iconInfoUssClassName, put = setStaticF_iconInfoUssClassName))::StringW iconInfoUssClassName;

  /// @brief Field iconUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iconUssClassName, put = setStaticF_iconUssClassName))::StringW iconUssClassName;

  /// @brief Field iconwarningUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iconwarningUssClassName, put = setStaticF_iconwarningUssClassName))::StringW iconwarningUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field m_HelpBoxMessageType, offset 0x3b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HelpBoxMessageType, put = __cordl_internal_set_m_HelpBoxMessageType))::UnityEngine::UIElements::HelpBoxMessageType m_HelpBoxMessageType;

  /// @brief Field m_Icon, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Icon, put = __cordl_internal_set_m_Icon))::UnityEngine::UIElements::VisualElement* m_Icon;

  /// @brief Field m_IconClass, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IconClass, put = __cordl_internal_set_m_IconClass))::StringW m_IconClass;

  /// @brief Field m_Label, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label))::UnityEngine::UIElements::Label* m_Label;

  __declspec(property(put = set_messageType))::UnityEngine::UIElements::HelpBoxMessageType messageType;

  __declspec(property(put = set_text))::StringW text;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Method GetIconClass, addr 0x2ce4f24, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType messageType);

  static inline ::UnityEngine::UIElements::HelpBox* New_ctor();

  static inline ::UnityEngine::UIElements::HelpBox* New_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType);

  /// @brief Method UpdateIcon, addr 0x2ce4ccc, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType messageType);

  constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& __cordl_internal_get_m_HelpBoxMessageType() const;

  constexpr ::UnityEngine::UIElements::HelpBoxMessageType& __cordl_internal_get_m_HelpBoxMessageType();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Icon() const;

  constexpr ::StringW const& __cordl_internal_get_m_IconClass() const;

  constexpr ::StringW& __cordl_internal_get_m_IconClass();

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_Label();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_Label() const;

  constexpr void __cordl_internal_set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType value);

  constexpr void __cordl_internal_set_m_Icon(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_IconClass(::StringW value);

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value);

  /// @brief Method .ctor, addr 0x2ce4d80, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ce4dd4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType);

  static inline ::StringW getStaticF_iconErrorUssClassName();

  static inline ::StringW getStaticF_iconInfoUssClassName();

  static inline ::StringW getStaticF_iconUssClassName();

  static inline ::StringW getStaticF_iconwarningUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_iconErrorUssClassName(::StringW value);

  static inline void setStaticF_iconInfoUssClassName(::StringW value);

  static inline void setStaticF_iconUssClassName(::StringW value);

  static inline void setStaticF_iconwarningUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_messageType, addr 0x2ce4cb4, size 0x18, virtual false, abstract: false, final false
  inline void set_messageType(::UnityEngine::UIElements::HelpBoxMessageType value);

  /// @brief Method set_text, addr 0x2ce4c90, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpBox(HelpBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpBox(HelpBox const&) = delete;

  /// @brief Field m_HelpBoxMessageType, offset: 0x3b0, size: 0x4, def value: None
  ::UnityEngine::UIElements::HelpBoxMessageType ___m_HelpBoxMessageType;

  /// @brief Field m_Icon, offset: 0x3b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Icon;

  /// @brief Field m_IconClass, offset: 0x3c0, size: 0x8, def value: None
  ::StringW ___m_IconClass;

  /// @brief Field m_Label, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HelpBox, 0x3d0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_HelpBoxMessageType) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_Icon) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_IconClass) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_Label) == 0x3c8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::HelpBox::UxmlFactory*
class CORDL_TYPE __HelpBox__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::HelpBox*, ::UnityEngine::UIElements::__HelpBox__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__HelpBox__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2ce5148, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HelpBox__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HelpBox__UxmlFactory(__HelpBox__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HelpBox__UxmlFactory(__HelpBox__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__HelpBox__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox*, "UnityEngine.UIElements", "HelpBox");
NEED_NO_BOX(::UnityEngine::UIElements::__HelpBox__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__HelpBox__UxmlFactory*, "UnityEngine.UIElements", "HelpBox/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__HelpBox__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__HelpBox__UxmlTraits*, "UnityEngine.UIElements", "HelpBox/UxmlTraits");
