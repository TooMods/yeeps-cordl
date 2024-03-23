#pragma once
#include "GlobalNamespace/zzzz__AWSDatabase_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalRotation_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "GlobalNamespace/zzzz__ChallengeManager_def.hpp"
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__ActiveChallenge_def.hpp"
#include "GlobalNamespace/zzzz__ChallengeData_def.hpp"
#include "GlobalNamespace/zzzz__ChallengeManager_def.hpp"
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2757454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*)>(&::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275bb50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*, ::System::AsyncCallback*,
                                                                         ::System::Object*)>(&::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x275bb64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275bb84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>(object, method));
}
inline void GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::Invoke(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActiveChallenges);
}
inline ::System::IAsyncResult*
GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::BeginInvoke(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges,
                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newActiveChallenges, callback, object);
}
inline void GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated::__ChallengeManager__OnActiveChallengesUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2757b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::*)(bool)>(
    &::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x275bb90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x275bba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275bc30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::New_ctor(::System::Object* object,
                                                                                                                                                                  void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>(object, method));
}
inline void GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::Invoke(bool newHasTimeUntilNextRotation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasTimeUntilNextRotation);
}
inline ::System::IAsyncResult* GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::BeginInvoke(bool newHasTimeUntilNextRotation, ::System::AsyncCallback* callback,
                                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newHasTimeUntilNextRotation, callback, object);
}
inline void GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated::__ChallengeManager__OnHasTimeUntilNextRotationUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2757bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::*)(::System::TimeSpan)>(
    &::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275bc3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::*)(::System::TimeSpan, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x275bc50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275bcd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>(object, method));
}
inline void GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::Invoke(::System::TimeSpan newTimeUntilNextRotation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTimeUntilNextRotation);
}
inline ::System::IAsyncResult* GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::BeginInvoke(::System::TimeSpan newTimeUntilNextRotation, ::System::AsyncCallback* callback,
                                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newTimeUntilNextRotation, callback, object);
}
inline void GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated::__ChallengeManager__OnTimeUntilNextRotationUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2759564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::*)(int32_t)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275bce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x275bcf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275bd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>(object, method));
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::Invoke(int32_t rewardAmount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rewardAmount);
}
inline ::System::IAsyncResult* GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::BeginInvoke(int32_t rewardAmount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, rewardAmount, callback, object);
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess::__ChallengeManager__OnRedeemChallengeRewardSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2759628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::*)(::StringW)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x275bd84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x275bd98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275bdb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>(object, method));
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::Invoke(::StringW errorType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType);
}
inline ::System::IAsyncResult* GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, errorType, callback, object);
}
inline void GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure::__ChallengeManager__OnRedeemChallengeRewardFailure() {}
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::*)()>(
    &::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x275bdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275c364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "poolKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "onFailure", ty: "::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "onSuccess", ty:
// "::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::__ChallengeManager___TryRedeemChallengeReward_d__44(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW accountID, ::StringW poolKey, ::StringW itemKey,
    ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* onFailure, ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* onSuccess,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->accountID = accountID;
  this->poolKey = poolKey;
  this->itemKey = itemKey;
  this->onFailure = onFailure;
  this->onSuccess = onSuccess;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44::__ChallengeManager___TryRedeemChallengeReward_d__44() {}
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.TryGetChallengeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ChallengeManager::*)(::StringW, ByRef<::GlobalNamespace::ChallengeData>)>(
    &::GlobalNamespace::ChallengeManager::TryGetChallengeData)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2759d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "TryGetChallengeData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ChallengeData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.get_activeChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* (*)()>(
    &::GlobalNamespace::ChallengeManager::get_activeChallenges)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2759f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                               "get_activeChallenges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.set_activeChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*)>(
    &::GlobalNamespace::ChallengeManager::set_activeChallenges)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2759fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_activeChallenges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.get_hasTimeUntilNextRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::ChallengeManager::get_hasTimeUntilNextRotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x275a008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                               "get_hasTimeUntilNextRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.set_hasTimeUntilNextRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::ChallengeManager::set_hasTimeUntilNextRotation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x275a060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_hasTimeUntilNextRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.get_timeUntilNextRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)()>(&::GlobalNamespace::ChallengeManager::get_timeUntilNextRotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x275a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                               "get_timeUntilNextRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.set_timeUntilNextRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::TimeSpan)>(&::GlobalNamespace::ChallengeManager::set_timeUntilNextRotation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x275a114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_timeUntilNextRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ChallengeManager::*)()>(&::GlobalNamespace::ChallengeManager::Start)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x275a170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ChallengeManager::*)(::GlobalNamespace::AccountData*)>(
    &::GlobalNamespace::ChallengeManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x275a290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.RefreshChallengeRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::ChallengeManager::RefreshChallengeRotation)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x275a418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                               "RefreshChallengeRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.OnFetchGlobalRotationSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::GlobalRotation)>(&::GlobalNamespace::ChallengeManager::OnFetchGlobalRotationSuccess)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x275ad1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnFetchGlobalRotationSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.OnFetchGlobalRotationFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ChallengeManager::OnFetchGlobalRotationFailure)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x275b2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnFetchGlobalRotationFailure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.BuildActiveChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* (*)(::GlobalNamespace::GlobalRotation)>(
        &::GlobalNamespace::ChallengeManager::BuildActiveChallenges)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x275aecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "BuildActiveChallenges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.SetActiveChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*)>(
    &::GlobalNamespace::ChallengeManager::SetActiveChallenges)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x275a5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "SetActiveChallenges", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.SetHasTimeUntilNextRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::ChallengeManager::SetHasTimeUntilNextRotation)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x275aa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "SetHasTimeUntilNextRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.DoTimeUntilNextRotationUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::ChallengeManager::DoTimeUntilNextRotationUpdate)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x275b424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                               "DoTimeUntilNextRotationUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ChallengeManager::*)()>(&::GlobalNamespace::ChallengeManager::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x275b868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager.TryRedeemChallengeReward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*,
                                                                                           ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*)>(
    &::GlobalNamespace::ChallengeManager::TryRedeemChallengeReward)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27596fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "TryRedeemChallengeReward", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChallengeManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ChallengeManager::*)()>(&::GlobalNamespace::ChallengeManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x275b96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*>& GlobalNamespace::ChallengeManager::__cordl_internal_get_challengeDatasRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeDatasRaw;
}
constexpr ::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> const& GlobalNamespace::ChallengeManager::__cordl_internal_get_challengeDatasRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challengeDatasRaw;
}
constexpr void GlobalNamespace::ChallengeManager::__cordl_internal_set_challengeDatasRaw(::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___challengeDatasRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*& GlobalNamespace::ChallengeManager::__cordl_internal_get_onActiveChallengesUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActiveChallengesUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*> const&
GlobalNamespace::ChallengeManager::__cordl_internal_get_onActiveChallengesUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActiveChallengesUpdatedCallbacks;
}
constexpr void GlobalNamespace::ChallengeManager::__cordl_internal_set_onActiveChallengesUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onActiveChallengesUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*& GlobalNamespace::ChallengeManager::__cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasTimeUntilNextRotationUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*> const&
GlobalNamespace::ChallengeManager::__cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasTimeUntilNextRotationUpdatedCallbacks;
}
constexpr void GlobalNamespace::ChallengeManager::__cordl_internal_set_onHasTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onHasTimeUntilNextRotationUpdatedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*& GlobalNamespace::ChallengeManager::__cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTimeUntilNextRotationUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*> const&
GlobalNamespace::ChallengeManager::__cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTimeUntilNextRotationUpdatedCallbacks;
}
constexpr void GlobalNamespace::ChallengeManager::__cordl_internal_set_onTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onTimeUntilNextRotationUpdatedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ChallengeManager::setStaticF_ALL_POOL_KEYS(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "ALL_POOL_KEYS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::ChallengeManager::getStaticF_ALL_POOL_KEYS() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "ALL_POOL_KEYS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF_challengeDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>*, "challengeDatas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>* GlobalNamespace::ChallengeManager::getStaticF_challengeDatas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>*, "challengeDatas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF_challengeRotation(::GlobalNamespace::GlobalRotation value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GlobalRotation, "challengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<::GlobalNamespace::GlobalRotation>(value));
}
inline ::GlobalNamespace::GlobalRotation GlobalNamespace::ChallengeManager::getStaticF_challengeRotation() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GlobalRotation, "challengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF_hasChallengeRotation(bool value) {
  ::cordl_internals::setStaticField<bool, "hasChallengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ChallengeManager::getStaticF_hasChallengeRotation() {
  return ::cordl_internals::getStaticField<bool, "hasChallengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF_isFetchingChallengeRotation(bool value) {
  ::cordl_internals::setStaticField<bool, "isFetchingChallengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ChallengeManager::getStaticF_isFetchingChallengeRotation() {
  return ::cordl_internals::getStaticField<bool, "isFetchingChallengeRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF__activeChallenges_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*, "<activeChallenges>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* GlobalNamespace::ChallengeManager::getStaticF__activeChallenges_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*, "<activeChallenges>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF__hasTimeUntilNextRotation_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<hasTimeUntilNextRotation>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::ChallengeManager::getStaticF__hasTimeUntilNextRotation_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<hasTimeUntilNextRotation>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF__timeUntilNextRotation_k__BackingField(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "<timeUntilNextRotation>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan GlobalNamespace::ChallengeManager::getStaticF__timeUntilNextRotation_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "<timeUntilNextRotation>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline void GlobalNamespace::ChallengeManager::setStaticF_nextTimeUntilNextRotationUpdateTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "nextTimeUntilNextRotationUpdateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ChallengeManager::getStaticF_nextTimeUntilNextRotationUpdateTime() {
  return ::cordl_internals::getStaticField<float_t, "nextTimeUntilNextRotationUpdateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get>();
}
inline bool GlobalNamespace::ChallengeManager::TryGetChallengeData(::StringW challengeKey, ByRef<::GlobalNamespace::ChallengeData> challengeData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "TryGetChallengeData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ChallengeData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, challengeKey, challengeData);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* GlobalNamespace::ChallengeManager::get_activeChallenges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                             "get_activeChallenges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::set_activeChallenges(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_activeChallenges", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::ChallengeManager::get_hasTimeUntilNextRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                             "get_hasTimeUntilNextRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::set_hasTimeUntilNextRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_hasTimeUntilNextRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan GlobalNamespace::ChallengeManager::get_timeUntilNextRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                             "get_timeUntilNextRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::set_timeUntilNextRotation(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "set_timeUntilNextRotation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ChallengeManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountData);
}
inline void GlobalNamespace::ChallengeManager::RefreshChallengeRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                             "RefreshChallengeRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::OnFetchGlobalRotationSuccess(::GlobalNamespace::GlobalRotation globalRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnFetchGlobalRotationSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, globalRotation);
}
inline void GlobalNamespace::ChallengeManager::OnFetchGlobalRotationFailure(::StringW errorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "OnFetchGlobalRotationFailure",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorType);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*
GlobalNamespace::ChallengeManager::BuildActiveChallenges(::GlobalNamespace::GlobalRotation globalRotation) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "BuildActiveChallenges", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GlobalRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*, false>(nullptr, ___internal_method, globalRotation);
}
inline void GlobalNamespace::ChallengeManager::SetActiveChallenges(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "SetActiveChallenges", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newActiveChallenges);
}
inline void GlobalNamespace::ChallengeManager::SetHasTimeUntilNextRotation(bool newHasTimeUntilNextRotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "SetHasTimeUntilNextRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newHasTimeUntilNextRotation);
}
inline void GlobalNamespace::ChallengeManager::DoTimeUntilNextRotationUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(),
                                                                             "DoTimeUntilNextRotationUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ChallengeManager::TryRedeemChallengeReward(::StringW accountID, ::StringW poolKey, ::StringW itemKey,
                                                                        ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* onSuccess,
                                                                        ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), "TryRedeemChallengeReward", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, accountID, poolKey, itemKey, onSuccess, onFailure);
}
inline ::GlobalNamespace::ChallengeManager* GlobalNamespace::ChallengeManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ChallengeManager*>());
}
inline void GlobalNamespace::ChallengeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ChallengeManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChallengeManager::ChallengeManager() {}
