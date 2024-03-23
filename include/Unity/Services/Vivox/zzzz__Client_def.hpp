#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Client)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class AudioInputDevices;
}
namespace Unity::Services::Vivox {
class AudioOutputDevices;
}
namespace Unity::Services::Vivox {
class IAudioDevices;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
class LoginSession;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
namespace Unity::Services::Vivox {
class VivoxConfigurationOptions;
}
namespace Unity::Services::Vivox {
class VxTokenGen;
}
namespace Unity::Services::Vivox {
struct __Client___InitializeAsync_d__21;
}
namespace Unity::Services::Vivox {
class __Client____c;
}
namespace Unity::Services::Vivox {
class __Client____c__DisplayClass23_0;
}
namespace Unity::Services::Vivox {
class __Client____c__DisplayClass45_0;
}
namespace Unity::Services::Vivox {
class vx_req_connector_create_t;
}
namespace Unity::Services::Vivox {
class vx_resp_connector_create_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class Client;
}
namespace Unity::Services::Vivox {
class __Client____c;
}
namespace Unity::Services::Vivox {
class __Client____c__DisplayClass23_0;
}
namespace Unity::Services::Vivox {
class __Client____c__DisplayClass45_0;
}
namespace Unity::Services::Vivox {
struct __Client___InitializeAsync_d__21;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Client);
MARK_REF_PTR_T(::Unity::Services::Vivox::__Client____c);
MARK_REF_PTR_T(::Unity::Services::Vivox::__Client____c__DisplayClass23_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__Client____c__DisplayClass45_0);
MARK_VAL_T(::Unity::Services::Vivox::__Client___InitializeAsync_d__21);
// Type: ::<InitializeAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Client::<InitializeAsync>d__21
struct CORDL_TYPE __Client___InitializeAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fc66b0, size 0x354, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fc6a04, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Client___InitializeAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::Client*", modifiers: "", def_value:
  // None }, CppParam { name: "config", ty: "::Unity::Services::Vivox::VivoxConfigurationOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __Client___InitializeAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Vivox::Client* __4__this,
                                             ::Unity::Services::Vivox::VivoxConfigurationOptions* config, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Client* __4__this;

  /// @brief Field config, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxConfigurationOptions* config;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__Client___InitializeAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Client::<>c__DisplayClass23_0*
class CORDL_TYPE __Client____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::Client* __4__this;

  /// @brief Field connectorHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connectorHandle, put = __cordl_internal_set_connectorHandle))::StringW connectorHandle;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_connector_create_t* request;

  /// @brief Field response, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response))::Unity::Services::Vivox::vx_resp_connector_create_t* response;

  static inline ::Unity::Services::Vivox::__Client____c__DisplayClass23_0* New_ctor();

  /// @brief Method <BeginGetConnectorHandle>b__0, addr 0x2fc6a18, size 0x368, virtual false, abstract: false, final false
  inline void _BeginGetConnectorHandle_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::Client*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_connectorHandle() const;

  constexpr ::StringW& __cordl_internal_get_connectorHandle();

  constexpr ::Unity::Services::Vivox::vx_req_connector_create_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_connector_create_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::vx_resp_connector_create_t*& __cordl_internal_get_response();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_resp_connector_create_t*> const& __cordl_internal_get_response() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::Client* value);

  constexpr void __cordl_internal_set_connectorHandle(::StringW value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_connector_create_t* value);

  constexpr void __cordl_internal_set_response(::Unity::Services::Vivox::vx_resp_connector_create_t* value);

  /// @brief Method .ctor, addr 0x2fc6a10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Client____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Client____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Client____c__DisplayClass23_0(__Client____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Client____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Client____c__DisplayClass23_0(__Client____c__DisplayClass23_0 const&) = delete;

  /// @brief Field response, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_resp_connector_create_t* ___response;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_connector_create_t* ___request;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Client* _____4__this;

  /// @brief Field connectorHandle, offset: 0x28, size: 0x8, def value: None
  ::StringW ___connectorHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__Client____c__DisplayClass23_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass23_0, ___response) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass23_0, ___request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass23_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass23_0, ___connectorHandle) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass45_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Client::<>c__DisplayClass45_0*
