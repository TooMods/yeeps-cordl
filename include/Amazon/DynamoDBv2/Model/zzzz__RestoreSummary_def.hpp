#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RestoreSummary)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class RestoreSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::RestoreSummary);
// Type: Amazon.DynamoDBv2.Model::RestoreSummary
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::RestoreSummary*
class CORDL_TYPE RestoreSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RestoreDateTime, put = set_RestoreDateTime))::System::DateTime RestoreDateTime;

  __declspec(property(get = get_RestoreInProgress, put = set_RestoreInProgress)) bool RestoreInProgress;

  __declspec(property(get = get_SourceBackupArn, put = set_SourceBackupArn))::StringW SourceBackupArn;

  __declspec(property(get = get_SourceTableArn, put = set_SourceTableArn))::StringW SourceTableArn;

  /// @brief Field _restoreDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__restoreDateTime, put = __cordl_internal_set__restoreDateTime))::System::Nullable_1<::System::DateTime> _restoreDateTime;

  /// @brief Field _restoreInProgress, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__restoreInProgress, put = __cordl_internal_set__restoreInProgress))::System::Nullable_1<bool> _restoreInProgress;

  /// @brief Field _sourceBackupArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceBackupArn, put = __cordl_internal_set__sourceBackupArn))::StringW _sourceBackupArn;

  /// @brief Field _sourceTableArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceTableArn, put = __cordl_internal_set__sourceTableArn))::StringW _sourceTableArn;

  /// @brief Method IsSetRestoreDateTime, addr 0x104f8bc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetRestoreDateTime();

  /// @brief Method IsSetRestoreInProgress, addr 0x104f99c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetRestoreInProgress();

  /// @brief Method IsSetSourceBackupArn, addr 0x104f9e8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceBackupArn();

  /// @brief Method IsSetSourceTableArn, addr 0x104fa08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceTableArn();

  static inline ::Amazon::DynamoDBv2::Model::RestoreSummary* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__restoreDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__restoreDateTime();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__restoreInProgress() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__restoreInProgress();

  constexpr ::StringW const& __cordl_internal_get__sourceBackupArn() const;

  constexpr ::StringW& __cordl_internal_get__sourceBackupArn();

  constexpr ::StringW const& __cordl_internal_get__sourceTableArn() const;

  constexpr ::StringW& __cordl_internal_get__sourceTableArn();

  constexpr void __cordl_internal_set__restoreDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__restoreInProgress(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__sourceBackupArn(::StringW value);

  constexpr void __cordl_internal_set__sourceTableArn(::StringW value);

  /// @brief Method .ctor, addr 0x104fa18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RestoreDateTime, addr 0x104f810, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_RestoreDateTime();

  /// @brief Method get_RestoreInProgress, addr 0x104f8f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_RestoreInProgress();

  /// @brief Method get_SourceBackupArn, addr 0x104f9d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceBackupArn();

  /// @brief Method get_SourceTableArn, addr 0x104f9f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceTableArn();

  /// @brief Method set_RestoreDateTime, addr 0x104f84c, size 0x70, virtual false, abstract: false, final false
  inline void set_RestoreDateTime(::System::DateTime value);

  /// @brief Method set_RestoreInProgress, addr 0x104f934, size 0x68, virtual false, abstract: false, final false
  inline void set_RestoreInProgress(bool value);

  /// @brief Method set_SourceBackupArn, addr 0x104f9e0, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceBackupArn(::StringW value);

  /// @brief Method set_SourceTableArn, addr 0x104fa00, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTableArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestoreSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestoreSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestoreSummary(RestoreSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestoreSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestoreSummary(RestoreSummary const&) = delete;

  /// @brief Field _restoreDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____restoreDateTime;

  /// @brief Field _restoreInProgress, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____restoreInProgress;

  /// @brief Field _sourceBackupArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____sourceBackupArn;

  /// @brief Field _sourceTableArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____sourceTableArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::RestoreSummary, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreSummary, ____restoreDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreSummary, ____restoreInProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreSummary, ____sourceBackupArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreSummary, ____sourceTableArn) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::RestoreSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::RestoreSummary*, "Amazon.DynamoDBv2.Model", "RestoreSummary");
