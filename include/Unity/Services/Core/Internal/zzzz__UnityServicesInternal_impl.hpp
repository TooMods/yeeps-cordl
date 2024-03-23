#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageInitializationInfo_impl.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationState_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityServicesInternal_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreDiagnostics_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreMetrics_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageInitializationInfo_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityServicesInternal_def.hpp"
#include "Unity/Services/Core/zzzz__IUnityServices_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationState_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x26711c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26714cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::__UnityServicesInternal___InitializeAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this,
    ::Unity::Services::Core::InitializationOptions* options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->options = options;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeAsync_d__20::__UnityServicesInternal___InitializeAsync_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::*)()>(
        &::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::MoveNext)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2671850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d>::get(),
        "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2671a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::operator ::System::Runtime::CompilerServices::
    IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d>::get(),
      "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::
    __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __t__builder,
        ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __4__this,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d::
    __UnityServicesInternal____c__DisplayClass22_0____InitializeServicesAsync_g__InitializePackagesAsync_1_d() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26714d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0._InitializeServicesAsync_g__SortPackages_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__SortPackages_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26714e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                                 "<InitializeServicesAsync>g__SortPackages|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0._InitializeServicesAsync_g__InitializePackagesAsync_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>* (::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__InitializePackagesAsync_1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2671508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                                 "<InitializeServicesAsync>g__InitializePackagesAsync|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0._InitializeServicesAsync_g__FailServicesInitialization_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::*)(::System::Exception*)>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__FailServicesInitialization_2)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26715f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                                 "<InitializeServicesAsync>g__FailServicesInitialization|2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0._InitializeServicesAsync_g__SucceedServicesInitialization_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__SucceedServicesInitialization_3)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x26716e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                                 "<InitializeServicesAsync>g__SucceedServicesInitialization|3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Internal::DependencyTree*& Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_dependencyTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependencyTree;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::DependencyTree*> const&
Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_dependencyTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependencyTree;
}
constexpr void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_set_dependencyTree(::Unity::Services::Core::Internal::DependencyTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dependencyTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_sortedPackageTypeHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedPackageTypeHashes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_sortedPackageTypeHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortedPackageTypeHashes;
}
constexpr void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_set_sortedPackageTypeHashes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortedPackageTypeHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::UnityServicesInternal*& Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::UnityServicesInternal*> const&
Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_set___4__this(::Unity::Services::Core::Internal::UnityServicesInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::Stopwatch*& Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_initStopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initStopwatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const&
Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_get_initStopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initStopwatch;
}
constexpr void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__cordl_internal_set_initStopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initStopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>());
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__SortPackages_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                               "<InitializeServicesAsync>g__SortPackages|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>*
Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__InitializePackagesAsync_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                               "<InitializeServicesAsync>g__InitializePackagesAsync|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>*, false>(
      this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__FailServicesInitialization_2(::System::Exception* reason) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                               "<InitializeServicesAsync>g__FailServicesInitialization|2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::_InitializeServicesAsync_g__SucceedServicesInitialization_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*>::get(),
                                               "<InitializeServicesAsync>g__SucceedServicesInitialization|3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0::__UnityServicesInternal____c__DisplayClass22_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2671ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2672008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty: "::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::__UnityServicesInternal___InitializeServicesAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this,
    ::Unity::Services::Core::Internal::__UnityServicesInternal____c__DisplayClass22_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___InitializeServicesAsync_d__22::__UnityServicesInternal___InitializeServicesAsync_d__22() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::*)()>(
    &::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2672014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26721b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::__UnityServicesInternal___EnableInitializationAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__UnityServicesInternal___EnableInitializationAsync_d__24::__UnityServicesInternal___EnableInitializationAsync_d__24() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::ServicesInitializationState (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInternal::*)(
    ::Unity::Services::Core::ServicesInitializationState)>(&::Unity::Services::Core::Internal::UnityServicesInternal::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::ServicesInitializationState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::InitializationOptions* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.set_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInternal::*)(::Unity::Services::Core::InitializationOptions*)>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.get_Registry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::CoreRegistry* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::get_Registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "get_Registry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.get_Metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::CoreMetrics* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::get_Metrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "get_Metrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.get_Diagnostics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::CoreDiagnostics* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::get_Diagnostics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2670e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "get_Diagnostics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInternal::*)(
    ::Unity::Services::Core::Internal::CoreRegistry*, ::Unity::Services::Core::Internal::CoreMetrics*, ::Unity::Services::Core::Internal::CoreDiagnostics*)>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2670a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Core::Internal::UnityServicesInternal::*)(::Unity::Services::Core::InitializationOptions*)>(&::Unity::Services::Core::Internal::UnityServicesInternal::InitializeAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2670e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.HasRequestedInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::HasRequestedInitialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2670f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "HasRequestedInitialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.InitializeServicesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::InitializeServicesAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2670f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "InitializeServicesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.SendInitializationMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInternal::*)(
    ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*)>(&::Unity::Services::Core::Internal::UnityServicesInternal::SendInitializationMetrics)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2670fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "SendInitializationMetrics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal.EnableInitializationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::EnableInitializationAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2670d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                               "EnableInitializationAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInternal._InitializeAsync_g__HasInitializationFailed_20_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::UnityServicesInternal::*)()>(
    &::Unity::Services::Core::Internal::UnityServicesInternal::_InitializeAsync_g__HasInitializationFailed_20_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2671148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                 "<InitializeAsync>g__HasInitializationFailed|20_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::IUnityServices"
constexpr Unity::Services::Core::Internal::UnityServicesInternal::operator ::Unity::Services::Core::IUnityServices*() noexcept {
  return static_cast<::Unity::Services::Core::IUnityServices*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::IUnityServices"
constexpr ::Unity::Services::Core::IUnityServices* Unity::Services::Core::Internal::UnityServicesInternal::i___Unity__Services__Core__IUnityServices() noexcept {
  return static_cast<::Unity::Services::Core::IUnityServices*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::ServicesInitializationState& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::Unity::Services::Core::ServicesInitializationState const& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set__State_k__BackingField(::Unity::Services::Core::ServicesInitializationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
constexpr ::Unity::Services::Core::InitializationOptions*& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::InitializationOptions*> const&
Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set__Options_k__BackingField(::Unity::Services::Core::InitializationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Options_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get_CanInitialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CanInitialize;
}
constexpr bool const& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get_CanInitialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CanInitialize;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set_CanInitialize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CanInitialize = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get_m_Initialization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Initialization;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const&
Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get_m_Initialization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Initialization;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set_m_Initialization(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Initialization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::CoreRegistry*& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Registry_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Registry_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreRegistry*> const&
Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Registry_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Registry_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::CoreRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Registry_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::CoreMetrics*& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Metrics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Metrics_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreMetrics*> const&
Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Metrics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Metrics_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set__Metrics_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Metrics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::CoreDiagnostics*& Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Diagnostics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Diagnostics_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreDiagnostics*> const&
Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_get__Diagnostics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Diagnostics_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::UnityServicesInternal::__cordl_internal_set__Diagnostics_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Diagnostics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::ServicesInitializationState Unity::Services::Core::Internal::UnityServicesInternal::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "get_State", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::ServicesInitializationState, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::UnityServicesInternal::set_State(::Unity::Services::Core::ServicesInitializationState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::ServicesInitializationState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::InitializationOptions* Unity::Services::Core::Internal::UnityServicesInternal::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::InitializationOptions*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::UnityServicesInternal::set_Options(::Unity::Services::Core::InitializationOptions* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "set_Options", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Internal::CoreRegistry* Unity::Services::Core::Internal::UnityServicesInternal::get_Registry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "get_Registry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreRegistry*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreMetrics* Unity::Services::Core::Internal::UnityServicesInternal::get_Metrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "get_Metrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreMetrics*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::UnityServicesInternal::get_Diagnostics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "get_Diagnostics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreDiagnostics*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::UnityServicesInternal* Unity::Services::Core::Internal::UnityServicesInternal::New_ctor(::Unity::Services::Core::Internal::CoreRegistry* registry,
                                                                                                                                  ::Unity::Services::Core::Internal::CoreMetrics* metrics,
                                                                                                                                  ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::UnityServicesInternal*>(registry, metrics, diagnostics));
}
inline void Unity::Services::Core::Internal::UnityServicesInternal::_ctor(::Unity::Services::Core::Internal::CoreRegistry* registry, ::Unity::Services::Core::Internal::CoreMetrics* metrics,
                                                                          ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, metrics, diagnostics);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::UnityServicesInternal::InitializeAsync(::Unity::Services::Core::InitializationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, options);
}
inline bool Unity::Services::Core::Internal::UnityServicesInternal::HasRequestedInitialization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "HasRequestedInitialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::UnityServicesInternal::InitializeServicesAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "InitializeServicesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::UnityServicesInternal::SendInitializationMetrics(
    ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>* packageInitInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(), "SendInitializationMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageInitInfos);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::UnityServicesInternal::EnableInitializationAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                                                             "EnableInitializationAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Internal::UnityServicesInternal::_InitializeAsync_g__HasInitializationFailed_20_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInternal*>::get(),
                                               "<InitializeAsync>g__HasInitializationFailed|20_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::UnityServicesInternal::UnityServicesInternal() {}
