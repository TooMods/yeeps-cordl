#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSRegion_def.hpp"
CORDL_MODULE_EXPORT(InstanceProfileAWSRegion)
// Forward declare root types
namespace Amazon::Runtime {
class InstanceProfileAWSRegion;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::InstanceProfileAWSRegion);
// Type: Amazon.Runtime::InstanceProfileAWSRegion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::InstanceProfileAWSRegion*
class CORDL_TYPE InstanceProfileAWSRegion : public ::Amazon::Runtime::AWSRegion {
public:
  // Declarations
  static inline ::Amazon::Runtime::InstanceProfileAWSRegion* New_ctor();

  /// @brief Method .ctor, addr 0x1fdfa5c, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceProfileAWSRegion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceProfileAWSRegion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceProfileAWSRegion(InstanceProfileAWSRegion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceProfileAWSRegion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceProfileAWSRegion(InstanceProfileAWSRegion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::InstanceProfileAWSRegion, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::InstanceProfileAWSRegion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::InstanceProfileAWSRegion*, "Amazon.Runtime", "InstanceProfileAWSRegion");
