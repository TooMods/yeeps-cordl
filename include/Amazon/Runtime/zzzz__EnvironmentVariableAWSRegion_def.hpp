#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSRegion_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableAWSRegion)
// Forward declare root types
namespace Amazon::Runtime {
class EnvironmentVariableAWSRegion;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EnvironmentVariableAWSRegion);
// Type: Amazon.Runtime::EnvironmentVariableAWSRegion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::EnvironmentVariableAWSRegion*
class CORDL_TYPE EnvironmentVariableAWSRegion : public ::Amazon::Runtime::AWSRegion {
public:
  // Declarations
  static inline ::Amazon::Runtime::EnvironmentVariableAWSRegion* New_ctor();

  /// @brief Method .ctor, addr 0x1fdf844, size 0x218, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableAWSRegion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableAWSRegion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableAWSRegion(EnvironmentVariableAWSRegion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableAWSRegion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableAWSRegion(EnvironmentVariableAWSRegion const&) = delete;

  /// @brief Field ENVIRONMENT_VARIABLE_REGION offset 0xffffffff size 0x8
  static constexpr ::ConstString ENVIRONMENT_VARIABLE_REGION{ u"AWS_REGION" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EnvironmentVariableAWSRegion, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::EnvironmentVariableAWSRegion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EnvironmentVariableAWSRegion*, "Amazon.Runtime", "EnvironmentVariableAWSRegion");
