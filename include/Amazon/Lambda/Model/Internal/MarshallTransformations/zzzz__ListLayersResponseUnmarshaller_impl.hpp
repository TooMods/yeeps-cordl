#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonResponseUnmarshaller_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__ListLayersResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2b982b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller.UnmarshallException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonServiceException* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*, ::System::Exception*,
                                                                                                   ::System::Net::HttpStatusCode)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::UnmarshallException)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x2b98520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b98b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
                                    "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b98b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b98bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::AmazonWebServiceResponse*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method, context);
}
inline ::Amazon::Runtime::AmazonServiceException*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::UnmarshallException(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                                                              ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonServiceException*, false>(this, ___internal_method, context, innerException, statusCode);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
                                  "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::ListLayersResponseUnmarshaller::ListLayersResponseUnmarshaller() {}
