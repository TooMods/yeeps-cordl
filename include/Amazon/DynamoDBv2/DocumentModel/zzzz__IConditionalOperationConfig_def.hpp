#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConditionalOperationConfig)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ExpectedState;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class IConditionalOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::IConditionalOperationConfig
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::IConditionalOperationConfig*
class CORDL_TYPE IConditionalOperationConfig {
public:
  // Declarations
  __declspec(property(get = get_ConditionalExpression, put = set_ConditionalExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* ConditionalExpression;

  __declspec(property(get = get_Expected, put = set_Expected))::Amazon::DynamoDBv2::DocumentModel::Document* Expected;

  __declspec(property(get = get_ExpectedState, put = set_ExpectedState))::Amazon::DynamoDBv2::DocumentModel::ExpectedState* ExpectedState;

  /// @brief Method get_ConditionalExpression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_ConditionalExpression();

  /// @brief Method get_Expected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* get_Expected();

  /// @brief Method get_ExpectedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedState* get_ExpectedState();

  /// @brief Method set_ConditionalExpression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ConditionalExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_Expected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Expected(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  /// @brief Method set_ExpectedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ExpectedState(::Amazon::DynamoDBv2::DocumentModel::ExpectedState* value);

  // Ctor Parameters [CppParam { name: "", ty: "IConditionalOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConditionalOperationConfig(IConditionalOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConditionalOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConditionalOperationConfig(IConditionalOperationConfig const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig*, "Amazon.DynamoDBv2.DocumentModel", "IConditionalOperationConfig");
