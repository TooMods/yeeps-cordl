#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Component)
namespace System::ComponentModel {
class EventHandlerList;
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
namespace System {
class EventHandler;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class Component;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Component);
// Type: System.ComponentModel::Component
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::Component*
class CORDL_TYPE Component : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_CanRaiseEvents)) bool CanRaiseEvents;

  __declspec(property(get = get_CanRaiseEventsInternal)) bool CanRaiseEventsInternal;

  __declspec(property(get = get_Container))::System::ComponentModel::IContainer* Container;

  __declspec(property(get = get_DesignMode)) bool DesignMode;

  /// @brief Field EventDisposed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EventDisposed, put = setStaticF_EventDisposed))::System::Object* EventDisposed;

  __declspec(property(get = get_Events))::System::ComponentModel::EventHandlerList* Events;

  __declspec(property(get = get_Site, put = set_Site))::System::ComponentModel::ISite* Site;

  /// @brief Field events, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_events, put = __cordl_internal_set_events))::System::ComponentModel::EventHandlerList* events;

  /// @brief Field site, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_site, put = __cordl_internal_set_site))::System::ComponentModel::ISite* site;

  /// @brief Convert operator to "::System::ComponentModel::IComponent"
  constexpr operator ::System::ComponentModel::IComponent*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x1b1157c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1b115ec, size 0x30c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x1b1132c, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetService, addr 0x1b119a8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::Component* New_ctor();

  /// @brief Method ToString, addr 0x1b11b0c, size 0x130, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::ComponentModel::EventHandlerList*& __cordl_internal_get_events();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::EventHandlerList*> const& __cordl_internal_get_events() const;

  constexpr ::System::ComponentModel::ISite*& __cordl_internal_get_site();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISite*> const& __cordl_internal_get_site() const;

  constexpr void __cordl_internal_set_events(::System::ComponentModel::EventHandlerList* value);

  constexpr void __cordl_internal_set_site(::System::ComponentModel::ISite* value);

  /// @brief Method .ctor, addr 0x1b11c3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Disposed, addr 0x1b113e4, size 0x8c, virtual true, abstract: false, final true
  inline void add_Disposed(::System::EventHandler* value);

  static inline ::System::Object* getStaticF_EventDisposed();

  /// @brief Method get_CanRaiseEvents, addr 0x1b113d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRaiseEvents();

  /// @brief Method get_CanRaiseEventsInternal, addr 0x1b113d8, size 0xc, virtual false, abstract: false, final false
  inline bool get_CanRaiseEventsInternal();

  /// @brief Method get_Container, addr 0x1b118f8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Method get_DesignMode, addr 0x1b11a5c, size 0xb0, virtual false, abstract: false, final false
  inline bool get_DesignMode();

  /// @brief Method get_Events, addr 0x1b11470, size 0x70, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventHandlerList* get_Events();

  /// @brief Method get_Site, addr 0x1b1156c, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Convert to "::System::ComponentModel::IComponent"
  constexpr ::System::ComponentModel::IComponent* i___System__ComponentModel__IComponent() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_Disposed, addr 0x1b114e0, size 0x8c, virtual true, abstract: false, final true
  inline void remove_Disposed(::System::EventHandler* value);

  static inline void setStaticF_EventDisposed(::System::Object* value);

  /// @brief Method set_Site, addr 0x1b11574, size 0x8, virtual true, abstract: false, final false
  inline void set_Site(::System::ComponentModel::ISite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Component();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Component(Component&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Component(Component const&) = delete;

  /// @brief Field site, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ISite* ___site;

  /// @brief Field events, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::EventHandlerList* ___events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Component, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Component, ___site) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Component, ___events) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Component);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Component*, "System.ComponentModel", "Component");
