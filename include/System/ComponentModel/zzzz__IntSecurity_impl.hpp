#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__IntSecurity_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IntSecurity.UnsafeGetFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::ComponentModel::IntSecurity::UnsafeGetFullPath)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1b16060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IntSecurity*>::get(), "UnsafeGetFullPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::IntSecurity::UnsafeGetFullPath(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IntSecurity*>::get(), "UnsafeGetFullPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, fileName);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::IntSecurity::IntSecurity() {}
