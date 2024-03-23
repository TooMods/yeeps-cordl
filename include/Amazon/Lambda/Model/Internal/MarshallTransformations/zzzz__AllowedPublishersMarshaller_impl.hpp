#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/Internal/MarshallTransformations/zzzz__AllowedPublishersMarshaller_def.hpp"
#include "Amazon/Lambda/Model/zzzz__AllowedPublishers_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IRequestMarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonMarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller.Marshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::*)(
    ::Amazon::Lambda::Model::AllowedPublishers*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*)>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::Marshall)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x31194cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get(), "Marshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::AllowedPublishers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::*)()>(
    &::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3119680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::AllowedPublishers*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::operator ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<
    ::Amazon::Lambda::Model::AllowedPublishers*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::AllowedPublishers*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::AllowedPublishers*,::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::AllowedPublishers*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*
Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::
    i___Amazon__Runtime__Internal__Transform__IRequestMarshaller_2___Amazon__Lambda__Model__AllowedPublishers____Amazon__Runtime__Internal__Transform__JsonMarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IRequestMarshaller_2<::Amazon::Lambda::Model::AllowedPublishers*, ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::setStaticF_Instance(
    ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get>(
      std::forward<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>(value));
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*
Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get>();
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::Marshall(::Amazon::Lambda::Model::AllowedPublishers* requestObject,
                                                                                                            ::Amazon::Runtime::Internal::Transform::JsonMarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get(), "Marshall",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::AllowedPublishers*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonMarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestObject, context);
}
inline ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller* Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>());
}
inline void Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::Internal::MarshallTransformations::AllowedPublishersMarshaller::AllowedPublishersMarshaller() {}
