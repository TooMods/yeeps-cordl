#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__FallbackRegionFactory_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileStoreChain_def.hpp"
#include "Amazon/Runtime/zzzz__AWSRegion_def.hpp"
#include "Amazon/Runtime/zzzz__FallbackRegionFactory_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::*)(::System::Object*, void*)>(
    &::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1fe09c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1fe11b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::*)(::System::AsyncCallback*, ::System::Object*)>(&::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fe11c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (
    ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::*)(::System::IAsyncResult*)>(&::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe11e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(object, method));
}
inline void Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator::__FallbackRegionFactory__RegionGenerator() {}
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe1260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe12b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_2)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fe1310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe139c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe13f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_5)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe144c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__FallbackRegionFactory____c._Reset_b__12_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSRegion* (::Amazon::Runtime::__FallbackRegionFactory____c::*)()>(
    &::Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_6)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fe14a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                               "<Reset>b__12_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9(::Amazon::Runtime::__FallbackRegionFactory____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory____c*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory____c* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_0(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_1(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_2(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_2() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_3(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_3() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_4(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_4() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_5(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_5() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::setStaticF___9__12_6(::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>(
      std::forward<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>(value));
}
inline ::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator* Amazon::Runtime::__FallbackRegionFactory____c::getStaticF___9__12_6() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*, "<>9__12_6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get>();
}
inline ::Amazon::Runtime::__FallbackRegionFactory____c* Amazon::Runtime::__FallbackRegionFactory____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__FallbackRegionFactory____c*>());
}
inline void Amazon::Runtime::__FallbackRegionFactory____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::__FallbackRegionFactory____c::_Reset_b__12_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__FallbackRegionFactory____c*>::get(),
                                                                             "<Reset>b__12_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSRegion*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__FallbackRegionFactory____c::__FallbackRegionFactory____c() {}
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.get_AllGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* (*)()>(
    &::Amazon::Runtime::FallbackRegionFactory::get_AllGenerators)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe085c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                               "get_AllGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.set_AllGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*)>(
    &::Amazon::Runtime::FallbackRegionFactory::set_AllGenerators)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1fe08b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "set_AllGenerators", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.get_NonMetadataGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* (*)()>(
    &::Amazon::Runtime::FallbackRegionFactory::get_NonMetadataGenerators)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe0910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                               "get_NonMetadataGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.set_NonMetadataGenerators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*)>(
    &::Amazon::Runtime::FallbackRegionFactory::set_NonMetadataGenerators)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1fe0968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "set_NonMetadataGenerators", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Runtime::FallbackRegionFactory::Reset)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x1fe0128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.GetRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)()>(&::Amazon::Runtime::FallbackRegionFactory::GetRegionEndpoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe0a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                               "GetRegionEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::FallbackRegionFactory.GetRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)(bool)>(&::Amazon::Runtime::FallbackRegionFactory::GetRegionEndpoint)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x1fe0ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "GetRegionEndpoint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::FallbackRegionFactory::setStaticF_credentialProfileChain(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::FallbackRegionFactory::getStaticF_credentialProfileChain() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "credentialProfileChain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>();
}
inline void Amazon::Runtime::FallbackRegionFactory::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::FallbackRegionFactory::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>();
}
inline void
Amazon::Runtime::FallbackRegionFactory::setStaticF__AllGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, "<AllGenerators>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* Amazon::Runtime::FallbackRegionFactory::getStaticF__AllGenerators_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, "<AllGenerators>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>();
}
inline void
Amazon::Runtime::FallbackRegionFactory::setStaticF__NonMetadataGenerators_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, "<NonMetadataGenerators>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*
Amazon::Runtime::FallbackRegionFactory::getStaticF__NonMetadataGenerators_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, "<NonMetadataGenerators>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>();
}
inline void Amazon::Runtime::FallbackRegionFactory::setStaticF_cachedRegion(::Amazon::Runtime::AWSRegion* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::AWSRegion*, "cachedRegion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>(
      std::forward<::Amazon::Runtime::AWSRegion*>(value));
}
inline ::Amazon::Runtime::AWSRegion* Amazon::Runtime::FallbackRegionFactory::getStaticF_cachedRegion() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::AWSRegion*, "cachedRegion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get>();
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* Amazon::Runtime::FallbackRegionFactory::get_AllGenerators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                             "get_AllGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::FallbackRegionFactory::set_AllGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "set_AllGenerators", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* Amazon::Runtime::FallbackRegionFactory::get_NonMetadataGenerators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                             "get_NonMetadataGenerators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::FallbackRegionFactory::set_NonMetadataGenerators(::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "set_NonMetadataGenerators", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Runtime::__FallbackRegionFactory__RegionGenerator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::Runtime::FallbackRegionFactory::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::FallbackRegionFactory::GetRegionEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(),
                                                                             "GetRegionEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method);
}
inline ::Amazon::RegionEndpoint* Amazon::Runtime::FallbackRegionFactory::GetRegionEndpoint(bool includeInstanceMetadata) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::FallbackRegionFactory*>::get(), "GetRegionEndpoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method, includeInstanceMetadata);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::FallbackRegionFactory::FallbackRegionFactory() {}
