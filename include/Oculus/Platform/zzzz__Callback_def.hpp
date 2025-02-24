#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Callback)
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template <typename T> class __Callback__RequestCallback_1;
}
namespace Oculus::Platform {
class __Callback__RequestCallback;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform {
class __Message__Callback;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class Callback;
}
namespace Oculus::Platform {
class __Callback__RequestCallback;
}
namespace Oculus::Platform {
template <typename T> class __Callback__RequestCallback_1;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Callback);
MARK_REF_PTR_T(::Oculus::Platform::__Callback__RequestCallback);
MARK_GEN_REF_PTR_T(::Oculus::Platform::__Callback__RequestCallback_1);
// Type: ::RequestCallback
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Callback::RequestCallback*
class CORDL_TYPE __Callback__RequestCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_messageCallback, put = __cordl_internal_set_messageCallback))::Oculus::Platform::__Message__Callback* messageCallback;

  /// @brief Method HandleMessage, addr 0x1991750, size 0x1c, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::__Callback__RequestCallback* New_ctor();

  static inline ::Oculus::Platform::__Callback__RequestCallback* New_ctor(::Oculus::Platform::__Message__Callback* callback);

  constexpr ::Oculus::Platform::__Message__Callback*& __cordl_internal_get_messageCallback();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message__Callback*> const& __cordl_internal_get_messageCallback() const;

  constexpr void __cordl_internal_set_messageCallback(::Oculus::Platform::__Message__Callback* value);

  /// @brief Method .ctor, addr 0x1991748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1991020, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Platform::__Message__Callback* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Callback__RequestCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Callback__RequestCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Callback__RequestCallback(__Callback__RequestCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Callback__RequestCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Callback__RequestCallback(__Callback__RequestCallback const&) = delete;

  /// @brief Field messageCallback, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::__Message__Callback* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__Callback__RequestCallback, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__Callback__RequestCallback, ___messageCallback) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::RequestCallback`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Callback::RequestCallback`1<T>*
class CORDL_TYPE __Callback__RequestCallback_1 : public ::Oculus::Platform::__Callback__RequestCallback {
public:
  // Declarations
  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::Oculus::Platform::__Message_1__Callback<T>* callback;

  /// @brief Method HandleMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::__Callback__RequestCallback_1<T>* New_ctor(::Oculus::Platform::__Message_1__Callback<T>* callback);

  constexpr ::Oculus::Platform::__Message_1__Callback<T>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::Oculus::Platform::__Message_1__Callback<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Platform::__Message_1__Callback<T>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Callback__RequestCallback_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Callback__RequestCallback_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Callback__RequestCallback_1(__Callback__RequestCallback_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Callback__RequestCallback_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Callback__RequestCallback_1(__Callback__RequestCallback_1 const&) = delete;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::__Message_1__Callback<T>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
// Type: Oculus.Platform::Callback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Callback*
class CORDL_TYPE Callback : public ::System::Object {
public:
  // Declarations
  using RequestCallback = ::Oculus::Platform::__Callback__RequestCallback;

  template <typename T> using RequestCallback_1 = ::Oculus::Platform::__Callback__RequestCallback_1<T>;

  /// @brief Field hasRegisteredJoinIntentNotificationHandler, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasRegisteredJoinIntentNotificationHandler, put = setStaticF_hasRegisteredJoinIntentNotificationHandler)) bool hasRegisteredJoinIntentNotificationHandler;

  /// @brief Field latestPendingJoinIntentNotifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_latestPendingJoinIntentNotifications,
                             put = setStaticF_latestPendingJoinIntentNotifications))::Oculus::Platform::Message* latestPendingJoinIntentNotifications;

  /// @brief Field notificationCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_notificationCallbacks,
                             put = setStaticF_notificationCallbacks))::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType,
                                                                                                                  ::Oculus::Platform::__Callback__RequestCallback*>* notificationCallbacks;

  /// @brief Field requestIDsToRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_requestIDsToRequests,
                             put = setStaticF_requestIDsToRequests))::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* requestIDsToRequests;

  /// @brief Method AddRequest, addr 0x1991048, size 0xdc, virtual false, abstract: false, final false
  static inline void AddRequest(::Oculus::Platform::Request* request);

  /// @brief Method FlushJoinIntentNotificationQueue, addr 0x19915cc, size 0xa0, virtual false, abstract: false, final false
  static inline void FlushJoinIntentNotificationQueue();

  /// @brief Method HandleMessage, addr 0x1991264, size 0x23c, virtual false, abstract: false, final false
  static inline void HandleMessage(::Oculus::Platform::Message* msg);

  /// @brief Method OnApplicationQuit, addr 0x1991528, size 0xa4, virtual false, abstract: false, final false
  static inline void OnApplicationQuit();

  /// @brief Method RunCallbacks, addr 0x1991124, size 0x6c, virtual false, abstract: false, final false
  static inline void RunCallbacks();

  /// @brief Method RunLimitedCallbacks, addr 0x19914a0, size 0x88, virtual false, abstract: false, final false
  static inline void RunLimitedCallbacks(uint32_t limit);

  /// @brief Method SetNotificationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetNotificationCallback(::Oculus::Platform::__Message__MessageType type, ::Oculus::Platform::__Message_1__Callback<T>* callback);

  /// @brief Method SetNotificationCallback, addr 0x1990f0c, size 0x114, virtual false, abstract: false, final false
  static inline void SetNotificationCallback(::Oculus::Platform::__Message__MessageType type, ::Oculus::Platform::__Message__Callback* callback);

  static inline bool getStaticF_hasRegisteredJoinIntentNotificationHandler();

  static inline ::Oculus::Platform::Message* getStaticF_latestPendingJoinIntentNotifications();

  static inline ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>* getStaticF_notificationCallbacks();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* getStaticF_requestIDsToRequests();

  static inline void setStaticF_hasRegisteredJoinIntentNotificationHandler(bool value);

  static inline void setStaticF_latestPendingJoinIntentNotifications(::Oculus::Platform::Message* value);

  static inline void
  setStaticF_notificationCallbacks(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>* value);

  static inline void setStaticF_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callback(Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callback(Callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Callback, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback*, "Oculus.Platform", "Callback");
NEED_NO_BOX(::Oculus::Platform::__Callback__RequestCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__Callback__RequestCallback*, "Oculus.Platform", "Callback/RequestCallback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::__Callback__RequestCallback_1, "Oculus.Platform", "Callback/RequestCallback`1");
