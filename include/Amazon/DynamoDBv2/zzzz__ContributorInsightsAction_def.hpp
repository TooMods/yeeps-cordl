#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContributorInsightsAction)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ContributorInsightsAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ContributorInsightsAction);
// Type: Amazon.DynamoDBv2::ContributorInsightsAction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ContributorInsightsAction*
class CORDL_TYPE ContributorInsightsAction : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DISABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DISABLE, put = setStaticF_DISABLE))::Amazon::DynamoDBv2::ContributorInsightsAction* DISABLE;

  /// @brief Field ENABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENABLE, put = setStaticF_ENABLE))::Amazon::DynamoDBv2::ContributorInsightsAction* ENABLE;

  /// @brief Method FindValue, addr 0x1210dec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContributorInsightsAction* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContributorInsightsAction* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1210d84, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ContributorInsightsAction* getStaticF_DISABLE();

  static inline ::Amazon::DynamoDBv2::ContributorInsightsAction* getStaticF_ENABLE();

  /// @brief Method op_Implicit, addr 0x1210e58, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ContributorInsightsAction* op_Implicit___Amazon__DynamoDBv2__ContributorInsightsAction_(::StringW value);

  static inline void setStaticF_DISABLE(::Amazon::DynamoDBv2::ContributorInsightsAction* value);

  static inline void setStaticF_ENABLE(::Amazon::DynamoDBv2::ContributorInsightsAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContributorInsightsAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContributorInsightsAction(ContributorInsightsAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContributorInsightsAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContributorInsightsAction(ContributorInsightsAction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ContributorInsightsAction, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ContributorInsightsAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ContributorInsightsAction*, "Amazon.DynamoDBv2", "ContributorInsightsAction");
