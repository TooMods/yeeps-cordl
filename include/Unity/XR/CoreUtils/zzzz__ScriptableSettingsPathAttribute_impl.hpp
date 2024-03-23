#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsPathAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::*)()>(
    &::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2872870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>::get(),
                                                                               "get_Path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::*)(::StringW)>(
    &::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2872878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::StringW const& Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_set_m_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>::get(),
                                                                             "get_Path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @param path: ::StringW (default: u"")
inline ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute* Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::New_ctor(::StringW path) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(path));
}
/// @param path: ::StringW (default: u"")
inline void Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::_ctor(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::ScriptableSettingsPathAttribute() {}
