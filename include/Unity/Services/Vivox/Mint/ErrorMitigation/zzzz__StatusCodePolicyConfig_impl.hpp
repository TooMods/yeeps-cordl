#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__StatusCodePolicyConfig_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig.HandleStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::*)(int64_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::HandleStatusCode)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1707944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "HandleStatusCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig.DontHandleStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::*)(int64_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::DontHandleStatusCode)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1707b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "DontHandleStatusCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1707d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig.IsHandledStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::*)(int64_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::IsHandledStatusCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1707dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "IsHandledStatusCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1707eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<int64_t, bool>*& Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::__cordl_internal_get__statusCodesToHandleDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusCodesToHandleDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<int64_t, bool>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::__cordl_internal_get__statusCodesToHandleDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusCodesToHandleDict;
}
constexpr void
Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::__cordl_internal_set__statusCodesToHandleDict(::System::Collections::Generic::IDictionary_2<int64_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statusCodesToHandleDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::HandleStatusCode(int64_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "HandleStatusCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::DontHandleStatusCode(int64_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "DontHandleStatusCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::IsHandledStatusCode(int64_t code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), "IsHandledStatusCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, code);
}
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig* Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>());
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig::StatusCodePolicyConfig() {}
