#pragma once
#include "GlobalNamespace/zzzz__ImaginationPrompt_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ImaginationPrompt__Type::__ImaginationPrompt__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ImaginationPrompt__Type::__ImaginationPrompt__Type() {}
constexpr ::GlobalNamespace::__ImaginationPrompt__Type GlobalNamespace::__ImaginationPrompt__Type::log{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ImaginationPrompt__Type GlobalNamespace::__ImaginationPrompt__Type::warning{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ImaginationPrompt__Type GlobalNamespace::__ImaginationPrompt__Type::error{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__ImaginationPrompt__Type GlobalNamespace::__ImaginationPrompt__Type::vote{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType::__ImaginationPrompt__ActionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType::__ImaginationPrompt__ActionType() {}
constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType GlobalNamespace::__ImaginationPrompt__ActionType::dismiss{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType GlobalNamespace::__ImaginationPrompt__ActionType::voteNo{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType GlobalNamespace::__ImaginationPrompt__ActionType::voteYes{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__ImaginationPrompt__OnActionTaken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImaginationPrompt__OnActionTaken::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ImaginationPrompt__OnActionTaken::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x15449d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImaginationPrompt__OnActionTaken.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImaginationPrompt__OnActionTaken::*)(::GlobalNamespace::__ImaginationPrompt__ActionType)>(
    &::GlobalNamespace::__ImaginationPrompt__OnActionTaken::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1549364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImaginationPrompt__OnActionTaken.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ImaginationPrompt__OnActionTaken::*)(::GlobalNamespace::__ImaginationPrompt__ActionType, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ImaginationPrompt__OnActionTaken::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1549378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImaginationPrompt__OnActionTaken.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImaginationPrompt__OnActionTaken::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ImaginationPrompt__OnActionTaken::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x15493fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* GlobalNamespace::__ImaginationPrompt__OnActionTaken::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>(object, method));
}
inline void GlobalNamespace::__ImaginationPrompt__OnActionTaken::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ImaginationPrompt__OnActionTaken::Invoke(::GlobalNamespace::__ImaginationPrompt__ActionType actionType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionType);
}
inline ::System::IAsyncResult* GlobalNamespace::__ImaginationPrompt__OnActionTaken::BeginInvoke(::GlobalNamespace::__ImaginationPrompt__ActionType actionType, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, actionType, callback, object);
}
inline void GlobalNamespace::__ImaginationPrompt__OnActionTaken::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken::__ImaginationPrompt__OnActionTaken() {}
//  Writing Method size for method: ::GlobalNamespace::ImaginationPrompt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImaginationPrompt::*)(
    ::StringW, ::GlobalNamespace::__ImaginationPrompt__Type, ::StringW, ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*>,
    ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*)>(&::GlobalNamespace::ImaginationPrompt::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x154928c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImaginationPrompt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImaginationPrompt::*)(::StringW, ::GlobalNamespace::__ImaginationPrompt__Type)>(
    &::GlobalNamespace::ImaginationPrompt::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1540784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImaginationPrompt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImaginationPrompt::*)(::StringW, ::GlobalNamespace::__ImaginationPrompt__Type, ::StringW)>(
    &::GlobalNamespace::ImaginationPrompt::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x15492e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImaginationPrompt.CreateVote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ImaginationPrompt* (*)(::StringW, ::StringW, ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*)>(&::GlobalNamespace::ImaginationPrompt::CreateVote)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1544a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), "CreateVote", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void GlobalNamespace::ImaginationPrompt::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ImaginationPrompt__Type& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::GlobalNamespace::__ImaginationPrompt__Type const& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void GlobalNamespace::ImaginationPrompt::__cordl_internal_set_type(::GlobalNamespace::__ImaginationPrompt__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_userID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr ::StringW const& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_userID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr void GlobalNamespace::ImaginationPrompt::__cordl_internal_set_userID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*>&
GlobalNamespace::ImaginationPrompt::__cordl_internal_get_actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> const&
GlobalNamespace::ImaginationPrompt::__cordl_internal_get_actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr void
GlobalNamespace::ImaginationPrompt::__cordl_internal_set_actions(::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_onActionTaken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActionTaken;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const& GlobalNamespace::ImaginationPrompt::__cordl_internal_get_onActionTaken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActionTaken;
}
constexpr void GlobalNamespace::ImaginationPrompt::__cordl_internal_set_onActionTaken(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onActionTaken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ImaginationPrompt*
GlobalNamespace::ImaginationPrompt::New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID,
                                             ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions,
                                             ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImaginationPrompt*>(message, type, userID, actions, onActionTaken));
}
inline void GlobalNamespace::ImaginationPrompt::_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID,
                                                      ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions,
                                                      ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type, userID, actions, onActionTaken);
}
inline ::GlobalNamespace::ImaginationPrompt* GlobalNamespace::ImaginationPrompt::New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImaginationPrompt*>(message, type));
}
inline void GlobalNamespace::ImaginationPrompt::_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type);
}
inline ::GlobalNamespace::ImaginationPrompt* GlobalNamespace::ImaginationPrompt::New_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImaginationPrompt*>(message, type, userID));
}
inline void GlobalNamespace::ImaginationPrompt::_ctor(::StringW message, ::GlobalNamespace::__ImaginationPrompt__Type type, ::StringW userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__Type>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type, userID);
}
inline ::GlobalNamespace::ImaginationPrompt* GlobalNamespace::ImaginationPrompt::CreateVote(::StringW message, ::StringW userID, ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* onActionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImaginationPrompt*>::get(), "CreateVote", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImaginationPrompt*, false>(nullptr, ___internal_method, message, userID, onActionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImaginationPrompt::ImaginationPrompt() {}
