#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Container)
namespace System::ComponentModel {
class ComponentCollection;
}
namespace System::ComponentModel {
class ContainerFilterService;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class IContainer;
}
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class __Container__Site;
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
class Container;
}
namespace System::ComponentModel {
class __Container__Site;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Container);
MARK_REF_PTR_T(::System::ComponentModel::__Container__Site);
// Type: ::Site
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::Container::Site*
class CORDL_TYPE __Container__Site : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Component))::System::ComponentModel::IComponent* Component;

  __declspec(property(get = get_Container))::System::ComponentModel::IContainer* Container;

  __declspec(property(get = get_DesignMode)) bool DesignMode;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field component, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_component, put = __cordl_internal_set_component))::System::ComponentModel::IComponent* component;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::System::ComponentModel::Container* container;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Convert operator to "::System::ComponentModel::ISite"
  constexpr operator ::System::ComponentModel::ISite*() noexcept;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method GetService, addr 0x1b12e0c, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::__Container__Site* New_ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::Container* container, ::StringW name);

  constexpr ::System::ComponentModel::IComponent*& __cordl_internal_get_component();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComponent*> const& __cordl_internal_get_component() const;

  constexpr ::System::ComponentModel::Container*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Container*> const& __cordl_internal_get_container() const;

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_component(::System::ComponentModel::IComponent* value);

  constexpr void __cordl_internal_set_container(::System::ComponentModel::Container* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x1b12318, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::Container* container, ::StringW name);

  /// @brief Method get_Component, addr 0x1b12dfc, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::IComponent* get_Component();

  /// @brief Method get_Container, addr 0x1b12e04, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Method get_DesignMode, addr 0x1b12ed0, size 0x8, virtual true, abstract: false, final true
  inline bool get_DesignMode();

  /// @brief Method get_Name, addr 0x1b12ed8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Convert to "::System::ComponentModel::ISite"
  constexpr ::System::ComponentModel::ISite* i___System__ComponentModel__ISite() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  /// @brief Method set_Name, addr 0x1b12ee0, size 0x60, virtual true, abstract: false, final true
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Container__Site();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Container__Site", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Container__Site(__Container__Site&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Container__Site", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Container__Site(__Container__Site const&) = delete;

  /// @brief Field component, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::IComponent* ___component;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::Container* ___container;

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__Container__Site, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__Container__Site, ___component) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__Container__Site, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__Container__Site, ___name) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::Container
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::Container*
class CORDL_TYPE Container : public ::System::Object {
public:
  // Declarations
  using Site = ::System::ComponentModel::__Container__Site;

  __declspec(property(get = get_Components))::System::ComponentModel::ComponentCollection* Components;

  /// @brief Field checkedFilter, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_checkedFilter, put = __cordl_internal_set_checkedFilter)) bool checkedFilter;

  /// @brief Field components, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_components, put = __cordl_internal_set_components))::System::ComponentModel::ComponentCollection* components;

  /// @brief Field filter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_filter, put = __cordl_internal_set_filter))::System::ComponentModel::ContainerFilterService* filter;

  /// @brief Field siteCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_siteCount, put = __cordl_internal_set_siteCount)) int32_t siteCount;

  /// @brief Field sites, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sites, put = __cordl_internal_set_sites))::ArrayW<::System::ComponentModel::ISite*, ::Array<::System::ComponentModel::ISite*>*> sites;

  /// @brief Field syncObj, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_syncObj, put = __cordl_internal_set_syncObj))::System::Object* syncObj;

  /// @brief Convert operator to "::System::ComponentModel::IContainer"
  constexpr operator ::System::ComponentModel::IContainer*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x1b11e38, size 0x10, virtual true, abstract: false, final false
  inline void Add(::System::ComponentModel::IComponent* component);

  /// @brief Method Add, addr 0x1b11e48, size 0x458, virtual true, abstract: false, final false
  inline void Add(::System::ComponentModel::IComponent* component, ::StringW name);

