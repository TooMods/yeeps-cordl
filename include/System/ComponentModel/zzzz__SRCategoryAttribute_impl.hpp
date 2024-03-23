#pragma once
#include "System/ComponentModel/zzzz__CategoryAttribute_impl.hpp"
#include "System/ComponentModel/zzzz__SRCategoryAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SRCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::SRCategoryAttribute::*)(::StringW)>(
    &::System::ComponentModel::SRCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18ea404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SRCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::SRCategoryAttribute* System::ComponentModel::SRCategoryAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::SRCategoryAttribute*>(category));
}
inline void System::ComponentModel::SRCategoryAttribute::_ctor(::StringW category) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SRCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SRCategoryAttribute::SRCategoryAttribute() {}
