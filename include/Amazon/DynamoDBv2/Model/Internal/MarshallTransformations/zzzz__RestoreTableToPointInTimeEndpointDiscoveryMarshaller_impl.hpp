#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__RestoreTableToPointInTimeEndpointDiscoveryMarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__RestoreTableToPointInTimeRequest_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryDataBase_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x172795c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(),
        "Marshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::*)(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17279d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(),
        "Marshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller* (*)()>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1727a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(),
        "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::*)()>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1727a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__DynamoDBv2__Model__RestoreTableToPointInTimeRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__EndpointDiscoveryDataBase____Amazon__Runtime__AmazonWebServiceRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, false>(this, ___internal_method, input);
}
inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::Marshall(
    ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest* publicRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, false>(this, ___internal_method, publicRequest);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(),
      "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::RestoreTableToPointInTimeEndpointDiscoveryMarshaller::RestoreTableToPointInTimeEndpointDiscoveryMarshaller() {}
