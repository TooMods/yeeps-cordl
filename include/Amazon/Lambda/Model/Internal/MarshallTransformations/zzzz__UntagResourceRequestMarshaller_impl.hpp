#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__UntagResourceRequestMarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__UntagResourceRequest_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
        &::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bad778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::IRequest* (::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::*)(::Amazon::Lambda::Model::UntagResourceRequest*)>(
        &::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x2bad7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::UntagResourceRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2badc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(),
                                    "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller* (*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2badcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(),
                                    "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2badd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::UntagResourceRequest*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UntagResourceRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UntagResourceRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Lambda::Model::UntagResourceRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UntagResourceRequest*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Lambda__Model__UntagResourceRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Lambda::Model::UntagResourceRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::operator ::Amazon::Runtime::Internal::Transform::IMarshaller_2<
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,::Amazon::Runtime::AmazonWebServiceRequest*>"
constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::
    i___Amazon__Runtime__Internal__Transform__IMarshaller_2___Amazon__Runtime__Internal__IRequest____Amazon__Runtime__AmazonWebServiceRequest__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*>(static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::setStaticF__instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::IRequest* Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::Marshall(::Amazon::Runtime::AmazonWebServiceRequest* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, input);
}
inline ::Amazon::Runtime::Internal::IRequest*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::Marshall(::Amazon::Lambda::Model::UntagResourceRequest* publicRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), "Marshall",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::UntagResourceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IRequest*, false>(this, ___internal_method, publicRequest);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(),
                                  "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(),
                                  "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::UntagResourceRequestMarshaller::UntagResourceRequestMarshaller() {}
