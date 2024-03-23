#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IApplicationInfo)
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class IApplicationInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::IApplicationInfo);
// Type: Amazon.Util.Internal.PlatformServices::IApplicationInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::IApplicationInfo*
class CORDL_TYPE IApplicationInfo {
public:
  // Declarations
  __declspec(property(get = get_AppTitle))::StringW AppTitle;

  __declspec(property(get = get_AppVersionCode))::StringW AppVersionCode;

  __declspec(property(get = get_AppVersionName))::StringW AppVersionName;

  __declspec(property(get = get_PackageName))::StringW PackageName;

  /// @brief Method get_AppTitle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AppTitle();

  /// @brief Method get_AppVersionCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AppVersionCode();

  /// @brief Method get_AppVersionName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AppVersionName();

  /// @brief Method get_PackageName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PackageName();

  // Ctor Parameters [CppParam { name: "", ty: "IApplicationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IApplicationInfo(IApplicationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IApplicationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IApplicationInfo(IApplicationInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::IApplicationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::IApplicationInfo*, "Amazon.Util.Internal.PlatformServices", "IApplicationInfo");
