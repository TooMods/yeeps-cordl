#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProvisionedThroughput)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ProvisionedThroughput);
// Type: Amazon.DynamoDBv2.Model::ProvisionedThroughput
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ProvisionedThroughput*
class CORDL_TYPE ProvisionedThroughput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ReadCapacityUnits, put = set_ReadCapacityUnits)) int64_t ReadCapacityUnits;

  __declspec(property(get = get_WriteCapacityUnits, put = set_WriteCapacityUnits)) int64_t WriteCapacityUnits;

  /// @brief Field _readCapacityUnits, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__readCapacityUnits, put = __cordl_internal_set__readCapacityUnits))::System::Nullable_1<int64_t> _readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__writeCapacityUnits, put = __cordl_internal_set__writeCapacityUnits))::System::Nullable_1<int64_t> _writeCapacityUnits;

  /// @brief Method IsSetReadCapacityUnits, addr 0x104c350, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReadCapacityUnits();

  /// @brief Method IsSetWriteCapacityUnits, addr 0x104c438, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* New_ctor(int64_t readCapacityUnits, int64_t writeCapacityUnits);

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__readCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__readCapacityUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__writeCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__writeCapacityUnits();

  constexpr void __cordl_internal_set__readCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__writeCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104c200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104c208, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int64_t readCapacityUnits, int64_t writeCapacityUnits);

  /// @brief Method get_ReadCapacityUnits, addr 0x104c2a4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReadCapacityUnits();

  /// @brief Method get_WriteCapacityUnits, addr 0x104c38c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_WriteCapacityUnits();

  /// @brief Method set_ReadCapacityUnits, addr 0x104c2e0, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadCapacityUnits(int64_t value);

  /// @brief Method set_WriteCapacityUnits, addr 0x104c3c8, size 0x70, virtual false, abstract: false, final false
  inline void set_WriteCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedThroughput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedThroughput(ProvisionedThroughput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedThroughput(ProvisionedThroughput const&) = delete;

  /// @brief Field _readCapacityUnits, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____readCapacityUnits;

  /// @brief Field _writeCapacityUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____writeCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ProvisionedThroughput, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughput, ____readCapacityUnits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ProvisionedThroughput, ____writeCapacityUnits) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ProvisionedThroughput);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ProvisionedThroughput*, "Amazon.DynamoDBv2.Model", "ProvisionedThroughput");
