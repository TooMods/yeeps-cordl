#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__EnvironmentInfo_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__IEnvironmentInfo_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fdae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo.get_Platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_Platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdaea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_Platform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo.get_PlatformUserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_PlatformUserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdaeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_PlatformUserAgent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo.get_FrameworkUserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::*)()>(
    &::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_FrameworkUserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdaeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_FrameworkUserAgent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo"
constexpr Amazon::Util::Internal::PlatformServices::EnvironmentInfo::operator ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo"
constexpr ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*
Amazon::Util::Internal::PlatformServices::EnvironmentInfo::i___Amazon__Util__Internal__PlatformServices__IEnvironmentInfo() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*>(static_cast<void*>(this));
}
constexpr ::StringW& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__Platform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Platform_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__Platform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Platform_k__BackingField;
}
constexpr void Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_set__Platform_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Platform_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__PlatformUserAgent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlatformUserAgent_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__PlatformUserAgent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlatformUserAgent_k__BackingField;
}
constexpr void Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_set__PlatformUserAgent_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlatformUserAgent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__FrameworkUserAgent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FrameworkUserAgent_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_get__FrameworkUserAgent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FrameworkUserAgent_k__BackingField;
}
constexpr void Amazon::Util::Internal::PlatformServices::EnvironmentInfo::__cordl_internal_set__FrameworkUserAgent_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FrameworkUserAgent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo* Amazon::Util::Internal::PlatformServices::EnvironmentInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>());
}
inline void Amazon::Util::Internal::PlatformServices::EnvironmentInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_Platform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_Platform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_PlatformUserAgent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_PlatformUserAgent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::EnvironmentInfo::get_FrameworkUserAgent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*>::get(), "get_FrameworkUserAgent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo::EnvironmentInfo() {}
