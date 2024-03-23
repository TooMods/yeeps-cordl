#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreDiagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreDiagnostics_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsComponentProvider_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::*)()>(
    &::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x266f658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreDiagnostics*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "diagnosticName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "exception", ty:
// "::System::Exception*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this, ::StringW diagnosticName,
    ::System::Exception* exception, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->diagnosticName = diagnosticName;
  this->exception = exception;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::*)()>(
    &::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x266f8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x266fd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this",
// ty: "::Unity::Services::Core::Internal::CoreDiagnostics*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __t__builder,
    ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::CoreDiagnostics* (*)()>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x266f020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Core::Internal::CoreDiagnostics*)>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x266f068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.get_CoreTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::get_CoreTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                               "get_CoreTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.get_DiagnosticsComponentProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* (
    ::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::get_DiagnosticsComponentProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "get_DiagnosticsComponentProvider",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.set_DiagnosticsComponentProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(
    ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::set_DiagnosticsComponentProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_DiagnosticsComponentProvider",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.get_Diagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IDiagnostics* (
    ::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::get_Diagnostics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                               "get_Diagnostics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.set_Diagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(
    ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::set_Diagnostics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_Diagnostics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.SetProjectConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(::StringW)>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::SetProjectConfiguration)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x266f0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SetProjectConfiguration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.SendCircularDependencyDiagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(::System::Exception*)>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::SendCircularDependencyDiagnostics)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x266f1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCircularDependencyDiagnostics",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.SendCorePackageInitDiagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(::System::Exception*)>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::SendCorePackageInitDiagnostics)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x266f344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCorePackageInitDiagnostics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.SendOperateServicesInitDiagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(::System::Exception*)>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::SendOperateServicesInitDiagnostics)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x266f408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendOperateServicesInitDiagnostics",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.SendCoreDiagnosticsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Core::Internal::CoreDiagnostics::*)(::StringW, ::System::Exception*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::SendCoreDiagnosticsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x266f268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCoreDiagnosticsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.OnSendFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::OnSendFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x266f4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "OnSendFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.GetOrCreateDiagnosticsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>* (
    ::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::GetOrCreateDiagnosticsAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x266f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                               "GetOrCreateDiagnosticsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(
    &::Unity::Services::Core::Internal::CoreDiagnostics::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x266f5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__CoreTags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CoreTags_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__CoreTags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CoreTags_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_set__CoreTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CoreTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*&
Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DiagnosticsComponentProvider_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*> const&
Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DiagnosticsComponentProvider_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_set__DiagnosticsComponentProvider_k__BackingField(
    ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DiagnosticsComponentProvider_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__Diagnostics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Diagnostics_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> const&
Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__Diagnostics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Diagnostics_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_set__Diagnostics_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnostics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Diagnostics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Core::Internal::CoreDiagnostics*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get>(
      std::forward<::Unity::Services::Core::Internal::CoreDiagnostics*>(value));
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::Unity::Services::Core::Internal::CoreDiagnostics*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get>();
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreDiagnostics*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::set_Instance(::Unity::Services::Core::Internal::CoreDiagnostics* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Unity::Services::Core::Internal::CoreDiagnostics::get_CoreTags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             "get_CoreTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* Unity::Services::Core::Internal::CoreDiagnostics::get_DiagnosticsComponentProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             "get_DiagnosticsComponentProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::set_DiagnosticsComponentProvider(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_DiagnosticsComponentProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::get_Diagnostics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             "get_Diagnostics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::set_Diagnostics(::Unity::Services::Core::Telemetry::Internal::IDiagnostics* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "set_Diagnostics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::SetProjectConfiguration(::StringW serializedProjectConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SetProjectConfiguration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedProjectConfig);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::SendCircularDependencyDiagnostics(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCircularDependencyDiagnostics",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::SendCorePackageInitDiagnostics(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCorePackageInitDiagnostics",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::SendOperateServicesInitDiagnostics(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendOperateServicesInitDiagnostics",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::CoreDiagnostics::SendCoreDiagnosticsAsync(::StringW diagnosticName, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "SendCoreDiagnosticsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, diagnosticName, exception);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::OnSendFailed(::System::Threading::Tasks::Task* failedSendTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(), "OnSendFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, failedSendTask);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>* Unity::Services::Core::Internal::CoreDiagnostics::GetOrCreateDiagnosticsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             "GetOrCreateDiagnosticsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CoreDiagnostics*>());
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreDiagnostics::CoreDiagnostics() {}
