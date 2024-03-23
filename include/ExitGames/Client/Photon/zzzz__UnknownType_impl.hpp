#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__UnknownType_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::UnknownType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::UnknownType::*)()>(&::ExitGames::Client::Photon::UnknownType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277402c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::UnknownType*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_TypeCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeCode;
}
constexpr uint8_t const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_TypeCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeCode;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_TypeCode(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TypeCode = value;
}
constexpr int32_t& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::UnknownType* ExitGames::Client::Photon::UnknownType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::UnknownType*>());
}
inline void ExitGames::Client::Photon::UnknownType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::UnknownType*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::UnknownType::UnknownType() {}