class CORDL_TYPE __Client____c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field finishTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishTime, put = __cordl_internal_set_finishTime))::System::DateTime finishTime;

  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle))::System::Threading::WaitHandle* handle;

  static inline ::Unity::Services::Vivox::__Client____c__DisplayClass45_0* New_ctor();

  /// @brief Method <Run>b__0, addr 0x2fc6d88, size 0xc, virtual false, abstract: false, final false
  inline bool _Run_b__0();

  constexpr ::System::DateTime const& __cordl_internal_get_finishTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_finishTime();

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __cordl_internal_get_handle() const;

  constexpr void __cordl_internal_set_finishTime(::System::DateTime value);

  constexpr void __cordl_internal_set_handle(::System::Threading::WaitHandle* value);

  /// @brief Method .ctor, addr 0x2fc6d80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Client____c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Client____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Client____c__DisplayClass45_0(__Client____c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Client____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Client____c__DisplayClass45_0(__Client____c__DisplayClass45_0 const&) = delete;

  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ___handle;

  /// @brief Field finishTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___finishTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__Client____c__DisplayClass45_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass45_0, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__Client____c__DisplayClass45_0, ___finishTime) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Client::<>c*
class CORDL_TYPE __Client____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::__Client____c* __9;

  /// @brief Field <>9__46_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__46_0, put = setStaticF___9__46_0))::System::Func_1<bool>* __9__46_0;

  static inline ::Unity::Services::Vivox::__Client____c* New_ctor();

  /// @brief Method <RunOnce>b__46_0, addr 0x2fc6e90, size 0x5c, virtual false, abstract: false, final false
  inline bool _RunOnce_b__46_0();

  /// @brief Method .ctor, addr 0x2fc6e88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Vivox::__Client____c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__46_0();

  static inline void setStaticF___9(::Unity::Services::Vivox::__Client____c* value);

  static inline void setStaticF___9__46_0(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Client____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Client____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Client____c(__Client____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Client____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Client____c(__Client____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__Client____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::Client
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::Client*
class CORDL_TYPE Client : public ::System::Object {
public:
  // Declarations
  using _InitializeAsync_d__21 = ::Unity::Services::Vivox::__Client___InitializeAsync_d__21;

  using __c = ::Unity::Services::Vivox::__Client____c;

  using __c__DisplayClass23_0 = ::Unity::Services::Vivox::__Client____c__DisplayClass23_0;

  using __c__DisplayClass45_0 = ::Unity::Services::Vivox::__Client____c__DisplayClass45_0;

  __declspec(property(get = get_AudioInputDevices))::Unity::Services::Vivox::IAudioDevices* AudioInputDevices;

  __declspec(property(get = get_AudioOutputDevices))::Unity::Services::Vivox::IAudioDevices* AudioOutputDevices;

  __declspec(property(get = get_Initialized)) bool Initialized;

  __declspec(property(get = get_IsAudioEchoCancellationEnabled)) bool IsAudioEchoCancellationEnabled;

  __declspec(property(get = get_LoginSessions))::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*>* LoginSessions;

  __declspec(property(get = get_TTSManagerId)) uint32_t TTSManagerId;

  /// @brief Field _connectorHandle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectorHandle, put = __cordl_internal_set__connectorHandle))::StringW _connectorHandle;

  /// @brief Field _inputDevices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputDevices, put = __cordl_internal_set__inputDevices))::Unity::Services::Vivox::AudioInputDevices* _inputDevices;

  /// @brief Field _loginSessions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__loginSessions,
                      put = __cordl_internal_set__loginSessions))::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*,
                                                                                                                 ::Unity::Services::Vivox::LoginSession*>* _loginSessions;

  /// @brief Field _nextHandle, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__nextHandle, put = setStaticF__nextHandle)) int32_t _nextHandle;

  /// @brief Field _outputDevices, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outputDevices, put = __cordl_internal_set__outputDevices))::Unity::Services::Vivox::AudioOutputDevices* _outputDevices;

  /// @brief Field _pendingConnectorCreateRequests, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingConnectorCreateRequests,
                      put = __cordl_internal_set__pendingConnectorCreateRequests))::System::Collections::Generic::Queue_1<::System::IAsyncResult*>* _pendingConnectorCreateRequests;

  /// @brief Field _serverUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__serverUri, put = __cordl_internal_set__serverUri))::System::Uri* _serverUri;

  /// @brief Field _ttsIsInitialized, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__ttsIsInitialized, put = __cordl_internal_set__ttsIsInitialized)) bool _ttsIsInitialized;

  /// @brief Field _ttsManagerId, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__ttsManagerId, put = __cordl_internal_set__ttsManagerId)) uint32_t _ttsManagerId;

  /// @brief Field requestTimeout, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_requestTimeout, put = setStaticF_requestTimeout)) int32_t requestTimeout;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddLoginSession, addr 0x1c2e5d4, size 0xa4, virtual false, abstract: false, final false
  inline void AddLoginSession(::Unity::Services::Vivox::AccountId* accountId, ::Unity::Services::Vivox::LoginSession* session);

  /// @brief Method BeginGetConnectorHandle, addr 0x1c2e124, size 0xcc, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetConnectorHandle(::System::AsyncCallback* callback);

  /// @brief Method BeginGetConnectorHandle, addr 0x1c2e1f0, size 0x2f4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetConnectorHandle(::System::Uri* server, ::System::AsyncCallback* callback);

  /// @brief Method CheckInitialized, addr 0x1c2df7c, size 0x5c, virtual false, abstract: false, final false
  inline void CheckInitialized();

  /// @brief Method Cleanup, addr 0x1c2ead0, size 0x74, virtual false, abstract: false, final false
  static inline void Cleanup();

  /// @brief Method EndGetConnectorHandle, addr 0x1c2e4e4, size 0x98, virtual false, abstract: false, final false
  inline ::StringW EndGetConnectorHandle(::System::IAsyncResult* result);

  /// @brief Method GetLoginSession, addr 0x1c24554, size 0x154, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ILoginSession* GetLoginSession(::Unity::Services::Vivox::AccountId* accountId);

  /// @brief Method Initialize, addr 0x1c2dfd8, size 0x14c, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Services::Vivox::VivoxConfigurationOptions* config);

  /// @brief Method InitializeAsync, addr 0x1c23188, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Vivox::VivoxConfigurationOptions* config);

  static inline ::Unity::Services::Vivox::Client* New_ctor(::System::Uri* serverUri);

  /// @brief Method RemoveLoginSession, addr 0x1c2e57c, size 0x58, virtual false, abstract: false, final false
  inline void RemoveLoginSession(::Unity::Services::Vivox::AccountId* accountId);

  /// @brief Method Run, addr 0x1c2eb90, size 0x138, virtual false, abstract: false, final false
  static inline bool Run(::System::Threading::WaitHandle* handle, ::System::TimeSpan until);

  /// @brief Method Run, addr 0x1c2eb68, size 0x28, virtual false, abstract: false, final false
  static inline void Run(::System::Func_1<bool>* done);

  /// @brief Method RunOnce, addr 0x1c2ecc8, size 0xf8, virtual false, abstract: false, final false
  static inline void RunOnce();

  /// @brief Method SetAudioEchoCancellation, addr 0x1c1f5d0, size 0xac, virtual false, abstract: false, final false
  inline void SetAudioEchoCancellation(bool onOff);

  /// @brief Method System.IDisposable.Dispose, addr 0x1c2eb64, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method TTSInitialize, addr 0x1c2edc0, size 0x88, virtual false, abstract: false, final false
  inline bool TTSInitialize();

  /// @brief Method TTSShutdown, addr 0x1c2e720, size 0x3b0, virtual false, abstract: false, final false
  inline void TTSShutdown();

  /// @brief Method Uninitialize, addr 0x1c2e678, size 0xa8, virtual false, abstract: false, final false
  inline void Uninitialize();

  constexpr ::StringW const& __cordl_internal_get__connectorHandle() const;

  constexpr ::StringW& __cordl_internal_get__connectorHandle();

  constexpr ::Unity::Services::Vivox::AudioInputDevices*& __cordl_internal_get__inputDevices();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const& __cordl_internal_get__inputDevices() const;

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>*&
  __cordl_internal_get__loginSessions();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>*> const&
  __cordl_internal_get__loginSessions() const;

  constexpr ::Unity::Services::Vivox::AudioOutputDevices*& __cordl_internal_get__outputDevices();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& __cordl_internal_get__outputDevices() const;

  constexpr ::System::Collections::Generic::Queue_1<::System::IAsyncResult*>*& __cordl_internal_get__pendingConnectorCreateRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::IAsyncResult*>*> const& __cordl_internal_get__pendingConnectorCreateRequests() const;

  constexpr ::System::Uri*& __cordl_internal_get__serverUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__serverUri() const;

  constexpr bool const& __cordl_internal_get__ttsIsInitialized() const;

  constexpr bool& __cordl_internal_get__ttsIsInitialized();

  constexpr uint32_t const& __cordl_internal_get__ttsManagerId() const;

  constexpr uint32_t& __cordl_internal_get__ttsManagerId();

  constexpr void __cordl_internal_set__connectorHandle(::StringW value);

  constexpr void __cordl_internal_set__inputDevices(::Unity::Services::Vivox::AudioInputDevices* value);

  constexpr void __cordl_internal_set__loginSessions(
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>* value);

  constexpr void __cordl_internal_set__outputDevices(::Unity::Services::Vivox::AudioOutputDevices* value);

  constexpr void __cordl_internal_set__pendingConnectorCreateRequests(::System::Collections::Generic::Queue_1<::System::IAsyncResult*>* value);

  constexpr void __cordl_internal_set__serverUri(::System::Uri* value);

  constexpr void __cordl_internal_set__ttsIsInitialized(bool value);

  constexpr void __cordl_internal_set__ttsManagerId(uint32_t value);

  /// @brief Method .ctor, addr 0x1c2302c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* serverUri);

  static inline int32_t getStaticF__nextHandle();

  static inline int32_t getStaticF_requestTimeout();

  /// @brief Method get_AudioInputDevices, addr 0x1c2eb54, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::IAudioDevices* get_AudioInputDevices();

  /// @brief Method get_AudioOutputDevices, addr 0x1c2eb5c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::IAudioDevices* get_AudioOutputDevices();

  /// @brief Method get_Initialized, addr 0x1c1abd8, size 0x98, virtual false, abstract: false, final false
  inline bool get_Initialized();

  /// @brief Method get_InternalVersion, addr 0x1c2eb44, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_InternalVersion();

  /// @brief Method get_IsAudioEchoCancellationEnabled, addr 0x1c1ac70, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsAudioEchoCancellationEnabled();

  /// @brief Method get_LoginSessions, addr 0x1c2eb4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*>* get_LoginSessions();

  /// @brief Method get_TTSManagerId, addr 0x1c2df50, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_TTSManagerId();

  /// @brief Method get_defaultRealm, addr 0x1c2bbf4, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW get_defaultRealm();

  /// @brief Method get_tokenGen, addr 0x1c23264, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::VxTokenGen* get_tokenGen();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__nextHandle(int32_t value);

  static inline void setStaticF_requestTimeout(int32_t value);

  /// @brief Method set_defaultRealm, addr 0x1c2df58, size 0x24, virtual false, abstract: false, final false
  static inline void set_defaultRealm(::StringW value);

  /// @brief Method set_tokenGen, addr 0x1c23368, size 0x24, virtual false, abstract: false, final false
  static inline void set_tokenGen(::Unity::Services::Vivox::VxTokenGen* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Client();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Client(Client&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Client(Client const&) = delete;

  /// @brief Field _loginSessions, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>* ____loginSessions;

  /// @brief Field _inputDevices, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioInputDevices* ____inputDevices;

  /// @brief Field _outputDevices, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* ____outputDevices;

  /// @brief Field _serverUri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* ____serverUri;

  /// @brief Field _connectorHandle, offset: 0x30, size: 0x8, def value: None
  ::StringW ____connectorHandle;

  /// @brief Field _pendingConnectorCreateRequests, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::IAsyncResult*>* ____pendingConnectorCreateRequests;

  /// @brief Field _ttsIsInitialized, offset: 0x40, size: 0x1, def value: None
  bool ____ttsIsInitialized;

  /// @brief Field _ttsManagerId, offset: 0x44, size: 0x4, def value: None
  uint32_t ____ttsManagerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Client, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____loginSessions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____inputDevices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____outputDevices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____serverUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____connectorHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____pendingConnectorCreateRequests) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____ttsIsInitialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Client, ____ttsManagerId) == 0x44, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::Client);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Client*, "Unity.Services.Vivox", "Client");
NEED_NO_BOX(::Unity::Services::Vivox::__Client____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__Client____c*, "Unity.Services.Vivox", "Client/<>c");
NEED_NO_BOX(::Unity::Services::Vivox::__Client____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__Client____c__DisplayClass23_0*, "Unity.Services.Vivox", "Client/<>c__DisplayClass23_0");
NEED_NO_BOX(::Unity::Services::Vivox::__Client____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__Client____c__DisplayClass45_0*, "Unity.Services.Vivox", "Client/<>c__DisplayClass45_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__Client___InitializeAsync_d__21, "Unity.Services.Vivox", "Client/<InitializeAsync>d__21");
