#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TemplateContainer)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class __TemplateContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TemplateContainer__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class __TemplateContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TemplateContainer__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateContainer);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TemplateContainer__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TemplateContainer__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TemplateContainer::UxmlTraits*
class CORDL_TYPE __TemplateContainer__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Template, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Template;

  /// @brief Method Init, addr 0x2a36fe4, size 0x39c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Template();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Template() const;

  constexpr void __cordl_internal_set_m_Template(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x2a374b4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TemplateContainer__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TemplateContainer__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TemplateContainer__UxmlTraits(__TemplateContainer__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TemplateContainer__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TemplateContainer__UxmlTraits(__TemplateContainer__UxmlTraits const&) = delete;

  /// @brief Field m_Template, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TemplateContainer__UxmlTraits, ___m_Template) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TemplateContainer
// SizeInfo { instance_size: 984, native_size: -1, calculated_instance_size: 984, calculated_native_size: 984, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TemplateContainer*
class CORDL_TYPE TemplateContainer : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits;

  /// @brief Field <templateId>k__BackingField, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get__templateId_k__BackingField, put = __cordl_internal_set__templateId_k__BackingField))::StringW _templateId_k__BackingField;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_ContentContainer, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer))::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_TemplateSource, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateSource, put = __cordl_internal_set_m_TemplateSource))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_TemplateSource;

  __declspec(property(get = get_templateId, put = set_templateId))::StringW templateId;

  __declspec(property(put = set_templateSource))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> templateSource;

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor();

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor(::StringW templateId);

  /// @brief Method SetContentContainer, addr 0x2a36ee0, size 0x8, virtual false, abstract: false, final false
  inline void SetContentContainer(::UnityEngine::UIElements::VisualElement* content);

  constexpr ::StringW const& __cordl_internal_get__templateId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__templateId_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_TemplateSource() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_TemplateSource();

  constexpr void __cordl_internal_set__templateId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_TemplateSource(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x2a36e3c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a36e58, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW templateId);

  /// @brief Method get_contentContainer, addr 0x2a36ed8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_templateId, addr 0x2a36e24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_templateId();

  /// @brief Method set_templateId, addr 0x2a36e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_templateId(::StringW value);

  /// @brief Method set_templateSource, addr 0x2a36e34, size 0x8, virtual false, abstract: false, final false
  inline void set_templateSource(::UnityEngine::UIElements::VisualTreeAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateContainer(TemplateContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateContainer(TemplateContainer const&) = delete;

  /// @brief Field <templateId>k__BackingField, offset: 0x3c0, size: 0x8, def value: None
  ::StringW ____templateId_k__BackingField;

  /// @brief Field m_ContentContainer, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_TemplateSource, offset: 0x3d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_TemplateSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer, 0x3d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ____templateId_k__BackingField) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_ContentContainer) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_TemplateSource) == 0x3d0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TemplateContainer::UxmlFactory*
class CORDL_TYPE __TemplateContainer__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TemplateContainer*, ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  static inline ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2a36f9c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uxmlName, addr 0x2a36ee8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x2a36f28, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TemplateContainer__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TemplateContainer__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TemplateContainer__UxmlFactory(__TemplateContainer__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TemplateContainer__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TemplateContainer__UxmlFactory(__TemplateContainer__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer*, "UnityEngine.UIElements", "TemplateContainer");
NEED_NO_BOX(::UnityEngine::UIElements::__TemplateContainer__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*, "UnityEngine.UIElements", "TemplateContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TemplateContainer__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*, "UnityEngine.UIElements", "TemplateContainer/UxmlTraits");
