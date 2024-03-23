#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__DecimalUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244cc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x244cc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "get_Instance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x244ccd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "GetInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244cd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244cda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>* Amazon::Runtime::Internal::Transform::
    DecimalUnmarshaller::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Decimal___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>* Amazon::Runtime::Internal::Transform::
    DecimalUnmarshaller::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Decimal___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Decimal, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
inline void Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::setStaticF__instance(::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get>(
      std::forward<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>(value));
}
inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "get_Instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller* Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::GetInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "GetInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::System::Decimal Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method, context);
}
inline ::System::Decimal Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::DecimalUnmarshaller::DecimalUnmarshaller() {}
