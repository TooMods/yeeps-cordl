#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListBackupsResponse)
namespace Amazon::DynamoDBv2::Model {
class BackupSummary;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListBackupsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListBackupsResponse);
// Type: Amazon.DynamoDBv2.Model::ListBackupsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListBackupsResponse*
class CORDL_TYPE ListBackupsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_BackupSummaries, put = set_BackupSummaries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* BackupSummaries;

  __declspec(property(get = get_LastEvaluatedBackupArn, put = set_LastEvaluatedBackupArn))::StringW LastEvaluatedBackupArn;

  /// @brief Field _backupSummaries, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__backupSummaries,
                      put = __cordl_internal_set__backupSummaries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* _backupSummaries;

  /// @brief Field _lastEvaluatedBackupArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedBackupArn, put = __cordl_internal_set__lastEvaluatedBackupArn))::StringW _lastEvaluatedBackupArn;

  /// @brief Method IsSetBackupSummaries, addr 0x104a97c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetBackupSummaries();

  /// @brief Method IsSetLastEvaluatedBackupArn, addr 0x104a9e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedBackupArn();

  static inline ::Amazon::DynamoDBv2::Model::ListBackupsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>*& __cordl_internal_get__backupSummaries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>*> const& __cordl_internal_get__backupSummaries() const;

  constexpr ::StringW const& __cordl_internal_get__lastEvaluatedBackupArn() const;

  constexpr ::StringW& __cordl_internal_get__lastEvaluatedBackupArn();

  constexpr void __cordl_internal_set__backupSummaries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* value);

  constexpr void __cordl_internal_set__lastEvaluatedBackupArn(::StringW value);

  /// @brief Method .ctor, addr 0x104a9f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupSummaries, addr 0x104a96c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* get_BackupSummaries();

  /// @brief Method get_LastEvaluatedBackupArn, addr 0x104a9d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastEvaluatedBackupArn();

  /// @brief Method set_BackupSummaries, addr 0x104a974, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupSummaries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* value);

  /// @brief Method set_LastEvaluatedBackupArn, addr 0x104a9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedBackupArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBackupsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListBackupsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListBackupsResponse(ListBackupsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListBackupsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListBackupsResponse(ListBackupsResponse const&) = delete;

  /// @brief Field _backupSummaries, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::BackupSummary*>* ____backupSummaries;

  /// @brief Field _lastEvaluatedBackupArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____lastEvaluatedBackupArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListBackupsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsResponse, ____backupSummaries) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsResponse, ____lastEvaluatedBackupArn) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListBackupsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListBackupsResponse*, "Amazon.DynamoDBv2.Model", "ListBackupsResponse");
