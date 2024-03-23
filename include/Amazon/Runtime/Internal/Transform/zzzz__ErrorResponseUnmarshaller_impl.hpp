#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ErrorResponseUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorResponse_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::ErrorResponse* (::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
        &::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2448da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller.PopulateErrorResponseFromXmlIfPossible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*, ::Amazon::Runtime::Internal::ErrorResponse*)>(
        &::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::PopulateErrorResponseFromXmlIfPossible)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2448f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(),
                                    "PopulateErrorResponseFromXmlIfPossible", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller.TryReadContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(
    &::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::TryReadContext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24493d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "TryReadContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2449474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "GetInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24494f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___Amazon__Runtime__Internal__ErrorResponse____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::Amazon::Runtime::Internal::ErrorResponse*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
inline void Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::setStaticF_instance(::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get>(
      std::forward<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>(value));
}
inline ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller* Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::ErrorResponse*
Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::ErrorResponse*, false>(this, ___internal_method, context);
}
inline void Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::PopulateErrorResponseFromXmlIfPossible(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context,
                                                                                                                    ::Amazon::Runtime::Internal::ErrorResponse* response) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(),
                                  "PopulateErrorResponseFromXmlIfPossible", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::ErrorResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, response);
}
inline bool Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::TryReadContext(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "TryReadContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, context);
}
inline ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller* Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::GetInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), "GetInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller* Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::ErrorResponseUnmarshaller::ErrorResponseUnmarshaller() {}
