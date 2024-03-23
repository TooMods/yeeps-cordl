#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExecuteTransactionRequest)
namespace Amazon::DynamoDBv2::Model {
class ParameterizedStatement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExecuteTransactionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest);
// Type: Amazon.DynamoDBv2.Model::ExecuteTransactionRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExecuteTransactionRequest*
class CORDL_TYPE ExecuteTransactionRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ClientRequestToken, put = set_ClientRequestToken))::StringW ClientRequestToken;

  __declspec(property(get = get_TransactStatements, put = set_TransactStatements))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* TransactStatements;

  /// @brief Field _clientRequestToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientRequestToken, put = __cordl_internal_set__clientRequestToken))::StringW _clientRequestToken;

  /// @brief Field _transactStatements, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transactStatements,
                      put = __cordl_internal_set__transactStatements))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* _transactStatements;

  /// @brief Method IsSetClientRequestToken, addr 0x122af20, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetClientRequestToken();

  /// @brief Method IsSetTransactStatements, addr 0x122af40, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTransactStatements();

  static inline ::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__clientRequestToken() const;

  constexpr ::StringW& __cordl_internal_get__clientRequestToken();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*& __cordl_internal_get__transactStatements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>*> const& __cordl_internal_get__transactStatements() const;

  constexpr void __cordl_internal_set__clientRequestToken(::StringW value);

  constexpr void __cordl_internal_set__transactStatements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* value);

  /// @brief Method .ctor, addr 0x122af94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientRequestToken, addr 0x122af10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientRequestToken();

  /// @brief Method get_TransactStatements, addr 0x122af30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* get_TransactStatements();

  /// @brief Method set_ClientRequestToken, addr 0x122af18, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientRequestToken(::StringW value);

  /// @brief Method set_TransactStatements, addr 0x122af38, size 0x8, virtual false, abstract: false, final false
  inline void set_TransactStatements(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteTransactionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteTransactionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteTransactionRequest(ExecuteTransactionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteTransactionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteTransactionRequest(ExecuteTransactionRequest const&) = delete;

  /// @brief Field _clientRequestToken, offset: 0x38, size: 0x8, def value: None
  ::StringW ____clientRequestToken;

  /// @brief Field _transactStatements, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ParameterizedStatement*>* ____transactStatements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest, ____clientRequestToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest, ____transactStatements) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest*, "Amazon.DynamoDBv2.Model", "ExecuteTransactionRequest");
