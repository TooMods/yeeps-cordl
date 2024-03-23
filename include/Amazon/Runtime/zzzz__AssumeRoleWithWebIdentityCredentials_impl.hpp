#pragma once
#include "Amazon/Runtime/zzzz__AssumeRoleImmutableCredentials_impl.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleWithWebIdentityCredentials_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonSTS_WebIdentity_def.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleImmutableCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleWithWebIdentityCredentialsOptions_def.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleWithWebIdentityCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::*)()>(
    &::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xba8;
  constexpr static std::size_t addrs = 0x1fe6dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe7954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_token_5__2", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_retry_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileStream_5__4", ty: "::System::IO::FileStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_streamReader_5__5", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_coreStsClient_5__6", ty:
// "::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::AssumeRoleImmutableCredentials*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder,
    ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* __4__this, ::StringW _token_5__2, int32_t _retry_5__3, ::System::IO::FileStream* _fileStream_5__4,
    ::System::IO::StreamReader* _streamReader_5__5, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__1,
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* _coreStsClient_5__6,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::AssumeRoleImmutableCredentials*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_token_5__2 = _token_5__2;
  this->_retry_5__3 = _retry_5__3;
  this->_fileStream_5__4 = _fileStream_5__4;
  this->_streamReader_5__5 = _streamReader_5__5;
  this->__u__1 = __u__1;
  this->_coreStsClient_5__6 = _coreStsClient_5__6;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22() {}
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.get_WebIdentityTokenFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(
    &::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_WebIdentityTokenFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe5c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                               "get_WebIdentityTokenFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.get_RoleArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(
    &::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_RoleArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe5c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                               "get_RoleArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.get_RoleSessionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(
    &::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_RoleSessionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe5c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                               "get_RoleSessionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)(::StringW, ::StringW, ::StringW)>(
    &::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fe5c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)(
    ::StringW, ::StringW, ::StringW, ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*)>(&::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::_ctor)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1fe5cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.FromEnvironmentVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* (*)()>(
    &::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::FromEnvironmentVariables)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1fe6024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                               "FromEnvironmentVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.GenerateNewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* (
    ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(&::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::GenerateNewCredentials)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x1fe6108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.GenerateNewCredentialsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* (
    ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(&::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::GenerateNewCredentialsAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fe68bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials.CreateClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* (
    ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::*)()>(&::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::CreateClient)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1fe69e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*> const&
Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_set__options(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__WebIdentityTokenFile_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebIdentityTokenFile_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__WebIdentityTokenFile_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebIdentityTokenFile_k__BackingField;
}
constexpr void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_set__WebIdentityTokenFile_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WebIdentityTokenFile_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__RoleArn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleArn_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__RoleArn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleArn_k__BackingField;
}
constexpr void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_set__RoleArn_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RoleArn_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__RoleSessionName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleSessionName_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_get__RoleSessionName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoleSessionName_k__BackingField;
}
constexpr void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::__cordl_internal_set__RoleSessionName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RoleSessionName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::setStaticF__defaultSTSClientRegion(::Amazon::RegionEndpoint* value) {
  ::cordl_internals::setStaticField<::Amazon::RegionEndpoint*, "_defaultSTSClientRegion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>(
      std::forward<::Amazon::RegionEndpoint*>(value));
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::getStaticF__defaultSTSClientRegion() {
  return ::cordl_internals::getStaticField<::Amazon::RegionEndpoint*, "_defaultSTSClientRegion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>();
}
inline void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::setStaticF__roleSessionNameDefault(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_roleSessionNameDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::getStaticF__roleSessionNameDefault() {
  return ::cordl_internals::getStaticField<::StringW, "_roleSessionNameDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>();
}
inline void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::setStaticF__roleSessionNameRegex(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "_roleSessionNameRegex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::getStaticF__roleSessionNameRegex() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "_roleSessionNameRegex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get>();
}
inline ::StringW Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_WebIdentityTokenFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                             "get_WebIdentityTokenFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_RoleArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                             "get_RoleArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::get_RoleSessionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                             "get_RoleSessionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::New_ctor(::StringW webIdentityTokenFile, ::StringW roleArn,
                                                                                                                                ::StringW roleSessionName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>(webIdentityTokenFile, roleArn, roleSessionName));
}
inline void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::_ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webIdentityTokenFile, roleArn, roleSessionName);
}
inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*
Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::New_ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName,
                                                                ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>(webIdentityTokenFile, roleArn, roleSessionName, options));
}
inline void Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::_ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName,
                                                                         ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webIdentityTokenFile, roleArn, roleSessionName, options);
}
inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::FromEnvironmentVariables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(),
                                                                             "FromEnvironmentVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::GenerateNewCredentials() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>*
Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::GenerateNewCredentialsAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::CreateClient() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials::AssumeRoleWithWebIdentityCredentials() {}
