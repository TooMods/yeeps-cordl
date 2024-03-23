#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SdkCache)
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class Cache_2;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class ICache_2;
}
namespace Amazon::Runtime::Internal::Util {
class ICache;
}
namespace Amazon::Runtime::Internal::Util {
class __SdkCache__CacheKey;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class __SdkCache____c__DisplayClass5_0_2;
}
namespace Amazon::Runtime {
class AmazonServiceClient;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class SdkCache;
}
namespace Amazon::Runtime::Internal::Util {
class __SdkCache__CacheKey;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class __SdkCache____c__DisplayClass5_0_2;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::SdkCache);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::__SdkCache____c__DisplayClass5_0_2);
// Type: ::CacheKey
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::SdkCache::CacheKey*
class CORDL_TYPE __SdkCache__CacheKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CacheType, put = set_CacheType))::System::Object* CacheType;

  __declspec(property(get = get_ImmutableCredentials, put = set_ImmutableCredentials))::Amazon::Runtime::ImmutableCredentials* ImmutableCredentials;

  __declspec(property(get = get_RegionEndpoint, put = set_RegionEndpoint))::Amazon::RegionEndpoint* RegionEndpoint;

  __declspec(property(get = get_ServiceUrl, put = set_ServiceUrl))::StringW ServiceUrl;

  /// @brief Field <CacheType>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__CacheType_k__BackingField, put = __cordl_internal_set__CacheType_k__BackingField))::System::Object* _CacheType_k__BackingField;

  /// @brief Field <ImmutableCredentials>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ImmutableCredentials_k__BackingField,
                      put = __cordl_internal_set__ImmutableCredentials_k__BackingField))::Amazon::Runtime::ImmutableCredentials* _ImmutableCredentials_k__BackingField;

  /// @brief Field <RegionEndpoint>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RegionEndpoint_k__BackingField, put = __cordl_internal_set__RegionEndpoint_k__BackingField))::Amazon::RegionEndpoint* _RegionEndpoint_k__BackingField;

  /// @brief Field <ServiceUrl>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ServiceUrl_k__BackingField, put = __cordl_internal_set__ServiceUrl_k__BackingField))::StringW _ServiceUrl_k__BackingField;

  /// @brief Method Create, addr 0x2446c70, size 0x68, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey* Create(::System::Object* cacheType);

  /// @brief Method Create, addr 0x2446aac, size 0x1c4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey* Create(::Amazon::Runtime::AmazonServiceClient* client, ::System::Object* cacheType);

  /// @brief Method Equals, addr 0x2446df0, size 0x280, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2446cd8, size 0x118, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey* New_ctor();

  constexpr ::System::Object*& __cordl_internal_get__CacheType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__CacheType_k__BackingField() const;

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get__ImmutableCredentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get__ImmutableCredentials_k__BackingField() const;

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get__RegionEndpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get__RegionEndpoint_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ServiceUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServiceUrl_k__BackingField();

  constexpr void __cordl_internal_set__CacheType_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__ImmutableCredentials_k__BackingField(::Amazon::Runtime::ImmutableCredentials* value);

  constexpr void __cordl_internal_set__RegionEndpoint_k__BackingField(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set__ServiceUrl_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2446a8c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CacheType, addr 0x2446a7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CacheType();

  /// @brief Method get_ImmutableCredentials, addr 0x2446a4c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* get_ImmutableCredentials();

  /// @brief Method get_RegionEndpoint, addr 0x2446a5c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_ServiceUrl, addr 0x2446a6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ServiceUrl();

  /// @brief Method set_CacheType, addr 0x2446a84, size 0x8, virtual false, abstract: false, final false
  inline void set_CacheType(::System::Object* value);

  /// @brief Method set_ImmutableCredentials, addr 0x2446a54, size 0x8, virtual false, abstract: false, final false
  inline void set_ImmutableCredentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method set_RegionEndpoint, addr 0x2446a64, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_ServiceUrl, addr 0x2446a74, size 0x8, virtual false, abstract: false, final false
  inline void set_ServiceUrl(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SdkCache__CacheKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SdkCache__CacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SdkCache__CacheKey(__SdkCache__CacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SdkCache__CacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SdkCache__CacheKey(__SdkCache__CacheKey const&) = delete;

  /// @brief Field <ImmutableCredentials>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ____ImmutableCredentials_k__BackingField;

  /// @brief Field <RegionEndpoint>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ____RegionEndpoint_k__BackingField;

  /// @brief Field <ServiceUrl>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ServiceUrl_k__BackingField;

  /// @brief Field <CacheType>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____CacheType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey, ____ImmutableCredentials_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey, ____RegionEndpoint_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey, ____ServiceUrl_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey, ____CacheType_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<>c__DisplayClass5_0`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::SdkCache::<>c__DisplayClass5_0`2<TKey,TValue>*
class CORDL_TYPE __SdkCache____c__DisplayClass5_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyComparer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyComparer, put = __cordl_internal_set_keyComparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer;

  static inline ::Amazon::Runtime::Internal::Util::__SdkCache____c__DisplayClass5_0_2<TKey, TValue>* New_ctor();

  /// @brief Method <GetCache>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::ICache* _GetCache_b__0(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey* k);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_keyComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __cordl_internal_get_keyComparer() const;

  constexpr void __cordl_internal_set_keyComparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SdkCache____c__DisplayClass5_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SdkCache____c__DisplayClass5_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SdkCache____c__DisplayClass5_0_2(__SdkCache____c__DisplayClass5_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SdkCache____c__DisplayClass5_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SdkCache____c__DisplayClass5_0_2(__SdkCache____c__DisplayClass5_0_2 const&) = delete;

  /// @brief Field keyComparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ___keyComparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::SdkCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::SdkCache*
class CORDL_TYPE SdkCache : public ::System::Object {
public:
  // Declarations
  using CacheKey = ::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey;

  template <typename TKey, typename TValue> using __c__DisplayClass5_0_2 = ::Amazon::Runtime::Internal::Util::__SdkCache____c__DisplayClass5_0_2<TKey, TValue>;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_cache,
               put = setStaticF_cache))::Amazon::Runtime::Internal::Util::Cache_2<::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey*, ::Amazon::Runtime::Internal::Util::ICache*>* cache;

  /// @brief Field cacheLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cacheLock, put = setStaticF_cacheLock))::System::Object* cacheLock;

  /// @brief Method Clear, addr 0x2446588, size 0x78, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method Clear, addr 0x2446600, size 0x384, virtual false, abstract: false, final false
  static inline void Clear(::System::Object* cacheType);

  /// @brief Method GetCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>* GetCache(::Amazon::Runtime::AmazonServiceClient* client, ::System::Object* cacheIdentifier,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer);

  /// @brief Method GetCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>* GetCache(::System::Object* client, ::System::Object* cacheIdentifier,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer);

  static inline ::Amazon::Runtime::Internal::Util::Cache_2<::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey*, ::Amazon::Runtime::Internal::Util::ICache*>* getStaticF_cache();

  static inline ::System::Object* getStaticF_cacheLock();

  static inline void setStaticF_cache(::Amazon::Runtime::Internal::Util::Cache_2<::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey*, ::Amazon::Runtime::Internal::Util::ICache*>* value);

  static inline void setStaticF_cacheLock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SdkCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SdkCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SdkCache(SdkCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SdkCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SdkCache(SdkCache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::SdkCache, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::SdkCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::SdkCache*, "Amazon.Runtime.Internal.Util", "SdkCache");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__SdkCache__CacheKey*, "Amazon.Runtime.Internal.Util", "SdkCache/CacheKey");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::__SdkCache____c__DisplayClass5_0_2, "Amazon.Runtime.Internal.Util", "SdkCache/<>c__DisplayClass5_0`2");
