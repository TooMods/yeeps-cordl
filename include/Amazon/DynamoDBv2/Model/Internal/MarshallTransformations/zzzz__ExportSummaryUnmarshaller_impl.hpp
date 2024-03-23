#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__ExportSummaryUnmarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExportSummary_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller.Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ExportSummary_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExportSummary* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::
        Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ExportSummary_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11b150c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(),
        "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ExportSummary,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExportSummary* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x11b154c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11b178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b17e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ExportSummary____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ExportSummary____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ExportSummary*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get>();
}
inline ::Amazon::DynamoDBv2::Model::ExportSummary* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::
    Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ExportSummary_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
        ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(),
                                 "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ExportSummary,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExportSummary*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::ExportSummary*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExportSummary*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ExportSummaryUnmarshaller::ExportSummaryUnmarshaller() {}
