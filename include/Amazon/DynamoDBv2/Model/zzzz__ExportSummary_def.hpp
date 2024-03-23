#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExportSummary)
namespace Amazon::DynamoDBv2 {
class ExportStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExportSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExportSummary);
// Type: Amazon.DynamoDBv2.Model::ExportSummary
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExportSummary*
class CORDL_TYPE ExportSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExportArn, put = set_ExportArn))::StringW ExportArn;

  __declspec(property(get = get_ExportStatus, put = set_ExportStatus))::Amazon::DynamoDBv2::ExportStatus* ExportStatus;

  /// @brief Field _exportArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exportArn, put = __cordl_internal_set__exportArn))::StringW _exportArn;

  /// @brief Field _exportStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__exportStatus, put = __cordl_internal_set__exportStatus))::Amazon::DynamoDBv2::ExportStatus* _exportStatus;

  /// @brief Method IsSetExportArn, addr 0x1048098, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExportArn();

  /// @brief Method IsSetExportStatus, addr 0x10480b8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetExportStatus();

  static inline ::Amazon::DynamoDBv2::Model::ExportSummary* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__exportArn() const;

  constexpr ::StringW& __cordl_internal_get__exportArn();

  constexpr ::Amazon::DynamoDBv2::ExportStatus*& __cordl_internal_get__exportStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ExportStatus*> const& __cordl_internal_get__exportStatus() const;

  constexpr void __cordl_internal_set__exportArn(::StringW value);

  constexpr void __cordl_internal_set__exportStatus(::Amazon::DynamoDBv2::ExportStatus* value);

  /// @brief Method .ctor, addr 0x1048118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExportArn, addr 0x1048088, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExportArn();

  /// @brief Method get_ExportStatus, addr 0x10480a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ExportStatus* get_ExportStatus();

  /// @brief Method set_ExportArn, addr 0x1048090, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportArn(::StringW value);

  /// @brief Method set_ExportStatus, addr 0x10480b0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportStatus(::Amazon::DynamoDBv2::ExportStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExportSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExportSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExportSummary(ExportSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExportSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExportSummary(ExportSummary const&) = delete;

  /// @brief Field _exportArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____exportArn;

  /// @brief Field _exportStatus, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ExportStatus* ____exportStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExportSummary, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportSummary, ____exportArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportSummary, ____exportStatus) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExportSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExportSummary*, "Amazon.DynamoDBv2.Model", "ExportSummary");
