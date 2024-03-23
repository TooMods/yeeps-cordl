#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebProxyScriptElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebProxyScriptElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebProxyScriptElement);
// Type: System.Net.Configuration::WebProxyScriptElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::WebProxyScriptElement*
class CORDL_TYPE WebProxyScriptElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_AutoConfigUrlRetryInterval, put = set_AutoConfigUrlRetryInterval)) int32_t AutoConfigUrlRetryInterval;

  __declspec(property(get = get_DownloadTimeout, put = set_DownloadTimeout))::System::TimeSpan DownloadTimeout;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::WebProxyScriptElement* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18cfd5c, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18cfc0c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AutoConfigUrlRetryInterval, addr 0x18cfc44, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_AutoConfigUrlRetryInterval();

  /// @brief Method get_DownloadTimeout, addr 0x18cfcb4, size 0x38, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_DownloadTimeout();

  /// @brief Method get_Properties, addr 0x18cfd24, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method set_AutoConfigUrlRetryInterval, addr 0x18cfc7c, size 0x38, virtual false, abstract: false, final false
  inline void set_AutoConfigUrlRetryInterval(int32_t value);

  /// @brief Method set_DownloadTimeout, addr 0x18cfcec, size 0x38, virtual false, abstract: false, final false
  inline void set_DownloadTimeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebProxyScriptElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebProxyScriptElement(WebProxyScriptElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebProxyScriptElement(WebProxyScriptElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebProxyScriptElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebProxyScriptElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebProxyScriptElement*, "System.Net.Configuration", "WebProxyScriptElement");
