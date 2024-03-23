#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__CustomType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::CustomType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::CustomType::*)(
    ::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeMethod*, ::ExitGames::Client::Photon::DeserializeMethod*)>(&::ExitGames::Client::Photon::CustomType::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2861f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::CustomType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeMethod*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::CustomType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::CustomType::*)(
    ::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeStreamMethod*, ::ExitGames::Client::Photon::DeserializeStreamMethod*)>(&::ExitGames::Client::Photon::CustomType::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2861f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::CustomType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeStreamMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr uint8_t const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_Code(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Code = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::SerializeMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeFunction;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::SerializeMethod*> const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_SerializeFunction(::ExitGames::Client::Photon::SerializeMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SerializeFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::DeserializeMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeserializeFunction;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::DeserializeMethod*> const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeserializeFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_DeserializeFunction(::ExitGames::Client::Photon::DeserializeMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeserializeFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::SerializeStreamMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeStreamFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeStreamFunction;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::SerializeStreamMethod*> const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeStreamFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeStreamFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_SerializeStreamFunction(::ExitGames::Client::Photon::SerializeStreamMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SerializeStreamFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeStreamFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeserializeStreamFunction;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::DeserializeStreamMethod*> const&
ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeStreamFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeserializeStreamFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_DeserializeStreamFunction(::ExitGames::Client::Photon::DeserializeStreamMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeserializeStreamFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::CustomType* ExitGames::Client::Photon::CustomType::New_ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeMethod* serializeFunction,
                                                                                                ::ExitGames::Client::Photon::DeserializeMethod* deserializeFunction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::CustomType*>(type, code, serializeFunction, deserializeFunction));
}
inline void ExitGames::Client::Photon::CustomType::_ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeMethod* serializeFunction,
                                                         ::ExitGames::Client::Photon::DeserializeMethod* deserializeFunction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::CustomType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, code, serializeFunction, deserializeFunction);
}
inline ::ExitGames::Client::Photon::CustomType* ExitGames::Client::Photon::CustomType::New_ctor(::System::Type* type, uint8_t code,
                                                                                                ::ExitGames::Client::Photon::SerializeStreamMethod* serializeFunction,
                                                                                                ::ExitGames::Client::Photon::DeserializeStreamMethod* deserializeFunction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::CustomType*>(type, code, serializeFunction, deserializeFunction));
}
inline void ExitGames::Client::Photon::CustomType::_ctor(::System::Type* type, uint8_t code, ::ExitGames::Client::Photon::SerializeStreamMethod* serializeFunction,
                                                         ::ExitGames::Client::Photon::DeserializeStreamMethod* deserializeFunction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::CustomType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeStreamMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, code, serializeFunction, deserializeFunction);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::CustomType::CustomType() {}
