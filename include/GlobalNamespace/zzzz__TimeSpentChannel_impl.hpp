#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSpentChannel_def.hpp"
#include "GlobalNamespace/zzzz__TimeSpentChannel_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x15864d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::*)(::StringW, float_t)>(
    &::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x15865ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::*)(::StringW, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x15865c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1586654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* GlobalNamespace::__TimeSpentChannel__OnSessionComplete::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>(object, method));
}
inline void GlobalNamespace::__TimeSpentChannel__OnSessionComplete::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__TimeSpentChannel__OnSessionComplete::Invoke(::StringW key, float_t timeSpent) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, timeSpent);
}
inline ::System::IAsyncResult* GlobalNamespace::__TimeSpentChannel__OnSessionComplete::BeginInvoke(::StringW key, float_t timeSpent, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, key, timeSpent, callback, object);
}
inline void GlobalNamespace::__TimeSpentChannel__OnSessionComplete::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete::__TimeSpentChannel__OnSessionComplete() {}
//  Writing Method size for method: ::GlobalNamespace::TimeSpentChannel.get_channelKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::TimeSpentChannel::*)()>(&::GlobalNamespace::TimeSpentChannel::get_channelKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15863f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "get_channelKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpentChannel.set_channelKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimeSpentChannel::*)(::StringW)>(&::GlobalNamespace::TimeSpentChannel::set_channelKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15863f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "set_channelKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpentChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimeSpentChannel::*)(::StringW, ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*)>(
    &::GlobalNamespace::TimeSpentChannel::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1586400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpentChannel.StartSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimeSpentChannel::*)(::StringW)>(&::GlobalNamespace::TimeSpentChannel::StartSession)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1586430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "StartSession", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpentChannel.EndSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimeSpentChannel::*)()>(&::GlobalNamespace::TimeSpentChannel::EndSession)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x158647c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "EndSession",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TimeSpentChannel::__cordl_internal_get__channelKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelKey_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::TimeSpentChannel::__cordl_internal_get__channelKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelKey_k__BackingField;
}
constexpr void GlobalNamespace::TimeSpentChannel::__cordl_internal_set__channelKey_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____channelKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr ::StringW const& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKey;
}
constexpr void GlobalNamespace::TimeSpentChannel::__cordl_internal_set_currentKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_currentKeyStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyStartTime;
}
constexpr float_t const& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_currentKeyStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyStartTime;
}
constexpr void GlobalNamespace::TimeSpentChannel::__cordl_internal_set_currentKeyStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentKeyStartTime = value;
}
constexpr ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_onSessionComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSessionComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*> const& GlobalNamespace::TimeSpentChannel::__cordl_internal_get_onSessionComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSessionComplete;
}
constexpr void GlobalNamespace::TimeSpentChannel::__cordl_internal_set_onSessionComplete(::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSessionComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::TimeSpentChannel::get_channelKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "get_channelKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::TimeSpentChannel::set_channelKey(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "set_channelKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TimeSpentChannel* GlobalNamespace::TimeSpentChannel::New_ctor(::StringW channelKey, ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* onSessionComplete) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TimeSpentChannel*>(channelKey, onSessionComplete));
}
inline void GlobalNamespace::TimeSpentChannel::_ctor(::StringW channelKey, ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* onSessionComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelKey, onSessionComplete);
}
inline void GlobalNamespace::TimeSpentChannel::StartSession(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "StartSession", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void GlobalNamespace::TimeSpentChannel::EndSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeSpentChannel*>::get(), "EndSession",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpentChannel::TimeSpentChannel() {}
