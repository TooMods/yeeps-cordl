#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEditorConnectionEvents)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass8_0;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0);
// Type: ::MessageEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::MessageEvent*
class CORDL_TYPE __PlayerEditorConnectionEvents__MessageEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2a88f00, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__MessageEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__MessageEvent(__PlayerEditorConnectionEvents__MessageEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__MessageEvent(__PlayerEditorConnectionEvents__MessageEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::ConnectionChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::ConnectionChangeEvent*
class CORDL_TYPE __PlayerEditorConnectionEvents__ConnectionChangeEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2a8917c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__ConnectionChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__ConnectionChangeEvent(__PlayerEditorConnectionEvents__ConnectionChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__ConnectionChangeEvent(__PlayerEditorConnectionEvents__ConnectionChangeEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::MessageTypeSubscribers
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::MessageTypeSubscribers*
class CORDL_TYPE __PlayerEditorConnectionEvents__MessageTypeSubscribers : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MessageTypeId, put = set_MessageTypeId))::System::Guid MessageTypeId;

  /// @brief Field m_messageTypeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_messageTypeId, put = __cordl_internal_set_m_messageTypeId))::StringW m_messageTypeId;

  /// @brief Field messageCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_messageCallback,
                      put = __cordl_internal_set_messageCallback))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* messageCallback;

  /// @brief Field subscriberCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_subscriberCount, put = __cordl_internal_set_subscriberCount)) int32_t subscriberCount;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_messageTypeId() const;

  constexpr ::StringW& __cordl_internal_get_m_messageTypeId();

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*& __cordl_internal_get_messageCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*> const& __cordl_internal_get_messageCallback() const;

  constexpr int32_t const& __cordl_internal_get_subscriberCount() const;

  constexpr int32_t& __cordl_internal_get_subscriberCount();

  constexpr void __cordl_internal_set_m_messageTypeId(::StringW value);

  constexpr void __cordl_internal_set_messageCallback(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* value);

  constexpr void __cordl_internal_set_subscriberCount(int32_t value);

  /// @brief Method .ctor, addr 0x2a88e6c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MessageTypeId, addr 0x2a891c4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Guid get_MessageTypeId();

  /// @brief Method set_MessageTypeId, addr 0x2a88ed4, size 0x2c, virtual false, abstract: false, final false
  inline void set_MessageTypeId(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents__MessageTypeSubscribers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents__MessageTypeSubscribers(__PlayerEditorConnectionEvents__MessageTypeSubscribers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents__MessageTypeSubscribers(__PlayerEditorConnectionEvents__MessageTypeSubscribers const&) = delete;

  /// @brief Field m_messageTypeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_messageTypeId;

  /// @brief Field subscriberCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___subscriberCount;

  /// @brief Field messageCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers, ___m_messageTypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers, ___subscriberCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers, ___messageCallback) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass6_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId))::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0* New_ctor();

  /// @brief Method <InvokeMessageIdSubscribers>b__0, addr 0x2a891f0, size 0x48, virtual false, abstract: false, final false
  inline bool _InvokeMessageIdSubscribers_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x2a88c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass6_0(__PlayerEditorConnectionEvents____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass6_0(__PlayerEditorConnectionEvents____c__DisplayClass6_0 const&) = delete;

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0, ___messageId) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass7_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId))::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0* New_ctor();

  /// @brief Method <AddAndCreate>b__0, addr 0x2a89238, size 0x48, virtual false, abstract: false, final false
  inline bool _AddAndCreate_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x2a88e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass7_0(__PlayerEditorConnectionEvents____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass7_0(__PlayerEditorConnectionEvents____c__DisplayClass7_0 const&) = delete;

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0, ___messageId) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::PlayerEditorConnectionEvents::<>c__DisplayClass8_0*
class CORDL_TYPE __PlayerEditorConnectionEvents____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_messageId, put = __cordl_internal_set_messageId))::System::Guid messageId;

  static inline ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0* New_ctor();

  /// @brief Method <UnregisterManagedCallback>b__0, addr 0x2a89280, size 0x48, virtual false, abstract: false, final false
  inline bool _UnregisterManagedCallback_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers* x);

  constexpr ::System::Guid const& __cordl_internal_get_messageId() const;

  constexpr ::System::Guid& __cordl_internal_get_messageId();

  constexpr void __cordl_internal_set_messageId(::System::Guid value);

  /// @brief Method .ctor, addr 0x2a890b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerEditorConnectionEvents____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerEditorConnectionEvents____c__DisplayClass8_0(__PlayerEditorConnectionEvents____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerEditorConnectionEvents____c__DisplayClass8_0(__PlayerEditorConnectionEvents____c__DisplayClass8_0 const&) = delete;

  /// @brief Field messageId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___messageId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0, ___messageId) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerEditorConnectionEvents
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: ::UnityEngine.Networking.PlayerConnection::PlayerEditorConnectionEvents*
class CORDL_TYPE PlayerEditorConnectionEvents : public ::System::Object {
public:
  // Declarations
  using ConnectionChangeEvent = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent;

  using MessageEvent = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent;

  using MessageTypeSubscribers = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers;

  using __c__DisplayClass6_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0;

  /// @brief Field connectionEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionEvent,
                      put = __cordl_internal_set_connectionEvent))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* connectionEvent;

  /// @brief Field disconnectionEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectionEvent,
                      put = __cordl_internal_set_disconnectionEvent))::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* disconnectionEvent;

  /// @brief Field messageTypeSubscribers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTypeSubscribers, put = __cordl_internal_set_messageTypeSubscribers))::System::Collections::Generic::List_1<
      ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* messageTypeSubscribers;

  /// @brief Method AddAndCreate, addr 0x2a88c84, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(::System::Guid messageId);

  /// @brief Method InvokeMessageIdSubscribers, addr 0x2a887d0, size 0x4a4, virtual false, abstract: false, final false
  inline void InvokeMessageIdSubscribers(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  static inline ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* New_ctor();

  /// @brief Method UnregisterManagedCallback, addr 0x2a88f48, size 0x16c, virtual false, abstract: false, final false
  inline void UnregisterManagedCallback(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*& __cordl_internal_get_connectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*> const&
  __cordl_internal_get_connectionEvent() const;

  constexpr ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*& __cordl_internal_get_disconnectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*> const&
  __cordl_internal_get_disconnectionEvent() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>*&
  __cordl_internal_get_messageTypeSubscribers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>*> const&
  __cordl_internal_get_messageTypeSubscribers() const;

  constexpr void __cordl_internal_set_connectionEvent(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* value);

  constexpr void __cordl_internal_set_disconnectionEvent(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* value);

  constexpr void
  __cordl_internal_set_messageTypeSubscribers(::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* value);

  /// @brief Method .ctor, addr 0x2a890bc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEditorConnectionEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEditorConnectionEvents(PlayerEditorConnectionEvents const&) = delete;

  /// @brief Field messageTypeSubscribers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*>* ___messageTypeSubscribers;

  /// @brief Field connectionEvent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* ___connectionEvent;

  /// @brief Field disconnectionEvent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent* ___disconnectionEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___messageTypeSubscribers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___connectionEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, ___disconnectionEvent) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__ConnectionChangeEvent*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/ConnectionChangeEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageEvent*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/MessageEvent");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/MessageTypeSubscribers");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass6_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass6_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass7_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents____c__DisplayClass8_0*, "UnityEngine.Networking.PlayerConnection",
                       "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
