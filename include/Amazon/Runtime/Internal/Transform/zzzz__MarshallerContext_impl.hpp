#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__MarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::MarshallerContext.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::Runtime::Internal::Transform::MarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::MarshallerContext::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24494fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(), "get_Request",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::MarshallerContext.set_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::MarshallerContext::*)(::Amazon::Runtime::Internal::IRequest*)>(
    &::Amazon::Runtime::Internal::Transform::MarshallerContext::set_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2449504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(), "set_Request", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::MarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::MarshallerContext::*)(::Amazon::Runtime::Internal::IRequest*)>(
    &::Amazon::Runtime::Internal::Transform::MarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x244950c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::IRequest*& Amazon::Runtime::Internal::Transform::MarshallerContext::__cordl_internal_get__Request_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRequest*> const&
Amazon::Runtime::Internal::Transform::MarshallerContext::__cordl_internal_get__Request_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::MarshallerContext::__cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::Internal::IRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Request_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::IRequest* Amazon::Runtime::Internal::Transform::MarshallerContext::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(),
                                                                             "get_Request", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::MarshallerContext::set_Request(::Amazon::Runtime::Internal::IRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(), "set_Request", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::MarshallerContext* Amazon::Runtime::Internal::Transform::MarshallerContext::New_ctor(::Amazon::Runtime::Internal::IRequest* request) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::MarshallerContext*>(request));
}
inline void Amazon::Runtime::Internal::Transform::MarshallerContext::_ctor(::Amazon::Runtime::Internal::IRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::MarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::MarshallerContext::MarshallerContext() {}
