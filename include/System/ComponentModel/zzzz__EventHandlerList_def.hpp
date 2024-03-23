#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventHandlerList)
namespace System::ComponentModel {
class Component;
}
namespace System::ComponentModel {
class __EventHandlerList__ListEntry;
}
namespace System {
class Delegate;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System::ComponentModel {
class __EventHandlerList__ListEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventHandlerList);
MARK_REF_PTR_T(::System::ComponentModel::__EventHandlerList__ListEntry);
// Type: ::ListEntry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::EventHandlerList::ListEntry*
class CORDL_TYPE __EventHandlerList__ListEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _handler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::System::Delegate* _handler;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Object* _key;

  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::System::ComponentModel::__EventHandlerList__ListEntry* _next;

  static inline ::System::ComponentModel::__EventHandlerList__ListEntry* New_ctor(::System::Object* key, ::System::Delegate* handler, ::System::ComponentModel::__EventHandlerList__ListEntry* next);

  constexpr ::System::Delegate*& __cordl_internal_get__handler();

  constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> const& __cordl_internal_get__handler() const;

  constexpr ::System::Object*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__key() const;

  constexpr ::System::ComponentModel::__EventHandlerList__ListEntry*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> const& __cordl_internal_get__next() const;

  constexpr void __cordl_internal_set__handler(::System::Delegate* value);

  constexpr void __cordl_internal_set__key(::System::Object* value);

  constexpr void __cordl_internal_set__next(::System::ComponentModel::__EventHandlerList__ListEntry* value);

  /// @brief Method .ctor, addr 0x1ae8110, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Delegate* handler, ::System::ComponentModel::__EventHandlerList__ListEntry* next);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventHandlerList__ListEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventHandlerList__ListEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventHandlerList__ListEntry(__EventHandlerList__ListEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventHandlerList__ListEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventHandlerList__ListEntry(__EventHandlerList__ListEntry const&) = delete;

  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__EventHandlerList__ListEntry* ____next;

  /// @brief Field _key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____key;

  /// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
  ::System::Delegate* ____handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__EventHandlerList__ListEntry, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____handler) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::EventHandlerList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::EventHandlerList*
class CORDL_TYPE EventHandlerList : public ::System::Object {
public:
  // Declarations
  using ListEntry = ::System::ComponentModel::__EventHandlerList__ListEntry;

  __declspec(property(get = get_Item, put = set_Item))::System::Delegate* Item[];

  /// @brief Field _head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head))::System::ComponentModel::__EventHandlerList__ListEntry* _head;

  /// @brief Field _parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::System::ComponentModel::Component* _parent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddHandler, addr 0x1ae814c, size 0xb0, virtual false, abstract: false, final false
  inline void AddHandler(::System::Object* key, ::System::Delegate* value);

  /// @brief Method AddHandlers, addr 0x1ae81fc, size 0x3c, virtual false, abstract: false, final false
  inline void AddHandlers(::System::ComponentModel::EventHandlerList* listToAddFrom);

  /// @brief Method Dispose, addr 0x1ae8238, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Find, addr 0x1ae8058, size 0x18, virtual false, abstract: false, final false
  inline ::System::ComponentModel::__EventHandlerList__ListEntry* Find(::System::Object* key);

  static inline ::System::ComponentModel::EventHandlerList* New_ctor();

  static inline ::System::ComponentModel::EventHandlerList* New_ctor(::System::ComponentModel::Component* parent);

  /// @brief Method RemoveHandler, addr 0x1ae8240, size 0x40, virtual false, abstract: false, final false
  inline void RemoveHandler(::System::Object* key, ::System::Delegate* value);

  constexpr ::System::ComponentModel::__EventHandlerList__ListEntry*& __cordl_internal_get__head();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> const& __cordl_internal_get__head() const;

  constexpr ::System::ComponentModel::Component*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Component*> const& __cordl_internal_get__parent() const;

  constexpr void __cordl_internal_set__head(::System::ComponentModel::__EventHandlerList__ListEntry* value);

  constexpr void __cordl_internal_set__parent(::System::ComponentModel::Component* value);

  /// @brief Method .ctor, addr 0x1ae7ff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ae7fc8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Component* parent);

  /// @brief Method get_Item, addr 0x1ae7ff8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Delegate* get_Item(::System::Object* key);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Item, addr 0x1ae8070, size 0xa0, virtual false, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Delegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandlerList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventHandlerList(EventHandlerList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventHandlerList(EventHandlerList const&) = delete;

  /// @brief Field _head, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__EventHandlerList__ListEntry* ____head;

  /// @brief Field _parent, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::Component* ____parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventHandlerList, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____parent) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventHandlerList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventHandlerList*, "System.ComponentModel", "EventHandlerList");
NEED_NO_BOX(::System::ComponentModel::__EventHandlerList__ListEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__EventHandlerList__ListEntry*, "System.ComponentModel", "EventHandlerList/ListEntry");
