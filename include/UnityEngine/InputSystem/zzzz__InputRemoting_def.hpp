#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting)
namespace GlobalNamespace {
struct __InputRemoting__ChangeUsageMsg__Data;
}
namespace GlobalNamespace {
class __InputRemoting__ChangeUsageMsg____c;
}
namespace GlobalNamespace {
struct __InputRemoting__NewDeviceMsg__Data;
}
namespace GlobalNamespace {
class __InputRemoting__NewDeviceMsg____c;
}
namespace GlobalNamespace {
struct __InputRemoting__NewLayoutMsg__Data;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ConnectMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__DisconnectMsg;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Flags;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteSender;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__Subscriber;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputRemoting__Flags;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace GlobalNamespace {
class __InputRemoting__ChangeUsageMsg____c;
}
namespace GlobalNamespace {
class __InputRemoting__NewDeviceMsg____c;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ConnectMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__Subscriber;
}
namespace GlobalNamespace {
struct __InputRemoting__ChangeUsageMsg__Data;
}
namespace GlobalNamespace {
struct __InputRemoting__NewDeviceMsg__Data;
}
namespace GlobalNamespace {
struct __InputRemoting__NewLayoutMsg__Data;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteSender;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__Subscriber);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__Message);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__RemoteSender);
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputRemoting::MessageType
struct CORDL_TYPE __InputRemoting__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputRemoting__MessageType_Unwrapped
  enum struct ____InputRemoting__MessageType_Unwrapped : int32_t {
    __E_Connect = static_cast<int32_t>(0x0),
    __E_Disconnect = static_cast<int32_t>(0x1),
    __E_NewLayout = static_cast<int32_t>(0x2),
    __E_NewDevice = static_cast<int32_t>(0x3),
    __E_NewEvents = static_cast<int32_t>(0x4),
    __E_RemoveDevice = static_cast<int32_t>(0x5),
    __E_RemoveLayout = static_cast<int32_t>(0x6),
    __E_ChangeUsages = static_cast<int32_t>(0x7),
    __E_StartSending = static_cast<int32_t>(0x8),
    __E_StopSending = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputRemoting__MessageType_Unwrapped() const noexcept {
    return static_cast<____InputRemoting__MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputRemoting__MessageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ChangeUsages value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const ChangeUsages;

  /// @brief Field Connect value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const Connect;

  /// @brief Field Disconnect value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const Disconnect;

  /// @brief Field NewDevice value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewDevice;

  /// @brief Field NewEvents value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewEvents;

  /// @brief Field NewLayout value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewLayout;

  /// @brief Field RemoveDevice value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const RemoveDevice;

  /// @brief Field RemoveLayout value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const RemoveLayout;

  /// @brief Field StartSending value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const StartSending;

  /// @brief Field StopSending value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::__InputRemoting__MessageType const StopSending;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__MessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Message
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputRemoting::Message
struct CORDL_TYPE __InputRemoting__Message {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__Message();

  // Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::InputSystem::__InputRemoting__MessageType",
  // modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr __InputRemoting__Message(int32_t participantId, ::UnityEngine::InputSystem::__InputRemoting__MessageType type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept;

  /// @brief Field participantId, offset: 0x0, size: 0x4, def value: None
  int32_t participantId;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputRemoting__MessageType type;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Message, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Message, participantId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Message, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Message, data) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputRemoting::Flags
struct CORDL_TYPE __InputRemoting__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputRemoting__Flags_Unwrapped
  enum struct ____InputRemoting__Flags_Unwrapped : int32_t {
    __E_Sending = static_cast<int32_t>(0x1),
    __E_StartSendingOnConnect = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputRemoting__Flags_Unwrapped() const noexcept {
    return static_cast<____InputRemoting__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputRemoting__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Sending value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputRemoting__Flags const Sending;

  /// @brief Field StartSendingOnConnect value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputRemoting__Flags const StartSendingOnConnect;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::RemoteSender
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputRemoting::RemoteSender
struct CORDL_TYPE __InputRemoting__RemoteSender {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__RemoteSender();

  // Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layouts", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }, CppParam { name: "devices",
  // ty: "::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>", modifiers: "", def_value: None }]
  constexpr __InputRemoting__RemoteSender(
      int32_t senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts,
      ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*> devices) noexcept;

  /// @brief Field senderId, offset: 0x0, size: 0x4, def value: None
  int32_t senderId;

  /// @brief Field layouts, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts;

  /// @brief Field devices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*> devices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteSender, senderId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteSender, layouts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteSender, devices) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::RemoteInputDevice
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputRemoting::RemoteInputDevice
struct CORDL_TYPE __InputRemoting__RemoteInputDevice {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__RemoteInputDevice();

  // Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
  constexpr __InputRemoting__RemoteInputDevice(int32_t remoteId, int32_t localId, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;

  /// @brief Field remoteId, offset: 0x0, size: 0x4, def value: None
  int32_t remoteId;

  /// @brief Field localId, offset: 0x4, size: 0x4, def value: None
  int32_t localId;

  /// @brief Field description, offset: 0x8, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, remoteId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, localId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, description) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Subscriber
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::Subscriber*
class CORDL_TYPE __InputRemoting__Subscriber : public ::System::Object {
public:
  // Declarations
  /// @brief Field observer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_observer, put = __cordl_internal_set_observer))::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* observer;

  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner))::UnityEngine::InputSystem::InputRemoting* owner;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x1c6fddc, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::__InputRemoting__Subscriber* New_ctor();

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*& __cordl_internal_get_observer();

  constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> const& __cordl_internal_get_observer() const;

  constexpr ::UnityEngine::InputSystem::InputRemoting*& __cordl_internal_get_owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputRemoting*> const& __cordl_internal_get_owner() const;

  constexpr void __cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* value);

  constexpr void __cordl_internal_set_owner(::UnityEngine::InputSystem::InputRemoting* value);

  /// @brief Method .ctor, addr 0x1c6e5e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__Subscriber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__Subscriber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__Subscriber(__InputRemoting__Subscriber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__Subscriber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__Subscriber(__InputRemoting__Subscriber const&) = delete;

  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputRemoting* ___owner;

  /// @brief Field observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* ___observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Subscriber, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Subscriber, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputRemoting__Subscriber, ___observer) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ConnectMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::ConnectMsg*
class CORDL_TYPE __InputRemoting__ConnectMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x1c6d94c, size 0x44, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__ConnectMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ConnectMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__ConnectMsg(__InputRemoting__ConnectMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ConnectMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__ConnectMsg(__InputRemoting__ConnectMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__ConnectMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::StartSendingMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::StartSendingMsg*
class CORDL_TYPE __InputRemoting__StartSendingMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x1c6e4dc, size 0x10, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__StartSendingMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StartSendingMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__StartSendingMsg(__InputRemoting__StartSendingMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StartSendingMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__StartSendingMsg(__InputRemoting__StartSendingMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::StopSendingMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::StopSendingMsg*
class CORDL_TYPE __InputRemoting__StopSendingMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x1c6e4ec, size 0x10, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__StopSendingMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StopSendingMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__StopSendingMsg(__InputRemoting__StopSendingMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StopSendingMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__StopSendingMsg(__InputRemoting__StopSendingMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DisconnectMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::DisconnectMsg*
class CORDL_TYPE __InputRemoting__DisconnectMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x1c6d990, size 0x94, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__DisconnectMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__DisconnectMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__DisconnectMsg(__InputRemoting__DisconnectMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__DisconnectMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__DisconnectMsg(__InputRemoting__DisconnectMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Data
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputRemoting::NewLayoutMsg::Data
struct CORDL_TYPE __InputRemoting__NewLayoutMsg__Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewLayoutMsg__Data();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "isOverride", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputRemoting__NewLayoutMsg__Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field layoutJson, offset: 0x8, size: 0x8, def value: None
  ::StringW layoutJson;

  /// @brief Field isOverride, offset: 0x10, size: 0x1, def value: None
  bool isOverride;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, layoutJson) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, isOverride) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NewLayoutMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::NewLayoutMsg*
class CORDL_TYPE __InputRemoting__NewLayoutMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data;

  /// @brief Method Create, addr 0x1c6e960, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> Create(::UnityEngine::InputSystem::InputRemoting* sender, ::StringW layoutName);

  /// @brief Method Process, addr 0x1c6da24, size 0xf8, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewLayoutMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewLayoutMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__NewLayoutMsg(__InputRemoting__NewLayoutMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewLayoutMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__NewLayoutMsg(__InputRemoting__NewLayoutMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Data
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputRemoting::NewDeviceMsg::Data
struct CORDL_TYPE __InputRemoting__NewDeviceMsg__Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewDeviceMsg__Data();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
  constexpr __InputRemoting__NewDeviceMsg__Data(::StringW name, ::StringW layout, int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages,
                                                ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field layout, offset: 0x8, size: 0x8, def value: None
  ::StringW layout;

  /// @brief Field deviceId, offset: 0x10, size: 0x4, def value: None
  int32_t deviceId;

  /// @brief Field usages, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> usages;

  /// @brief Field description, offset: 0x20, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, deviceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, usages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, description) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputRemoting::NewDeviceMsg::<>c*
class CORDL_TYPE __InputRemoting__NewDeviceMsg____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__1_0;

  static inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* New_ctor();

  /// @brief Method <Create>b__1_0, addr 0x1c705e4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method .ctor, addr 0x1c705dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewDeviceMsg____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__NewDeviceMsg____c(__InputRemoting__NewDeviceMsg____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__NewDeviceMsg____c(__InputRemoting__NewDeviceMsg____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NewDeviceMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::NewDeviceMsg*
class CORDL_TYPE __InputRemoting__NewDeviceMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data;

  using __c = ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c;

  /// @brief Method Create, addr 0x1c6ed9c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x1c6db1c, size 0x530, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewDeviceMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__NewDeviceMsg(__InputRemoting__NewDeviceMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__NewDeviceMsg(__InputRemoting__NewDeviceMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::NewEventsMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::NewEventsMsg*
class CORDL_TYPE __InputRemoting__NewEventsMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x1c6f0f4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> events, int32_t eventCount);

  /// @brief Method CreateResetEvent, addr 0x1c6f4a0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device, bool isHardReset);

  /// @brief Method CreateStateEvent, addr 0x1c6ef94, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x1c6e04c, size 0xc0, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__NewEventsMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewEventsMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__NewEventsMsg(__InputRemoting__NewEventsMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewEventsMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__NewEventsMsg(__InputRemoting__NewEventsMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Data
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputRemoting::ChangeUsageMsg::Data
struct CORDL_TYPE __InputRemoting__ChangeUsageMsg__Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__ChangeUsageMsg__Data();

  // Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputRemoting__ChangeUsageMsg__Data(int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages) noexcept;

  /// @brief Field deviceId, offset: 0x0, size: 0x4, def value: None
  int32_t deviceId;

  /// @brief Field usages, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> usages;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, deviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, usages) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputRemoting::ChangeUsageMsg::<>c*
class CORDL_TYPE __InputRemoting__ChangeUsageMsg____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__1_0;

  static inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* New_ctor();

  /// @brief Method <Create>b__1_0, addr 0x1c707ac, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method .ctor, addr 0x1c707a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__ChangeUsageMsg____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__ChangeUsageMsg____c(__InputRemoting__ChangeUsageMsg____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__ChangeUsageMsg____c(__InputRemoting__ChangeUsageMsg____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ChangeUsageMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::ChangeUsageMsg*
class CORDL_TYPE __InputRemoting__ChangeUsageMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data;

  using __c = ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c;

  /// @brief Method Create, addr 0x1c6f2fc, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x1c6e10c, size 0x310, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__ChangeUsageMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__ChangeUsageMsg(__InputRemoting__ChangeUsageMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__ChangeUsageMsg(__InputRemoting__ChangeUsageMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::RemoveDeviceMsg
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputRemoting::RemoveDeviceMsg*
class CORDL_TYPE __InputRemoting__RemoveDeviceMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x1c6f28c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x1c6e41c, size 0xc0, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputRemoting__RemoveDeviceMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__RemoveDeviceMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputRemoting__RemoveDeviceMsg(__InputRemoting__RemoveDeviceMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__RemoveDeviceMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputRemoting__RemoveDeviceMsg(__InputRemoting__RemoveDeviceMsg const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputRemoting
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputRemoting*
class CORDL_TYPE InputRemoting : public ::System::Object {
public:
  // Declarations
  using ChangeUsageMsg = ::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg;

  using ConnectMsg = ::UnityEngine::InputSystem::__InputRemoting__ConnectMsg;

  using DisconnectMsg = ::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg;

  using Flags = ::UnityEngine::InputSystem::__InputRemoting__Flags;

  using Message = ::UnityEngine::InputSystem::__InputRemoting__Message;

  using MessageType = ::UnityEngine::InputSystem::__InputRemoting__MessageType;

  using NewDeviceMsg = ::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg;

  using NewEventsMsg = ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg;

  using NewLayoutMsg = ::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg;

  using RemoteInputDevice = ::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice;

  using RemoteSender = ::UnityEngine::InputSystem::__InputRemoting__RemoteSender;

  using RemoveDeviceMsg = ::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg;

  using StartSendingMsg = ::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg;

  using StopSendingMsg = ::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg;

  using Subscriber = ::UnityEngine::InputSystem::__InputRemoting__Subscriber;

  /// @brief Field m_Flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::UnityEngine::InputSystem::__InputRemoting__Flags m_Flags;

  /// @brief Field m_LocalManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalManager, put = __cordl_internal_set_m_LocalManager))::UnityEngine::InputSystem::InputManager* m_LocalManager;

  /// @brief Field m_Senders, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_Senders,
               put = __cordl_internal_set_m_Senders))::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> m_Senders;

  /// @brief Field m_Subscribers, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Subscribers,
      put = __cordl_internal_set_m_Subscribers))::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> m_Subscribers;

  __declspec(property(get = get_manager))::UnityEngine::InputSystem::InputManager* manager;

  __declspec(property(get = get_sending, put = set_sending)) bool sending;

  /// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr operator ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

  /// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr operator ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

  /// @brief Method BuildLayoutNamespace, addr 0x1c6f6c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(int32_t senderId);

  /// @brief Method DeserializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> static inline TData DeserializeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method FindLocalDeviceId, addr 0x1c6f760, size 0x74, virtual false, abstract: false, final false
  inline int32_t FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex);

  /// @brief Method FindOrCreateSenderRecord, addr 0x1c6f61c, size 0xa4, virtual false, abstract: false, final false
  inline int32_t FindOrCreateSenderRecord(int32_t senderId);

  static inline ::UnityEngine::InputSystem::InputRemoting* New_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect);

  /// @brief Method RemoveRemoteDevices, addr 0x1c6f87c, size 0xfc, virtual false, abstract: false, final false
  inline void RemoveRemoteDevices(int32_t participantId);

  /// @brief Method Send, addr 0x1c6ebac, size 0x104, virtual false, abstract: false, final false
  inline void Send(::UnityEngine::InputSystem::__InputRemoting__Message msg);

  /// @brief Method SendAllDevices, addr 0x1c6e744, size 0x168, virtual false, abstract: false, final false
  inline void SendAllDevices();

  /// @brief Method SendAllGeneratedLayouts, addr 0x1c6e5f0, size 0x154, virtual false, abstract: false, final false
  inline void SendAllGeneratedLayouts();

  /// @brief Method SendDevice, addr 0x1c6ed18, size 0x84, virtual false, abstract: false, final false
  inline void SendDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SendDeviceChange, addr 0x1c6f1cc, size 0xc0, virtual false, abstract: false, final false
  inline void SendDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method SendEvent, addr 0x1c6f090, size 0x64, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SendInitialMessages, addr 0x1c6d648, size 0x18, virtual false, abstract: false, final false
  inline void SendInitialMessages();

  /// @brief Method SendLayout, addr 0x1c6e8ac, size 0xb4, virtual false, abstract: false, final false
  inline void SendLayout(::StringW layoutName);

  /// @brief Method SendLayoutChange, addr 0x1c6f518, size 0x104, virtual false, abstract: false, final false
  inline void SendLayoutChange(::StringW layout, ::UnityEngine::InputSystem::InputControlLayoutChange change);

  /// @brief Method SerializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeData(TData data);

  /// @brief Method StartSending, addr 0x1c6d3c4, size 0x17c, virtual false, abstract: false, final false
  inline void StartSending();

  /// @brief Method StopSending, addr 0x1c6d660, size 0x160, virtual false, abstract: false, final false
  inline void StopSending();

  /// @brief Method Subscribe, addr 0x1c6e504, size 0xe4, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* observer);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted, addr 0x1c6e500, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted();

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError, addr 0x1c6e4fc, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext, addr 0x1c6d8c8, size 0x84, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message msg);

  /// @brief Method TryGetDeviceByRemoteId, addr 0x1c6f7d4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex);

  constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::InputSystem::InputManager*& __cordl_internal_get_m_LocalManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> const& __cordl_internal_get_m_LocalManager() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> const& __cordl_internal_get_m_Senders() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*>& __cordl_internal_get_m_Senders();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> const& __cordl_internal_get_m_Subscribers() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*>& __cordl_internal_get_m_Subscribers();

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::__InputRemoting__Flags value);

  constexpr void __cordl_internal_set_m_LocalManager(::UnityEngine::InputSystem::InputManager* value);

  constexpr void __cordl_internal_set_m_Senders(::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> value);

  constexpr void __cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> value);

  /// @brief Method .ctor, addr 0x1c6d338, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect);

  /// @brief Method get_manager, addr 0x1c6f874, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputManager* get_manager();

  /// @brief Method get_sending, addr 0x1c6d310, size 0xc, virtual false, abstract: false, final false
  inline bool get_sending();

  /// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>* i___System__IObservable_1___UnityEngine__InputSystem____InputRemoting__Message_() noexcept;

  /// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* i___System__IObserver_1___UnityEngine__InputSystem____InputRemoting__Message_() noexcept;

  /// @brief Method set_sending, addr 0x1c6d31c, size 0x1c, virtual false, abstract: false, final false
  inline void set_sending(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting(InputRemoting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting(InputRemoting const&) = delete;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputRemoting__Flags ___m_Flags;

  /// @brief Field m_LocalManager, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputManager* ___m_LocalManager;

  /// @brief Field m_Subscribers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> ___m_Subscribers;

  /// @brief Field m_Senders, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> ___m_Senders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_LocalManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Subscribers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Senders) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Flags, "UnityEngine.InputSystem", "InputRemoting/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__MessageType, "UnityEngine.InputSystem", "InputRemoting/MessageType");
NEED_NO_BOX(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting*, "UnityEngine.InputSystem", "InputRemoting");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg*, "UnityEngine.InputSystem", "InputRemoting/ConnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg*, "UnityEngine.InputSystem", "InputRemoting/DisconnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/RemoveDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StartSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StopSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Subscriber*, "UnityEngine.InputSystem", "InputRemoting/Subscriber");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Message, "UnityEngine.InputSystem", "InputRemoting/Message");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, "UnityEngine.InputSystem", "InputRemoting/RemoteInputDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoteSender, "UnityEngine.InputSystem", "InputRemoting/RemoteSender");
