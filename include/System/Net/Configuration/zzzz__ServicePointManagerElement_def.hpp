#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointManagerElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace System::Net::Configuration {
class ServicePointManagerElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::ServicePointManagerElement);
// Type: System.Net.Configuration::ServicePointManagerElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::ServicePointManagerElement*
class CORDL_TYPE ServicePointManagerElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_CheckCertificateName, put = set_CheckCertificateName)) bool CheckCertificateName;

  __declspec(property(get = get_CheckCertificateRevocationList, put = set_CheckCertificateRevocationList)) bool CheckCertificateRevocationList;

  __declspec(property(get = get_DnsRefreshTimeout, put = set_DnsRefreshTimeout)) int32_t DnsRefreshTimeout;

  __declspec(property(get = get_EnableDnsRoundRobin, put = set_EnableDnsRoundRobin)) bool EnableDnsRoundRobin;

  __declspec(property(get = get_EncryptionPolicy, put = set_EncryptionPolicy))::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_Expect100Continue, put = set_Expect100Continue)) bool Expect100Continue;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_UseNagleAlgorithm, put = set_UseNagleAlgorithm)) bool UseNagleAlgorithm;

  static inline ::System::Net::Configuration::ServicePointManagerElement* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18cf9dc, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18cf65c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CheckCertificateName, addr 0x18cf694, size 0x38, virtual false, abstract: false, final false
  inline bool get_CheckCertificateName();

  /// @brief Method get_CheckCertificateRevocationList, addr 0x18cf704, size 0x38, virtual false, abstract: false, final false
  inline bool get_CheckCertificateRevocationList();

  /// @brief Method get_DnsRefreshTimeout, addr 0x18cf774, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_DnsRefreshTimeout();

  /// @brief Method get_EnableDnsRoundRobin, addr 0x18cf7e4, size 0x38, virtual false, abstract: false, final false
  inline bool get_EnableDnsRoundRobin();

  /// @brief Method get_EncryptionPolicy, addr 0x18cf854, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy();

  /// @brief Method get_Expect100Continue, addr 0x18cf8c4, size 0x38, virtual false, abstract: false, final false
  inline bool get_Expect100Continue();

  /// @brief Method get_Properties, addr 0x18cf934, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_UseNagleAlgorithm, addr 0x18cf96c, size 0x38, virtual false, abstract: false, final false
  inline bool get_UseNagleAlgorithm();

  /// @brief Method set_CheckCertificateName, addr 0x18cf6cc, size 0x38, virtual false, abstract: false, final false
  inline void set_CheckCertificateName(bool value);

  /// @brief Method set_CheckCertificateRevocationList, addr 0x18cf73c, size 0x38, virtual false, abstract: false, final false
  inline void set_CheckCertificateRevocationList(bool value);

  /// @brief Method set_DnsRefreshTimeout, addr 0x18cf7ac, size 0x38, virtual false, abstract: false, final false
  inline void set_DnsRefreshTimeout(int32_t value);

  /// @brief Method set_EnableDnsRoundRobin, addr 0x18cf81c, size 0x38, virtual false, abstract: false, final false
  inline void set_EnableDnsRoundRobin(bool value);

  /// @brief Method set_EncryptionPolicy, addr 0x18cf88c, size 0x38, virtual false, abstract: false, final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_Expect100Continue, addr 0x18cf8fc, size 0x38, virtual false, abstract: false, final false
  inline void set_Expect100Continue(bool value);

  /// @brief Method set_UseNagleAlgorithm, addr 0x18cf9a4, size 0x38, virtual false, abstract: false, final false
  inline void set_UseNagleAlgorithm(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServicePointManagerElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServicePointManagerElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServicePointManagerElement(ServicePointManagerElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServicePointManagerElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServicePointManagerElement(ServicePointManagerElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ServicePointManagerElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ServicePointManagerElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ServicePointManagerElement*, "System.Net.Configuration", "ServicePointManagerElement");
