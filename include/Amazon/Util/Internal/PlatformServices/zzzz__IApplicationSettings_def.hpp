#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IApplicationSettings)
namespace Amazon::Util::Internal::PlatformServices {
struct ApplicationSettingsMode;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class IApplicationSettings;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::IApplicationSettings);
// Type: Amazon.Util.Internal.PlatformServices::IApplicationSettings
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::IApplicationSettings*
class CORDL_TYPE IApplicationSettings {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  /// @brief Method RemoveValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::StringW key, ::StringW value, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  // Ctor Parameters [CppParam { name: "", ty: "IApplicationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IApplicationSettings(IApplicationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IApplicationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IApplicationSettings(IApplicationSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::IApplicationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::IApplicationSettings*, "Amazon.Util.Internal.PlatformServices", "IApplicationSettings");
