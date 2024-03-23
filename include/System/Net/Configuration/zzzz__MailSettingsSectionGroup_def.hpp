#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(MailSettingsSectionGroup)
namespace System::Net::Configuration {
class SmtpSection;
}
// Forward declare root types
namespace System::Net::Configuration {
class MailSettingsSectionGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::MailSettingsSectionGroup);
// Type: System.Net.Configuration::MailSettingsSectionGroup
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::MailSettingsSectionGroup*
class CORDL_TYPE MailSettingsSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
  // Declarations
  __declspec(property(get = get_Smtp))::System::Net::Configuration::SmtpSection* Smtp;

  static inline ::System::Net::Configuration::MailSettingsSectionGroup* New_ctor();

  /// @brief Method .ctor, addr 0x18ce664, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Smtp, addr 0x18ce69c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::SmtpSection* get_Smtp();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MailSettingsSectionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MailSettingsSectionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MailSettingsSectionGroup(MailSettingsSectionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MailSettingsSectionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MailSettingsSectionGroup(MailSettingsSectionGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::MailSettingsSectionGroup, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::MailSettingsSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::MailSettingsSectionGroup*, "System.Net.Configuration", "MailSettingsSectionGroup");
