#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonitoringListener)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
struct __MonitoringListener___PostMessagesOverUDPAsync_d__10;
}
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime {
class MonitoringListener;
}
namespace Amazon::Runtime {
struct __MonitoringListener___PostMessagesOverUDPAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::MonitoringListener);
MARK_VAL_T(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10);
// Type: ::<PostMessagesOverUDPAsync>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::MonitoringListener::<PostMessagesOverUDPAsync>d__10
struct CORDL_TYPE __MonitoringListener___PostMessagesOverUDPAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1ff500c, size 0x3a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1ff53b4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonitoringListener___PostMessagesOverUDPAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::MonitoringListener*", modifiers: "",
  // def_value: None }, CppParam { name: "response", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __MonitoringListener___PostMessagesOverUDPAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::Amazon::Runtime::MonitoringListener* __4__this, ::StringW response,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::MonitoringListener* __4__this;

  /// @brief Field response, offset: 0x28, size: 0x8, def value: None
  ::StringW response;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, response) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::MonitoringListener
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::MonitoringListener*
class CORDL_TYPE MonitoringListener : public ::System::Object {
public:
  // Declarations
  using _PostMessagesOverUDPAsync_d__10 = ::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10;

  /// @brief Field _disposed, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _host, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__host, put = __cordl_internal_set__host))::StringW _host;

  /// @brief Field _port, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__port, put = __cordl_internal_set__port)) int32_t _port;

  /// @brief Field _udpClient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__udpClient, put = __cordl_internal_set__udpClient))::System::Net::Sockets::UdpClient* _udpClient;

  /// @brief Field csmMonitoringListenerInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_csmMonitoringListenerInstance, put = setStaticF_csmMonitoringListenerInstance))::Amazon::Runtime::MonitoringListener* csmMonitoringListenerInstance;

  /// @brief Field logger, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger))::Amazon::Runtime::Internal::Util::Logger* logger;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x1ff4f70, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1ff4fd4, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::MonitoringListener* New_ctor();

  /// @brief Method PostMessagesOverUDP, addr 0x1ff4e6c, size 0x4, virtual false, abstract: false, final false
  inline void PostMessagesOverUDP(::StringW response);

  /// @brief Method PostMessagesOverUDPAsync, addr 0x1ff4e70, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PostMessagesOverUDPAsync(::StringW response);

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::StringW const& __cordl_internal_get__host() const;

  constexpr ::StringW& __cordl_internal_get__host();

  constexpr int32_t const& __cordl_internal_get__port() const;

  constexpr int32_t& __cordl_internal_get__port();

  constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get__udpClient();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::UdpClient*> const& __cordl_internal_get__udpClient() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get_logger() const;

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__host(::StringW value);

  constexpr void __cordl_internal_set__port(int32_t value);

  constexpr void __cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient* value);

  constexpr void __cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x1ff4c00, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::MonitoringListener* getStaticF_csmMonitoringListenerInstance();

  /// @brief Method get_Instance, addr 0x1ff4e14, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::MonitoringListener* get_Instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_csmMonitoringListenerInstance(::Amazon::Runtime::MonitoringListener* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonitoringListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonitoringListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonitoringListener(MonitoringListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonitoringListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonitoringListener(MonitoringListener const&) = delete;

  /// @brief Field _host, offset: 0x10, size: 0x8, def value: None
  ::StringW ____host;

  /// @brief Field _udpClient, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Sockets::UdpClient* ____udpClient;

  /// @brief Field logger, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ___logger;

  /// @brief Field _port, offset: 0x28, size: 0x4, def value: None
  int32_t ____port;

  /// @brief Field _disposed, offset: 0x2c, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::MonitoringListener, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::MonitoringListener, ____host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::MonitoringListener, ____udpClient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::MonitoringListener, ___logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::MonitoringListener, ____port) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::MonitoringListener, ____disposed) == 0x2c, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::MonitoringListener);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::MonitoringListener*, "Amazon.Runtime", "MonitoringListener");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__MonitoringListener___PostMessagesOverUDPAsync_d__10, "Amazon.Runtime", "MonitoringListener/<PostMessagesOverUDPAsync>d__10");
