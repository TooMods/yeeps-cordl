#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__FsmContext_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__Lexer_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::FsmContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::FsmContext::*)()>(&::ThirdParty::Json::LitJson::FsmContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b11b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::FsmContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_Return() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Return;
}
constexpr bool const& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_Return() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Return;
}
constexpr void ThirdParty::Json::LitJson::FsmContext::__cordl_internal_set_Return(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Return = value;
}
constexpr int32_t& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_NextState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextState;
}
constexpr int32_t const& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_NextState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextState;
}
constexpr void ThirdParty::Json::LitJson::FsmContext::__cordl_internal_set_NextState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NextState = value;
}
constexpr ::ThirdParty::Json::LitJson::Lexer*& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_L() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::Lexer*> const& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_L() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr void ThirdParty::Json::LitJson::FsmContext::__cordl_internal_set_L(::ThirdParty::Json::LitJson::Lexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___L)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_StateStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateStack;
}
constexpr int32_t const& ThirdParty::Json::LitJson::FsmContext::__cordl_internal_get_StateStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateStack;
}
constexpr void ThirdParty::Json::LitJson::FsmContext::__cordl_internal_set_StateStack(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StateStack = value;
}
inline ::ThirdParty::Json::LitJson::FsmContext* ThirdParty::Json::LitJson::FsmContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::FsmContext*>());
}
inline void ThirdParty::Json::LitJson::FsmContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::FsmContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::FsmContext::FsmContext() {}
