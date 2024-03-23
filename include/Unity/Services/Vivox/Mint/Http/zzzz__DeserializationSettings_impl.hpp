#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__MissingMemberHandling_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__DeserializationSettings_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::DeserializationSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::DeserializationSettings::*)()>(
    &::Unity::Services::Vivox::Mint::Http::DeserializationSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1701bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::DeserializationSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling& Unity::Services::Vivox::Mint::Http::DeserializationSettings::__cordl_internal_get_MissingMemberHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MissingMemberHandling;
}
constexpr ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling const& Unity::Services::Vivox::Mint::Http::DeserializationSettings::__cordl_internal_get_MissingMemberHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MissingMemberHandling;
}
constexpr void Unity::Services::Vivox::Mint::Http::DeserializationSettings::__cordl_internal_set_MissingMemberHandling(::Unity::Services::Vivox::Mint::Http::MissingMemberHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MissingMemberHandling = value;
}
inline ::Unity::Services::Vivox::Mint::Http::DeserializationSettings* Unity::Services::Vivox::Mint::Http::DeserializationSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::DeserializationSettings*>());
}
inline void Unity::Services::Vivox::Mint::Http::DeserializationSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::DeserializationSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::DeserializationSettings::DeserializationSettings() {}
