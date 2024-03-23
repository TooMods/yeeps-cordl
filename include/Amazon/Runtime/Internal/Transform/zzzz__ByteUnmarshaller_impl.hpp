#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ByteUnmarshaller_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::*)()>(
    &::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244d0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x244d0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* (*)()>(
    &::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::GetInstance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x244d14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                               "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244d1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller.Unmarshall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::*)(
    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*)>(&::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::Unmarshall)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244d21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::ByteUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    uint8_t, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ByteUnmarshaller::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_uint8_t___Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr Amazon::Runtime::Internal::Transform::ByteUnmarshaller::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    uint8_t, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ByteUnmarshaller::i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2_uint8_t___Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<uint8_t, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(static_cast<void*>(this));
}
inline void Amazon::Runtime::Internal::Transform::ByteUnmarshaller::setStaticF__instance(::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get>(
      std::forward<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>(value));
}
inline ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* Amazon::Runtime::Internal::Transform::ByteUnmarshaller::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get>();
}
inline ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* Amazon::Runtime::Internal::Transform::ByteUnmarshaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>());
}
inline void Amazon::Runtime::Internal::Transform::ByteUnmarshaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* Amazon::Runtime::Internal::Transform::ByteUnmarshaller::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller* Amazon::Runtime::Internal::Transform::ByteUnmarshaller::GetInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(),
                                                                             "GetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*, false>(nullptr, ___internal_method);
}
inline uint8_t Amazon::Runtime::Internal::Transform::ByteUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, context);
}
inline uint8_t Amazon::Runtime::Internal::Transform::ByteUnmarshaller::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ByteUnmarshaller*>::get(), "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::ByteUnmarshaller::ByteUnmarshaller() {}
