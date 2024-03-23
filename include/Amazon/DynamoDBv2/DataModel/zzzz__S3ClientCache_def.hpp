#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(S3ClientCache)
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBClient;
}
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonS3;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class S3ClientCache;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::S3ClientCache);
// Type: Amazon.DynamoDBv2.DataModel::S3ClientCache
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::S3ClientCache*
class CORDL_TYPE S3ClientCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field clientsByRegion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientsByRegion,
                      put = __cordl_internal_set_clientsByRegion))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>* clientsByRegion;

  /// @brief Field ddbClient, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ddbClient, put = __cordl_internal_set_ddbClient))::Amazon::DynamoDBv2::AmazonDynamoDBClient* ddbClient;

  /// @brief Method GetClient, addr 0x1430dac, size 0xf8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3* GetClient(::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::DataModel::S3ClientCache* New_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBClient* ddbClient);

  /// @brief Method UseClient, addr 0x1430cec, size 0xc0, virtual false, abstract: false, final false
  inline void UseClient(::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3* client, ::Amazon::RegionEndpoint* region);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>*& __cordl_internal_get_clientsByRegion();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>*> const&
  __cordl_internal_get_clientsByRegion() const;

  constexpr ::Amazon::DynamoDBv2::AmazonDynamoDBClient*& __cordl_internal_get_ddbClient();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::AmazonDynamoDBClient*> const& __cordl_internal_get_ddbClient() const;

  constexpr void __cordl_internal_set_clientsByRegion(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>* value);

  constexpr void __cordl_internal_set_ddbClient(::Amazon::DynamoDBv2::AmazonDynamoDBClient* value);

  /// @brief Method .ctor, addr 0x1430bf8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::AmazonDynamoDBClient* ddbClient);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3ClientCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3ClientCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3ClientCache(S3ClientCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3ClientCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3ClientCache(S3ClientCache const&) = delete;

  /// @brief Field ddbClient, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* ___ddbClient;

  /// @brief Field clientsByRegion, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>* ___clientsByRegion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::S3ClientCache, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::S3ClientCache, ___ddbClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::S3ClientCache, ___clientsByRegion) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::S3ClientCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::S3ClientCache*, "Amazon.DynamoDBv2.DataModel", "S3ClientCache");
