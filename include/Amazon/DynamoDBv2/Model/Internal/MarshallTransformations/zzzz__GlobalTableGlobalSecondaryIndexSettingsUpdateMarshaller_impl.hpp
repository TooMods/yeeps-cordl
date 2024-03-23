#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalTableGlobalSecondaryIndexSettingsUpdate_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IRequestMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::*)(
        ::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*)>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x11bad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(),
        "Marshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::*)()>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11baef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(),
        ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<
    ::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*,
                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*,
                                                                       ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::
    i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__DynamoDBv2__Model__GlobalTableGlobalSecondaryIndexSettingsUpdate____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*,
                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::setStaticF_Instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*, "Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*, "Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get>();
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::Marshall(
    ::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(),
      "Marshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestObject, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller::GlobalTableGlobalSecondaryIndexSettingsUpdateMarshaller() {}
