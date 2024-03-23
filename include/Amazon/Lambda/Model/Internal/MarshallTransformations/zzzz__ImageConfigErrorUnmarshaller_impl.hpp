#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__ImageConfigErrorUnmarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ImageConfigError_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller.Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_Lambda_Model_ImageConfigError_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfigError* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::
        Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_Lambda_Model_ImageConfigError_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ed3d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(),
        "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.Lambda.Model.ImageConfigError,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ImageConfigError* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2ed3d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ed3f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed3fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__ImageConfigError____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__ImageConfigError____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::ImageConfigError*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get>();
}
inline ::Amazon::Lambda::Model::ImageConfigError* Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::
    Amazon_Runtime_Internal_Transform_IUnmarshaller_Amazon_Lambda_Model_ImageConfigError_Amazon_Runtime_Internal_Transform_XmlUnmarshallerContext__Unmarshall(
        ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(),
                                 "Amazon.Runtime.Internal.Transform.IUnmarshaller<Amazon.Lambda.Model.ImageConfigError,Amazon.Runtime.Internal.Transform.XmlUnmarshallerContext>.Unmarshall",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfigError*, false>(this, ___internal_method, context);
}
inline ::Amazon::Lambda::Model::ImageConfigError*
Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ImageConfigError*, false>(this, ___internal_method, context);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(),
                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller* Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::ImageConfigErrorUnmarshaller::ImageConfigErrorUnmarshaller() {}
