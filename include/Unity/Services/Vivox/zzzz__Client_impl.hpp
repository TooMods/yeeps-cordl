#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__Client_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioInputDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioOutputDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__Client_def.hpp"
#include "Unity/Services/Vivox/zzzz__IAudioDevices_def.hpp"
#include "Unity/Services/Vivox/zzzz__ILoginSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__LoginSession_def.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteDictionary_3_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxConfigurationOptions_def.hpp"
#include "Unity/Services/Vivox/zzzz__VxTokenGen_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_req_connector_create_t_def.hpp"
#include "Unity/Services/Vivox/zzzz__vx_resp_connector_create_t_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__Client___InitializeAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client___InitializeAsync_d__21::*)()>(
    &::Unity::Services::Vivox::__Client___InitializeAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2fc66b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client___InitializeAsync_d__21>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__Client___InitializeAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client___InitializeAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__Client___InitializeAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc6a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client___InitializeAsync_d__21>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__Client___InitializeAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Vivox::__Client___InitializeAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__Client___InitializeAsync_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client___InitializeAsync_d__21>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__Client___InitializeAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client___InitializeAsync_d__21>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::Client*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "config", ty: "::Unity::Services::Vivox::VivoxConfigurationOptions*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__Client___InitializeAsync_d__21::__Client___InitializeAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                       ::Unity::Services::Vivox::Client* __4__this,
                                                                                                       ::Unity::Services::Vivox::VivoxConfigurationOptions* config,
                                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->config = config;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__Client___InitializeAsync_d__21::__Client___InitializeAsync_d__21() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client____c__DisplayClass23_0::*)()>(
    &::Unity::Services::Vivox::__Client____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc6a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass23_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c__DisplayClass23_0._BeginGetConnectorHandle_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client____c__DisplayClass23_0::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::__Client____c__DisplayClass23_0::_BeginGetConnectorHandle_b__0)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2fc6a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass23_0*>::get(), "<BeginGetConnectorHandle>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::vx_resp_connector_create_t*& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_resp_connector_create_t*> const&
Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_set_response(::Unity::Services::Vivox::vx_resp_connector_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::vx_req_connector_create_t*& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_connector_create_t*> const&
Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_set_request(::Unity::Services::Vivox::vx_req_connector_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::Client*& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Client*> const& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::Client* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_connectorHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectorHandle;
}
constexpr ::StringW const& Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_get_connectorHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectorHandle;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass23_0::__cordl_internal_set_connectorHandle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectorHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::__Client____c__DisplayClass23_0* Unity::Services::Vivox::__Client____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__Client____c__DisplayClass23_0*>());
}
inline void Unity::Services::Vivox::__Client____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass23_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__Client____c__DisplayClass23_0::_BeginGetConnectorHandle_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass23_0*>::get(), "<BeginGetConnectorHandle>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__Client____c__DisplayClass23_0::__Client____c__DisplayClass23_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client____c__DisplayClass45_0::*)()>(
    &::Unity::Services::Vivox::__Client____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc6d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass45_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c__DisplayClass45_0._Run_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::__Client____c__DisplayClass45_0::*)()>(
    &::Unity::Services::Vivox::__Client____c__DisplayClass45_0::_Run_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc6d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass45_0*>::get(), "<Run>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::WaitHandle*& Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_set_handle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_get_finishTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishTime;
}
constexpr ::System::DateTime const& Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_get_finishTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishTime;
}
constexpr void Unity::Services::Vivox::__Client____c__DisplayClass45_0::__cordl_internal_set_finishTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishTime = value;
}
inline ::Unity::Services::Vivox::__Client____c__DisplayClass45_0* Unity::Services::Vivox::__Client____c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__Client____c__DisplayClass45_0*>());
}
inline void Unity::Services::Vivox::__Client____c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass45_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::__Client____c__DisplayClass45_0::_Run_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c__DisplayClass45_0*>::get(),
                                                                             "<Run>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__Client____c__DisplayClass45_0::__Client____c__DisplayClass45_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__Client____c::*)()>(&::Unity::Services::Vivox::__Client____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc6e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__Client____c._RunOnce_b__46_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::__Client____c::*)()>(&::Unity::Services::Vivox::__Client____c::_RunOnce_b__46_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2fc6e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get(),
                                                                               "<RunOnce>b__46_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::__Client____c::setStaticF___9(::Unity::Services::Vivox::__Client____c* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Vivox::__Client____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get>(
      std::forward<::Unity::Services::Vivox::__Client____c*>(value));
}
inline ::Unity::Services::Vivox::__Client____c* Unity::Services::Vivox::__Client____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Services::Vivox::__Client____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get>();
}
inline void Unity::Services::Vivox::__Client____c::setStaticF___9__46_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__46_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Unity::Services::Vivox::__Client____c::getStaticF___9__46_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__46_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get>();
}
inline ::Unity::Services::Vivox::__Client____c* Unity::Services::Vivox::__Client____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__Client____c*>());
}
inline void Unity::Services::Vivox::__Client____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::__Client____c::_RunOnce_b__46_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__Client____c*>::get(),
                                                                             "<RunOnce>b__46_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__Client____c::__Client____c() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_TTSManagerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::get_TTSManagerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c2df50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_TTSManagerId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_tokenGen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::VxTokenGen* (*)()>(&::Unity::Services::Vivox::Client::get_tokenGen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1c23264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_tokenGen",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.set_tokenGen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Vivox::VxTokenGen*)>(&::Unity::Services::Vivox::Client::set_tokenGen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1c23368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "set_tokenGen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxTokenGen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_defaultRealm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Vivox::Client::get_defaultRealm)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1c2bbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_defaultRealm",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.set_defaultRealm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::Services::Vivox::Client::set_defaultRealm)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1c2df58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "set_defaultRealm", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.CheckInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::CheckInitialized)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1c2df7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "CheckInitialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)(::System::Uri*)>(&::Unity::Services::Vivox::Client::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1c2302c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)(::Unity::Services::Vivox::VivoxConfigurationOptions*)>(
    &::Unity::Services::Vivox::Client::Initialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1c2dfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxConfigurationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Vivox::Client::*)(::Unity::Services::Vivox::VivoxConfigurationOptions*)>(&::Unity::Services::Vivox::Client::InitializeAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1c23188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxConfigurationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.BeginGetConnectorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::Client::*)(::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::Client::BeginGetConnectorHandle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1c2e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "BeginGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.BeginGetConnectorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Unity::Services::Vivox::Client::*)(::System::Uri*, ::System::AsyncCallback*)>(
    &::Unity::Services::Vivox::Client::BeginGetConnectorHandle)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x1c2e1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "BeginGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.EndGetConnectorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::Client::*)(::System::IAsyncResult*)>(
    &::Unity::Services::Vivox::Client::EndGetConnectorHandle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1c2e4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "EndGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.RemoveLoginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)(::Unity::Services::Vivox::AccountId*)>(
    &::Unity::Services::Vivox::Client::RemoveLoginSession)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1c2e57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "RemoveLoginSession", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.AddLoginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Vivox::Client::*)(::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::LoginSession*)>(&::Unity::Services::Vivox::Client::AddLoginSession)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1c2e5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "AddLoginSession", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::LoginSession*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.Uninitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::Uninitialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1c2e678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Uninitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::Client::Cleanup)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1c2ead0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_InternalVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Vivox::Client::get_InternalVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c2eb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_InternalVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.GetLoginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ILoginSession* (::Unity::Services::Vivox::Client::*)(::Unity::Services::Vivox::AccountId*)>(
    &::Unity::Services::Vivox::Client::GetLoginSession)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1c24554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "GetLoginSession", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_Initialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::get_Initialized)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1c1abd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_Initialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_LoginSessions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*>* (::Unity::Services::Vivox::Client::*)()>(
        &::Unity::Services::Vivox::Client::get_LoginSessions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c2eb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_LoginSessions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_AudioInputDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevices* (::Unity::Services::Vivox::Client::*)()>(
    &::Unity::Services::Vivox::Client::get_AudioInputDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c2eb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(),
                                                                               "get_AudioInputDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_AudioOutputDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IAudioDevices* (::Unity::Services::Vivox::Client::*)()>(
    &::Unity::Services::Vivox::Client::get_AudioOutputDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c2eb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(),
                                                                               "get_AudioOutputDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.get_IsAudioEchoCancellationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Client::*)()>(
    &::Unity::Services::Vivox::Client::get_IsAudioEchoCancellationEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1c1ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_IsAudioEchoCancellationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.SetAudioEchoCancellation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)(bool)>(&::Unity::Services::Vivox::Client::SetAudioEchoCancellation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1c1f5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "SetAudioEchoCancellation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1c2eb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<bool>*)>(&::Unity::Services::Vivox::Client::Run)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1c2eb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitHandle*, ::System::TimeSpan)>(&::Unity::Services::Vivox::Client::Run)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1c2eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.RunOnce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::Client::RunOnce)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1c2ecc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "RunOnce",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.TTSInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::TTSInitialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1c2edc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "TTSInitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Client.TTSShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Client::*)()>(&::Unity::Services::Vivox::Client::TTSShutdown)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1c2e720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "TTSShutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Services::Vivox::Client::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Services::Vivox::Client::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>*&
Unity::Services::Vivox::Client::__cordl_internal_get__loginSessions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginSessions;
}
constexpr ::cordl_internals::to_const_pointer<
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>*> const&
Unity::Services::Vivox::Client::__cordl_internal_get__loginSessions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginSessions;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__loginSessions(
    ::Unity::Services::Vivox::ReadWriteDictionary_3<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*, ::Unity::Services::Vivox::LoginSession*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loginSessions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioInputDevices*& Unity::Services::Vivox::Client::__cordl_internal_get__inputDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputDevices;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioInputDevices*> const& Unity::Services::Vivox::Client::__cordl_internal_get__inputDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputDevices;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__inputDevices(::Unity::Services::Vivox::AudioInputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::AudioOutputDevices*& Unity::Services::Vivox::Client::__cordl_internal_get__outputDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputDevices;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& Unity::Services::Vivox::Client::__cordl_internal_get__outputDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputDevices;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__outputDevices(::Unity::Services::Vivox::AudioOutputDevices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& Unity::Services::Vivox::Client::__cordl_internal_get__serverUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverUri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& Unity::Services::Vivox::Client::__cordl_internal_get__serverUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverUri;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__serverUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::Client::__cordl_internal_get__connectorHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectorHandle;
}
constexpr ::StringW const& Unity::Services::Vivox::Client::__cordl_internal_get__connectorHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectorHandle;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__connectorHandle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectorHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::System::IAsyncResult*>*& Unity::Services::Vivox::Client::__cordl_internal_get__pendingConnectorCreateRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnectorCreateRequests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::IAsyncResult*>*> const&
Unity::Services::Vivox::Client::__cordl_internal_get__pendingConnectorCreateRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingConnectorCreateRequests;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__pendingConnectorCreateRequests(::System::Collections::Generic::Queue_1<::System::IAsyncResult*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingConnectorCreateRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::Vivox::Client::__cordl_internal_get__ttsIsInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsIsInitialized;
}
constexpr bool const& Unity::Services::Vivox::Client::__cordl_internal_get__ttsIsInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsIsInitialized;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__ttsIsInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ttsIsInitialized = value;
}
constexpr uint32_t& Unity::Services::Vivox::Client::__cordl_internal_get__ttsManagerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsManagerId;
}
constexpr uint32_t const& Unity::Services::Vivox::Client::__cordl_internal_get__ttsManagerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ttsManagerId;
}
constexpr void Unity::Services::Vivox::Client::__cordl_internal_set__ttsManagerId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ttsManagerId = value;
}
inline void Unity::Services::Vivox::Client::setStaticF__nextHandle(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_nextHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get>(std::forward<int32_t>(value));
}
inline int32_t Unity::Services::Vivox::Client::getStaticF__nextHandle() {
  return ::cordl_internals::getStaticField<int32_t, "_nextHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get>();
}
inline void Unity::Services::Vivox::Client::setStaticF_requestTimeout(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "requestTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get>(std::forward<int32_t>(value));
}
inline int32_t Unity::Services::Vivox::Client::getStaticF_requestTimeout() {
  return ::cordl_internals::getStaticField<int32_t, "requestTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get>();
}
inline uint32_t Unity::Services::Vivox::Client::get_TTSManagerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_TTSManagerId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::VxTokenGen* Unity::Services::Vivox::Client::get_tokenGen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_tokenGen",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::VxTokenGen*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Vivox::Client::set_tokenGen(::Unity::Services::Vivox::VxTokenGen* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "set_tokenGen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VxTokenGen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Unity::Services::Vivox::Client::get_defaultRealm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_defaultRealm",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Vivox::Client::set_defaultRealm(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "set_defaultRealm", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Services::Vivox::Client::CheckInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "CheckInitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param serverUri: ::System::Uri* (default: nullptr)
inline ::Unity::Services::Vivox::Client* Unity::Services::Vivox::Client::New_ctor(::System::Uri* serverUri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Client*>(serverUri));
}
/// @param serverUri: ::System::Uri* (default: nullptr)
inline void Unity::Services::Vivox::Client::_ctor(::System::Uri* serverUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverUri);
}
/// @param config: ::Unity::Services::Vivox::VivoxConfigurationOptions* (default: nullptr)
inline void Unity::Services::Vivox::Client::Initialize(::Unity::Services::Vivox::VivoxConfigurationOptions* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxConfigurationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
/// @param config: ::Unity::Services::Vivox::VivoxConfigurationOptions* (default: nullptr)
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::Client::InitializeAsync(::Unity::Services::Vivox::VivoxConfigurationOptions* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxConfigurationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, config);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::Client::BeginGetConnectorHandle(::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "BeginGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback);
}
inline ::System::IAsyncResult* Unity::Services::Vivox::Client::BeginGetConnectorHandle(::System::Uri* server, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "BeginGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, server, callback);
}
inline ::StringW Unity::Services::Vivox::Client::EndGetConnectorHandle(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "EndGetConnectorHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, result);
}
inline void Unity::Services::Vivox::Client::RemoveLoginSession(::Unity::Services::Vivox::AccountId* accountId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "RemoveLoginSession", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountId);
}
inline void Unity::Services::Vivox::Client::AddLoginSession(::Unity::Services::Vivox::AccountId* accountId, ::Unity::Services::Vivox::LoginSession* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "AddLoginSession", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::LoginSession*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountId, session);
}
inline void Unity::Services::Vivox::Client::Uninitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Uninitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Client::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Unity::Services::Vivox::Client::get_InternalVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_InternalVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Unity::Services::Vivox::ILoginSession* Unity::Services::Vivox::Client::GetLoginSession(::Unity::Services::Vivox::AccountId* accountId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "GetLoginSession", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::AccountId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ILoginSession*, false>(this, ___internal_method, accountId);
}
inline bool Unity::Services::Vivox::Client::get_Initialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_Initialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*>* Unity::Services::Vivox::Client::get_LoginSessions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_LoginSessions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::ILoginSession*>*, false>(
      this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevices* Unity::Services::Vivox::Client::get_AudioInputDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_AudioInputDevices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevices*, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::IAudioDevices* Unity::Services::Vivox::Client::get_AudioOutputDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_AudioOutputDevices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IAudioDevices*, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::Client::get_IsAudioEchoCancellationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "get_IsAudioEchoCancellationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Client::SetAudioEchoCancellation(bool onOff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "SetAudioEchoCancellation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onOff);
}
inline void Unity::Services::Vivox::Client::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Client::Run(::System::Func_1<bool>* done) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, done);
}
inline bool Unity::Services::Vivox::Client::Run(::System::Threading::WaitHandle* handle, ::System::TimeSpan until) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, until);
}
inline void Unity::Services::Vivox::Client::RunOnce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "RunOnce",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Unity::Services::Vivox::Client::TTSInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "TTSInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Client::TTSShutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Client*>::get(), "TTSShutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Client::Client() {}
