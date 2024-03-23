#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(FtpCachePolicyElement)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Cache {
struct RequestCacheLevel;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Net::Configuration {
class FtpCachePolicyElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::FtpCachePolicyElement);
// Type: System.Net.Configuration::FtpCachePolicyElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::FtpCachePolicyElement*
class CORDL_TYPE FtpCachePolicyElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_PolicyLevel, put = set_PolicyLevel))::System::Net::Cache::RequestCacheLevel PolicyLevel;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  /// @brief Method DeserializeElement, addr 0x18cdd6c, size 0x38, virtual true, abstract: false, final false
  inline void DeserializeElement(::System::Xml::XmlReader* reader, bool serializeCollectionKey);

  static inline ::System::Net::Configuration::FtpCachePolicyElement* New_ctor();

  /// @brief Method Reset, addr 0x18cdda4, size 0x38, virtual true, abstract: false, final false
  inline void Reset(::System::Configuration::ConfigurationElement* parentElement);

  /// @brief Method .ctor, addr 0x18cdc8c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PolicyLevel, addr 0x18cdcc4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheLevel get_PolicyLevel();

  /// @brief Method get_Properties, addr 0x18cdd34, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method set_PolicyLevel, addr 0x18cdcfc, size 0x38, virtual false, abstract: false, final false
  inline void set_PolicyLevel(::System::Net::Cache::RequestCacheLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpCachePolicyElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpCachePolicyElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpCachePolicyElement(FtpCachePolicyElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpCachePolicyElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpCachePolicyElement(FtpCachePolicyElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::FtpCachePolicyElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::FtpCachePolicyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::FtpCachePolicyElement*, "System.Net.Configuration", "FtpCachePolicyElement");
