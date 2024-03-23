#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__TransactionConflictExceptionUnmarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactionConflictException_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IErrorResponseUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorResponse_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TransactionConflictException* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1733b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TransactionConflictException* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*,
                                                                                                                 ::Amazon::Runtime::Internal::ErrorResponse*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1733bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1733cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "get_Instance",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1733d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::TransactionConflictException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,
                                                                                          ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,
                                                                               ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IErrorResponseUnmarshaller_2___Amazon__DynamoDBv2__Model__TransactionConflictException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IErrorResponseUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,
                                                                                          ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::DynamoDBv2::Model::TransactionConflictException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__DynamoDBv2__Model__TransactionConflictException____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::DynamoDBv2::Model::TransactionConflictException*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get>();
}
inline ::Amazon::DynamoDBv2::Model::TransactionConflictException*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TransactionConflictException*, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::Model::TransactionConflictException*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context,
                                                                                                                   ::Amazon::Runtime::Internal::ErrorResponse* errorResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TransactionConflictException*, false>(this, ___internal_method, context, errorResponse);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), "get_Instance",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::TransactionConflictExceptionUnmarshaller::TransactionConflictExceptionUnmarshaller() {}
