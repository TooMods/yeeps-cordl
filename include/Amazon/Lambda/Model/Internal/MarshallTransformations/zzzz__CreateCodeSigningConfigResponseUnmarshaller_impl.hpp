#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonResponseUnmarshaller_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__CreateCodeSigningConfigResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x311cf2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller.UnmarshallException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonServiceException* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*, ::System::Exception*,
                                                                                                                ::System::Net::HttpStatusCode)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::UnmarshallException)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x311d084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x311d5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), "GetInstance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x311d614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), "get_Instance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x311d66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::AmazonWebServiceResponse*
Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method, context);
}
inline ::Amazon::Runtime::AmazonServiceException* Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::UnmarshallException(
    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonServiceException*, false>(this, ___internal_method, context, innerException, statusCode);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), "GetInstance",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), "get_Instance",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::CreateCodeSigningConfigResponseUnmarshaller::CreateCodeSigningConfigResponseUnmarshaller() {}
