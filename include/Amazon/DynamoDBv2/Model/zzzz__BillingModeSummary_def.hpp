#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BillingModeSummary)
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BillingModeSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BillingModeSummary);
// Type: Amazon.DynamoDBv2.Model::BillingModeSummary
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BillingModeSummary*
class CORDL_TYPE BillingModeSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BillingMode, put = set_BillingMode))::Amazon::DynamoDBv2::BillingMode* BillingMode;

  __declspec(property(get = get_LastUpdateToPayPerRequestDateTime, put = set_LastUpdateToPayPerRequestDateTime))::System::DateTime LastUpdateToPayPerRequestDateTime;

  /// @brief Field _billingMode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__billingMode, put = __cordl_internal_set__billingMode))::Amazon::DynamoDBv2::BillingMode* _billingMode;

  /// @brief Field _lastUpdateToPayPerRequestDateTime, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__lastUpdateToPayPerRequestDateTime,
                      put = __cordl_internal_set__lastUpdateToPayPerRequestDateTime))::System::Nullable_1<::System::DateTime> _lastUpdateToPayPerRequestDateTime;

  /// @brief Method IsSetBillingMode, addr 0x12274fc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingMode();

  /// @brief Method IsSetLastUpdateToPayPerRequestDateTime, addr 0x1227608, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastUpdateToPayPerRequestDateTime();

  static inline ::Amazon::DynamoDBv2::Model::BillingModeSummary* New_ctor();

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__billingMode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__billingMode() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastUpdateToPayPerRequestDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastUpdateToPayPerRequestDateTime();

  constexpr void __cordl_internal_set__billingMode(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__lastUpdateToPayPerRequestDateTime(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method .ctor, addr 0x1227644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BillingMode, addr 0x12274ec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingMode();

  /// @brief Method get_LastUpdateToPayPerRequestDateTime, addr 0x122755c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUpdateToPayPerRequestDateTime();

  /// @brief Method set_BillingMode, addr 0x12274f4, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_LastUpdateToPayPerRequestDateTime, addr 0x1227598, size 0x70, virtual false, abstract: false, final false
  inline void set_LastUpdateToPayPerRequestDateTime(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BillingModeSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BillingModeSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BillingModeSummary(BillingModeSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BillingModeSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BillingModeSummary(BillingModeSummary const&) = delete;

  /// @brief Field _billingMode, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingMode;

  /// @brief Field _lastUpdateToPayPerRequestDateTime, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastUpdateToPayPerRequestDateTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BillingModeSummary, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BillingModeSummary, ____billingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BillingModeSummary, ____lastUpdateToPayPerRequestDateTime) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BillingModeSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BillingModeSummary*, "Amazon.DynamoDBv2.Model", "BillingModeSummary");
