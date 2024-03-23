#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoScalingTargetTrackingScalingPolicyConfigurationUpdate)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AutoScalingTargetTrackingScalingPolicyConfigurationUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate);
// Type: Amazon.DynamoDBv2.Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate*
class CORDL_TYPE AutoScalingTargetTrackingScalingPolicyConfigurationUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DisableScaleIn, put = set_DisableScaleIn)) bool DisableScaleIn;

  __declspec(property(get = get_ScaleInCooldown, put = set_ScaleInCooldown)) int32_t ScaleInCooldown;

  __declspec(property(get = get_ScaleOutCooldown, put = set_ScaleOutCooldown)) int32_t ScaleOutCooldown;

  __declspec(property(get = get_TargetValue, put = set_TargetValue)) double_t TargetValue;

  /// @brief Field _disableScaleIn, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__disableScaleIn, put = __cordl_internal_set__disableScaleIn))::System::Nullable_1<bool> _disableScaleIn;

  /// @brief Field _scaleInCooldown, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleInCooldown, put = __cordl_internal_set__scaleInCooldown))::System::Nullable_1<int32_t> _scaleInCooldown;

  /// @brief Field _scaleOutCooldown, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleOutCooldown, put = __cordl_internal_set__scaleOutCooldown))::System::Nullable_1<int32_t> _scaleOutCooldown;

  /// @brief Field _targetValue, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__targetValue, put = __cordl_internal_set__targetValue))::System::Nullable_1<double_t> _targetValue;

  /// @brief Method IsSetDisableScaleIn, addr 0x1225b90, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetDisableScaleIn();

  /// @brief Method IsSetScaleInCooldown, addr 0x1225c70, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetScaleInCooldown();

  /// @brief Method IsSetScaleOutCooldown, addr 0x1225d50, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetScaleOutCooldown();

  /// @brief Method IsSetTargetValue, addr 0x1225e38, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTargetValue();

  static inline ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__disableScaleIn() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__disableScaleIn();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__scaleInCooldown() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__scaleInCooldown();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__scaleOutCooldown() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__scaleOutCooldown();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__targetValue() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__targetValue();

  constexpr void __cordl_internal_set__disableScaleIn(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__scaleInCooldown(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__scaleOutCooldown(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__targetValue(::System::Nullable_1<double_t> value);

  /// @brief Method .ctor, addr 0x1225e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DisableScaleIn, addr 0x1225aec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_DisableScaleIn();

  /// @brief Method get_ScaleInCooldown, addr 0x1225bcc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ScaleInCooldown();

  /// @brief Method get_ScaleOutCooldown, addr 0x1225cac, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ScaleOutCooldown();

  /// @brief Method get_TargetValue, addr 0x1225d8c, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_TargetValue();

  /// @brief Method set_DisableScaleIn, addr 0x1225b28, size 0x68, virtual false, abstract: false, final false
  inline void set_DisableScaleIn(bool value);

  /// @brief Method set_ScaleInCooldown, addr 0x1225c08, size 0x68, virtual false, abstract: false, final false
  inline void set_ScaleInCooldown(int32_t value);

  /// @brief Method set_ScaleOutCooldown, addr 0x1225ce8, size 0x68, virtual false, abstract: false, final false
  inline void set_ScaleOutCooldown(int32_t value);

  /// @brief Method set_TargetValue, addr 0x1225dc8, size 0x70, virtual false, abstract: false, final false
  inline void set_TargetValue(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoScalingTargetTrackingScalingPolicyConfigurationUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingTargetTrackingScalingPolicyConfigurationUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoScalingTargetTrackingScalingPolicyConfigurationUpdate(AutoScalingTargetTrackingScalingPolicyConfigurationUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingTargetTrackingScalingPolicyConfigurationUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoScalingTargetTrackingScalingPolicyConfigurationUpdate(AutoScalingTargetTrackingScalingPolicyConfigurationUpdate const&) = delete;

  /// @brief Field _disableScaleIn, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____disableScaleIn;

  /// @brief Field _scaleInCooldown, offset: 0x14, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____scaleInCooldown;

  /// @brief Field _scaleOutCooldown, offset: 0x1c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____scaleOutCooldown;

  /// @brief Field _targetValue, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____targetValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate, ____disableScaleIn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate, ____scaleInCooldown) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate, ____scaleOutCooldown) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate, ____targetValue) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationUpdate*, "Amazon.DynamoDBv2.Model", "AutoScalingTargetTrackingScalingPolicyConfigurationUpdate");
