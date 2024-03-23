#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__GenerateDataKeyResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/SharedInterfaces/Internal/zzzz__CoreAmazonKMS_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/Internal/zzzz__CoreAmazonKMS_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GenerateDataKeyResult_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonKMS_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::*)()>(
    &::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2021e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20220a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ciphertextBlob", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "encryptionContext", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::__CoreAmazonKMS___DecryptAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
    ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->ciphertextBlob = ciphertextBlob;
  this->encryptionContext = encryptionContext;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8::__CoreAmazonKMS___DecryptAsync_d__8() {}
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::*)()>(
    &::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x20220fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2022394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this",
// ty: "::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "keyID", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "encryptionContext", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "keySpec", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::__CoreAmazonKMS___GenerateDataKeyAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __t__builder,
    ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this, ::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->keyID = keyID;
  this->encryptionContext = encryptionContext;
  this->keySpec = keySpec;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9::__CoreAmazonKMS___GenerateDataKeyAsync_d__9() {}
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(
    ::Amazon::Runtime::AmazonServiceClient*, ::StringW)>(&::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2021524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Decrypt)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20215a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "Decrypt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.GenerateDataKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* (
    ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::GenerateDataKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2021748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "GenerateDataKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.DecryptAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::DecryptAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2021810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "DecryptAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.GenerateDataKeyAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>* (
    ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::GenerateDataKeyAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2021944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "GenerateDataKeyAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.EnsureWrappedClientIsInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)()>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::EnsureWrappedClientIsInstantiated)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2021668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(),
                                                 "EnsureWrappedClientIsInstantiated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.CreateFromExistingClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* (*)(::Amazon::Runtime::AmazonServiceClient*, ::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::CreateFromExistingClient)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2021a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(),
                                                 "CreateFromExistingClient", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)()>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2021c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::*)(bool)>(
    &::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Dispose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2021ca0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS"
constexpr Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::operator ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*() noexcept {
  return static_cast<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS"
constexpr ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::i___Amazon__Runtime__SharedInterfaces__ICoreAmazonKMS() noexcept {
  return static_cast<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Object*& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_wrappedClientLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedClientLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_wrappedClientLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedClientLock;
}
constexpr void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_set_wrappedClientLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrappedClientLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_wrappedClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedClient;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*> const&
Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_wrappedClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedClient;
}
constexpr void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_set_wrappedClient(::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrappedClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::AmazonServiceClient*& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_existingClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingClient;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonServiceClient*> const& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_existingClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingClient;
}
constexpr void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_set_existingClient(::Amazon::Runtime::AmazonServiceClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___existingClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_feature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr ::StringW const& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_feature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_set_feature(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___feature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
inline ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::New_ctor(::Amazon::Runtime::AmazonServiceClient* existingClient,
                                                                                                                                          ::StringW feature) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>(existingClient, feature));
}
inline void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::_ctor(::Amazon::Runtime::AmazonServiceClient* existingClient, ::StringW feature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, existingClient, feature);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "Decrypt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, ciphertextBlob, encryptionContext);
}
inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*
Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::GenerateDataKey(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "GenerateDataKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*, false>(this, ___internal_method, keyID, encryptionContext, keySpec);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::DecryptAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "DecryptAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, ciphertextBlob, encryptionContext);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*
Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::GenerateDataKeyAsync(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
                                                                                 ::StringW keySpec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "GenerateDataKeyAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*, false>(this, ___internal_method, keyID,
                                                                                                                                                      encryptionContext, keySpec);
}
inline void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::EnsureWrappedClientIsInstantiated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(),
                                               "EnsureWrappedClientIsInstantiated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::CreateFromExistingClient(::Amazon::Runtime::AmazonServiceClient* existingClient,
                                                                                                                                                 ::StringW feature) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "CreateFromExistingClient",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*, false>(nullptr, ___internal_method, existingClient, feature);
}
inline void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS::CoreAmazonKMS() {}
