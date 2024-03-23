#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteReplicationGroupMemberAction)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DeleteReplicationGroupMemberAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction);
// Type: Amazon.DynamoDBv2.Model::DeleteReplicationGroupMemberAction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DeleteReplicationGroupMemberAction*
class CORDL_TYPE DeleteReplicationGroupMemberAction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  /// @brief Field _regionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Method IsSetRegionName, addr 0x12299cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  static inline ::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr void __cordl_internal_set__regionName(::StringW value);

  /// @brief Method .ctor, addr 0x12299dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RegionName, addr 0x12299bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method set_RegionName, addr 0x12299c4, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteReplicationGroupMemberAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteReplicationGroupMemberAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteReplicationGroupMemberAction(DeleteReplicationGroupMemberAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteReplicationGroupMemberAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteReplicationGroupMemberAction(DeleteReplicationGroupMemberAction const&) = delete;

  /// @brief Field _regionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____regionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction, ____regionName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*, "Amazon.DynamoDBv2.Model", "DeleteReplicationGroupMemberAction");
