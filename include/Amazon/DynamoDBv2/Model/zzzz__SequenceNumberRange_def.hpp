#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SequenceNumberRange)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class SequenceNumberRange;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::SequenceNumberRange);
// Type: Amazon.DynamoDBv2.Model::SequenceNumberRange
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::SequenceNumberRange*
class CORDL_TYPE SequenceNumberRange : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EndingSequenceNumber, put = set_EndingSequenceNumber))::StringW EndingSequenceNumber;

  __declspec(property(get = get_StartingSequenceNumber, put = set_StartingSequenceNumber))::StringW StartingSequenceNumber;

  /// @brief Field _endingSequenceNumber, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__endingSequenceNumber, put = __cordl_internal_set__endingSequenceNumber))::StringW _endingSequenceNumber;

  /// @brief Field _startingSequenceNumber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__startingSequenceNumber, put = __cordl_internal_set__startingSequenceNumber))::StringW _startingSequenceNumber;

  /// @brief Method IsSetEndingSequenceNumber, addr 0x1050f04, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEndingSequenceNumber();

  /// @brief Method IsSetStartingSequenceNumber, addr 0x1050f24, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStartingSequenceNumber();

  static inline ::Amazon::DynamoDBv2::Model::SequenceNumberRange* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__endingSequenceNumber() const;

  constexpr ::StringW& __cordl_internal_get__endingSequenceNumber();

  constexpr ::StringW const& __cordl_internal_get__startingSequenceNumber() const;

  constexpr ::StringW& __cordl_internal_get__startingSequenceNumber();

  constexpr void __cordl_internal_set__endingSequenceNumber(::StringW value);

  constexpr void __cordl_internal_set__startingSequenceNumber(::StringW value);

  /// @brief Method .ctor, addr 0x1050f34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EndingSequenceNumber, addr 0x1050ef4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EndingSequenceNumber();

  /// @brief Method get_StartingSequenceNumber, addr 0x1050f14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StartingSequenceNumber();

  /// @brief Method set_EndingSequenceNumber, addr 0x1050efc, size 0x8, virtual false, abstract: false, final false
  inline void set_EndingSequenceNumber(::StringW value);

  /// @brief Method set_StartingSequenceNumber, addr 0x1050f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_StartingSequenceNumber(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SequenceNumberRange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SequenceNumberRange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SequenceNumberRange(SequenceNumberRange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SequenceNumberRange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SequenceNumberRange(SequenceNumberRange const&) = delete;

  /// @brief Field _endingSequenceNumber, offset: 0x10, size: 0x8, def value: None
  ::StringW ____endingSequenceNumber;

  /// @brief Field _startingSequenceNumber, offset: 0x18, size: 0x8, def value: None
  ::StringW ____startingSequenceNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::SequenceNumberRange, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SequenceNumberRange, ____endingSequenceNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SequenceNumberRange, ____startingSequenceNumber) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::SequenceNumberRange);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::SequenceNumberRange*, "Amazon.DynamoDBv2.Model", "SequenceNumberRange");
