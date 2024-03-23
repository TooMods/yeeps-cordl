#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__StreamingAssetsConfigurationLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__IConfigurationLoader_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__StreamingAssetsConfigurationLoader_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::*)()>(
    &::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x264b3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x264b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0::__StreamingAssetsConfigurationLoader___GetConfigAsync_d__0() {}
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader.GetConfigAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* (
    ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::*)()>(&::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::GetConfigAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x264b2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                                                 "GetConfigAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::*)()>(
    &::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264ab48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::operator ::Unity::Services::Core::Configuration::IConfigurationLoader*() noexcept {
  return static_cast<::Unity::Services::Core::Configuration::IConfigurationLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr ::Unity::Services::Core::Configuration::IConfigurationLoader*
Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::i___Unity__Services__Core__Configuration__IConfigurationLoader() noexcept {
  return static_cast<::Unity::Services::Core::Configuration::IConfigurationLoader*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*
Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::GetConfigAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                                               "GetConfigAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader* Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>());
}
inline void Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::StreamingAssetsConfigurationLoader() {}
