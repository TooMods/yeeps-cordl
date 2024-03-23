#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateGlobalSecondaryIndexAction)
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalSecondaryIndexAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction);
// Type: Amazon.DynamoDBv2.Model::UpdateGlobalSecondaryIndexAction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateGlobalSecondaryIndexAction*
class CORDL_TYPE UpdateGlobalSecondaryIndexAction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughput;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedThroughput, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput, put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughput;

  /// @brief Method IsSetIndexName, addr 0x1054140, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1054160, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  static inline ::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method .ctor, addr 0x1054170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x1054130, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedThroughput, addr 0x1054150, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughput();

  /// @brief Method set_IndexName, addr 0x1054138, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1054158, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalSecondaryIndexAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalSecondaryIndexAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalSecondaryIndexAction(UpdateGlobalSecondaryIndexAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalSecondaryIndexAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalSecondaryIndexAction(UpdateGlobalSecondaryIndexAction const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedThroughput, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction, ____provisionedThroughput) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction*, "Amazon.DynamoDBv2.Model", "UpdateGlobalSecondaryIndexAction");
