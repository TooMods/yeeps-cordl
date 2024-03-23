#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__GetMarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Get_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IRequestMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::*)(
    ::Amazon::DynamoDBv2::Model::Get*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*)>(&::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x11b5640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Get*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b5afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::Get*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<
    ::Amazon::DynamoDBv2::Model::Get*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::Get*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::Get*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::Get*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::
    i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__DynamoDBv2__Model__Get____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::Get*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::setStaticF_Instance(::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get>();
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::Marshall(::Amazon::DynamoDBv2::Model::Get* requestObject,
                                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get(), "Marshall",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Get*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestObject, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GetMarshaller::GetMarshaller() {}
