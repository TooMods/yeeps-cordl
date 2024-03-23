#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchStatementRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchStatementRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchStatementRequest);
// Type: Amazon.DynamoDBv2.Model::BatchStatementRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchStatementRequest*
class CORDL_TYPE BatchStatementRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_Parameters, put = set_Parameters))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* Parameters;

  __declspec(property(get = get_Statement, put = set_Statement))::StringW Statement;

  /// @brief Field _consistentRead, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__consistentRead, put = __cordl_internal_set__consistentRead))::System::Nullable_1<bool> _consistentRead;

  /// @brief Field _parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _parameters;

  /// @brief Field _statement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__statement, put = __cordl_internal_set__statement))::StringW _statement;

  /// @brief Method IsSetConsistentRead, addr 0x1226e7c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetParameters, addr 0x1226ec8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetParameters();

  /// @brief Method IsSetStatement, addr 0x1226f2c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatement();

  static inline ::Amazon::DynamoDBv2::Model::BatchStatementRequest* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__consistentRead() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__consistentRead();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__parameters() const;

  constexpr ::StringW const& __cordl_internal_get__statement() const;

  constexpr ::StringW& __cordl_internal_get__statement();

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__parameters(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__statement(::StringW value);

  /// @brief Method .ctor, addr 0x1226f3c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsistentRead, addr 0x1226dd8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_Parameters, addr 0x1226eb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Parameters();

  /// @brief Method get_Statement, addr 0x1226f1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Statement();

  /// @brief Method set_ConsistentRead, addr 0x1226e14, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_Parameters, addr 0x1226ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameters(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Statement, addr 0x1226f24, size 0x8, virtual false, abstract: false, final false
  inline void set_Statement(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchStatementRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchStatementRequest(BatchStatementRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchStatementRequest(BatchStatementRequest const&) = delete;

  /// @brief Field _consistentRead, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____consistentRead;

  /// @brief Field _parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____parameters;

  /// @brief Field _statement, offset: 0x20, size: 0x8, def value: None
  ::StringW ____statement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchStatementRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementRequest, ____consistentRead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementRequest, ____parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementRequest, ____statement) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchStatementRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchStatementRequest*, "Amazon.DynamoDBv2.Model", "BatchStatementRequest");
