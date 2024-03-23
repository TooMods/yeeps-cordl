#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmtpNetworkElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SmtpNetworkElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SmtpNetworkElement);
// Type: System.Net.Configuration::SmtpNetworkElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::SmtpNetworkElement*
class CORDL_TYPE SmtpNetworkElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_ClientDomain, put = set_ClientDomain))::StringW ClientDomain;

  __declspec(property(get = get_DefaultCredentials, put = set_DefaultCredentials)) bool DefaultCredentials;

  __declspec(property(get = get_EnableSsl, put = set_EnableSsl)) bool EnableSsl;

  __declspec(property(get = get_Host, put = set_Host))::StringW Host;

  __declspec(property(get = get_Password, put = set_Password))::StringW Password;

  __declspec(property(get = get_Port, put = set_Port)) int32_t Port;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_TargetName, put = set_TargetName))::StringW TargetName;

  __declspec(property(get = get_UserName, put = set_UserName))::StringW UserName;

  static inline ::System::Net::Configuration::SmtpNetworkElement* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18cecf4, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18ce904, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientDomain, addr 0x18ce93c, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_ClientDomain();

  /// @brief Method get_DefaultCredentials, addr 0x18ce9ac, size 0x38, virtual false, abstract: false, final false
  inline bool get_DefaultCredentials();

  /// @brief Method get_EnableSsl, addr 0x18cea1c, size 0x38, virtual false, abstract: false, final false
  inline bool get_EnableSsl();

  /// @brief Method get_Host, addr 0x18cea8c, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_Password, addr 0x18ceafc, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_Password();

  /// @brief Method get_Port, addr 0x18ceb6c, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_Port();

  /// @brief Method get_Properties, addr 0x18cebdc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_TargetName, addr 0x18cec14, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_TargetName();

  /// @brief Method get_UserName, addr 0x18cec84, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_UserName();

  /// @brief Method set_ClientDomain, addr 0x18ce974, size 0x38, virtual false, abstract: false, final false
  inline void set_ClientDomain(::StringW value);

  /// @brief Method set_DefaultCredentials, addr 0x18ce9e4, size 0x38, virtual false, abstract: false, final false
  inline void set_DefaultCredentials(bool value);

  /// @brief Method set_EnableSsl, addr 0x18cea54, size 0x38, virtual false, abstract: false, final false
  inline void set_EnableSsl(bool value);

  /// @brief Method set_Host, addr 0x18ceac4, size 0x38, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method set_Password, addr 0x18ceb34, size 0x38, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method set_Port, addr 0x18ceba4, size 0x38, virtual false, abstract: false, final false
  inline void set_Port(int32_t value);

  /// @brief Method set_TargetName, addr 0x18cec4c, size 0x38, virtual false, abstract: false, final false
  inline void set_TargetName(::StringW value);

  /// @brief Method set_UserName, addr 0x18cecbc, size 0x38, virtual false, abstract: false, final false
  inline void set_UserName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmtpNetworkElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmtpNetworkElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmtpNetworkElement(SmtpNetworkElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmtpNetworkElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmtpNetworkElement(SmtpNetworkElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SmtpNetworkElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SmtpNetworkElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SmtpNetworkElement*, "System.Net.Configuration", "SmtpNetworkElement");
