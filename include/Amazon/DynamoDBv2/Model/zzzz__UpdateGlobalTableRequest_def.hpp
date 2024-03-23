#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateGlobalTableRequest)
namespace Amazon::DynamoDBv2::Model {
class ReplicaUpdate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateGlobalTableRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateGlobalTableRequest*
class CORDL_TYPE UpdateGlobalTableRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(get = get_ReplicaUpdates, put = set_ReplicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* ReplicaUpdates;

  /// @brief Field _globalTableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _replicaUpdates, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaUpdates,
                      put = __cordl_internal_set__replicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* _replicaUpdates;

  /// @brief Method IsSetGlobalTableName, addr 0x1054188, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetReplicaUpdates, addr 0x10541a8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaUpdates();

  static inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>*& __cordl_internal_get__replicaUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>*> const& __cordl_internal_get__replicaUpdates() const;

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__replicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* value);

  /// @brief Method .ctor, addr 0x10541fc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableName, addr 0x1054178, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_ReplicaUpdates, addr 0x1054198, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* get_ReplicaUpdates();

  /// @brief Method set_GlobalTableName, addr 0x1054180, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_ReplicaUpdates, addr 0x10541a0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalTableRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalTableRequest(UpdateGlobalTableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalTableRequest(UpdateGlobalTableRequest const&) = delete;

  /// @brief Field _globalTableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _replicaUpdates, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaUpdate*>* ____replicaUpdates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest, ____globalTableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest, ____replicaUpdates) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest*, "Amazon.DynamoDBv2.Model", "UpdateGlobalTableRequest");
