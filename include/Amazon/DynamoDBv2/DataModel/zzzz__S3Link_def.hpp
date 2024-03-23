#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(S3Link)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
namespace Amazon::DynamoDBv2::DataModel {
class S3ClientCache;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__LinkInfo;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__S3LinkConverter;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__S3;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class S3Link;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__LinkInfo;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__S3;
}
namespace Amazon::DynamoDBv2::DataModel {
class __S3Link__S3LinkConverter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::S3Link);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__S3Link__S3);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter);
// Type: ::S3LinkConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::S3Link::S3LinkConverter*
class CORDL_TYPE __S3Link__S3LinkConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept;

  /// @brief Method FromEntry, addr 0x1431b64, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Object* FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Method ToEntry, addr 0x1431aac, size 0xb8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::System::Object* value);

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get_context() const;

  constexpr void __cordl_internal_set_context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  /// @brief Method .ctor, addr 0x14233dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __S3Link__S3LinkConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__S3LinkConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __S3Link__S3LinkConverter(__S3Link__S3LinkConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__S3LinkConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __S3Link__S3LinkConverter(__S3Link__S3LinkConverter const&) = delete;

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter, ___context) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::LinkInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::S3Link::LinkInfo*
class CORDL_TYPE __S3Link__LinkInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <s3>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__s3_k__BackingField, put = __cordl_internal_set__s3_k__BackingField))::Amazon::DynamoDBv2::DataModel::__S3Link__S3* _s3_k__BackingField;

  __declspec(property(get = get_s3, put = set_s3))::Amazon::DynamoDBv2::DataModel::__S3Link__S3* s3;

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* New_ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* New_ctor(::StringW bucketName, ::StringW key);

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* New_ctor(::StringW bucketName, ::StringW key, ::StringW region);

  constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__S3*& __cordl_internal_get__s3_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*> const& __cordl_internal_get__s3_k__BackingField() const;

  constexpr void __cordl_internal_set__s3_k__BackingField(::Amazon::DynamoDBv2::DataModel::__S3Link__S3* value);

  /// @brief Method .ctor, addr 0x1431c80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14314e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW bucketName, ::StringW key);

  /// @brief Method .ctor, addr 0x1431590, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::StringW bucketName, ::StringW key, ::StringW region);

  /// @brief Method get_s3, addr 0x1431c70, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* get_s3();

  /// @brief Method set_s3, addr 0x1431c78, size 0x8, virtual false, abstract: false, final false
  inline void set_s3(::Amazon::DynamoDBv2::DataModel::__S3Link__S3* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __S3Link__LinkInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__LinkInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __S3Link__LinkInfo(__S3Link__LinkInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__LinkInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __S3Link__LinkInfo(__S3Link__LinkInfo const&) = delete;

  /// @brief Field <s3>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* ____s3_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo, ____s3_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::S3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::S3Link::S3*
class CORDL_TYPE __S3Link__S3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bucket>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bucket_k__BackingField, put = __cordl_internal_set__bucket_k__BackingField))::StringW _bucket_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <region>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__region_k__BackingField, put = __cordl_internal_set__region_k__BackingField))::StringW _region_k__BackingField;

  __declspec(property(get = get_bucket, put = set_bucket))::StringW bucket;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_region, put = set_region))::StringW region;

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* New_ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* New_ctor(::StringW bucketName, ::StringW key, ::StringW region);

  constexpr ::StringW const& __cordl_internal_get__bucket_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__bucket_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__region_k__BackingField();

  constexpr void __cordl_internal_set__bucket_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__region_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1431d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1431c88, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW bucketName, ::StringW key, ::StringW region);

  /// @brief Method get_bucket, addr 0x1431cd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bucket();

  /// @brief Method get_key, addr 0x1431ce8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_region, addr 0x1431cf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_region();

  /// @brief Method set_bucket, addr 0x1431ce0, size 0x8, virtual false, abstract: false, final false
  inline void set_bucket(::StringW value);

  /// @brief Method set_key, addr 0x1431cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_region, addr 0x1431d00, size 0x8, virtual false, abstract: false, final false
  inline void set_region(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __S3Link__S3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__S3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __S3Link__S3(__S3Link__S3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__S3Link__S3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __S3Link__S3(__S3Link__S3 const&) = delete;

  /// @brief Field <bucket>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____bucket_k__BackingField;

  /// @brief Field <key>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <region>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____region_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__S3Link__S3, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__S3Link__S3, ____bucket_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__S3Link__S3, ____key_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__S3Link__S3, ____region_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::S3Link
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::S3Link*
class CORDL_TYPE S3Link : public ::System::Object {
public:
  // Declarations
  using LinkInfo = ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo;

  using S3 = ::Amazon::DynamoDBv2::DataModel::__S3Link__S3;

  using S3LinkConverter = ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter;

  __declspec(property(get = get_BucketName, put = set_BucketName))::StringW BucketName;

  /// @brief Field Caches, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_Caches,
               put = setStaticF_Caches))::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>* Caches;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_RegionAsEndpoint))::Amazon::RegionEndpoint* RegionAsEndpoint;

  /// @brief Field cacheLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cacheLock, put = setStaticF_cacheLock))::System::Object* cacheLock;

  /// @brief Field linker, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_linker, put = __cordl_internal_set_linker))::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* linker;

  /// @brief Field s3ClientCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s3ClientCache, put = __cordl_internal_set_s3ClientCache))::Amazon::DynamoDBv2::DataModel::S3ClientCache* s3ClientCache;

  /// @brief Method CreatClientCacheFromContext, addr 0x143105c, size 0x1d0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::S3ClientCache* CreatClientCacheFromContext(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Method Create, addr 0x1430ea4, size 0x128, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::S3Link* Create(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::StringW bucket, ::StringW key, ::Amazon::RegionEndpoint* region);

  /// @brief Method GetPreSignedURL, addr 0x14318a0, size 0xec, virtual false, abstract: false, final false
  inline ::StringW GetPreSignedURL(::System::DateTime expiration);

  /// @brief Method GetRegionFromJSON, addr 0x14317c8, size 0xd8, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetRegionFromJSON(::StringW json);

  static inline ::Amazon::DynamoDBv2::DataModel::S3Link* New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key);

  static inline ::Amazon::DynamoDBv2::DataModel::S3Link* New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key, ::StringW region);

  static inline ::Amazon::DynamoDBv2::DataModel::S3Link* New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW json);

  static inline ::Amazon::DynamoDBv2::DataModel::S3Link* New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* linker);

  /// @brief Method ToJson, addr 0x143198c, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*& __cordl_internal_get_linker();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*> const& __cordl_internal_get_linker() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::S3ClientCache*& __cordl_internal_get_s3ClientCache();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::S3ClientCache*> const& __cordl_internal_get_s3ClientCache() const;

  constexpr void __cordl_internal_set_linker(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* value);

  constexpr void __cordl_internal_set_s3ClientCache(::Amazon::DynamoDBv2::DataModel::S3ClientCache* value);

  /// @brief Method .ctor, addr 0x1431458, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key);

  /// @brief Method .ctor, addr 0x1430fcc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key, ::StringW region);

  /// @brief Method .ctor, addr 0x14316bc, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW json);

  /// @brief Method .ctor, addr 0x14314ec, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* linker);

  static inline ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>* getStaticF_Caches();

  static inline ::System::Object* getStaticF_cacheLock();

  /// @brief Method get_BucketName, addr 0x1431274, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_BucketName();

  /// @brief Method get_Key, addr 0x143122c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method get_Region, addr 0x14312bc, size 0x80, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_RegionAsEndpoint, addr 0x14313c0, size 0x98, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_RegionAsEndpoint();

  static inline void setStaticF_Caches(::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>* value);

  static inline void setStaticF_cacheLock(::System::Object* value);

  /// @brief Method set_BucketName, addr 0x1431298, size 0x24, virtual false, abstract: false, final false
  inline void set_BucketName(::StringW value);

  /// @brief Method set_Key, addr 0x1431250, size 0x24, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Region, addr 0x143133c, size 0x84, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3Link();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3Link", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3Link(S3Link&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3Link", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3Link(S3Link const&) = delete;

  /// @brief Field s3ClientCache, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::S3ClientCache* ___s3ClientCache;

  /// @brief Field linker, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* ___linker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::S3Link, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::S3Link, ___s3ClientCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::S3Link, ___linker) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::S3Link);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::S3Link*, "Amazon.DynamoDBv2.DataModel", "S3Link");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*, "Amazon.DynamoDBv2.DataModel", "S3Link/LinkInfo");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__S3Link__S3);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__S3Link__S3*, "Amazon.DynamoDBv2.DataModel", "S3Link/S3");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*, "Amazon.DynamoDBv2.DataModel", "S3Link/S3LinkConverter");
