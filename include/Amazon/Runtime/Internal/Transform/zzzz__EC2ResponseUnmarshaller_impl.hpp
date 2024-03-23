#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlResponseUnmarshaller_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__EC2ResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::UnmarshallerContext*)>(
        &::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x244bb08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller.ConstructUnmarshallerContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::UnmarshallerContext* (
    ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::*)(::System::IO::Stream*, bool, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(
    &::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::ConstructUnmarshallerContext)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x244bc00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244bd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::AmazonWebServiceResponse* Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method, input);
}
inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*
Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                            ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::UnmarshallerContext*, false>(this, ___internal_method, responseStream, maintainResponseBody, response,
                                                                                                                  isException);
}
inline ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller* Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::EC2ResponseUnmarshaller::EC2ResponseUnmarshaller() {}
