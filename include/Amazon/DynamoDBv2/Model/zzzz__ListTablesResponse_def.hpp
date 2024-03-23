#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListTablesResponse)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListTablesResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListTablesResponse);
// Type: Amazon.DynamoDBv2.Model::ListTablesResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListTablesResponse*
class CORDL_TYPE ListTablesResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_LastEvaluatedTableName, put = set_LastEvaluatedTableName))::StringW LastEvaluatedTableName;

  __declspec(property(get = get_TableNames, put = set_TableNames))::System::Collections::Generic::List_1<::StringW>* TableNames;

  /// @brief Field _lastEvaluatedTableName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedTableName, put = __cordl_internal_set__lastEvaluatedTableName))::StringW _lastEvaluatedTableName;

  /// @brief Field _tableNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tableNames, put = __cordl_internal_set__tableNames))::System::Collections::Generic::List_1<::StringW>* _tableNames;

  /// @brief Method IsSetLastEvaluatedTableName, addr 0x104b4d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedTableName();

  /// @brief Method IsSetTableNames, addr 0x104b4f0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTableNames();

  static inline ::Amazon::DynamoDBv2::Model::ListTablesResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__lastEvaluatedTableName() const;

  constexpr ::StringW& __cordl_internal_get__lastEvaluatedTableName();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tableNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__tableNames() const;

  constexpr void __cordl_internal_set__lastEvaluatedTableName(::StringW value);

  constexpr void __cordl_internal_set__tableNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x104b544, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LastEvaluatedTableName, addr 0x104b4c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastEvaluatedTableName();

  /// @brief Method get_TableNames, addr 0x104b4e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_TableNames();

  /// @brief Method set_LastEvaluatedTableName, addr 0x104b4c8, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedTableName(::StringW value);

  /// @brief Method set_TableNames, addr 0x104b4e8, size 0x8, virtual false, abstract: false, final false
  inline void set_TableNames(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTablesResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTablesResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTablesResponse(ListTablesResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTablesResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTablesResponse(ListTablesResponse const&) = delete;

  /// @brief Field _lastEvaluatedTableName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____lastEvaluatedTableName;

  /// @brief Field _tableNames, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____tableNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListTablesResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTablesResponse, ____lastEvaluatedTableName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTablesResponse, ____tableNames) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListTablesResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListTablesResponse*, "Amazon.DynamoDBv2.Model", "ListTablesResponse");
