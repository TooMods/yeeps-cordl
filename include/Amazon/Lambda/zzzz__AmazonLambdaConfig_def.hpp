#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ClientConfig_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonLambdaConfig)
// Forward declare root types
namespace Amazon::Lambda {
class AmazonLambdaConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::AmazonLambdaConfig);
// Type: Amazon.Lambda::AmazonLambdaConfig
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::AmazonLambdaConfig*
class CORDL_TYPE AmazonLambdaConfig : public ::Amazon::Runtime::ClientConfig {
public:
  // Declarations
  __declspec(property(get = get_RegionEndpointServiceName))::StringW RegionEndpointServiceName;

  __declspec(property(get = get_ServiceVersion))::StringW ServiceVersion;

  __declspec(property(get = get_UserAgent))::StringW UserAgent;

  /// @brief Field UserAgentString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UserAgentString, put = setStaticF_UserAgentString))::StringW UserAgentString;

  /// @brief Field _userAgent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__userAgent, put = __cordl_internal_set__userAgent))::StringW _userAgent;

  static inline ::Amazon::Lambda::AmazonLambdaConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__userAgent() const;

  constexpr ::StringW& __cordl_internal_get__userAgent();

  constexpr void __cordl_internal_set__userAgent(::StringW value);

  /// @brief Method .ctor, addr 0x2bb4ec8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_UserAgentString();

  /// @brief Method get_RegionEndpointServiceName, addr 0x2bb4f74, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_RegionEndpointServiceName();

  /// @brief Method get_ServiceVersion, addr 0x2bb4fb4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_ServiceVersion();

  /// @brief Method get_UserAgent, addr 0x2bb4ff4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_UserAgent();

  static inline void setStaticF_UserAgentString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonLambdaConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonLambdaConfig(AmazonLambdaConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonLambdaConfig(AmazonLambdaConfig const&) = delete;

  /// @brief Field _userAgent, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____userAgent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::AmazonLambdaConfig, 0xf0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::AmazonLambdaConfig, ____userAgent) == 0xe8, "Offset mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::AmazonLambdaConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::AmazonLambdaConfig*, "Amazon.Lambda", "AmazonLambdaConfig");
