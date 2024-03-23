#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageInitializationInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::PackageInitializationInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::PackageInitializationInfo::*)()>(
    &::Unity::Services::Core::Internal::PackageInitializationInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266bf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageInitializationInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_get_PackageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_get_PackageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageType;
}
constexpr void Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_set_PackageType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PackageType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_get_InitializationTimeInSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializationTimeInSeconds;
}
constexpr double_t const& Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_get_InitializationTimeInSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitializationTimeInSeconds;
}
constexpr void Unity::Services::Core::Internal::PackageInitializationInfo::__cordl_internal_set_InitializationTimeInSeconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitializationTimeInSeconds = value;
}
inline ::Unity::Services::Core::Internal::PackageInitializationInfo* Unity::Services::Core::Internal::PackageInitializationInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::PackageInitializationInfo*>());
}
inline void Unity::Services::Core::Internal::PackageInitializationInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageInitializationInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::PackageInitializationInfo::PackageInitializationInfo() {}
