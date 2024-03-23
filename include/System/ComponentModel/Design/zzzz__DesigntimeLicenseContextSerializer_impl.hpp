#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/Design/zzzz__DesigntimeLicenseContextSerializer_def.hpp"
#include "System/ComponentModel/Design/zzzz__RuntimeLicenseContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::DesigntimeLicenseContextSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::StringW, ::System::ComponentModel::Design::RuntimeLicenseContext*)>(
    &::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x18eac24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::RuntimeLicenseContext*>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::DesigntimeLicenseContextSerializer::Deserialize(::System::IO::Stream* o, ::StringW cryptoKey,
                                                                                            ::System::ComponentModel::Design::RuntimeLicenseContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::RuntimeLicenseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o, cryptoKey, context);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::DesigntimeLicenseContextSerializer() {}
