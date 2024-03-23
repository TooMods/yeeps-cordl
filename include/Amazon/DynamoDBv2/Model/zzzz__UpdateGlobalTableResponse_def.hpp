#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UpdateGlobalTableResponse)
namespace Amazon::DynamoDBv2::Model {
class GlobalTableDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse);
// Type: Amazon.DynamoDBv2.Model::UpdateGlobalTableResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateGlobalTableResponse*
class CORDL_TYPE UpdateGlobalTableResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableDescription, put = set_GlobalTableDescription))::Amazon::DynamoDBv2::Model::GlobalTableDescription* GlobalTableDescription;

  /// @brief Field _globalTableDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableDescription,
                      put = __cordl_internal_set__globalTableDescription))::Amazon::DynamoDBv2::Model::GlobalTableDescription* _globalTableDescription;

  /// @brief Method IsSetGlobalTableDescription, addr 0x1054288, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableDescription();

  static inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::GlobalTableDescription*& __cordl_internal_get__globalTableDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::GlobalTableDescription*> const& __cordl_internal_get__globalTableDescription() const;

  constexpr void __cordl_internal_set__globalTableDescription(::Amazon::DynamoDBv2::Model::GlobalTableDescription* value);

  /// @brief Method .ctor, addr 0x1054298, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableDescription, addr 0x1054278, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::GlobalTableDescription* get_GlobalTableDescription();

  /// @brief Method set_GlobalTableDescription, addr 0x1054280, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableDescription(::Amazon::DynamoDBv2::Model::GlobalTableDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalTableResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalTableResponse(UpdateGlobalTableResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalTableResponse(UpdateGlobalTableResponse const&) = delete;

  /// @brief Field _globalTableDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::GlobalTableDescription* ____globalTableDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse, ____globalTableDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse*, "Amazon.DynamoDBv2.Model", "UpdateGlobalTableResponse");
