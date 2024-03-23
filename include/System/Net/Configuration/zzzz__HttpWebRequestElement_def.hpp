#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequestElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpWebRequestElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::HttpWebRequestElement);
// Type: System.Net.Configuration::HttpWebRequestElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::HttpWebRequestElement*
class CORDL_TYPE HttpWebRequestElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_MaximumErrorResponseLength, put = set_MaximumErrorResponseLength)) int32_t MaximumErrorResponseLength;

  __declspec(property(get = get_MaximumResponseHeadersLength, put = set_MaximumResponseHeadersLength)) int32_t MaximumResponseHeadersLength;

  __declspec(property(get = get_MaximumUnauthorizedUploadLength, put = set_MaximumUnauthorizedUploadLength)) int32_t MaximumUnauthorizedUploadLength;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_UseUnsafeHeaderParsing, put = set_UseUnsafeHeaderParsing)) bool UseUnsafeHeaderParsing;

  static inline ::System::Net::Configuration::HttpWebRequestElement* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18ce54c, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18ce31c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaximumErrorResponseLength, addr 0x18ce354, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_MaximumErrorResponseLength();

  /// @brief Method get_MaximumResponseHeadersLength, addr 0x18ce3c4, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_MaximumResponseHeadersLength();

  /// @brief Method get_MaximumUnauthorizedUploadLength, addr 0x18ce434, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_MaximumUnauthorizedUploadLength();

  /// @brief Method get_Properties, addr 0x18ce4a4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_UseUnsafeHeaderParsing, addr 0x18ce4dc, size 0x38, virtual false, abstract: false, final false
  inline bool get_UseUnsafeHeaderParsing();

  /// @brief Method set_MaximumErrorResponseLength, addr 0x18ce38c, size 0x38, virtual false, abstract: false, final false
  inline void set_MaximumErrorResponseLength(int32_t value);

  /// @brief Method set_MaximumResponseHeadersLength, addr 0x18ce3fc, size 0x38, virtual false, abstract: false, final false
  inline void set_MaximumResponseHeadersLength(int32_t value);

  /// @brief Method set_MaximumUnauthorizedUploadLength, addr 0x18ce46c, size 0x38, virtual false, abstract: false, final false
  inline void set_MaximumUnauthorizedUploadLength(int32_t value);

  /// @brief Method set_UseUnsafeHeaderParsing, addr 0x18ce514, size 0x38, virtual false, abstract: false, final false
  inline void set_UseUnsafeHeaderParsing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequestElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequestElement(HttpWebRequestElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequestElement(HttpWebRequestElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::HttpWebRequestElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::HttpWebRequestElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::HttpWebRequestElement*, "System.Net.Configuration", "HttpWebRequestElement");
