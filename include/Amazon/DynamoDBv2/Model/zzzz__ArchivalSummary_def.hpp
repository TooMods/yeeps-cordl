#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArchivalSummary)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ArchivalSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ArchivalSummary);
// Type: Amazon.DynamoDBv2.Model::ArchivalSummary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ArchivalSummary*
class CORDL_TYPE ArchivalSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArchivalBackupArn, put = set_ArchivalBackupArn))::StringW ArchivalBackupArn;

  __declspec(property(get = get_ArchivalDateTime, put = set_ArchivalDateTime))::System::DateTime ArchivalDateTime;

  __declspec(property(get = get_ArchivalReason, put = set_ArchivalReason))::StringW ArchivalReason;

  /// @brief Field _archivalBackupArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__archivalBackupArn, put = __cordl_internal_set__archivalBackupArn))::StringW _archivalBackupArn;

  /// @brief Field _archivalDateTime, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__archivalDateTime, put = __cordl_internal_set__archivalDateTime))::System::Nullable_1<::System::DateTime> _archivalDateTime;

  /// @brief Field _archivalReason, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__archivalReason, put = __cordl_internal_set__archivalReason))::StringW _archivalReason;

  /// @brief Method IsSetArchivalBackupArn, addr 0x1224314, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArchivalBackupArn();

  /// @brief Method IsSetArchivalDateTime, addr 0x12243d0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetArchivalDateTime();

  /// @brief Method IsSetArchivalReason, addr 0x122441c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArchivalReason();

  static inline ::Amazon::DynamoDBv2::Model::ArchivalSummary* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__archivalBackupArn() const;

  constexpr ::StringW& __cordl_internal_get__archivalBackupArn();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__archivalDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__archivalDateTime();

  constexpr ::StringW const& __cordl_internal_get__archivalReason() const;

  constexpr ::StringW& __cordl_internal_get__archivalReason();

  constexpr void __cordl_internal_set__archivalBackupArn(::StringW value);

  constexpr void __cordl_internal_set__archivalDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__archivalReason(::StringW value);

  /// @brief Method .ctor, addr 0x122442c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ArchivalBackupArn, addr 0x1224304, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ArchivalBackupArn();

  /// @brief Method get_ArchivalDateTime, addr 0x1224324, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ArchivalDateTime();

  /// @brief Method get_ArchivalReason, addr 0x122440c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ArchivalReason();

  /// @brief Method set_ArchivalBackupArn, addr 0x122430c, size 0x8, virtual false, abstract: false, final false
  inline void set_ArchivalBackupArn(::StringW value);

  /// @brief Method set_ArchivalDateTime, addr 0x1224360, size 0x70, virtual false, abstract: false, final false
  inline void set_ArchivalDateTime(::System::DateTime value);

  /// @brief Method set_ArchivalReason, addr 0x1224414, size 0x8, virtual false, abstract: false, final false
  inline void set_ArchivalReason(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArchivalSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArchivalSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArchivalSummary(ArchivalSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArchivalSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArchivalSummary(ArchivalSummary const&) = delete;

  /// @brief Field _archivalBackupArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____archivalBackupArn;

  /// @brief Field _archivalDateTime, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____archivalDateTime;

  /// @brief Field _archivalReason, offset: 0x28, size: 0x8, def value: None
  ::StringW ____archivalReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ArchivalSummary, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ArchivalSummary, ____archivalBackupArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ArchivalSummary, ____archivalDateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ArchivalSummary, ____archivalReason) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ArchivalSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ArchivalSummary*, "Amazon.DynamoDBv2.Model", "ArchivalSummary");
