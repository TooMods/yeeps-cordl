#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VxTokenGen_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxJWTTokenGen_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Unity/Services/Vivox/Mint/Apis/Default/zzzz__DefaultApiClient_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxJWTTokenGen_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxServiceInternal_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::*)()>(
    &::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x1c2a63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1c2accc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "issuer", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "expiration", ty:
// "::System::Nullable_1<::System::TimeSpan>", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetUserUri", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "action", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "channelUri", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fromUserUri",
// ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::__VivoxJWTTokenGen___GetTokenAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this, ::StringW issuer,
    ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action, ::StringW channelUri, ::StringW fromUserUri,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->issuer = issuer;
  this->expiration = expiration;
  this->targetUserUri = targetUserUri;
  this->action = action;
  this->channelUri = channelUri;
  this->fromUserUri = fromUserUri;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4::__VivoxJWTTokenGen___GetTokenAsync_d__4() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::*)()>(
    &::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x1c2ad24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1c2b0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5() {}
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::*)()>(
    &::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x1c2b100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1c2b494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "channelUri", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this, ::StringW channelUri,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->channelUri = channelUri;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6() {}
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxJWTTokenGen._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxJWTTokenGen::*)(::Unity::Services::Vivox::VivoxServiceInternal*)>(
    &::Unity::Services::Vivox::VivoxJWTTokenGen::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1c23284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxServiceInternal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxJWTTokenGen.GetToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxJWTTokenGen::*)(
    ::StringW, ::System::Nullable_1<::System::TimeSpan>, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Unity::Services::Vivox::VivoxJWTTokenGen::GetToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1c2a2fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxJWTTokenGen.GetTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::Unity::Services::Vivox::VivoxJWTTokenGen::*)(::StringW, ::System::Nullable_1<::System::TimeSpan>, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::Unity::Services::Vivox::VivoxJWTTokenGen::GetTokenAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1c2a314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxJWTTokenGen.FetchLoginMintTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Unity::Services::Vivox::VivoxJWTTokenGen::*)()>(
    &::Unity::Services::Vivox::VivoxJWTTokenGen::FetchLoginMintTokenAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1c2a450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(),
                                                                               "FetchLoginMintTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxJWTTokenGen.FetchChannelJoinMintTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Unity::Services::Vivox::VivoxJWTTokenGen::*)(::StringW)>(
    &::Unity::Services::Vivox::VivoxJWTTokenGen::FetchChannelJoinMintTokenAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1c2a540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), "FetchChannelJoinMintTokenAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::VivoxServiceInternal*& Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_get_m_VivoxService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VivoxService;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxServiceInternal*> const& Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_get_m_VivoxService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VivoxService;
}
constexpr void Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_set_m_VivoxService(::Unity::Services::Vivox::VivoxServiceInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VivoxService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*& Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_get_m_MintApiClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MintApiClient;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*> const&
Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_get_m_MintApiClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MintApiClient;
}
constexpr void Unity::Services::Vivox::VivoxJWTTokenGen::__cordl_internal_set_m_MintApiClient(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MintApiClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::VivoxJWTTokenGen* Unity::Services::Vivox::VivoxJWTTokenGen::New_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::VivoxJWTTokenGen*>(vivoxService));
}
inline void Unity::Services::Vivox::VivoxJWTTokenGen::_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::VivoxServiceInternal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vivoxService);
}
/// @param issuer: ::StringW (default: nullptr)
/// @param expiration: ::System::Nullable_1<::System::TimeSpan> (default: {})
/// @param targetUserUri: ::StringW (default: nullptr)
/// @param action: ::StringW (default: nullptr)
/// @param tokenKey: ::StringW (default: nullptr)
/// @param channelUri: ::StringW (default: nullptr)
/// @param fromUserUri: ::StringW (default: nullptr)
inline ::StringW Unity::Services::Vivox::VivoxJWTTokenGen::GetToken(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action,
                                                                    ::StringW tokenKey, ::StringW channelUri, ::StringW fromUserUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, issuer, expiration, targetUserUri, action, tokenKey, channelUri, fromUserUri);
}
/// @param issuer: ::StringW (default: nullptr)
/// @param expiration: ::System::Nullable_1<::System::TimeSpan> (default: {})
/// @param targetUserUri: ::StringW (default: nullptr)
/// @param action: ::StringW (default: nullptr)
/// @param tokenKey: ::StringW (default: nullptr)
/// @param channelUri: ::StringW (default: nullptr)
/// @param fromUserUri: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Vivox::VivoxJWTTokenGen::GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration,
                                                                                                              ::StringW targetUserUri, ::StringW action, ::StringW tokenKey, ::StringW channelUri,
                                                                                                              ::StringW fromUserUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, issuer, expiration, targetUserUri, action, tokenKey, channelUri,
                                                                                                    fromUserUri);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Vivox::VivoxJWTTokenGen::FetchLoginMintTokenAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(),
                                                                             "FetchLoginMintTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Vivox::VivoxJWTTokenGen::FetchChannelJoinMintTokenAsync(::StringW channelUri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxJWTTokenGen*>::get(), "FetchChannelJoinMintTokenAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, channelUri);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxJWTTokenGen::VivoxJWTTokenGen() {}
