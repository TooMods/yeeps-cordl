#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__ProjectionUnmarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Projection_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller.Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_Projection_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Projection* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::
        Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_Projection_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11c81f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
        "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.Projection,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Projection* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x11b8c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11c8234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
                                                 "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__Projection____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__Projection____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::Projection*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get>();
}
inline ::Amazon::DynamoDBv2::Model::Projection* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::
    Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_DynamoDBv2_Model_Projection_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
        ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
                                 "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.DynamoDBv2.Model.Projection,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Projection*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::Projection*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Projection*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ProjectionUnmarshaller::ProjectionUnmarshaller() {}
