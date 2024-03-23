#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListGlobalTablesResponse)
namespace Amazon::DynamoDBv2::Model {
class GlobalTable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListGlobalTablesResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse);
// Type: Amazon.DynamoDBv2.Model::ListGlobalTablesResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListGlobalTablesResponse*
class CORDL_TYPE ListGlobalTablesResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_GlobalTables, put = set_GlobalTables))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* GlobalTables;

  __declspec(property(get = get_LastEvaluatedGlobalTableName, put = set_LastEvaluatedGlobalTableName))::StringW LastEvaluatedGlobalTableName;

  /// @brief Field _globalTables, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTables,
                      put = __cordl_internal_set__globalTables))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* _globalTables;

  /// @brief Field _lastEvaluatedGlobalTableName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedGlobalTableName, put = __cordl_internal_set__lastEvaluatedGlobalTableName))::StringW _lastEvaluatedGlobalTableName;

  /// @brief Method IsSetGlobalTables, addr 0x104aff4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalTables();

  /// @brief Method IsSetLastEvaluatedGlobalTableName, addr 0x104b058, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedGlobalTableName();

  static inline ::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>*& __cordl_internal_get__globalTables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>*> const& __cordl_internal_get__globalTables() const;

  constexpr ::StringW const& __cordl_internal_get__lastEvaluatedGlobalTableName() const;

  constexpr ::StringW& __cordl_internal_get__lastEvaluatedGlobalTableName();

  constexpr void __cordl_internal_set__globalTables(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* value);

  constexpr void __cordl_internal_set__lastEvaluatedGlobalTableName(::StringW value);

  /// @brief Method .ctor, addr 0x104b068, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTables, addr 0x104afe4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* get_GlobalTables();

  /// @brief Method get_LastEvaluatedGlobalTableName, addr 0x104b048, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastEvaluatedGlobalTableName();

  /// @brief Method set_GlobalTables, addr 0x104afec, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTables(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* value);

  /// @brief Method set_LastEvaluatedGlobalTableName, addr 0x104b050, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedGlobalTableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListGlobalTablesResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListGlobalTablesResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListGlobalTablesResponse(ListGlobalTablesResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListGlobalTablesResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListGlobalTablesResponse(ListGlobalTablesResponse const&) = delete;

  /// @brief Field _globalTables, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTable*>* ____globalTables;

  /// @brief Field _lastEvaluatedGlobalTableName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____lastEvaluatedGlobalTableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse, ____globalTables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse, ____lastEvaluatedGlobalTableName) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse*, "Amazon.DynamoDBv2.Model", "ListGlobalTablesResponse");
