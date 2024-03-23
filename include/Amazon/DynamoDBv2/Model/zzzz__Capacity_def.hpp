#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Capacity)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Capacity;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Capacity);
// Type: Amazon.DynamoDBv2.Model::Capacity
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Capacity*
class CORDL_TYPE Capacity : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CapacityUnits, put = set_CapacityUnits)) double_t CapacityUnits;

  __declspec(property(get = get_ReadCapacityUnits, put = set_ReadCapacityUnits)) double_t ReadCapacityUnits;

  __declspec(property(get = get_WriteCapacityUnits, put = set_WriteCapacityUnits)) double_t WriteCapacityUnits;

  /// @brief Field _capacityUnits, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__capacityUnits, put = __cordl_internal_set__capacityUnits))::System::Nullable_1<double_t> _capacityUnits;

  /// @brief Field _readCapacityUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__readCapacityUnits, put = __cordl_internal_set__readCapacityUnits))::System::Nullable_1<double_t> _readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__writeCapacityUnits, put = __cordl_internal_set__writeCapacityUnits))::System::Nullable_1<double_t> _writeCapacityUnits;

  /// @brief Method IsSetCapacityUnits, addr 0x122781c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCapacityUnits();

  /// @brief Method IsSetReadCapacityUnits, addr 0x1227904, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReadCapacityUnits();

  /// @brief Method IsSetWriteCapacityUnits, addr 0x12279ec, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::Capacity* New_ctor();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__capacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__capacityUnits();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__readCapacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__readCapacityUnits();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__writeCapacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__writeCapacityUnits();

  constexpr void __cordl_internal_set__capacityUnits(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__readCapacityUnits(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__writeCapacityUnits(::System::Nullable_1<double_t> value);

  /// @brief Method .ctor, addr 0x1227a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CapacityUnits, addr 0x1227770, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_CapacityUnits();

  /// @brief Method get_ReadCapacityUnits, addr 0x1227858, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_ReadCapacityUnits();

  /// @brief Method get_WriteCapacityUnits, addr 0x1227940, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_WriteCapacityUnits();

  /// @brief Method set_CapacityUnits, addr 0x12277ac, size 0x70, virtual false, abstract: false, final false
  inline void set_CapacityUnits(double_t value);

  /// @brief Method set_ReadCapacityUnits, addr 0x1227894, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadCapacityUnits(double_t value);

  /// @brief Method set_WriteCapacityUnits, addr 0x122797c, size 0x70, virtual false, abstract: false, final false
  inline void set_WriteCapacityUnits(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Capacity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Capacity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Capacity(Capacity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Capacity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Capacity(Capacity const&) = delete;

  /// @brief Field _capacityUnits, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____capacityUnits;

  /// @brief Field _readCapacityUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____writeCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Capacity, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Capacity, ____capacityUnits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Capacity, ____readCapacityUnits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Capacity, ____writeCapacityUnits) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Capacity);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Capacity*, "Amazon.DynamoDBv2.Model", "Capacity");
