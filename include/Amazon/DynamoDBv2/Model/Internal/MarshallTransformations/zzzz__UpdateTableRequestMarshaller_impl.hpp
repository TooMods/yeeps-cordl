#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/Internal/MarshallTransformations/zzzz__UpdateTableRequestMarshaller_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateTableRequest_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
        &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1741cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IRequest* (
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::*)(::Amazon::DynamoDBv2::Model::UpdateTableRequest*)>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x10e8;
  constexpr static std::size_t addrs = 0x1741d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                    "Marshall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1742e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                    "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller* (*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1742e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::*)()>(
    &::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1742eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateTableRequest*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateTableRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateTableRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::DynamoDBv2::Model::UpdateTableRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateTableRequest*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__DynamoDBv2__Model__UpdateTableRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::DynamoDBv2::Model::UpdateTableRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::setStaticF__instance(
    ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get>(
      std::forward<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>(value));
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<
      ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*, "_instance",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::IRequest* Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, input);
}
inline ::Amazon::Runtime::Internal::IRequest*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::Marshall(::Amazon::DynamoDBv2::Model::UpdateTableRequest* publicRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, publicRequest);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                  "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*
Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>());
}
inline void Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::Internal::MarshallTransformations::UpdateTableRequestMarshaller::UpdateTableRequestMarshaller() {}
