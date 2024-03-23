#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__ContinuousBackupsDescriptionUnmarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ContinuousBackupsDescription_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller.Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ContinuousBackupsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::
        Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ContinuousBackupsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1309fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(),
        "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ContinuousBackupsDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1309fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x130a23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), "get_Instance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x130a294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ContinuousBackupsDescription____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ContinuousBackupsDescription____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get>();
}
inline ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::
    Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ContinuousBackupsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
        ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(),
      "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ContinuousBackupsDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), "get_Instance",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ContinuousBackupsDescriptionUnmarshaller::ContinuousBackupsDescriptionUnmarshaller() {}
