#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeExportResponse)
namespace Amazon::DynamoDBv2::Model {
class ExportDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeExportResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeExportResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeExportResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeExportResponse*
class CORDL_TYPE DescribeExportResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ExportDescription, put = set_ExportDescription))::Amazon::DynamoDBv2::Model::ExportDescription* ExportDescription;

  /// @brief Field _exportDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__exportDescription, put = __cordl_internal_set__exportDescription))::Amazon::DynamoDBv2::Model::ExportDescription* _exportDescription;

  /// @brief Method IsSetExportDescription, addr 0x122a060, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExportDescription();

  static inline ::Amazon::DynamoDBv2::Model::DescribeExportResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ExportDescription*& __cordl_internal_get__exportDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ExportDescription*> const& __cordl_internal_get__exportDescription() const;

  constexpr void __cordl_internal_set__exportDescription(::Amazon::DynamoDBv2::Model::ExportDescription* value);

  /// @brief Method .ctor, addr 0x122a070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExportDescription, addr 0x122a050, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExportDescription* get_ExportDescription();

  /// @brief Method set_ExportDescription, addr 0x122a058, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportDescription(::Amazon::DynamoDBv2::Model::ExportDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeExportResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeExportResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeExportResponse(DescribeExportResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeExportResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeExportResponse(DescribeExportResponse const&) = delete;

  /// @brief Field _exportDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ExportDescription* ____exportDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeExportResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeExportResponse, ____exportDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeExportResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeExportResponse*, "Amazon.DynamoDBv2.Model", "DescribeExportResponse");
