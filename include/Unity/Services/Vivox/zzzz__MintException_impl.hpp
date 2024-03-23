#pragma once
#include "Unity/Services/Core/zzzz__RequestFailedException_impl.hpp"
#include "Unity/Services/Vivox/zzzz__MintException_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__MintExceptionCode_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::MintException.get_Detail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::MintException::*)()>(&::Unity::Services::Vivox::MintException::get_Detail)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1c13154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), "get_Detail",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::MintException.get_ExpiresAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Unity::Services::Vivox::MintException::*)()>(
    &::Unity::Services::Vivox::MintException::get_ExpiresAt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1c131dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), "get_ExpiresAt",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::MintException.get_ExceptionCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::MintExceptionCode (::Unity::Services::Vivox::MintException::*)()>(
    &::Unity::Services::Vivox::MintException::get_ExceptionCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c13294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(),
                                                                               "get_ExceptionCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::MintException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::MintException::*)(::System::Exception*)>(
    &::Unity::Services::Vivox::MintException::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c1329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Vivox::MintException::get_Detail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), "get_Detail",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Unity::Services::Vivox::MintException::get_ExpiresAt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), "get_ExpiresAt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::MintExceptionCode Unity::Services::Vivox::MintException::get_ExceptionCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(),
                                                                             "get_ExceptionCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::MintExceptionCode, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::MintException* Unity::Services::Vivox::MintException::New_ctor(::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::MintException*>(innerException));
}
inline void Unity::Services::Vivox::MintException::_ctor(::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::MintException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerException);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::MintException::MintException() {}
