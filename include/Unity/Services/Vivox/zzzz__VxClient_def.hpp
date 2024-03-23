#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VxClient)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
template <typename T> class AsyncResult_1;
}
namespace Unity::Services::Vivox {
class VivoxConfigurationOptions;
}
namespace Unity::Services::Vivox {
class VxTokenGen;
}
namespace Unity::Services::Vivox {
class __VxClient__HandleEventMessage;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
namespace Unity::Services::Vivox {
class vx_sdk_config_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VxClient;
}
namespace Unity::Services::Vivox {
class __VxClient__HandleEventMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VxClient);
MARK_REF_PTR_T(::Unity::Services::Vivox::__VxClient__HandleEventMessage);
// Type: ::HandleEventMessage
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::VxClient::HandleEventMessage*
class CORDL_TYPE __VxClient__HandleEventMessage : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x16ff8ac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Unity::Services::Vivox::vx_evt_base_t* eventMessage, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x16ff8cc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x16ff898, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  static inline ::Unity::Services::Vivox::__VxClient__HandleEventMessage* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x16ff76c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VxClient__HandleEventMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VxClient__HandleEventMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VxClient__HandleEventMessage(__VxClient__HandleEventMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VxClient__HandleEventMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VxClient__HandleEventMessage(__VxClient__HandleEventMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VxClient__HandleEventMessage, 0x80>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VxClient
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VxClient*
class CORDL_TYPE VxClient : public ::System::Object {
public:
  // Declarations
  using HandleEventMessage = ::Unity::Services::Vivox::__VxClient__HandleEventMessage;

  /// @brief Field EventMessageReceived, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_EventMessageReceived, put = __cordl_internal_set_EventMessageReceived))::Unity::Services::Vivox::__VxClient__HandleEventMessage* EventMessageReceived;

  __declspec(property(get = get_Started)) bool Started;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Unity::Services::Vivox::VxClient* _instance;

  /// @brief Field _nextRequestId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nextRequestId, put = __cordl_internal_set__nextRequestId)) int64_t _nextRequestId;

  /// @brief Field _pendingRequests, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingRequests, put = __cordl_internal_set__pendingRequests))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::vx_resp_base_t*>*>* _pendingRequests;

  /// @brief Field _startCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__startCount, put = __cordl_internal_set__startCount)) int32_t _startCount;

  /// @brief Field defaultRealm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultRealm, put = __cordl_internal_set_defaultRealm))::StringW defaultRealm;

  /// @brief Field disposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field tokenGen, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenGen, put = __cordl_internal_set_tokenGen))::Unity::Services::Vivox::VxTokenGen* tokenGen;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginIssueRequest, addr 0x16fee84, size 0x394, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginIssueRequest(::Unity::Services::Vivox::vx_req_base_t* request, ::System::AsyncCallback* callback);

  /// @brief Method Cleanup, addr 0x16fecb4, size 0x1d0, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Dispose, addr 0x16ff480, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16ff4ec, size 0x68, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndIssueRequest, addr 0x16ff218, size 0x268, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* EndIssueRequest(::System::IAsyncResult* result);

  /// @brief Method Finalize, addr 0x16ff554, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetRandomChannelUri, addr 0x16ff6b4, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetRandomChannelUri(::StringW prefix, ::StringW realm);

  /// @brief Method GetRandomUserId, addr 0x16ff5f4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUserId(::StringW prefix);

  /// @brief Method GetRandomUserIdEx, addr 0x16ff64c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUserIdEx(::StringW prefix, ::StringW issuer);

  /// @brief Method GetVersion, addr 0x16ff71c, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetVersion();

  /// @brief Method InstanceOnMainLoopRun, addr 0x16fe910, size 0x2c0, virtual false, abstract: false, final false
  inline void InstanceOnMainLoopRun(ByRef<bool> didWork);

  /// @brief Method InternalStart, addr 0x16fe1f8, size 0x364, virtual false, abstract: false, final false
  inline void InternalStart(::Unity::Services::Vivox::vx_sdk_config_t* config);

  static inline ::Unity::Services::Vivox::VxClient* New_ctor();

  /// @brief Method Start, addr 0x16fe18c, size 0x6c, virtual false, abstract: false, final false
  inline void Start(::Unity::Services::Vivox::VivoxConfigurationOptions* config);

  /// @brief Method Start, addr 0x16fe55c, size 0x6c, virtual false, abstract: false, final false
  inline void Start(::Unity::Services::Vivox::vx_sdk_config_t* config);

  /// @brief Method Stop, addr 0x16febd0, size 0xe4, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::Unity::Services::Vivox::__VxClient__HandleEventMessage*& __cordl_internal_get_EventMessageReceived();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__VxClient__HandleEventMessage*> const& __cordl_internal_get_EventMessageReceived() const;

  constexpr int64_t const& __cordl_internal_get__nextRequestId() const;

  constexpr int64_t& __cordl_internal_get__nextRequestId();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::vx_resp_base_t*>*>*& __cordl_internal_get__pendingRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::vx_resp_base_t*>*>*> const&
  __cordl_internal_get__pendingRequests() const;

  constexpr int32_t const& __cordl_internal_get__startCount() const;

  constexpr int32_t& __cordl_internal_get__startCount();

  constexpr ::StringW const& __cordl_internal_get_defaultRealm() const;

  constexpr ::StringW& __cordl_internal_get_defaultRealm();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::Unity::Services::Vivox::VxTokenGen*& __cordl_internal_get_tokenGen();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VxTokenGen*> const& __cordl_internal_get_tokenGen() const;

  constexpr void __cordl_internal_set_EventMessageReceived(::Unity::Services::Vivox::__VxClient__HandleEventMessage* value);

  constexpr void __cordl_internal_set__nextRequestId(int64_t value);

  constexpr void
  __cordl_internal_set__pendingRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::vx_resp_base_t*>*>* value);

  constexpr void __cordl_internal_set__startCount(int32_t value);

  constexpr void __cordl_internal_set_defaultRealm(::StringW value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_tokenGen(::Unity::Services::Vivox::VxTokenGen* value);

  /// @brief Method .ctor, addr 0x16fdf10, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_EventMessageReceived, addr 0x16fe054, size 0x9c, virtual false, abstract: false, final false
  inline void add_EventMessageReceived(::Unity::Services::Vivox::__VxClient__HandleEventMessage* value);

  static inline ::Unity::Services::Vivox::VxClient* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x16fdfc8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::VxClient* get_Instance();

  /// @brief Method get_PlatformNotSupported, addr 0x16fdf08, size 0x8, virtual false, abstract: false, final false
  static inline bool get_PlatformNotSupported();

  /// @brief Method get_Started, addr 0x16fe044, size 0x10, virtual false, abstract: false, final false
  inline bool get_Started();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_EventMessageReceived, addr 0x16fe0f0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_EventMessageReceived(::Unity::Services::Vivox::__VxClient__HandleEventMessage* value);

  static inline void setStaticF__instance(::Unity::Services::Vivox::VxClient* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VxClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VxClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VxClient(VxClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VxClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VxClient(VxClient const&) = delete;

  /// @brief Field _pendingRequests, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Services::Vivox::AsyncResult_1<::Unity::Services::Vivox::vx_resp_base_t*>*>* ____pendingRequests;

  /// @brief Field _nextRequestId, offset: 0x18, size: 0x8, def value: None
  int64_t ____nextRequestId;

  /// @brief Field _startCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____startCount;

  /// @brief Field defaultRealm, offset: 0x28, size: 0x8, def value: None
  ::StringW ___defaultRealm;

  /// @brief Field tokenGen, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::VxTokenGen* ___tokenGen;

  /// @brief Field EventMessageReceived, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::__VxClient__HandleEventMessage* ___EventMessageReceived;

  /// @brief Field disposed, offset: 0x40, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field appId offset 0xffffffff size 0x8
  static constexpr ::ConstString appId{ u"UNI" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VxClient, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ____pendingRequests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ____nextRequestId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ____startCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ___defaultRealm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ___tokenGen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ___EventMessageReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VxClient, ___disposed) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VxClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VxClient*, "Unity.Services.Vivox", "VxClient");
NEED_NO_BOX(::Unity::Services::Vivox::__VxClient__HandleEventMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VxClient__HandleEventMessage*, "Unity.Services.Vivox", "VxClient/HandleEventMessage");
