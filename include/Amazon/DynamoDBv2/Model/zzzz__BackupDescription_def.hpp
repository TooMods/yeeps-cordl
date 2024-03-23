#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BackupDescription)
namespace Amazon::DynamoDBv2::Model {
class BackupDetails;
}
namespace Amazon::DynamoDBv2::Model {
class SourceTableDetails;
}
namespace Amazon::DynamoDBv2::Model {
class SourceTableFeatureDetails;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BackupDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BackupDescription);
// Type: Amazon.DynamoDBv2.Model::BackupDescription
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BackupDescription*
class CORDL_TYPE BackupDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BackupDetails, put = set_BackupDetails))::Amazon::DynamoDBv2::Model::BackupDetails* BackupDetails;

  __declspec(property(get = get_SourceTableDetails, put = set_SourceTableDetails))::Amazon::DynamoDBv2::Model::SourceTableDetails* SourceTableDetails;

  __declspec(property(get = get_SourceTableFeatureDetails, put = set_SourceTableFeatureDetails))::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* SourceTableFeatureDetails;

  /// @brief Field _backupDetails, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__backupDetails, put = __cordl_internal_set__backupDetails))::Amazon::DynamoDBv2::Model::BackupDetails* _backupDetails;

  /// @brief Field _sourceTableDetails, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceTableDetails, put = __cordl_internal_set__sourceTableDetails))::Amazon::DynamoDBv2::Model::SourceTableDetails* _sourceTableDetails;

  /// @brief Field _sourceTableFeatureDetails, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceTableFeatureDetails,
                      put = __cordl_internal_set__sourceTableFeatureDetails))::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* _sourceTableFeatureDetails;

  /// @brief Method IsSetBackupDetails, addr 0x1225e8c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupDetails();

  /// @brief Method IsSetSourceTableDetails, addr 0x1225eac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceTableDetails();

  /// @brief Method IsSetSourceTableFeatureDetails, addr 0x1225ecc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceTableFeatureDetails();

  static inline ::Amazon::DynamoDBv2::Model::BackupDescription* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::BackupDetails*& __cordl_internal_get__backupDetails();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BackupDetails*> const& __cordl_internal_get__backupDetails() const;

  constexpr ::Amazon::DynamoDBv2::Model::SourceTableDetails*& __cordl_internal_get__sourceTableDetails();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SourceTableDetails*> const& __cordl_internal_get__sourceTableDetails() const;

  constexpr ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*& __cordl_internal_get__sourceTableFeatureDetails();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*> const& __cordl_internal_get__sourceTableFeatureDetails() const;

  constexpr void __cordl_internal_set__backupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value);

  constexpr void __cordl_internal_set__sourceTableDetails(::Amazon::DynamoDBv2::Model::SourceTableDetails* value);

  constexpr void __cordl_internal_set__sourceTableFeatureDetails(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* value);

  /// @brief Method .ctor, addr 0x1225edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupDetails, addr 0x1225e7c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BackupDetails* get_BackupDetails();

  /// @brief Method get_SourceTableDetails, addr 0x1225e9c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SourceTableDetails* get_SourceTableDetails();

  /// @brief Method get_SourceTableFeatureDetails, addr 0x1225ebc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* get_SourceTableFeatureDetails();

  /// @brief Method set_BackupDetails, addr 0x1225e84, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value);

  /// @brief Method set_SourceTableDetails, addr 0x1225ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTableDetails(::Amazon::DynamoDBv2::Model::SourceTableDetails* value);

  /// @brief Method set_SourceTableFeatureDetails, addr 0x1225ec4, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTableFeatureDetails(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupDescription(BackupDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupDescription(BackupDescription const&) = delete;

  /// @brief Field _backupDetails, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BackupDetails* ____backupDetails;

  /// @brief Field _sourceTableDetails, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SourceTableDetails* ____sourceTableDetails;

  /// @brief Field _sourceTableFeatureDetails, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* ____sourceTableFeatureDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BackupDescription, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDescription, ____backupDetails) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDescription, ____sourceTableDetails) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDescription, ____sourceTableFeatureDetails) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BackupDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BackupDescription*, "Amazon.DynamoDBv2.Model", "BackupDescription");
