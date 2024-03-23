#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IEnvironmentInfo)
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class IEnvironmentInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo);
// Type: Amazon.Util.Internal.PlatformServices::IEnvironmentInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::IEnvironmentInfo*
class CORDL_TYPE IEnvironmentInfo {
public:
  // Declarations
  __declspec(property(get = get_FrameworkUserAgent))::StringW FrameworkUserAgent;

  __declspec(property(get = get_Platform))::StringW Platform;

  __declspec(property(get = get_PlatformUserAgent))::StringW PlatformUserAgent;

  /// @brief Method get_FrameworkUserAgent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_FrameworkUserAgent();

  /// @brief Method get_Platform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Platform();

  /// @brief Method get_PlatformUserAgent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PlatformUserAgent();

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnvironmentInfo(IEnvironmentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvironmentInfo(IEnvironmentInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*, "Amazon.Util.Internal.PlatformServices", "IEnvironmentInfo");
