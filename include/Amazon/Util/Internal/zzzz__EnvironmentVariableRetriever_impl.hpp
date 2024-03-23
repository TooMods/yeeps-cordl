#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/zzzz__EnvironmentVariableRetriever_def.hpp"
#include "Amazon/Util/Internal/zzzz__IEnvironmentVariableRetriever_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableRetriever.GetEnvironmentVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::EnvironmentVariableRetriever::*)(::StringW)>(
    &::Amazon::Util::Internal::EnvironmentVariableRetriever::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2210f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableRetriever*>::get(), "GetEnvironmentVariable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableRetriever._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::EnvironmentVariableRetriever::*)()>(
    &::Amazon::Util::Internal::EnvironmentVariableRetriever::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2210f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableRetriever*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Util::Internal::IEnvironmentVariableRetriever"
constexpr Amazon::Util::Internal::EnvironmentVariableRetriever::operator ::Amazon::Util::Internal::IEnvironmentVariableRetriever*() noexcept {
  return static_cast<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Util::Internal::IEnvironmentVariableRetriever"
constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever* Amazon::Util::Internal::EnvironmentVariableRetriever::i___Amazon__Util__Internal__IEnvironmentVariableRetriever() noexcept {
  return static_cast<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>(static_cast<void*>(this));
}
inline ::StringW Amazon::Util::Internal::EnvironmentVariableRetriever::GetEnvironmentVariable(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableRetriever*>::get(), "GetEnvironmentVariable",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::Amazon::Util::Internal::EnvironmentVariableRetriever* Amazon::Util::Internal::EnvironmentVariableRetriever::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::EnvironmentVariableRetriever*>());
}
inline void Amazon::Util::Internal::EnvironmentVariableRetriever::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableRetriever*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::EnvironmentVariableRetriever::EnvironmentVariableRetriever() {}
