#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContinuousBackupsDescription)
namespace Amazon::DynamoDBv2::Model {
class PointInTimeRecoveryDescription;
}
namespace Amazon::DynamoDBv2 {
class ContinuousBackupsStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ContinuousBackupsDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription);
// Type: Amazon.DynamoDBv2.Model::ContinuousBackupsDescription
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ContinuousBackupsDescription*
class CORDL_TYPE ContinuousBackupsDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContinuousBackupsStatus, put = set_ContinuousBackupsStatus))::Amazon::DynamoDBv2::ContinuousBackupsStatus* ContinuousBackupsStatus;

  __declspec(property(get = get_PointInTimeRecoveryDescription, put = set_PointInTimeRecoveryDescription))::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* PointInTimeRecoveryDescription;

  /// @brief Field _continuousBackupsStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__continuousBackupsStatus, put = __cordl_internal_set__continuousBackupsStatus))::Amazon::DynamoDBv2::ContinuousBackupsStatus* _continuousBackupsStatus;

  /// @brief Field _pointInTimeRecoveryDescription, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pointInTimeRecoveryDescription,
                      put = __cordl_internal_set__pointInTimeRecoveryDescription))::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* _pointInTimeRecoveryDescription;

  /// @brief Method IsSetContinuousBackupsStatus, addr 0x12282e8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetContinuousBackupsStatus();

  /// @brief Method IsSetPointInTimeRecoveryDescription, addr 0x1228358, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPointInTimeRecoveryDescription();

  static inline ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* New_ctor();

  constexpr ::Amazon::DynamoDBv2::ContinuousBackupsStatus*& __cordl_internal_get__continuousBackupsStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ContinuousBackupsStatus*> const& __cordl_internal_get__continuousBackupsStatus() const;

  constexpr ::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription*& __cordl_internal_get__pointInTimeRecoveryDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription*> const& __cordl_internal_get__pointInTimeRecoveryDescription() const;

  constexpr void __cordl_internal_set__continuousBackupsStatus(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value);

  constexpr void __cordl_internal_set__pointInTimeRecoveryDescription(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* value);

  /// @brief Method .ctor, addr 0x1228368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContinuousBackupsStatus, addr 0x12282d8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* get_ContinuousBackupsStatus();

  /// @brief Method get_PointInTimeRecoveryDescription, addr 0x1228348, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* get_PointInTimeRecoveryDescription();

  /// @brief Method set_ContinuousBackupsStatus, addr 0x12282e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ContinuousBackupsStatus(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value);

  /// @brief Method set_PointInTimeRecoveryDescription, addr 0x1228350, size 0x8, virtual false, abstract: false, final false
  inline void set_PointInTimeRecoveryDescription(::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousBackupsDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuousBackupsDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousBackupsDescription(ContinuousBackupsDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousBackupsDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousBackupsDescription(ContinuousBackupsDescription const&) = delete;

  /// @brief Field _continuousBackupsStatus, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ContinuousBackupsStatus* ____continuousBackupsStatus;

  /// @brief Field _pointInTimeRecoveryDescription, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::PointInTimeRecoveryDescription* ____pointInTimeRecoveryDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription, ____continuousBackupsStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription, ____pointInTimeRecoveryDescription) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, "Amazon.DynamoDBv2.Model", "ContinuousBackupsDescription");
