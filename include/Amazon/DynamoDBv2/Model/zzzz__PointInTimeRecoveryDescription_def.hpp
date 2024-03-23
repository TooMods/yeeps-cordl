#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointInTimeRecoveryDescription)
namespace Amazon::DynamoDBv2 {
class PointInTimeRecoveryStatus;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class PointInTimeRecoveryDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription);
// Type: Amazon.DynamoDBv2.Model::PointInTimeRecoveryDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::PointInTimeRecoveryDescription*
class CORDL_TYPE PointInTimeRecoveryDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EarliestRestorableDateTime, put = set_EarliestRestorableDateTime))::System::DateTime EarliestRestorableDateTime;

  __declspec(property(get = get_LatestRestorableDateTime, put = set_LatestRestorableDateTime))::System::DateTime LatestRestorableDateTime;

  __declspec(property(get = get_PointInTimeRecoveryStatus, put = set_PointInTimeRecoveryStatus))::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* PointInTimeRecoveryStatus;

  /// @brief Field _earliestRestorableDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__earliestRestorableDateTime,
                      put = __cordl_internal_set__earliestRestorableDateTime))::System::Nullable_1<::System::DateTime> _earliestRestorableDateTime;

  /// @brief Field _latestRestorableDateTime, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__latestRestorableDateTime, put = __cordl_internal_set__latestRestorableDateTime))::System::Nullable_1<::System::DateTime> _latestRestorableDateTime;

  /// @brief Field _pointInTimeRecoveryStatus, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pointInTimeRecoveryStatus,
                      put = __cordl_internal_set__pointInTimeRecoveryStatus))::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* _pointInTimeRecoveryStatus;

  /// @brief Method IsSetEarliestRestorableDateTime, addr 0x104be04, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetEarliestRestorableDateTime();

  /// @brief Method IsSetLatestRestorableDateTime, addr 0x104beec, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLatestRestorableDateTime();

  /// @brief Method IsSetPointInTimeRecoveryStatus, addr 0x104bf38, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetPointInTimeRecoveryStatus();

  static inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__earliestRestorableDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__earliestRestorableDateTime();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__latestRestorableDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__latestRestorableDateTime();

  constexpr ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*& __cordl_internal_get__pointInTimeRecoveryStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*> const& __cordl_internal_get__pointInTimeRecoveryStatus() const;

  constexpr void __cordl_internal_set__earliestRestorableDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__latestRestorableDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__pointInTimeRecoveryStatus(::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* value);

  /// @brief Method .ctor, addr 0x104bf98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EarliestRestorableDateTime, addr 0x104bd58, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_EarliestRestorableDateTime();

  /// @brief Method get_LatestRestorableDateTime, addr 0x104be40, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LatestRestorableDateTime();

  /// @brief Method get_PointInTimeRecoveryStatus, addr 0x104bf28, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* get_PointInTimeRecoveryStatus();

  /// @brief Method set_EarliestRestorableDateTime, addr 0x104bd94, size 0x70, virtual false, abstract: false, final false
  inline void set_EarliestRestorableDateTime(::System::DateTime value);

  /// @brief Method set_LatestRestorableDateTime, addr 0x104be7c, size 0x70, virtual false, abstract: false, final false
  inline void set_LatestRestorableDateTime(::System::DateTime value);

  /// @brief Method set_PointInTimeRecoveryStatus, addr 0x104bf30, size 0x8, virtual false, abstract: false, final false
  inline void set_PointInTimeRecoveryStatus(::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointInTimeRecoveryDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointInTimeRecoveryDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointInTimeRecoveryDescription(PointInTimeRecoveryDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointInTimeRecoveryDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointInTimeRecoveryDescription(PointInTimeRecoveryDescription const&) = delete;

  /// @brief Field _earliestRestorableDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____earliestRestorableDateTime;

  /// @brief Field _latestRestorableDateTime, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____latestRestorableDateTime;

  /// @brief Field _pointInTimeRecoveryStatus, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* ____pointInTimeRecoveryStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription, ____earliestRestorableDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription, ____latestRestorableDateTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription, ____pointInTimeRecoveryStatus) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription*, "Amazon.DynamoDBv2.Model", "PointInTimeRecoveryDescription");
