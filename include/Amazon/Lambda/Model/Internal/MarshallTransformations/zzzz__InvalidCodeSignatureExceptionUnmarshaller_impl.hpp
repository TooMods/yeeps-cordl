#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__InvalidCodeSignatureExceptionUnmarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__InvalidCodeSignatureException_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IErrorResponseUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorResponse_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::InvalidCodeSignatureException* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ed48b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::InvalidCodeSignatureException* (
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*,
                                                                                                              ::Amazon::Runtime::Internal::ErrorResponse*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2eb3888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ed4914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(), "get_Instance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed496c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<
    ::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*,
                                                                               ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IErrorResponseUnmarshaller_2___Amazon__Lambda__Model__InvalidCodeSignatureException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Lambda__Model__InvalidCodeSignatureException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Lambda::Model::InvalidCodeSignatureException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get>();
}
inline ::Amazon::Lambda::Model::InvalidCodeSignatureException*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::InvalidCodeSignatureException*, false>(this, ___internal_method, context);
}
inline ::Amazon::Lambda::Model::InvalidCodeSignatureException*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                                                                ::Amazon::Runtime::Internal::ErrorResponse* errorResponse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(),
                                  "Unmarshall", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::InvalidCodeSignatureException*, false>(this, ___internal_method, context, errorResponse);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::InvalidCodeSignatureExceptionUnmarshaller::InvalidCodeSignatureExceptionUnmarshaller() {}
