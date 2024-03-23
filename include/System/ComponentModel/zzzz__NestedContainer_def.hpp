#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Container_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NestedContainer)
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class IContainer;
}
namespace System::ComponentModel {
class INestedContainer;
}
namespace System::ComponentModel {
class INestedSite;
}
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class __NestedContainer__Site;
}
namespace System {
class EventArgs;
}
namespace System {
class IDisposable;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class NestedContainer;
}
namespace System::ComponentModel {
class __NestedContainer__Site;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NestedContainer);
MARK_REF_PTR_T(::System::ComponentModel::__NestedContainer__Site);
// Type: ::Site
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::NestedContainer::Site*
class CORDL_TYPE __NestedContainer__Site : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Component))::System::ComponentModel::IComponent* Component;

  __declspec(property(get = get_Container))::System::ComponentModel::IContainer* Container;

  __declspec(property(get = get_DesignMode)) bool DesignMode;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field <Component>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Component_k__BackingField, put = __cordl_internal_set__Component_k__BackingField))::System::ComponentModel::IComponent* _Component_k__BackingField;

  /// @brief Field <Container>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Container_k__BackingField, put = __cordl_internal_set__Container_k__BackingField))::System::ComponentModel::IContainer* _Container_k__BackingField;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Convert operator to "::System::ComponentModel::INestedSite"
  constexpr operator ::System::ComponentModel::INestedSite*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ISite"
  constexpr operator ::System::ComponentModel::ISite*() noexcept;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method GetService, addr 0x1b03be4, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::__NestedContainer__Site* New_ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::NestedContainer* container, ::StringW name);

  constexpr ::System::ComponentModel::IComponent*& __cordl_internal_get__Component_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComponent*> const& __cordl_internal_get__Component_k__BackingField() const;

  constexpr ::System::ComponentModel::IContainer*& __cordl_internal_get__Container_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IContainer*> const& __cordl_internal_get__Container_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__Component_k__BackingField(::System::ComponentModel::IComponent* value);

  constexpr void __cordl_internal_set__Container_k__BackingField(::System::ComponentModel::IContainer* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x1b035d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::NestedContainer* container, ::StringW name);

  /// @brief Method get_Component, addr 0x1b03bd4, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::IComponent* get_Component();

  /// @brief Method get_Container, addr 0x1b03bdc, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Method get_DesignMode, addr 0x1b03d10, size 0x1d0, virtual true, abstract: false, final true
  inline bool get_DesignMode();

  /// @brief Method get_FullName, addr 0x1b03ee0, size 0x128, virtual true, abstract: false, final true
  inline ::StringW get_FullName();

  /// @brief Method get_Name, addr 0x1b04008, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Convert to "::System::ComponentModel::INestedSite"
  constexpr ::System::ComponentModel::INestedSite* i___System__ComponentModel__INestedSite() noexcept;

  /// @brief Convert to "::System::ComponentModel::ISite"
  constexpr ::System::ComponentModel::ISite* i___System__ComponentModel__ISite() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  /// @brief Method set_Name, addr 0x1b04010, size 0xdc, virtual true, abstract: false, final true
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NestedContainer__Site();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NestedContainer__Site", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NestedContainer__Site(__NestedContainer__Site&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NestedContainer__Site", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NestedContainer__Site(__NestedContainer__Site const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field <Component>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::IComponent* ____Component_k__BackingField;

  /// @brief Field <Container>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::IContainer* ____Container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__NestedContainer__Site, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__NestedContainer__Site, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__NestedContainer__Site, ____Component_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__NestedContainer__Site, ____Container_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::NestedContainer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::NestedContainer*
class CORDL_TYPE NestedContainer : public ::System::ComponentModel::Container {
public:
  // Declarations
  using Site = ::System::ComponentModel::__NestedContainer__Site;

  __declspec(property(get = get_Owner))::System::ComponentModel::IComponent* Owner;

  __declspec(property(get = get_OwnerName))::StringW OwnerName;

  /// @brief Field <Owner>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Owner_k__BackingField, put = __cordl_internal_set__Owner_k__BackingField))::System::ComponentModel::IComponent* _Owner_k__BackingField;

  /// @brief Convert operator to "::System::ComponentModel::IContainer"
  constexpr operator ::System::ComponentModel::IContainer*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INestedContainer"
  constexpr operator ::System::ComponentModel::INestedContainer*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateSite, addr 0x1b03508, size 0xc8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* component, ::StringW name);

  /// @brief Method Dispose, addr 0x1b0360c, size 0x10c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetService, addr 0x1b03a1c, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::NestedContainer* New_ctor(::System::ComponentModel::IComponent* owner);

  /// @brief Method OnOwnerDisposed, addr 0x1b03b64, size 0x4, virtual false, abstract: false, final false
  inline void OnOwnerDisposed(::System::Object* sender, ::System::EventArgs* e);

  constexpr ::System::ComponentModel::IComponent*& __cordl_internal_get__Owner_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComponent*> const& __cordl_internal_get__Owner_k__BackingField() const;

  constexpr void __cordl_internal_set__Owner_k__BackingField(::System::ComponentModel::IComponent* value);

  /// @brief Method .ctor, addr 0x1b030d4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::IComponent* owner);

  /// @brief Method get_Owner, addr 0x1b0328c, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::IComponent* get_Owner();

  /// @brief Method get_OwnerName, addr 0x1b03294, size 0x274, virtual true, abstract: false, final false
  inline ::StringW get_OwnerName();

  /// @brief Convert to "::System::ComponentModel::IContainer"
  constexpr ::System::ComponentModel::IContainer* i___System__ComponentModel__IContainer() noexcept;

  /// @brief Convert to "::System::ComponentModel::INestedContainer"
  constexpr ::System::ComponentModel::INestedContainer* i___System__ComponentModel__INestedContainer() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NestedContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NestedContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NestedContainer(NestedContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NestedContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NestedContainer(NestedContainer const&) = delete;

  /// @brief Field <Owner>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::ComponentModel::IComponent* ____Owner_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NestedContainer, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::NestedContainer, ____Owner_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NestedContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NestedContainer*, "System.ComponentModel", "NestedContainer");
NEED_NO_BOX(::System::ComponentModel::__NestedContainer__Site);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__NestedContainer__Site*, "System.ComponentModel", "NestedContainer/Site");
