#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(SocketElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Forward declare root types
namespace System::Net::Configuration {
class SocketElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SocketElement);
// Type: System.Net.Configuration::SocketElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::SocketElement*
class CORDL_TYPE SocketElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_AlwaysUseCompletionPortsForAccept, put = set_AlwaysUseCompletionPortsForAccept)) bool AlwaysUseCompletionPortsForAccept;

  __declspec(property(get = get_AlwaysUseCompletionPortsForConnect, put = set_AlwaysUseCompletionPortsForConnect)) bool AlwaysUseCompletionPortsForConnect;

  __declspec(property(get = get_IPProtectionLevel, put = set_IPProtectionLevel))::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::SocketElement* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18cfbd4, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18cfa14, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlwaysUseCompletionPortsForAccept, addr 0x18cfa4c, size 0x38, virtual false, abstract: false, final false
  inline bool get_AlwaysUseCompletionPortsForAccept();

  /// @brief Method get_AlwaysUseCompletionPortsForConnect, addr 0x18cfabc, size 0x38, virtual false, abstract: false, final false
  inline bool get_AlwaysUseCompletionPortsForConnect();

  /// @brief Method get_IPProtectionLevel, addr 0x18cfb2c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::IPProtectionLevel get_IPProtectionLevel();

  /// @brief Method get_Properties, addr 0x18cfb9c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method set_AlwaysUseCompletionPortsForAccept, addr 0x18cfa84, size 0x38, virtual false, abstract: false, final false
  inline void set_AlwaysUseCompletionPortsForAccept(bool value);

  /// @brief Method set_AlwaysUseCompletionPortsForConnect, addr 0x18cfaf4, size 0x38, virtual false, abstract: false, final false
  inline void set_AlwaysUseCompletionPortsForConnect(bool value);

  /// @brief Method set_IPProtectionLevel, addr 0x18cfb64, size 0x38, virtual false, abstract: false, final false
  inline void set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketElement(SocketElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketElement(SocketElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SocketElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SocketElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SocketElement*, "System.Net.Configuration", "SocketElement");
