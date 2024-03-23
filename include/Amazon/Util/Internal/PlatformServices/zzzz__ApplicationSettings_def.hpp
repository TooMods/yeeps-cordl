#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApplicationSettings)
namespace Amazon::Util::Internal::PlatformServices {
struct ApplicationSettingsMode;
}
namespace Amazon::Util::Internal::PlatformServices {
class IApplicationSettings;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class ApplicationSettings;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::ApplicationSettings);
// Type: Amazon.Util.Internal.PlatformServices::ApplicationSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::ApplicationSettings*
class CORDL_TYPE ApplicationSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::IApplicationSettings"
  constexpr operator ::Amazon::Util::Internal::PlatformServices::IApplicationSettings*() noexcept;

  /// @brief Method GetValue, addr 0x1fdad80, size 0x50, virtual true, abstract: false, final true
  inline ::StringW GetValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  static inline ::Amazon::Util::Internal::PlatformServices::ApplicationSettings* New_ctor();

  /// @brief Method RemoveValue, addr 0x1fdadd0, size 0x50, virtual true, abstract: false, final true
  inline void RemoveValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  /// @brief Method SetValue, addr 0x1fdad30, size 0x50, virtual true, abstract: false, final true
  inline void SetValue(::StringW key, ::StringW value, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode);

  /// @brief Method .ctor, addr 0x1fdae20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Amazon::Util::Internal::PlatformServices::IApplicationSettings"
  constexpr ::Amazon::Util::Internal::PlatformServices::IApplicationSettings* i___Amazon__Util__Internal__PlatformServices__IApplicationSettings() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationSettings(ApplicationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationSettings(ApplicationSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::ApplicationSettings, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::ApplicationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::ApplicationSettings*, "Amazon.Util.Internal.PlatformServices", "ApplicationSettings");
