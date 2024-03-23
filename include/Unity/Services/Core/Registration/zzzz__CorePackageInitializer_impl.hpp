#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ProjectConfiguration_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_impl.hpp"
#include "Unity/Services/Core/Registration/zzzz__CorePackageInitializer_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_impl.hpp"
#include "Unity/Services/Core/Registration/zzzz__CorePackageInitializer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ExternalUserId_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Device/zzzz__InstallationId_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__Environments_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include "Unity/Services/Core/Registration/zzzz__CorePackageInitializer_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ActionScheduler_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsComponentProvider_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_def.hpp"
#include "Unity/Services/Core/Threading/Internal/zzzz__UnityThreadUtilsInternal_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0::__CorePackageInitializer____c__DisplayClass40_0(
    ::Unity::Services::Core::Internal::CoreRegistry* registry, ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this) noexcept {
  this->registry = registry;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0::__CorePackageInitializer____c__DisplayClass40_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::*)()>(
    &::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x1df8774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1df8e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__8__1", ty: "::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::__CorePackageInitializer___Initialize_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::CoreRegistry* registry,
    ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this, ::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0 __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->registry = registry;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___Initialize_d__40::__CorePackageInitializer___Initialize_d__40() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::*)()>(
    &::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x1df8e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1df9054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::__CorePackageInitializer___InitializeProjectConfigAsync_d__45(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this,
    ::Unity::Services::Core::InitializationOptions* options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->options = options;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___InitializeProjectConfigAsync_d__45::__CorePackageInitializer___InitializeProjectConfigAsync_d__45() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::*)()>(
        &::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x1df9060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1df9318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "options",
// ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*> __t__builder,
    ::Unity::Services::Core::InitializationOptions* options,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->options = options;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46::__CorePackageInitializer___GenerateProjectConfigurationAsync_d__46() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::*)()>(
    &::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1df9370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1df9730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47>::get(),
                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47>::get(),
                                 "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47::__CorePackageInitializer___GetSerializedConfigOrEmptyAsync_d__47() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::*)()>(
    &::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x1df9788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1df9a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::__CorePackageInitializer___CreateDiagnosticsComponents_d__54(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __t__builder,
    ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___CreateDiagnosticsComponents_d__54::__CorePackageInitializer___CreateDiagnosticsComponents_d__54() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::*)()>(
        &::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x1df9ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1df9da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::Unity::Services::Core::Registration::CorePackageInitializer* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56::__CorePackageInitializer___GetSerializedProjectConfigurationAsync_d__56() {}
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_ActionScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Scheduler::Internal::ActionScheduler* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_ActionScheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df76e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ActionScheduler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_ActionScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_ActionScheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df76f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ActionScheduler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_InstallationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Device::InstallationId* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_InstallationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df76f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_InstallationId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_InstallationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Device::InstallationId*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_InstallationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_InstallationId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Device::InstallationId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_ProjectConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::ProjectConfiguration* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_ProjectConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ProjectConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_ProjectConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::ProjectConfiguration*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_ProjectConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ProjectConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_Environments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Environments::Internal::Environments* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_Environments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_Environments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_Environments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Environments::Internal::Environments*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_Environments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_Environments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::Environments*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_ExternalUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::ExternalUserId* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_ExternalUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ExternalUserId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_ExternalUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::ExternalUserId*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_ExternalUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ExternalUserId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ExternalUserId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_CloudProjectId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::Internal::ICloudProjectId* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_CloudProjectId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_CloudProjectId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_CloudProjectId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_CloudProjectId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_CloudProjectId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_DiagnosticsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_DiagnosticsFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "get_DiagnosticsFactory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_DiagnosticsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_DiagnosticsFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_DiagnosticsFactory",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_MetricsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_MetricsFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_MetricsFactory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_MetricsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_MetricsFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_MetricsFactory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.get_UnityThreadUtils
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::get_UnityThreadUtils)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_UnityThreadUtils",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.set_UnityThreadUtils
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::set_UnityThreadUtils)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df7770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_UnityThreadUtils", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::Register)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1df7778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "Register",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)(::Unity::Services::Core::Internal::CoreRegistry*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::Initialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1df7a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.HaveInitOptionsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::HaveInitOptionsChanged)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1df7adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "HaveInitOptionsChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.FreeOptionsDependantComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::FreeOptionsDependantComponents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1df7c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "FreeOptionsDependantComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeInstallationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeInstallationId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1df7c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "InitializeInstallationId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeActionScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeActionScheduler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1df7c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "InitializeActionScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeProjectConfigAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Registration::CorePackageInitializer::*)(::Unity::Services::Core::InitializationOptions*)>(
        &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeProjectConfigAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1df7d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "InitializeProjectConfigAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.GenerateProjectConfigurationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>* (*)(::Unity::Services::Core::InitializationOptions*)>(
        &::Unity::Services::Core::Registration::CorePackageInitializer::GenerateProjectConfigurationAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1df7dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "GenerateProjectConfigurationAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.GetSerializedConfigOrEmptyAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* (*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::GetSerializedConfigOrEmptyAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1df7edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "GetSerializedConfigOrEmptyAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeExternalUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::InitializeExternalUserId)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1df7fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeExternalUserId",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeEnvironments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::InitializeEnvironments)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1df812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeEnvironments",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeCloudProjectId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*)>(&::Unity::Services::Core::Registration::CorePackageInitializer::InitializeCloudProjectId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1df8258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeCloudProjectId",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeDiagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*,
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeDiagnostics)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1df82c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeDiagnostics",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*,
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeMetrics)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1df82fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeMetrics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.InitializeUnityThreadUtils
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::InitializeUnityThreadUtils)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1df8330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "InitializeUnityThreadUtils", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.CreateDiagnosticsComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>* (
    ::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(&::Unity::Services::Core::Registration::CorePackageInitializer::CreateDiagnosticsComponents)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1df8398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "CreateDiagnosticsComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer.GetSerializedProjectConfigurationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::GetSerializedProjectConfigurationAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1df8488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                                 "GetSerializedProjectConfigurationAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)()>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1df79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer._Initialize_g__RegisterProvidedComponents_40_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Registration::CorePackageInitializer::*)(ByRef<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0>)>(
        &::Unity::Services::Core::Registration::CorePackageInitializer::_Initialize_g__RegisterProvidedComponents_40_0)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1df8578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                   "<Initialize>g__RegisterProvidedComponents|40_0", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Registration::CorePackageInitializer._Initialize_g__SendFailedInitDiagnostic_40_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(
    &::Unity::Services::Core::Registration::CorePackageInitializer::_Initialize_g__SendFailedInitDiagnostic_40_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1df8710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "<Initialize>g__SendFailedInitDiagnostic|40_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr Unity::Services::Core::Registration::CorePackageInitializer::operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::Core::Registration::CorePackageInitializer::i___Unity__Services__Core__Internal__IInitializablePackage() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
constexpr Unity::Services::Core::Registration::CorePackageInitializer::operator ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*
Unity::Services::Core::Registration::CorePackageInitializer::i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsComponentProvider() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ActionScheduler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActionScheduler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ActionScheduler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActionScheduler_k__BackingField;
}
constexpr void
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__ActionScheduler_k__BackingField(::Unity::Services::Core::Scheduler::Internal::ActionScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ActionScheduler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Device::InstallationId*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__InstallationId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstallationId_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Device::InstallationId*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__InstallationId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstallationId_k__BackingField;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__InstallationId_k__BackingField(::Unity::Services::Core::Device::InstallationId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InstallationId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Configuration::ProjectConfiguration*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ProjectConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProjectConfig_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::ProjectConfiguration*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ProjectConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProjectConfig_k__BackingField;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__ProjectConfig_k__BackingField(::Unity::Services::Core::Configuration::ProjectConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProjectConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Environments::Internal::Environments*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__Environments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Environments_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Environments::Internal::Environments*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__Environments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Environments_k__BackingField;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__Environments_k__BackingField(::Unity::Services::Core::Environments::Internal::Environments* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Environments_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Configuration::ExternalUserId*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ExternalUserId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExternalUserId_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::ExternalUserId*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__ExternalUserId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExternalUserId_k__BackingField;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__ExternalUserId_k__BackingField(::Unity::Services::Core::Configuration::ExternalUserId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ExternalUserId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__CloudProjectId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloudProjectId_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__CloudProjectId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloudProjectId_k__BackingField;
}
constexpr void
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__CloudProjectId_k__BackingField(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CloudProjectId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__DiagnosticsFactory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DiagnosticsFactory_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__DiagnosticsFactory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DiagnosticsFactory_k__BackingField;
}
constexpr void
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__DiagnosticsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DiagnosticsFactory_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__MetricsFactory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MetricsFactory_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__MetricsFactory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MetricsFactory_k__BackingField;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__MetricsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MetricsFactory_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__UnityThreadUtils_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityThreadUtils_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get__UnityThreadUtils_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityThreadUtils_k__BackingField;
}
constexpr void
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set__UnityThreadUtils_k__BackingField(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UnityThreadUtils_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::InitializationOptions*& Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get_m_CurrentInitializationOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentInitializationOptions;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::InitializationOptions*> const&
Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_get_m_CurrentInitializationOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentInitializationOptions;
}
constexpr void Unity::Services::Core::Registration::CorePackageInitializer::__cordl_internal_set_m_CurrentInitializationOptions(::Unity::Services::Core::InitializationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentInitializationOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* Unity::Services::Core::Registration::CorePackageInitializer::get_ActionScheduler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ActionScheduler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_ActionScheduler(::Unity::Services::Core::Scheduler::Internal::ActionScheduler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ActionScheduler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ActionScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Device::InstallationId* Unity::Services::Core::Registration::CorePackageInitializer::get_InstallationId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_InstallationId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Device::InstallationId*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_InstallationId(::Unity::Services::Core::Device::InstallationId* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_InstallationId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Device::InstallationId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Configuration::ProjectConfiguration* Unity::Services::Core::Registration::CorePackageInitializer::get_ProjectConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ProjectConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::ProjectConfiguration*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_ProjectConfig(::Unity::Services::Core::Configuration::ProjectConfiguration* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ProjectConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Environments::Internal::Environments* Unity::Services::Core::Registration::CorePackageInitializer::get_Environments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_Environments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Environments::Internal::Environments*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_Environments(::Unity::Services::Core::Environments::Internal::Environments* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_Environments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::Environments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Configuration::ExternalUserId* Unity::Services::Core::Registration::CorePackageInitializer::get_ExternalUserId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_ExternalUserId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::ExternalUserId*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_ExternalUserId(::Unity::Services::Core::Configuration::ExternalUserId* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_ExternalUserId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ExternalUserId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* Unity::Services::Core::Registration::CorePackageInitializer::get_CloudProjectId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_CloudProjectId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_CloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_CloudProjectId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* Unity::Services::Core::Registration::CorePackageInitializer::get_DiagnosticsFactory() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_DiagnosticsFactory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_DiagnosticsFactory(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_DiagnosticsFactory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* Unity::Services::Core::Registration::CorePackageInitializer::get_MetricsFactory() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_MetricsFactory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_MetricsFactory(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_MetricsFactory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* Unity::Services::Core::Registration::CorePackageInitializer::get_UnityThreadUtils() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "get_UnityThreadUtils",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::set_UnityThreadUtils(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "set_UnityThreadUtils", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::Register() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "Register",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Registration::CorePackageInitializer::Initialize(::Unity::Services::Core::Internal::CoreRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
inline bool Unity::Services::Core::Registration::CorePackageInitializer::HaveInitOptionsChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "HaveInitOptionsChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::FreeOptionsDependantComponents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "FreeOptionsDependantComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeInstallationId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "InitializeInstallationId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeActionScheduler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "InitializeActionScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Registration::CorePackageInitializer::InitializeProjectConfigAsync(::Unity::Services::Core::InitializationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeProjectConfigAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>*
Unity::Services::Core::Registration::CorePackageInitializer::GenerateProjectConfigurationAsync(::Unity::Services::Core::InitializationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "GenerateProjectConfigurationAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>*, false>(nullptr, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*
Unity::Services::Core::Registration::CorePackageInitializer::GetSerializedConfigOrEmptyAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "GetSerializedConfigOrEmptyAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeExternalUserId(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeExternalUserId",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectConfiguration);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeEnvironments(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeEnvironments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectConfiguration);
}
/// @param cloudProjectId: ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* (default: nullptr)
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeCloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeCloudProjectId",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeDiagnostics(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                               ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                                                                                               ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                               ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeDiagnostics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scheduler, projectConfiguration, cloudProjectId, environments);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeMetrics(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                           ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                                                                                           ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                           ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "InitializeMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scheduler, projectConfiguration, cloudProjectId, environments);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::InitializeUnityThreadUtils() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "InitializeUnityThreadUtils", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>*
Unity::Services::Core::Registration::CorePackageInitializer::CreateDiagnosticsComponents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "CreateDiagnosticsComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Core::Registration::CorePackageInitializer::GetSerializedProjectConfigurationAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                               "GetSerializedProjectConfigurationAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Registration::CorePackageInitializer* Unity::Services::Core::Registration::CorePackageInitializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Registration::CorePackageInitializer*>());
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Registration::CorePackageInitializer::_Initialize_g__RegisterProvidedComponents_40_0(
    ByRef<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(),
                                  "<Initialize>g__RegisterProvidedComponents|40_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Registration::__CorePackageInitializer____c__DisplayClass40_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Unity::Services::Core::Registration::CorePackageInitializer::_Initialize_g__SendFailedInitDiagnostic_40_1(::System::Exception* reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Registration::CorePackageInitializer*>::get(), "<Initialize>g__SendFailedInitDiagnostic|40_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reason);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Registration::CorePackageInitializer::CorePackageInitializer() {}