  /// @brief Method CreateSite, addr 0x1b122a0, size 0x78, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* component, ::StringW name);

  /// @brief Method Dispose, addr 0x1b03b68, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1b03718, size 0x304, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x1b11d98, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetService, addr 0x1b03acc, size 0x98, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::Container* New_ctor();

  /// @brief Method Remove, addr 0x1b126d8, size 0x8, virtual true, abstract: false, final false
  inline void Remove(::System::ComponentModel::IComponent* component);

  /// @brief Method Remove, addr 0x1b126e0, size 0x2e4, virtual false, abstract: false, final false
  inline void Remove(::System::ComponentModel::IComponent* component, bool preserveSite);

  /// @brief Method RemoveWithoutUnsiting, addr 0x1b129c4, size 0x8, virtual false, abstract: false, final false
  inline void RemoveWithoutUnsiting(::System::ComponentModel::IComponent* component);

  /// @brief Method ValidateName, addr 0x1b129cc, size 0x430, virtual true, abstract: false, final false
  inline void ValidateName(::System::ComponentModel::IComponent* component, ::StringW name);

  constexpr bool const& __cordl_internal_get_checkedFilter() const;

  constexpr bool& __cordl_internal_get_checkedFilter();

  constexpr ::System::ComponentModel::ComponentCollection*& __cordl_internal_get_components();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ComponentCollection*> const& __cordl_internal_get_components() const;

  constexpr ::System::ComponentModel::ContainerFilterService*& __cordl_internal_get_filter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ContainerFilterService*> const& __cordl_internal_get_filter() const;

  constexpr int32_t const& __cordl_internal_get_siteCount() const;

  constexpr int32_t& __cordl_internal_get_siteCount();

  constexpr ::ArrayW<::System::ComponentModel::ISite*, ::Array<::System::ComponentModel::ISite*>*> const& __cordl_internal_get_sites() const;

  constexpr ::ArrayW<::System::ComponentModel::ISite*, ::Array<::System::ComponentModel::ISite*>*>& __cordl_internal_get_sites();

  constexpr ::System::Object*& __cordl_internal_get_syncObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_syncObj() const;

  constexpr void __cordl_internal_set_checkedFilter(bool value);

  constexpr void __cordl_internal_set_components(::System::ComponentModel::ComponentCollection* value);

  constexpr void __cordl_internal_set_filter(::System::ComponentModel::ContainerFilterService* value);

  constexpr void __cordl_internal_set_siteCount(int32_t value);

  constexpr void __cordl_internal_set_sites(::ArrayW<::System::ComponentModel::ISite*, ::Array<::System::ComponentModel::ISite*>*> value);

  constexpr void __cordl_internal_set_syncObj(::System::Object* value);

  /// @brief Method .ctor, addr 0x1b03224, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Components, addr 0x1b12354, size 0x384, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ComponentCollection* get_Components();

  /// @brief Convert to "::System::ComponentModel::IContainer"
  constexpr ::System::ComponentModel::IContainer* i___System__ComponentModel__IContainer() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Container();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Container", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Container(Container&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Container", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Container(Container const&) = delete;

  /// @brief Field sites, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::ISite*, ::Array<::System::ComponentModel::ISite*>*> ___sites;

  /// @brief Field siteCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___siteCount;

  /// @brief Field components, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::ComponentCollection* ___components;

  /// @brief Field filter, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::ContainerFilterService* ___filter;

  /// @brief Field checkedFilter, offset: 0x30, size: 0x1, def value: None
  bool ___checkedFilter;

  /// @brief Field syncObj, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___syncObj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Container, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___sites) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___siteCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___components) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___checkedFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___syncObj) == 0x38, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Container);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Container*, "System.ComponentModel", "Container");
NEED_NO_BOX(::System::ComponentModel::__Container__Site);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__Container__Site*, "System.ComponentModel", "Container/Site");
