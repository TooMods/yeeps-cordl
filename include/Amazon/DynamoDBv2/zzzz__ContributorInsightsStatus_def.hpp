#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContributorInsightsStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ContributorInsightsStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ContributorInsightsStatus);
// Type: Amazon.DynamoDBv2::ContributorInsightsStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ContributorInsightsStatus*
class CORDL_TYPE ContributorInsightsStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLED, put = setStaticF_DISABLED))::Amazon::DynamoDBv2::ContributorInsightsStatus* DISABLED;

  /// @brief Field DISABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLING, put = setStaticF_DISABLING))::Amazon::DynamoDBv2::ContributorInsightsStatus* DISABLING;

  /// @brief Field ENABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLED, put = setStaticF_ENABLED))::Amazon::DynamoDBv2::ContributorInsightsStatus* ENABLED;

  /// @brief Field ENABLING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLING, put = setStaticF_ENABLING))::Amazon::DynamoDBv2::ContributorInsightsStatus* ENABLING;

  /// @brief Field FAILED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FAILED, put = setStaticF_FAILED))::Amazon::DynamoDBv2::ContributorInsightsStatus* FAILED;

  /// @brief Method FindValue, addr 0x1210fc4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1210f5c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* getStaticF_DISABLED();

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* getStaticF_DISABLING();

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* getStaticF_ENABLED();

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* getStaticF_ENABLING();

  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* getStaticF_FAILED();

  /// @brief Method op_Implicit, addr 0x1211030, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContributorInsightsStatus* op_Implicit___Amazon__DynamoDBv2__ContributorInsightsStatus_(::StringW value);

  static inline void setStaticF_DISABLED(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  static inline void setStaticF_DISABLING(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  static inline void setStaticF_ENABLED(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  static inline void setStaticF_ENABLING(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

  static inline void setStaticF_FAILED(::Amazon::DynamoDBv2::ContributorInsightsStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContributorInsightsStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContributorInsightsStatus(ContributorInsightsStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContributorInsightsStatus(ContributorInsightsStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ContributorInsightsStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ContributorInsightsStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ContributorInsightsStatus*, "Amazon.DynamoDBv2", "ContributorInsightsStatus");
