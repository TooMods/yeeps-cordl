#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProvisionedThroughputDescription)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription);
// Type: Amazon.DynamoDBv2.Model::ProvisionedThroughputDescription
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ProvisionedThroughputDescription*
class CORDL_TYPE ProvisionedThroughputDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LastDecreaseDateTime, put = set_LastDecreaseDateTime))::System::DateTime LastDecreaseDateTime;

  __declspec(property(get = get_LastIncreaseDateTime, put = set_LastIncreaseDateTime))::System::DateTime LastIncreaseDateTime;

  __declspec(property(get = get_NumberOfDecreasesToday, put = set_NumberOfDecreasesToday)) int64_t NumberOfDecreasesToday;

  __declspec(property(get = get_ReadCapacityUnits, put = set_ReadCapacityUnits)) int64_t ReadCapacityUnits;

  __declspec(property(get = get_WriteCapacityUnits, put = set_WriteCapacityUnits)) int64_t WriteCapacityUnits;

  /// @brief Field _lastDecreaseDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__lastDecreaseDateTime, put = __cordl_internal_set__lastDecreaseDateTime))::System::Nullable_1<::System::DateTime> _lastDecreaseDateTime;

  /// @brief Field _lastIncreaseDateTime, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__lastIncreaseDateTime, put = __cordl_internal_set__lastIncreaseDateTime))::System::Nullable_1<::System::DateTime> _lastIncreaseDateTime;

  /// @brief Field _numberOfDecreasesToday, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__numberOfDecreasesToday, put = __cordl_internal_set__numberOfDecreasesToday))::System::Nullable_1<int64_t> _numberOfDecreasesToday;

  /// @brief Field _readCapacityUnits, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__readCapacityUnits, put = __cordl_internal_set__readCapacityUnits))::System::Nullable_1<int64_t> _readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__writeCapacityUnits, put = __cordl_internal_set__writeCapacityUnits))::System::Nullable_1<int64_t> _writeCapacityUnits;

  /// @brief Method IsSetLastDecreaseDateTime, addr 0x104c520, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastDecreaseDateTime();

  /// @brief Method IsSetLastIncreaseDateTime, addr 0x104c608, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastIncreaseDateTime();

  /// @brief Method IsSetNumberOfDecreasesToday, addr 0x104c6f0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetNumberOfDecreasesToday();

  /// @brief Method IsSetReadCapacityUnits, addr 0x104c7d8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReadCapacityUnits();

  /// @brief Method IsSetWriteCapacityUnits, addr 0x104c8c0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastDecreaseDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastDecreaseDateTime();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastIncreaseDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastIncreaseDateTime();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__numberOfDecreasesToday() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__numberOfDecreasesToday();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__readCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__readCapacityUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__writeCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__writeCapacityUnits();

  constexpr void __cordl_internal_set__lastDecreaseDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__lastIncreaseDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__numberOfDecreasesToday(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__readCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__writeCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104c8fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LastDecreaseDateTime, addr 0x104c474, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastDecreaseDateTime();

  /// @brief Method get_LastIncreaseDateTime, addr 0x104c55c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastIncreaseDateTime();

  /// @brief Method get_NumberOfDecreasesToday, addr 0x104c644, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_NumberOfDecreasesToday();

  /// @brief Method get_ReadCapacityUnits, addr 0x104c72c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReadCapacityUnits();

  /// @brief Method get_WriteCapacityUnits, addr 0x104c814, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_WriteCapacityUnits();

  /// @brief Method set_LastDecreaseDateTime, addr 0x104c4b0, size 0x70, virtual false, abstract: false, final false
  inline void set_LastDecreaseDateTime(::System::DateTime value);

  /// @brief Method set_LastIncreaseDateTime, addr 0x104c598, size 0x70, virtual false, abstract: false, final false
  inline void set_LastIncreaseDateTime(::System::DateTime value);

  /// @brief Method set_NumberOfDecreasesToday, addr 0x104c680, size 0x70, virtual false, abstract: false, final false
  inline void set_NumberOfDecreasesToday(int64_t value);

  /// @brief Method set_ReadCapacityUnits, addr 0x104c768, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadCapacityUnits(int64_t value);

  /// @brief Method set_WriteCapacityUnits, addr 0x104c850, size 0x70, virtual false, abstract: false, final false
  inline void set_WriteCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedThroughputDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedThroughputDescription(ProvisionedThroughputDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedThroughputDescription(ProvisionedThroughputDescription const&) = delete;

  /// @brief Field _lastDecreaseDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastDecreaseDateTime;

  /// @brief Field _lastIncreaseDateTime, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastIncreaseDateTime;

  /// @brief Field _numberOfDecreasesToday, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____numberOfDecreasesToday;

  /// @brief Field _readCapacityUnits, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____writeCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, ____lastDecreaseDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, ____lastIncreaseDateTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, ____numberOfDecreasesToday) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, ____readCapacityUnits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription, ____writeCapacityUnits) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*, "Amazon.DynamoDBv2.Model", "ProvisionedThroughputDescription");
