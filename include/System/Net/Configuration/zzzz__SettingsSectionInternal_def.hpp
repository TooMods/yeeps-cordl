#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsSectionInternal)
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SettingsSectionInternal);
// Type: System.Net.Configuration::SettingsSectionInternal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::SettingsSectionInternal*
class CORDL_TYPE SettingsSectionInternal : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CheckCertificateName, put = set_CheckCertificateName)) bool CheckCertificateName;

  __declspec(property(get = get_CheckCertificateRevocationList, put = set_CheckCertificateRevocationList)) bool CheckCertificateRevocationList;

  __declspec(property(get = get_DnsRefreshTimeout, put = set_DnsRefreshTimeout)) int32_t DnsRefreshTimeout;

  __declspec(property(get = get_EnableDnsRoundRobin, put = set_EnableDnsRoundRobin)) bool EnableDnsRoundRobin;

  __declspec(property(get = get_EncryptionPolicy, put = set_EncryptionPolicy))::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(get = get_Expect100Continue, put = set_Expect100Continue)) bool Expect100Continue;

  /// @brief Field HttpListenerUnescapeRequestUrl, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_HttpListenerUnescapeRequestUrl, put = __cordl_internal_set_HttpListenerUnescapeRequestUrl)) bool HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_IPProtectionLevel, put = __cordl_internal_set_IPProtectionLevel))::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;

  __declspec(property(get = get_Ipv6Enabled)) bool Ipv6Enabled;

  __declspec(property(get = get_UseNagleAlgorithm, put = set_UseNagleAlgorithm)) bool UseNagleAlgorithm;

  /// @brief Field <CheckCertificateName>k__BackingField, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__CheckCertificateName_k__BackingField, put = __cordl_internal_set__CheckCertificateName_k__BackingField)) bool _CheckCertificateName_k__BackingField;

  /// @brief Field <CheckCertificateRevocationList>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__CheckCertificateRevocationList_k__BackingField,
                      put = __cordl_internal_set__CheckCertificateRevocationList_k__BackingField)) bool _CheckCertificateRevocationList_k__BackingField;

  /// @brief Field <DnsRefreshTimeout>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__DnsRefreshTimeout_k__BackingField, put = __cordl_internal_set__DnsRefreshTimeout_k__BackingField)) int32_t _DnsRefreshTimeout_k__BackingField;

  /// @brief Field <EnableDnsRoundRobin>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableDnsRoundRobin_k__BackingField, put = __cordl_internal_set__EnableDnsRoundRobin_k__BackingField)) bool _EnableDnsRoundRobin_k__BackingField;

  /// @brief Field <EncryptionPolicy>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__EncryptionPolicy_k__BackingField,
                      put = __cordl_internal_set__EncryptionPolicy_k__BackingField))::System::Net::Security::EncryptionPolicy _EncryptionPolicy_k__BackingField;

  /// @brief Field <Expect100Continue>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__Expect100Continue_k__BackingField, put = __cordl_internal_set__Expect100Continue_k__BackingField)) bool _Expect100Continue_k__BackingField;

  /// @brief Field <UseNagleAlgorithm>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__UseNagleAlgorithm_k__BackingField, put = __cordl_internal_set__UseNagleAlgorithm_k__BackingField)) bool _UseNagleAlgorithm_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::System::Net::Configuration::SettingsSectionInternal* instance;

  static inline ::System::Net::Configuration::SettingsSectionInternal* New_ctor();

  constexpr bool const& __cordl_internal_get_HttpListenerUnescapeRequestUrl() const;

  constexpr bool& __cordl_internal_get_HttpListenerUnescapeRequestUrl();

  constexpr ::System::Net::Sockets::IPProtectionLevel const& __cordl_internal_get_IPProtectionLevel() const;

  constexpr ::System::Net::Sockets::IPProtectionLevel& __cordl_internal_get_IPProtectionLevel();

  constexpr bool const& __cordl_internal_get__CheckCertificateName_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CheckCertificateName_k__BackingField();

  constexpr bool const& __cordl_internal_get__CheckCertificateRevocationList_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CheckCertificateRevocationList_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__DnsRefreshTimeout_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__DnsRefreshTimeout_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableDnsRoundRobin_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableDnsRoundRobin_k__BackingField();

  constexpr ::System::Net::Security::EncryptionPolicy const& __cordl_internal_get__EncryptionPolicy_k__BackingField() const;

  constexpr ::System::Net::Security::EncryptionPolicy& __cordl_internal_get__EncryptionPolicy_k__BackingField();

  constexpr bool const& __cordl_internal_get__Expect100Continue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Expect100Continue_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseNagleAlgorithm_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseNagleAlgorithm_k__BackingField();

  constexpr void __cordl_internal_set_HttpListenerUnescapeRequestUrl(bool value);

  constexpr void __cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value);

  constexpr void __cordl_internal_set__CheckCertificateName_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CheckCertificateRevocationList_k__BackingField(bool value);

  constexpr void __cordl_internal_set__DnsRefreshTimeout_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__EnableDnsRoundRobin_k__BackingField(bool value);

  constexpr void __cordl_internal_set__EncryptionPolicy_k__BackingField(::System::Net::Security::EncryptionPolicy value);

  constexpr void __cordl_internal_set__Expect100Continue_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseNagleAlgorithm_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2ded9ac, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Configuration::SettingsSectionInternal* getStaticF_instance();

  /// @brief Method get_CheckCertificateName, addr 0x2ded948, size 0x8, virtual false, abstract: false, final false
  inline bool get_CheckCertificateName();

  /// @brief Method get_CheckCertificateRevocationList, addr 0x2ded980, size 0x8, virtual false, abstract: false, final false
  inline bool get_CheckCertificateRevocationList();

  /// @brief Method get_DnsRefreshTimeout, addr 0x2ded95c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DnsRefreshTimeout();

  /// @brief Method get_EnableDnsRoundRobin, addr 0x2ded96c, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableDnsRoundRobin();

  /// @brief Method get_EncryptionPolicy, addr 0x2ded994, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy();

  /// @brief Method get_Expect100Continue, addr 0x2ded934, size 0x8, virtual false, abstract: false, final false
  inline bool get_Expect100Continue();

  /// @brief Method get_Ipv6Enabled, addr 0x2ded9a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Ipv6Enabled();

  /// @brief Method get_Section, addr 0x2ded8c8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::SettingsSectionInternal* get_Section();

  /// @brief Method get_UseNagleAlgorithm, addr 0x2ded920, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseNagleAlgorithm();

  static inline void setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal* value);

  /// @brief Method set_CheckCertificateName, addr 0x2ded950, size 0xc, virtual false, abstract: false, final false
  inline void set_CheckCertificateName(bool value);

  /// @brief Method set_CheckCertificateRevocationList, addr 0x2ded988, size 0xc, virtual false, abstract: false, final false
  inline void set_CheckCertificateRevocationList(bool value);

  /// @brief Method set_DnsRefreshTimeout, addr 0x2ded964, size 0x8, virtual false, abstract: false, final false
  inline void set_DnsRefreshTimeout(int32_t value);

  /// @brief Method set_EnableDnsRoundRobin, addr 0x2ded974, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableDnsRoundRobin(bool value);

  /// @brief Method set_EncryptionPolicy, addr 0x2ded99c, size 0x8, virtual false, abstract: false, final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_Expect100Continue, addr 0x2ded93c, size 0xc, virtual false, abstract: false, final false
  inline void set_Expect100Continue(bool value);

  /// @brief Method set_UseNagleAlgorithm, addr 0x2ded928, size 0xc, virtual false, abstract: false, final false
  inline void set_UseNagleAlgorithm(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSectionInternal(SettingsSectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSectionInternal(SettingsSectionInternal const&) = delete;

  /// @brief Field HttpListenerUnescapeRequestUrl, offset: 0x10, size: 0x1, def value: None
  bool ___HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset: 0x14, size: 0x4, def value: None
  ::System::Net::Sockets::IPProtectionLevel ___IPProtectionLevel;

  /// @brief Field <UseNagleAlgorithm>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____UseNagleAlgorithm_k__BackingField;

  /// @brief Field <Expect100Continue>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____Expect100Continue_k__BackingField;

  /// @brief Field <CheckCertificateName>k__BackingField, offset: 0x1a, size: 0x1, def value: None
  bool ____CheckCertificateName_k__BackingField;

  /// @brief Field <DnsRefreshTimeout>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____DnsRefreshTimeout_k__BackingField;

  /// @brief Field <EnableDnsRoundRobin>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____EnableDnsRoundRobin_k__BackingField;

  /// @brief Field <CheckCertificateRevocationList>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____CheckCertificateRevocationList_k__BackingField;

  /// @brief Field <EncryptionPolicy>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::System::Net::Security::EncryptionPolicy ____EncryptionPolicy_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SettingsSectionInternal, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___HttpListenerUnescapeRequestUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___IPProtectionLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____UseNagleAlgorithm_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____Expect100Continue_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____CheckCertificateName_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____DnsRefreshTimeout_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____EnableDnsRoundRobin_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____CheckCertificateRevocationList_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____EncryptionPolicy_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
