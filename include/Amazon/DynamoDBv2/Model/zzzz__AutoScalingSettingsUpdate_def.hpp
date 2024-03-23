#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoScalingSettingsUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingPolicyUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate);
// Type: Amazon.DynamoDBv2.Model::AutoScalingSettingsUpdate
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AutoScalingSettingsUpdate*
class CORDL_TYPE AutoScalingSettingsUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AutoScalingDisabled, put = set_AutoScalingDisabled)) bool AutoScalingDisabled;

  __declspec(property(get = get_AutoScalingRoleArn, put = set_AutoScalingRoleArn))::StringW AutoScalingRoleArn;

  __declspec(property(get = get_MaximumUnits, put = set_MaximumUnits)) int64_t MaximumUnits;

  __declspec(property(get = get_MinimumUnits, put = set_MinimumUnits)) int64_t MinimumUnits;

  __declspec(property(get = get_ScalingPolicyUpdate, put = set_ScalingPolicyUpdate))::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* ScalingPolicyUpdate;

  /// @brief Field _autoScalingDisabled, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__autoScalingDisabled, put = __cordl_internal_set__autoScalingDisabled))::System::Nullable_1<bool> _autoScalingDisabled;

  /// @brief Field _autoScalingRoleArn, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__autoScalingRoleArn, put = __cordl_internal_set__autoScalingRoleArn))::StringW _autoScalingRoleArn;

  /// @brief Field _maximumUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__maximumUnits, put = __cordl_internal_set__maximumUnits))::System::Nullable_1<int64_t> _maximumUnits;

  /// @brief Field _minimumUnits, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__minimumUnits, put = __cordl_internal_set__minimumUnits))::System::Nullable_1<int64_t> _minimumUnits;

  /// @brief Field _scalingPolicyUpdate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__scalingPolicyUpdate, put = __cordl_internal_set__scalingPolicyUpdate))::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* _scalingPolicyUpdate;

  /// @brief Method IsSetAutoScalingDisabled, addr 0x1225508, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAutoScalingDisabled();

  /// @brief Method IsSetAutoScalingRoleArn, addr 0x1225554, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAutoScalingRoleArn();

  /// @brief Method IsSetMaximumUnits, addr 0x1225610, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumUnits();

  /// @brief Method IsSetMinimumUnits, addr 0x12256f8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMinimumUnits();

  /// @brief Method IsSetScalingPolicyUpdate, addr 0x1225744, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetScalingPolicyUpdate();

  static inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__autoScalingDisabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__autoScalingDisabled();

  constexpr ::StringW const& __cordl_internal_get__autoScalingRoleArn() const;

  constexpr ::StringW& __cordl_internal_get__autoScalingRoleArn();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__maximumUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__maximumUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__minimumUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__minimumUnits();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate*& __cordl_internal_get__scalingPolicyUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate*> const& __cordl_internal_get__scalingPolicyUpdate() const;

  constexpr void __cordl_internal_set__autoScalingDisabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__autoScalingRoleArn(::StringW value);

  constexpr void __cordl_internal_set__maximumUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__minimumUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__scalingPolicyUpdate(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* value);

  /// @brief Method .ctor, addr 0x1225754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AutoScalingDisabled, addr 0x1225464, size 0x3c, virtual false, abstract: false, final false
  inline bool get_AutoScalingDisabled();

  /// @brief Method get_AutoScalingRoleArn, addr 0x1225544, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AutoScalingRoleArn();

  /// @brief Method get_MaximumUnits, addr 0x1225564, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_MaximumUnits();

  /// @brief Method get_MinimumUnits, addr 0x122564c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_MinimumUnits();

  /// @brief Method get_ScalingPolicyUpdate, addr 0x1225734, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* get_ScalingPolicyUpdate();

  /// @brief Method set_AutoScalingDisabled, addr 0x12254a0, size 0x68, virtual false, abstract: false, final false
  inline void set_AutoScalingDisabled(bool value);

  /// @brief Method set_AutoScalingRoleArn, addr 0x122554c, size 0x8, virtual false, abstract: false, final false
  inline void set_AutoScalingRoleArn(::StringW value);

  /// @brief Method set_MaximumUnits, addr 0x12255a0, size 0x70, virtual false, abstract: false, final false
  inline void set_MaximumUnits(int64_t value);

  /// @brief Method set_MinimumUnits, addr 0x1225688, size 0x70, virtual false, abstract: false, final false
  inline void set_MinimumUnits(int64_t value);

  /// @brief Method set_ScalingPolicyUpdate, addr 0x122573c, size 0x8, virtual false, abstract: false, final false
  inline void set_ScalingPolicyUpdate(::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoScalingSettingsUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingSettingsUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoScalingSettingsUpdate(AutoScalingSettingsUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingSettingsUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoScalingSettingsUpdate(AutoScalingSettingsUpdate const&) = delete;

  /// @brief Field _autoScalingDisabled, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____autoScalingDisabled;

  /// @brief Field _autoScalingRoleArn, offset: 0x18, size: 0x8, def value: None
  ::StringW ____autoScalingRoleArn;

  /// @brief Field _maximumUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____maximumUnits;

  /// @brief Field _minimumUnits, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____minimumUnits;

  /// @brief Field _scalingPolicyUpdate, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingPolicyUpdate* ____scalingPolicyUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, ____autoScalingDisabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, ____autoScalingRoleArn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, ____maximumUnits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, ____minimumUnits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate, ____scalingPolicyUpdate) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*, "Amazon.DynamoDBv2.Model", "AutoScalingSettingsUpdate");
