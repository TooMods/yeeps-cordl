#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateGlobalTableSettingsResponse)
namespace Amazon::DynamoDBv2::Model {
class ReplicaSettingsDescription;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableSettingsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse);
// Type: Amazon.DynamoDBv2.Model::UpdateGlobalTableSettingsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateGlobalTableSettingsResponse*
class CORDL_TYPE UpdateGlobalTableSettingsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(get = get_ReplicaSettings, put = set_ReplicaSettings))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* ReplicaSettings;

  /// @brief Field _globalTableName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _replicaSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaSettings,
                      put = __cordl_internal_set__replicaSettings))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* _replicaSettings;

  /// @brief Method IsSetGlobalTableName, addr 0x10545d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetReplicaSettings, addr 0x10545f0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaSettings();

  static inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>*& __cordl_internal_get__replicaSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>*> const& __cordl_internal_get__replicaSettings() const;

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__replicaSettings(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* value);

  /// @brief Method .ctor, addr 0x1054644, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableName, addr 0x10545c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_ReplicaSettings, addr 0x10545e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* get_ReplicaSettings();

  /// @brief Method set_GlobalTableName, addr 0x10545c8, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_ReplicaSettings, addr 0x10545e8, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaSettings(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalTableSettingsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalTableSettingsResponse(UpdateGlobalTableSettingsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalTableSettingsResponse(UpdateGlobalTableSettingsResponse const&) = delete;

  /// @brief Field _globalTableName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _replicaSettings, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>* ____replicaSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse, ____globalTableName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse, ____replicaSettings) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse*, "Amazon.DynamoDBv2.Model", "UpdateGlobalTableSettingsResponse");
