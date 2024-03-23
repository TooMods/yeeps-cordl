#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__FallbackCredentialsFactory_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileStoreChain_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__FallbackCredentialsFactory_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::*)(::System::Object*, void*)>(
    &::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1fe9fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1feac7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1feac90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (
    ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::*)(::System::IAsyncResult*)>(&::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1feacb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>(object, method));
}
inline void Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator::__FallbackCredentialsFactory__CredentialsGenerator() {}
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe9fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0._Reset_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::_Reset_b__3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1feacbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*>::get(), "<Reset>b__3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::IWebProxy*& Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::__cordl_internal_set_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0* Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*>());
}
inline void Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::_Reset_b__3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0*>::get(), "<Reset>b__3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__FallbackCredentialsFactory____c__DisplayClass10_0::__FallbackCredentialsFactory____c__DisplayClass10_0() {}
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__FallbackCredentialsFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fead78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c._Reset_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::__FallbackCredentialsFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fead80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                               "<Reset>b__10_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c._Reset_b__10_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::__FallbackCredentialsFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1feadcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                               "<Reset>b__10_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackCredentialsFactory____c._Reset_b__10_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (::Amazon::Runtime::__FallbackCredentialsFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1feae24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                               "<Reset>b__10_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::__FallbackCredentialsFactory____c::setStaticF___9(::Amazon::Runtime::__FallbackCredentialsFactory____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackCredentialsFactory____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackCredentialsFactory____c*>(value));
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory____c* Amazon::Runtime::__FallbackCredentialsFactory____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackCredentialsFactory____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackCredentialsFactory____c::setStaticF___9__10_0(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* Amazon::Runtime::__FallbackCredentialsFactory____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackCredentialsFactory____c::setStaticF___9__10_1(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* Amazon::Runtime::__FallbackCredentialsFactory____c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackCredentialsFactory____c::setStaticF___9__10_2(::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator* Amazon::Runtime::__FallbackCredentialsFactory____c::getStaticF___9__10_2() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*, "<>9__10_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get>();
}
inline ::Amazon::Runtime::__FallbackCredentialsFactory____c* Amazon::Runtime::__FallbackCredentialsFactory____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__FallbackCredentialsFactory____c*>());
}
inline void Amazon::Runtime::__FallbackCredentialsFactory____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                             "<Reset>b__10_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                             "<Reset>b__10_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::__FallbackCredentialsFactory____c::_Reset_b__10_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackCredentialsFactory____c*>::get(),
                                                                             "<Reset>b__10_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__FallbackCredentialsFactory____c::__FallbackCredentialsFactory____c() {}
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.get_CredentialsGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* (*)()>(&::Amazon::Runtime::FallbackCredentialsFactory::get_CredentialsGenerators)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe9a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                               "get_CredentialsGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.set_CredentialsGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*)>(&::Amazon::Runtime::FallbackCredentialsFactory::set_CredentialsGenerators)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1fe9af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "set_CredentialsGenerators", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Runtime::FallbackCredentialsFactory::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe9a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::Amazon::Runtime::FallbackCredentialsFactory::Reset)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x1fe9b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*)>(
    &::Amazon::Runtime::FallbackCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1fea06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.ECSEC2CredentialsWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)()>(&::Amazon::Runtime::FallbackCredentialsFactory::ECSEC2CredentialsWrapper)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fea1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                               "ECSEC2CredentialsWrapper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.ECSEC2CredentialsWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)(::System::Net::IWebProxy*)>(
    &::Amazon::Runtime::FallbackCredentialsFactory::ECSEC2CredentialsWrapper)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1fea23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "ECSEC2CredentialsWrapper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)()>(&::Amazon::Runtime::FallbackCredentialsFactory::GetCredentials)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fea4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                               "GetCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackCredentialsFactory.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)(bool)>(&::Amazon::Runtime::FallbackCredentialsFactory::GetCredentials)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x1fea4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "GetCredentials",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::FallbackCredentialsFactory::setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::FallbackCredentialsFactory::getStaticF_credentialProfileChain() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>();
}
inline void Amazon::Runtime::FallbackCredentialsFactory::setStaticF__CredentialsGenerators_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*, "<CredentialsGenerators>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*
Amazon::Runtime::FallbackCredentialsFactory::getStaticF__CredentialsGenerators_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*, "<CredentialsGenerators>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>();
}
inline void Amazon::Runtime::FallbackCredentialsFactory::setStaticF_cachedCredentials(::Amazon::Runtime::AWSCredentials* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::AWSCredentials*, "cachedCredentials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>(
      std::forward<::Amazon::Runtime::AWSCredentials*>(value));
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::getStaticF_cachedCredentials() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::AWSCredentials*, "cachedCredentials",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get>();
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* Amazon::Runtime::FallbackCredentialsFactory::get_CredentialsGenerators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                             "get_CredentialsGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*, false>(nullptr, ___internal_method);
}
inline void
Amazon::Runtime::FallbackCredentialsFactory::set_CredentialsGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "set_CredentialsGenerators", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackCredentialsFactory__CredentialsGenerator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::Runtime::FallbackCredentialsFactory::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::FallbackCredentialsFactory::Reset(::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, proxy);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::GetAWSCredentials(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, source);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::ECSEC2CredentialsWrapper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                             "ECSEC2CredentialsWrapper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::ECSEC2CredentialsWrapper(::System::Net::IWebProxy* proxy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "ECSEC2CredentialsWrapper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, proxy);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::GetCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(),
                                                                             "GetCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::FallbackCredentialsFactory::GetCredentials(bool fallbackToAnonymous) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackCredentialsFactory*>::get(), "GetCredentials",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, fallbackToAnonymous);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::FallbackCredentialsFactory::FallbackCredentialsFactory() {}
