#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__ReplicaSettingsDescriptionUnmarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaSettingsDescription_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller.Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ReplicaSettingsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::
        Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ReplicaSettingsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11d1248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(),
        "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ReplicaSettingsDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x11d1288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11d1958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(), "get_Instance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d19b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaSettingsDescription____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__ReplicaSettingsDescription____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get>();
}
inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::
    Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_ReplicaSettingsDescription_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
        ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(),
      "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.ReplicaSettingsDescription,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(),
                                 "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaSettingsDescriptionUnmarshaller::ReplicaSettingsDescriptionUnmarshaller() {}
