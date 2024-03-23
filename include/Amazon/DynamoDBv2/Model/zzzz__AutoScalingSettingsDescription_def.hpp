#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoScalingSettingsDescription)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingPolicyDescription;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription);
// Type: Amazon.DynamoDBv2.Model::AutoScalingSettingsDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AutoScalingSettingsDescription*
class CORDL_TYPE AutoScalingSettingsDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AutoScalingDisabled, put = set_AutoScalingDisabled)) bool AutoScalingDisabled;

  __declspec(property(get = get_AutoScalingRoleArn, put = set_AutoScalingRoleArn))::StringW AutoScalingRoleArn;

  __declspec(property(get = get_MaximumUnits, put = set_MaximumUnits)) int64_t MaximumUnits;

  __declspec(property(get = get_MinimumUnits, put = set_MinimumUnits)) int64_t MinimumUnits;

  __declspec(property(get = get_ScalingPolicies, put = set_ScalingPolicies))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* ScalingPolicies;

  /// @brief Field _autoScalingDisabled, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__autoScalingDisabled, put = __cordl_internal_set__autoScalingDisabled))::System::Nullable_1<bool> _autoScalingDisabled;

  /// @brief Field _autoScalingRoleArn, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__autoScalingRoleArn, put = __cordl_internal_set__autoScalingRoleArn))::StringW _autoScalingRoleArn;

  /// @brief Field _maximumUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__maximumUnits, put = __cordl_internal_set__maximumUnits))::System::Nullable_1<int64_t> _maximumUnits;

  /// @brief Field _minimumUnits, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__minimumUnits, put = __cordl_internal_set__minimumUnits))::System::Nullable_1<int64_t> _minimumUnits;

  /// @brief Field _scalingPolicies, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__scalingPolicies,
                      put = __cordl_internal_set__scalingPolicies))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* _scalingPolicies;

  /// @brief Method IsSetAutoScalingDisabled, addr 0x1225158, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAutoScalingDisabled();

  /// @brief Method IsSetAutoScalingRoleArn, addr 0x12251a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAutoScalingRoleArn();

  /// @brief Method IsSetMaximumUnits, addr 0x1225260, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumUnits();

  /// @brief Method IsSetMinimumUnits, addr 0x1225348, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMinimumUnits();

  /// @brief Method IsSetScalingPolicies, addr 0x1225394, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetScalingPolicies();

  static inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__autoScalingDisabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__autoScalingDisabled();

  constexpr ::StringW const& __cordl_internal_get__autoScalingRoleArn() const;

  constexpr ::StringW& __cordl_internal_get__autoScalingRoleArn();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__maximumUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__maximumUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__minimumUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__minimumUnits();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>*& __cordl_internal_get__scalingPolicies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>*> const&
  __cordl_internal_get__scalingPolicies() const;

  constexpr void __cordl_internal_set__autoScalingDisabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__autoScalingRoleArn(::StringW value);

  constexpr void __cordl_internal_set__maximumUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__minimumUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__scalingPolicies(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* value);

  /// @brief Method .ctor, addr 0x12253e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AutoScalingDisabled, addr 0x12250b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_AutoScalingDisabled();

  /// @brief Method get_AutoScalingRoleArn, addr 0x1225194, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AutoScalingRoleArn();

  /// @brief Method get_MaximumUnits, addr 0x12251b4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_MaximumUnits();

  /// @brief Method get_MinimumUnits, addr 0x122529c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_MinimumUnits();

  /// @brief Method get_ScalingPolicies, addr 0x1225384, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* get_ScalingPolicies();

  /// @brief Method set_AutoScalingDisabled, addr 0x12250f0, size 0x68, virtual false, abstract: false, final false
  inline void set_AutoScalingDisabled(bool value);

  /// @brief Method set_AutoScalingRoleArn, addr 0x122519c, size 0x8, virtual false, abstract: false, final false
  inline void set_AutoScalingRoleArn(::StringW value);

  /// @brief Method set_MaximumUnits, addr 0x12251f0, size 0x70, virtual false, abstract: false, final false
  inline void set_MaximumUnits(int64_t value);

  /// @brief Method set_MinimumUnits, addr 0x12252d8, size 0x70, virtual false, abstract: false, final false
  inline void set_MinimumUnits(int64_t value);

  /// @brief Method set_ScalingPolicies, addr 0x122538c, size 0x8, virtual false, abstract: false, final false
  inline void set_ScalingPolicies(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoScalingSettingsDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingSettingsDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoScalingSettingsDescription(AutoScalingSettingsDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingSettingsDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoScalingSettingsDescription(AutoScalingSettingsDescription const&) = delete;

  /// @brief Field _autoScalingDisabled, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____autoScalingDisabled;

  /// @brief Field _autoScalingRoleArn, offset: 0x18, size: 0x8, def value: None
  ::StringW ____autoScalingRoleArn;

  /// @brief Field _maximumUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____maximumUnits;

  /// @brief Field _minimumUnits, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____minimumUnits;

  /// @brief Field _scalingPolicies, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>* ____scalingPolicies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, ____autoScalingDisabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, ____autoScalingRoleArn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, ____maximumUnits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, ____minimumUnits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription, ____scalingPolicies) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*, "Amazon.DynamoDBv2.Model", "AutoScalingSettingsDescription");
