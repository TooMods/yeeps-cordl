#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IResponseUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.CreateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::UnmarshallerContext* (
    ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool, ::System::IO::Stream*,
                                                                     ::Amazon::Runtime::Internal::Util::RequestMetrics*, bool)>(
    &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::CreateContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x244b338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.get_HasStreamingProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::get_HasStreamingProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b3e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.UnmarshallException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonServiceException* (
    ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::UnmarshallerContext*, ::System::Exception*, ::System::Net::HttpStatusCode)>(
    &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::UnmarshallException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x244b3e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.UnmarshallResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::UnmarshallerContext*)>(
        &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::UnmarshallResponse)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x244b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), "UnmarshallResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::UnmarshallerContext*)>(
        &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.ConstructUnmarshallerContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::UnmarshallerContext* (
    ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(::System::IO::Stream*, bool, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(
    &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::ConstructUnmarshallerContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller.ShouldReadEntireResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(&::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::ShouldReadEntireResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<
    ::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IResponseUnmarshaller_2___Amazon__Runtime__AmazonWebServiceResponse____Amazon__Runtime__Internal__Transform__UnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IResponseUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*,::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Runtime__AmazonWebServiceResponse____Amazon__Runtime__Internal__Transform__UnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::AmazonWebServiceResponse*, ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*
Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::CreateContext(::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool readEntireResponse, ::System::IO::Stream* stream,
                                                                          ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, bool isException) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::UnmarshallerContext*, false>(this, ___internal_method, response, readEntireResponse, stream, metrics, isException);
}
inline bool Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::get_HasStreamingProperty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AmazonServiceException* Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::UnmarshallException(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input,
                                                                                                                                  ::System::Exception* innerException,
                                                                                                                                  ::System::Net::HttpStatusCode statusCode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonServiceException*, false>(this, ___internal_method, input, innerException, statusCode);
}
inline ::Amazon::Runtime::AmazonWebServiceResponse*
Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::UnmarshallResponse(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), "UnmarshallResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::UnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method, context);
}
inline ::Amazon::Runtime::AmazonWebServiceResponse* Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::UnmarshallerContext* input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method, input);
}
template <typename T> inline ::StringW Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::GetDefaultErrorMessage() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), "GetDefaultErrorMessage",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::UnmarshallerContext*
Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::ConstructUnmarshallerContext(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                         ::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool isException) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::UnmarshallerContext*, false>(this, ___internal_method, responseStream, maintainResponseBody, response,
                                                                                                                  isException);
}
inline bool Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::ShouldReadEntireResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* response, bool readEntireResponse) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response, readEntireResponse);
}
inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller::ResponseUnmarshaller() {}
