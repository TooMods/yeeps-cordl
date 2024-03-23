#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__DateTimeEpochLongMillisecondsUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244d8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x244d8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                                 "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x244d938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                                 "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244d9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x244da08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(), "Unmarshall",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__DateTime___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::DateTime, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
inline void
Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::setStaticF__instance(::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get>(
      std::forward<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>(value));
}
inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller* Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::GetInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(),
                                               "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::System::DateTime Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(), "Unmarshall",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, context);
}
inline ::System::DateTime Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::DateTimeEpochLongMillisecondsUnmarshaller::DateTimeEpochLongMillisecondsUnmarshaller() {}
