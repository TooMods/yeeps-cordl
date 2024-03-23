#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteGlobalSecondaryIndexAction)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DeleteGlobalSecondaryIndexAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction);
// Type: Amazon.DynamoDBv2.Model::DeleteGlobalSecondaryIndexAction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DeleteGlobalSecondaryIndexAction*
class CORDL_TYPE DeleteGlobalSecondaryIndexAction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Method IsSetIndexName, addr 0x122922c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  static inline ::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr void __cordl_internal_set__indexName(::StringW value);

  /// @brief Method .ctor, addr 0x122923c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x122921c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method set_IndexName, addr 0x1229224, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteGlobalSecondaryIndexAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteGlobalSecondaryIndexAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteGlobalSecondaryIndexAction(DeleteGlobalSecondaryIndexAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteGlobalSecondaryIndexAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteGlobalSecondaryIndexAction(DeleteGlobalSecondaryIndexAction const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction, ____indexName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction*, "Amazon.DynamoDBv2.Model", "DeleteGlobalSecondaryIndexAction");
