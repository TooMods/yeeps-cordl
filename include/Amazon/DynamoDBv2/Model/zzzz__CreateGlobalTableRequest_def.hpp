#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateGlobalTableRequest)
namespace Amazon::DynamoDBv2::Model {
class Replica;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CreateGlobalTableRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest);
// Type: Amazon.DynamoDBv2.Model::CreateGlobalTableRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CreateGlobalTableRequest*
class CORDL_TYPE CreateGlobalTableRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(get = get_ReplicationGroup, put = set_ReplicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* ReplicationGroup;

  /// @brief Field _globalTableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _replicationGroup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__replicationGroup,
                      put = __cordl_internal_set__replicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* _replicationGroup;

  /// @brief Method IsSetGlobalTableName, addr 0x122860c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetReplicationGroup, addr 0x122862c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicationGroup();

  static inline ::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*& __cordl_internal_get__replicationGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*> const& __cordl_internal_get__replicationGroup() const;

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__replicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value);

  /// @brief Method .ctor, addr 0x1228680, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableName, addr 0x12285fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_ReplicationGroup, addr 0x122861c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* get_ReplicationGroup();

  /// @brief Method set_GlobalTableName, addr 0x1228604, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_ReplicationGroup, addr 0x1228624, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateGlobalTableRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateGlobalTableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateGlobalTableRequest(CreateGlobalTableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateGlobalTableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateGlobalTableRequest(CreateGlobalTableRequest const&) = delete;

  /// @brief Field _globalTableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _replicationGroup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* ____replicationGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest, ____globalTableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest, ____replicationGroup) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest*, "Amazon.DynamoDBv2.Model", "CreateGlobalTableRequest");
