#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Endpoint)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Endpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Endpoint);
// Type: Amazon.DynamoDBv2.Model::Endpoint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Endpoint*
class CORDL_TYPE Endpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Address, put = set_Address))::StringW Address;

  __declspec(property(get = get_CachePeriodInMinutes, put = set_CachePeriodInMinutes)) int64_t CachePeriodInMinutes;

  /// @brief Field _address, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__address, put = __cordl_internal_set__address))::StringW _address;

  /// @brief Field _cachePeriodInMinutes, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__cachePeriodInMinutes, put = __cordl_internal_set__cachePeriodInMinutes))::System::Nullable_1<int64_t> _cachePeriodInMinutes;

  /// @brief Method IsSetAddress, addr 0x122ab4c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAddress();

  /// @brief Method IsSetCachePeriodInMinutes, addr 0x122abcc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCachePeriodInMinutes();

  static inline ::Amazon::DynamoDBv2::Model::Endpoint* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__address() const;

  constexpr ::StringW& __cordl_internal_get__address();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__cachePeriodInMinutes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__cachePeriodInMinutes();

  constexpr void __cordl_internal_set__address(::StringW value);

  constexpr void __cordl_internal_set__cachePeriodInMinutes(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x122ac08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Address, addr 0x122ab3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Address();

  /// @brief Method get_CachePeriodInMinutes, addr 0x1222d74, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CachePeriodInMinutes();

  /// @brief Method set_Address, addr 0x122ab44, size 0x8, virtual false, abstract: false, final false
  inline void set_Address(::StringW value);

  /// @brief Method set_CachePeriodInMinutes, addr 0x122ab5c, size 0x70, virtual false, abstract: false, final false
  inline void set_CachePeriodInMinutes(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Endpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Endpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Endpoint(Endpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Endpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Endpoint(Endpoint const&) = delete;

  /// @brief Field _address, offset: 0x10, size: 0x8, def value: None
  ::StringW ____address;

  /// @brief Field _cachePeriodInMinutes, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____cachePeriodInMinutes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Endpoint, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Endpoint, ____address) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Endpoint, ____cachePeriodInMinutes) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Endpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Endpoint*, "Amazon.DynamoDBv2.Model", "Endpoint");
