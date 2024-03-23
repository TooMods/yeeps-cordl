#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointInTimeRecoverySpecification)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class PointInTimeRecoverySpecification;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification);
// Type: Amazon.DynamoDBv2.Model::PointInTimeRecoverySpecification
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::PointInTimeRecoverySpecification*
class CORDL_TYPE PointInTimeRecoverySpecification : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PointInTimeRecoveryEnabled, put = set_PointInTimeRecoveryEnabled)) bool PointInTimeRecoveryEnabled;

  /// @brief Field _pointInTimeRecoveryEnabled, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__pointInTimeRecoveryEnabled, put = __cordl_internal_set__pointInTimeRecoveryEnabled))::System::Nullable_1<bool> _pointInTimeRecoveryEnabled;

  /// @brief Method IsSetPointInTimeRecoveryEnabled, addr 0x104c044, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetPointInTimeRecoveryEnabled();

  static inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__pointInTimeRecoveryEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__pointInTimeRecoveryEnabled();

  constexpr void __cordl_internal_set__pointInTimeRecoveryEnabled(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x104c080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PointInTimeRecoveryEnabled, addr 0x104bfa0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_PointInTimeRecoveryEnabled();

  /// @brief Method set_PointInTimeRecoveryEnabled, addr 0x104bfdc, size 0x68, virtual false, abstract: false, final false
  inline void set_PointInTimeRecoveryEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointInTimeRecoverySpecification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointInTimeRecoverySpecification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointInTimeRecoverySpecification(PointInTimeRecoverySpecification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointInTimeRecoverySpecification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointInTimeRecoverySpecification(PointInTimeRecoverySpecification const&) = delete;

  /// @brief Field _pointInTimeRecoveryEnabled, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____pointInTimeRecoveryEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification, ____pointInTimeRecoveryEnabled) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*, "Amazon.DynamoDBv2.Model", "PointInTimeRecoverySpecification");
