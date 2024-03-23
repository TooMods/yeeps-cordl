#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AutoScalingPolicyUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingTargetTrackingScalingPolicyConfigurationUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AutoScalingPolicyUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate);
// Type: Amazon.DynamoDBv2.Model::AutoScalingPolicyUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AutoScalingPolicyUpdate*
class CORDL_TYPE AutoScalingPolicyUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PolicyName, put = set_PolicyName))::StringW PolicyName;

  __declspec(
      property(get = get_TargetTrackingScalingPolicyConfiguration,
               put = set_TargetTrackingScalingPolicyConfiguration))::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* TargetTrackingScalingPolicyConfiguration;

  /// @brief Field _policyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__policyName, put = __cordl_internal_set__policyName))::StringW _policyName;

  /// @brief Field _targetTrackingScalingPolicyConfiguration, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTrackingScalingPolicyConfiguration, put = __cordl_internal_set__targetTrackingScalingPolicyConfiguration))::Amazon::DynamoDBv2::Model::
      AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* _targetTrackingScalingPolicyConfiguration;

  /// @brief Method IsSetPolicyName, addr 0x122507c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPolicyName();

  /// @brief Method IsSetTargetTrackingScalingPolicyConfiguration, addr 0x122509c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTargetTrackingScalingPolicyConfiguration();

  static inline ::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__policyName() const;

  constexpr ::StringW& __cordl_internal_get__policyName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate*& __cordl_internal_get__targetTrackingScalingPolicyConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate*> const&
  __cordl_internal_get__targetTrackingScalingPolicyConfiguration() const;

  constexpr void __cordl_internal_set__policyName(::StringW value);

  constexpr void __cordl_internal_set__targetTrackingScalingPolicyConfiguration(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* value);

  /// @brief Method .ctor, addr 0x12250ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PolicyName, addr 0x122506c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PolicyName();

  /// @brief Method get_TargetTrackingScalingPolicyConfiguration, addr 0x122508c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* get_TargetTrackingScalingPolicyConfiguration();

  /// @brief Method set_PolicyName, addr 0x1225074, size 0x8, virtual false, abstract: false, final false
  inline void set_PolicyName(::StringW value);

  /// @brief Method set_TargetTrackingScalingPolicyConfiguration, addr 0x1225094, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTrackingScalingPolicyConfiguration(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoScalingPolicyUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingPolicyUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoScalingPolicyUpdate(AutoScalingPolicyUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingPolicyUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoScalingPolicyUpdate(AutoScalingPolicyUpdate const&) = delete;

  /// @brief Field _policyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____policyName;

  /// @brief Field _targetTrackingScalingPolicyConfiguration, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* ____targetTrackingScalingPolicyConfiguration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate, ____policyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate, ____targetTrackingScalingPolicyConfiguration) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate*, "Amazon.DynamoDBv2.Model", "AutoScalingPolicyUpdate");
