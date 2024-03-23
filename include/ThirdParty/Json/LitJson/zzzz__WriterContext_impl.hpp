#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__WriterContext_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::WriterContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::WriterContext::*)()>(&::ThirdParty::Json::LitJson::WriterContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b0734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WriterContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr int32_t const& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void ThirdParty::Json::LitJson::WriterContext::__cordl_internal_set_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr bool& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_InArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InArray;
}
constexpr bool const& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_InArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InArray;
}
constexpr void ThirdParty::Json::LitJson::WriterContext::__cordl_internal_set_InArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InArray = value;
}
constexpr bool& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_InObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InObject;
}
constexpr bool const& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_InObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InObject;
}
constexpr void ThirdParty::Json::LitJson::WriterContext::__cordl_internal_set_InObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InObject = value;
}
constexpr bool& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_ExpectingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectingValue;
}
constexpr bool const& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_ExpectingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectingValue;
}
constexpr void ThirdParty::Json::LitJson::WriterContext::__cordl_internal_set_ExpectingValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectingValue = value;
}
constexpr int32_t& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Padding;
}
constexpr int32_t const& ThirdParty::Json::LitJson::WriterContext::__cordl_internal_get_Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Padding;
}
constexpr void ThirdParty::Json::LitJson::WriterContext::__cordl_internal_set_Padding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Padding = value;
}
inline ::ThirdParty::Json::LitJson::WriterContext* ThirdParty::Json::LitJson::WriterContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::WriterContext*>());
}
inline void ThirdParty::Json::LitJson::WriterContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WriterContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::WriterContext::WriterContext() {}
