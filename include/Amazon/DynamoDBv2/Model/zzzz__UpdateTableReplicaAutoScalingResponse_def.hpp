#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UpdateTableReplicaAutoScalingResponse)
namespace Amazon::DynamoDBv2::Model {
class TableAutoScalingDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateTableReplicaAutoScalingResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse);
// Type: Amazon.DynamoDBv2.Model::UpdateTableReplicaAutoScalingResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateTableReplicaAutoScalingResponse*
class CORDL_TYPE UpdateTableReplicaAutoScalingResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_TableAutoScalingDescription, put = set_TableAutoScalingDescription))::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* TableAutoScalingDescription;

  /// @brief Field _tableAutoScalingDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tableAutoScalingDescription,
                      put = __cordl_internal_set__tableAutoScalingDescription))::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* _tableAutoScalingDescription;

  /// @brief Method IsSetTableAutoScalingDescription, addr 0x10553bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableAutoScalingDescription();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*& __cordl_internal_get__tableAutoScalingDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*> const& __cordl_internal_get__tableAutoScalingDescription() const;

  constexpr void __cordl_internal_set__tableAutoScalingDescription(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* value);

  /// @brief Method .ctor, addr 0x10553cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TableAutoScalingDescription, addr 0x10553ac, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* get_TableAutoScalingDescription();

  /// @brief Method set_TableAutoScalingDescription, addr 0x10553b4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableAutoScalingDescription(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateTableReplicaAutoScalingResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableReplicaAutoScalingResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateTableReplicaAutoScalingResponse(UpdateTableReplicaAutoScalingResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableReplicaAutoScalingResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateTableReplicaAutoScalingResponse(UpdateTableReplicaAutoScalingResponse const&) = delete;

  /// @brief Field _tableAutoScalingDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* ____tableAutoScalingDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse, ____tableAutoScalingDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse*, "Amazon.DynamoDBv2.Model", "UpdateTableReplicaAutoScalingResponse");
