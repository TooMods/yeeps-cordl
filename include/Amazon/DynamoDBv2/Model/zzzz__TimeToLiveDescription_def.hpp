#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimeToLiveDescription)
namespace Amazon::DynamoDBv2 {
class TimeToLiveStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TimeToLiveDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TimeToLiveDescription);
// Type: Amazon.DynamoDBv2.Model::TimeToLiveDescription
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TimeToLiveDescription*
class CORDL_TYPE TimeToLiveDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(get = get_TimeToLiveStatus, put = set_TimeToLiveStatus))::Amazon::DynamoDBv2::TimeToLiveStatus* TimeToLiveStatus;

  /// @brief Field _attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeName, put = __cordl_internal_set__attributeName))::StringW _attributeName;

  /// @brief Field _timeToLiveStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__timeToLiveStatus, put = __cordl_internal_set__timeToLiveStatus))::Amazon::DynamoDBv2::TimeToLiveStatus* _timeToLiveStatus;

  /// @brief Method IsSetAttributeName, addr 0x1052ed0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAttributeName();

  /// @brief Method IsSetTimeToLiveStatus, addr 0x1052ef0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetTimeToLiveStatus();

  static inline ::Amazon::DynamoDBv2::Model::TimeToLiveDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__attributeName() const;

  constexpr ::StringW& __cordl_internal_get__attributeName();

  constexpr ::Amazon::DynamoDBv2::TimeToLiveStatus*& __cordl_internal_get__timeToLiveStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::TimeToLiveStatus*> const& __cordl_internal_get__timeToLiveStatus() const;

  constexpr void __cordl_internal_set__attributeName(::StringW value);

  constexpr void __cordl_internal_set__timeToLiveStatus(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

  /// @brief Method .ctor, addr 0x1052f50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeName, addr 0x1052ec0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_TimeToLiveStatus, addr 0x1052ee0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::TimeToLiveStatus* get_TimeToLiveStatus();

  /// @brief Method set_AttributeName, addr 0x1052ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_TimeToLiveStatus, addr 0x1052ee8, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeToLiveStatus(::Amazon::DynamoDBv2::TimeToLiveStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeToLiveDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeToLiveDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeToLiveDescription(TimeToLiveDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeToLiveDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeToLiveDescription(TimeToLiveDescription const&) = delete;

  /// @brief Field _attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____attributeName;

  /// @brief Field _timeToLiveStatus, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::TimeToLiveStatus* ____timeToLiveStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TimeToLiveDescription, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TimeToLiveDescription, ____attributeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TimeToLiveDescription, ____timeToLiveStatus) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TimeToLiveDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TimeToLiveDescription*, "Amazon.DynamoDBv2.Model", "TimeToLiveDescription");
