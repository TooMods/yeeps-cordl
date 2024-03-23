#pragma once
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Net/Configuration/zzzz__MailSettingsSectionGroup_def.hpp"
#include "System/Net/Configuration/zzzz__SmtpSection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::MailSettingsSectionGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::MailSettingsSectionGroup::*)()>(
    &::System::Net::Configuration::MailSettingsSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18ce664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::MailSettingsSectionGroup*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::MailSettingsSectionGroup.get_Smtp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SmtpSection* (::System::Net::Configuration::MailSettingsSectionGroup::*)()>(
    &::System::Net::Configuration::MailSettingsSectionGroup::get_Smtp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18ce69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::MailSettingsSectionGroup*>::get(),
                                                                               "get_Smtp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::MailSettingsSectionGroup* System::Net::Configuration::MailSettingsSectionGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::MailSettingsSectionGroup*>());
}
inline void System::Net::Configuration::MailSettingsSectionGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::MailSettingsSectionGroup*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::SmtpSection* System::Net::Configuration::MailSettingsSectionGroup::get_Smtp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::MailSettingsSectionGroup*>::get(),
                                                                             "get_Smtp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SmtpSection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::MailSettingsSectionGroup::MailSettingsSectionGroup() {}
