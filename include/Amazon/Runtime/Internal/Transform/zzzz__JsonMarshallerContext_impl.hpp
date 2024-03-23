#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__MarshallerContext_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonWriter_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext.get_Writer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::Json::LitJson::JsonWriter* (::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::get_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2449570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), "get_Writer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext.set_Writer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::*)(::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::set_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2449578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), "set_Writer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::ThirdParty::Json::LitJson::JsonWriter*)>(&::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2449580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ThirdParty::Json::LitJson::JsonWriter*& Amazon::Runtime::Internal::Transform::JsonMarshallerContext::__cordl_internal_get__Writer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Writer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonWriter*> const&
Amazon::Runtime::Internal::Transform::JsonMarshallerContext::__cordl_internal_get__Writer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Writer_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::JsonMarshallerContext::__cordl_internal_set__Writer_k__BackingField(::ThirdParty::Json::LitJson::JsonWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Writer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ThirdParty::Json::LitJson::JsonWriter* Amazon::Runtime::Internal::Transform::JsonMarshallerContext::get_Writer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), "get_Writer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::JsonWriter*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::JsonMarshallerContext::set_Writer(::ThirdParty::Json::LitJson::JsonWriter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), "set_Writer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* Amazon::Runtime::Internal::Transform::JsonMarshallerContext::New_ctor(::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                                            ::ThirdParty::Json::LitJson::JsonWriter* writer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>(request, writer));
}
inline void Amazon::Runtime::Internal::Transform::JsonMarshallerContext::_ctor(::Amazon::Runtime::Internal::IRequest* request, ::ThirdParty::Json::LitJson::JsonWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, writer);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext::JsonMarshallerContext() {}
