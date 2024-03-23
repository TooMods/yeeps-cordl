#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexSettingsUpdate_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IRequestMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::*)(
        ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*)>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x11d0d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::*)()>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d0ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<
    ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*,
                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*,
                                                                       ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::
    i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__DynamoDBv2__Model__ReplicaGlobalSecondaryIndexSettingsUpdate____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*,
                                                                                  ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::setStaticF_Instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller* value) {
  ::cordl_internals::setStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*, "Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*, "Instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get>();
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::Marshall(
    ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate* requestObject, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestObject, context);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller::ReplicaGlobalSecondaryIndexSettingsUpdateMarshaller() {}
