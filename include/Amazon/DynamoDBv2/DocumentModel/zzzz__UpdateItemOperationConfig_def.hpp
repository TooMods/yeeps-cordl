#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ReturnValues_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpdateItemOperationConfig)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ExpectedState;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class IConditionalOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ReturnValues;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class UpdateItemOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::UpdateItemOperationConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::UpdateItemOperationConfig*
class CORDL_TYPE UpdateItemOperationConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConditionalExpression, put = set_ConditionalExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* ConditionalExpression;

  __declspec(property(get = get_Expected, put = set_Expected))::Amazon::DynamoDBv2::DocumentModel::Document* Expected;

  __declspec(property(get = get_ExpectedState, put = set_ExpectedState))::Amazon::DynamoDBv2::DocumentModel::ExpectedState* ExpectedState;

  __declspec(property(get = get_ReturnValues, put = set_ReturnValues))::Amazon::DynamoDBv2::DocumentModel::ReturnValues ReturnValues;

  /// @brief Field <ConditionalExpression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ConditionalExpression_k__BackingField,
                      put = __cordl_internal_set__ConditionalExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _ConditionalExpression_k__BackingField;

  /// @brief Field <ExpectedState>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpectedState_k__BackingField,
                      put = __cordl_internal_set__ExpectedState_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ExpectedState* _ExpectedState_k__BackingField;

  /// @brief Field <Expected>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Expected_k__BackingField,
                      put = __cordl_internal_set__Expected_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Document* _Expected_k__BackingField;

  /// @brief Field <ReturnValues>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__ReturnValues_k__BackingField,
                      put = __cordl_internal_set__ReturnValues_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ReturnValues _ReturnValues_k__BackingField;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig"
  constexpr operator ::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig*() noexcept;

  static inline ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* New_ctor();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__ConditionalExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__ConditionalExpression_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ExpectedState*& __cordl_internal_get__ExpectedState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*> const& __cordl_internal_get__ExpectedState_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Document*& __cordl_internal_get__Expected_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Document*> const& __cordl_internal_get__Expected_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues const& __cordl_internal_get__ReturnValues_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues& __cordl_internal_get__ReturnValues_k__BackingField();

  constexpr void __cordl_internal_set__ConditionalExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__ExpectedState_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ExpectedState* value);

  constexpr void __cordl_internal_set__Expected_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  constexpr void __cordl_internal_set__ReturnValues_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ReturnValues value);

  /// @brief Method .ctor, addr 0x141e538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConditionalExpression, addr 0x141f41c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_ConditionalExpression();

  /// @brief Method get_Expected, addr 0x141f43c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* get_Expected();

  /// @brief Method get_ExpectedState, addr 0x141f42c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedState* get_ExpectedState();

  /// @brief Method get_ReturnValues, addr 0x141f44c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ReturnValues get_ReturnValues();

  /// @brief Convert to "::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig"
  constexpr ::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig* i___Amazon__DynamoDBv2__DocumentModel__IConditionalOperationConfig() noexcept;

  /// @brief Method set_ConditionalExpression, addr 0x141f424, size 0x8, virtual true, abstract: false, final true
  inline void set_ConditionalExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_Expected, addr 0x141f444, size 0x8, virtual true, abstract: false, final true
  inline void set_Expected(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  /// @brief Method set_ExpectedState, addr 0x141f434, size 0x8, virtual true, abstract: false, final true
  inline void set_ExpectedState(::Amazon::DynamoDBv2::DocumentModel::ExpectedState* value);

  /// @brief Method set_ReturnValues, addr 0x141f454, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnValues(::Amazon::DynamoDBv2::DocumentModel::ReturnValues value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateItemOperationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateItemOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateItemOperationConfig(UpdateItemOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateItemOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateItemOperationConfig(UpdateItemOperationConfig const&) = delete;

  /// @brief Field <ConditionalExpression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____ConditionalExpression_k__BackingField;

  /// @brief Field <ExpectedState>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ExpectedState* ____ExpectedState_k__BackingField;

  /// @brief Field <Expected>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Document* ____Expected_k__BackingField;

  /// @brief Field <ReturnValues>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ReturnValues ____ReturnValues_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig, ____ConditionalExpression_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig, ____ExpectedState_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig, ____Expected_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig, ____ReturnValues_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig*, "Amazon.DynamoDBv2.DocumentModel", "UpdateItemOperationConfig");
