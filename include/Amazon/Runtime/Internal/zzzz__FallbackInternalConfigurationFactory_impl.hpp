#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__FallbackInternalConfigurationFactory_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileStoreChain_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__FallbackInternalConfigurationFactory_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__InternalConfiguration_def.hpp"
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::*)(
    ::System::Object*, void*)>(&::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23d8bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::InternalConfiguration* (
    ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::*)()>(&::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23d8dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23d8dd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::InternalConfiguration* (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::*)(::System::IAsyncResult*)>(
        &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d8df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>(object, method));
}
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Amazon::Runtime::Internal::InternalConfiguration* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::InternalConfiguration*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::Amazon::Runtime::Internal::InternalConfiguration* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::InternalConfiguration*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator::__FallbackInternalConfigurationFactory__ConfigGenerator() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::*)()>(
    &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0._Reset_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::InternalConfiguration* (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::*)()>(
        &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_Reset_b__3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(),
                                    "<Reset>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0._Reset_b__4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::InternalConfiguration* (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::*)()>(
        &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_Reset_b__4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(),
                                    "<Reset>b__4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::InternalConfiguration*&
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_get_environmentVariablesConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentVariablesConfiguration;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InternalConfiguration*> const&
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_get_environmentVariablesConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentVariablesConfiguration;
}
constexpr void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_set_environmentVariablesConfiguration(
    ::Amazon::Runtime::Internal::InternalConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentVariablesConfiguration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::InternalConfiguration*& Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_get_profileConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileConfiguration;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InternalConfiguration*> const&
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_get_profileConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileConfiguration;
}
constexpr void
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__cordl_internal_set_profileConfiguration(::Amazon::Runtime::Internal::InternalConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___profileConfiguration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>());
}
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::InternalConfiguration* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_Reset_b__3() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(),
                                  "<Reset>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::InternalConfiguration*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::InternalConfiguration* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::_Reset_b__4() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0*>::get(),
                                  "<Reset>b__4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::InternalConfiguration*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c__DisplayClass4_0::__FallbackInternalConfigurationFactory____c__DisplayClass4_0() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::*)()>(
    &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c._Reset_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::*)(
    ::Amazon::Runtime::Internal::InternalConfiguration*)>(&::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23d8e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c._Reset_b__4_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> (
    ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::*)(::Amazon::Runtime::Internal::InternalConfiguration*)>(
    &::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23d8e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c._Reset_b__4_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::*)(
    ::Amazon::Runtime::Internal::InternalConfiguration*)>(&::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23d8eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_2",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::setStaticF___9(::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>(
      std::forward<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>(value));
}
inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>();
}
inline void
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::setStaticF___9__4_0(::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>*
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<bool>>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>();
}
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::setStaticF___9__4_1(
    ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>*, "<>9__4_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>*
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>>*, "<>9__4_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>();
}
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::setStaticF___9__4_2(
    ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>*, "<>9__4_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>*
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::getStaticF___9__4_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<int32_t>>*, "<>9__4_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get>();
}
inline ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c* Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>());
}
inline void Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_0(::Amazon::Runtime::Internal::InternalConfiguration* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, c);
}
inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>
Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_1(::Amazon::Runtime::Internal::InternalConfiguration* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>, false>(this, ___internal_method, c);
}
inline ::System::Nullable_1<int32_t> Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::_Reset_b__4_2(::Amazon::Runtime::Internal::InternalConfiguration* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c*>::get(), "<Reset>b__4_2",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::InternalConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory____c::__FallbackInternalConfigurationFactory____c() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::Reset)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x23d86a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory.get_EndpointDiscoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (*)()>(
    &::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_EndpointDiscoveryEnabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23d8c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(),
                                                 "get_EndpointDiscoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory.get_RetryMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> (*)()>(
    &::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_RetryMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23d8cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "get_RetryMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory.get_MaxAttempts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (*)()>(
    &::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_MaxAttempts)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23d8d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "get_MaxAttempts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::setStaticF__credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "_credentialProfileChain",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::getStaticF__credentialProfileChain() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "_credentialProfileChain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get>();
}
inline void Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::setStaticF__cachedConfiguration(::Amazon::Runtime::Internal::InternalConfiguration* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::InternalConfiguration*, "_cachedConfiguration",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get>(
      std::forward<::Amazon::Runtime::Internal::InternalConfiguration*>(value));
}
inline ::Amazon::Runtime::Internal::InternalConfiguration* Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::getStaticF__cachedConfiguration() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::InternalConfiguration*, "_cachedConfiguration",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get>();
}
inline void Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::System::Nullable_1<T> Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::SeekValue(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>* generators,
    ::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<T>>* getValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "SeekValue",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::Internal::__FallbackInternalConfigurationFactory__ConfigGenerator*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Amazon::Runtime::Internal::InternalConfiguration*, ::System::Nullable_1<T>>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>, false>(nullptr, ___internal_method, generators, getValue);
}
inline ::System::Nullable_1<bool> Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_EndpointDiscoveryEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(),
                                               "get_EndpointDiscoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(nullptr, ___internal_method);
}
inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_RetryMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "get_RetryMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>, false>(nullptr, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::get_MaxAttempts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory*>::get(), "get_MaxAttempts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::FallbackInternalConfigurationFactory::FallbackInternalConfigurationFactory() {}
