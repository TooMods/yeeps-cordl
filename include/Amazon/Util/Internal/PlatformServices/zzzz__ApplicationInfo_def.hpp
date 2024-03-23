#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApplicationInfo)
namespace Amazon::Util::Internal::PlatformServices {
class IApplicationInfo;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class ApplicationInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::ApplicationInfo);
// Type: Amazon.Util.Internal.PlatformServices::ApplicationInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::ApplicationInfo*
class CORDL_TYPE ApplicationInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AppTitle))::StringW AppTitle;

  __declspec(property(get = get_AppVersionCode))::StringW AppVersionCode;

  __declspec(property(get = get_AppVersionName))::StringW AppVersionName;

  __declspec(property(get = get_PackageName))::StringW PackageName;

  /// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::IApplicationInfo"
  constexpr operator ::Amazon::Util::Internal::PlatformServices::IApplicationInfo*() noexcept;

  static inline ::Amazon::Util::Internal::PlatformServices::ApplicationInfo* New_ctor();

  /// @brief Method .ctor, addr 0x1fdad28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AppTitle, addr 0x1fdabe8, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_AppTitle();

  /// @brief Method get_AppVersionCode, addr 0x1fdac88, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_AppVersionCode();

  /// @brief Method get_AppVersionName, addr 0x1fdac38, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_AppVersionName();

  /// @brief Method get_PackageName, addr 0x1fdacd8, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_PackageName();

  /// @brief Convert to "::Amazon::Util::Internal::PlatformServices::IApplicationInfo"
  constexpr ::Amazon::Util::Internal::PlatformServices::IApplicationInfo* i___Amazon__Util__Internal__PlatformServices__IApplicationInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationInfo(ApplicationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationInfo(ApplicationInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::ApplicationInfo, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::ApplicationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::ApplicationInfo*, "Amazon.Util.Internal.PlatformServices", "ApplicationInfo");
