#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__EC2UnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::*)(
    ::System::IO::Stream*, bool, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(&::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x244bc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext.get_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), "get_RequestId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext.set_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::set_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), "set_RequestId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::Read)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x244f4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::__cordl_internal_get__RequestId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestId_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::__cordl_internal_get__RequestId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestId_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::__cordl_internal_set__RequestId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RequestId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param isException: bool (default: false)
inline ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*
Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                       ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>(responseStream, maintainResponseBody, responseData, isException));
}
/// @param isException: bool (default: false)
inline void Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseStream, maintainResponseBody, responseData, isException);
}
inline ::StringW Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::get_RequestId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), "get_RequestId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::set_RequestId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), "set_RequestId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext::EC2UnmarshallerContext() {}
