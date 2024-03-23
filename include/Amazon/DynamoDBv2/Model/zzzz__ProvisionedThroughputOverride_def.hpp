#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProvisionedThroughputOverride)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputOverride;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride);
// Type: Amazon.DynamoDBv2.Model::ProvisionedThroughputOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ProvisionedThroughputOverride*
class CORDL_TYPE ProvisionedThroughputOverride : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ReadCapacityUnits, put = set_ReadCapacityUnits)) int64_t ReadCapacityUnits;

  /// @brief Field _readCapacityUnits, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__readCapacityUnits, put = __cordl_internal_set__readCapacityUnits))::System::Nullable_1<int64_t> _readCapacityUnits;

  /// @brief Method IsSetReadCapacityUnits, addr 0x104c9d8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReadCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__readCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__readCapacityUnits();

  constexpr void __cordl_internal_set__readCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104ca14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReadCapacityUnits, addr 0x104c92c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReadCapacityUnits();

  /// @brief Method set_ReadCapacityUnits, addr 0x104c968, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedThroughputOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedThroughputOverride(ProvisionedThroughputOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedThroughputOverride(ProvisionedThroughputOverride const&) = delete;

  /// @brief Field _readCapacityUnits, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____readCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride, ____readCapacityUnits) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*, "Amazon.DynamoDBv2.Model", "ProvisionedThroughputOverride");
