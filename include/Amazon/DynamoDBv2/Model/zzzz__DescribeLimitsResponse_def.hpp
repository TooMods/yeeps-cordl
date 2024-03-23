#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DescribeLimitsResponse)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeLimitsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeLimitsResponse
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeLimitsResponse*
class CORDL_TYPE DescribeLimitsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_AccountMaxReadCapacityUnits, put = set_AccountMaxReadCapacityUnits)) int64_t AccountMaxReadCapacityUnits;

  __declspec(property(get = get_AccountMaxWriteCapacityUnits, put = set_AccountMaxWriteCapacityUnits)) int64_t AccountMaxWriteCapacityUnits;

  __declspec(property(get = get_TableMaxReadCapacityUnits, put = set_TableMaxReadCapacityUnits)) int64_t TableMaxReadCapacityUnits;

  __declspec(property(get = get_TableMaxWriteCapacityUnits, put = set_TableMaxWriteCapacityUnits)) int64_t TableMaxWriteCapacityUnits;

  /// @brief Field _accountMaxReadCapacityUnits, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__accountMaxReadCapacityUnits, put = __cordl_internal_set__accountMaxReadCapacityUnits))::System::Nullable_1<int64_t> _accountMaxReadCapacityUnits;

  /// @brief Field _accountMaxWriteCapacityUnits, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__accountMaxWriteCapacityUnits, put = __cordl_internal_set__accountMaxWriteCapacityUnits))::System::Nullable_1<int64_t> _accountMaxWriteCapacityUnits;

  /// @brief Field _tableMaxReadCapacityUnits, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__tableMaxReadCapacityUnits, put = __cordl_internal_set__tableMaxReadCapacityUnits))::System::Nullable_1<int64_t> _tableMaxReadCapacityUnits;

  /// @brief Field _tableMaxWriteCapacityUnits, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__tableMaxWriteCapacityUnits, put = __cordl_internal_set__tableMaxWriteCapacityUnits))::System::Nullable_1<int64_t> _tableMaxWriteCapacityUnits;

  /// @brief Method IsSetAccountMaxReadCapacityUnits, addr 0x122a3cc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAccountMaxReadCapacityUnits();

  /// @brief Method IsSetAccountMaxWriteCapacityUnits, addr 0x122a4b4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAccountMaxWriteCapacityUnits();

  /// @brief Method IsSetTableMaxReadCapacityUnits, addr 0x122a59c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTableMaxReadCapacityUnits();

  /// @brief Method IsSetTableMaxWriteCapacityUnits, addr 0x122a684, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTableMaxWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::DescribeLimitsResponse* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__accountMaxReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__accountMaxReadCapacityUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__accountMaxWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__accountMaxWriteCapacityUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__tableMaxReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__tableMaxReadCapacityUnits();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__tableMaxWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__tableMaxWriteCapacityUnits();

  constexpr void __cordl_internal_set__accountMaxReadCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__accountMaxWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__tableMaxReadCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__tableMaxWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x122a6c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccountMaxReadCapacityUnits, addr 0x122a320, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_AccountMaxReadCapacityUnits();

  /// @brief Method get_AccountMaxWriteCapacityUnits, addr 0x122a408, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_AccountMaxWriteCapacityUnits();

  /// @brief Method get_TableMaxReadCapacityUnits, addr 0x122a4f0, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TableMaxReadCapacityUnits();

  /// @brief Method get_TableMaxWriteCapacityUnits, addr 0x122a5d8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TableMaxWriteCapacityUnits();

  /// @brief Method set_AccountMaxReadCapacityUnits, addr 0x122a35c, size 0x70, virtual false, abstract: false, final false
  inline void set_AccountMaxReadCapacityUnits(int64_t value);

  /// @brief Method set_AccountMaxWriteCapacityUnits, addr 0x122a444, size 0x70, virtual false, abstract: false, final false
  inline void set_AccountMaxWriteCapacityUnits(int64_t value);

  /// @brief Method set_TableMaxReadCapacityUnits, addr 0x122a52c, size 0x70, virtual false, abstract: false, final false
  inline void set_TableMaxReadCapacityUnits(int64_t value);

  /// @brief Method set_TableMaxWriteCapacityUnits, addr 0x122a614, size 0x70, virtual false, abstract: false, final false
  inline void set_TableMaxWriteCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeLimitsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeLimitsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeLimitsResponse(DescribeLimitsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeLimitsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeLimitsResponse(DescribeLimitsResponse const&) = delete;

  /// @brief Field _accountMaxReadCapacityUnits, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____accountMaxReadCapacityUnits;

  /// @brief Field _accountMaxWriteCapacityUnits, offset: 0x38, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____accountMaxWriteCapacityUnits;

  /// @brief Field _tableMaxReadCapacityUnits, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____tableMaxReadCapacityUnits;

  /// @brief Field _tableMaxWriteCapacityUnits, offset: 0x58, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____tableMaxWriteCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeLimitsResponse, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse, ____accountMaxReadCapacityUnits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse, ____accountMaxWriteCapacityUnits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse, ____tableMaxReadCapacityUnits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse, ____tableMaxWriteCapacityUnits) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeLimitsResponse*, "Amazon.DynamoDBv2.Model", "DescribeLimitsResponse");
