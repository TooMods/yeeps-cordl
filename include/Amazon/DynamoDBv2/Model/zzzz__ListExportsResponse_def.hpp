#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListExportsResponse)
namespace Amazon::DynamoDBv2::Model {
class ExportSummary;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListExportsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListExportsResponse);
// Type: Amazon.DynamoDBv2.Model::ListExportsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListExportsResponse*
class CORDL_TYPE ListExportsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ExportSummaries, put = set_ExportSummaries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* ExportSummaries;

  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  /// @brief Field _exportSummaries, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__exportSummaries,
                      put = __cordl_internal_set__exportSummaries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* _exportSummaries;

  /// @brief Field _nextToken, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Method IsSetExportSummaries, addr 0x104adcc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetExportSummaries();

  /// @brief Method IsSetNextToken, addr 0x104ae30, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  static inline ::Amazon::DynamoDBv2::Model::ListExportsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>*& __cordl_internal_get__exportSummaries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>*> const& __cordl_internal_get__exportSummaries() const;

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr void __cordl_internal_set__exportSummaries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* value);

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  /// @brief Method .ctor, addr 0x104ae40, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExportSummaries, addr 0x104adbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* get_ExportSummaries();

  /// @brief Method get_NextToken, addr 0x104ae20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method set_ExportSummaries, addr 0x104adc4, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportSummaries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* value);

  /// @brief Method set_NextToken, addr 0x104ae28, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListExportsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListExportsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListExportsResponse(ListExportsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListExportsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListExportsResponse(ListExportsResponse const&) = delete;

  /// @brief Field _exportSummaries, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ExportSummary*>* ____exportSummaries;

  /// @brief Field _nextToken, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListExportsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListExportsResponse, ____exportSummaries) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListExportsResponse, ____nextToken) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListExportsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListExportsResponse*, "Amazon.DynamoDBv2.Model", "ListExportsResponse");
