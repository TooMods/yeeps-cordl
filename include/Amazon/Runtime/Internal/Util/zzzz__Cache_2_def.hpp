#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cache_2)
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class ICache_2;
}
namespace Amazon::Runtime::Internal::Util {
class ICache;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue, typename T> class __Cache_2__CacheItem_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class Cache_2;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue, typename T> class __Cache_2__CacheItem_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::Cache_2);
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1);
// Type: ::CacheItem`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue, typename T>
// Is value type: false
// CS Name: ::Cache`2::CacheItem`1<TKey,TValue,T>*
class CORDL_TYPE __Cache_2__CacheItem_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LastUseTime, put = set_LastUseTime))::System::DateTime LastUseTime;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field <LastUseTime>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__LastUseTime_k__BackingField, put = __cordl_internal_set__LastUseTime_k__BackingField))::System::DateTime _LastUseTime_k__BackingField;

  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  static inline ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>* New_ctor(T value);

  constexpr ::System::DateTime const& __cordl_internal_get__LastUseTime_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastUseTime_k__BackingField();

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__LastUseTime_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  /// @brief Method get_LastUseTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUseTime();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Method set_LastUseTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_LastUseTime(::System::DateTime value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Cache_2__CacheItem_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Cache_2__CacheItem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Cache_2__CacheItem_1(__Cache_2__CacheItem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Cache_2__CacheItem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Cache_2__CacheItem_1(__Cache_2__CacheItem_1 const&) = delete;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  T ____value;

  /// @brief Field <LastUseTime>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____LastUseTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::Cache`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::Cache`2<TKey,TValue>*
class CORDL_TYPE Cache_2 : public ::System::Object {
public:
  // Declarations
  template <typename T> using CacheItem_1 = ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>;

  __declspec(property(get = get_CacheClearPeriod, put = set_CacheClearPeriod))::System::TimeSpan CacheClearPeriod;

  /// @brief Field CacheLock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheLock, put = __cordl_internal_set_CacheLock))::System::Object* CacheLock;

  /// @brief Field Contents, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_Contents,
               put = __cordl_internal_set_Contents))::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>* Contents;

  /// @brief Field DefaultCacheClearPeriod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultCacheClearPeriod, put = setStaticF_DefaultCacheClearPeriod))::System::TimeSpan DefaultCacheClearPeriod;

  /// @brief Field DefaultMaximumItemLifespan, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultMaximumItemLifespan, put = setStaticF_DefaultMaximumItemLifespan))::System::TimeSpan DefaultMaximumItemLifespan;

  __declspec(property(get = get_ItemCount)) int32_t ItemCount;

  __declspec(property(get = get_Keys))::System::Collections::Generic::List_1<TKey>* Keys;

  __declspec(property(get = get_LastCacheClean, put = set_LastCacheClean))::System::DateTime LastCacheClean;

  __declspec(property(get = get_MaximumItemLifespan, put = set_MaximumItemLifespan))::System::TimeSpan MaximumItemLifespan;

  /// @brief Field <LastCacheClean>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__LastCacheClean_k__BackingField, put = __cordl_internal_set__LastCacheClean_k__BackingField))::System::DateTime _LastCacheClean_k__BackingField;

  /// @brief Field cacheClearPeriod, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cacheClearPeriod, put = __cordl_internal_set_cacheClearPeriod))::System::TimeSpan cacheClearPeriod;

  /// @brief Field maximumItemLifespan, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_maximumItemLifespan, put = __cordl_internal_set_maximumItemLifespan))::System::TimeSpan maximumItemLifespan;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache"
  constexpr operator ::Amazon::Runtime::Internal::Util::ICache*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache_2<TKey,TValue>"
  constexpr operator ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear(TKey key);

  /// @brief Method GetCorrectedLocalTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::DateTime GetCorrectedLocalTime();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator, ByRef<bool> isStaleItem);

  /// @brief Method GetValueHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetValueHelper(TKey key, ByRef<bool> isStaleItem, ::System::Func_2<TKey, TValue>* creator);

  /// @brief Method IsValidItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidItem(::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>* item);

  static inline ::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer);

  /// @brief Method RemoveOldItems_Locked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveOldItems_Locked();

  /// @brief Method UseCache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TOut> inline TOut UseCache(TKey key, ::System::Func_1<TOut>* operation, ::System::Action* onError, ::System::Predicate_1<::System::Exception*>* shouldRetryForException);

  constexpr ::System::Object*& __cordl_internal_get_CacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_CacheLock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>*& __cordl_internal_get_Contents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>*> const&
  __cordl_internal_get_Contents() const;

  constexpr ::System::DateTime const& __cordl_internal_get__LastCacheClean_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastCacheClean_k__BackingField();

  constexpr ::System::TimeSpan const& __cordl_internal_get_cacheClearPeriod() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_cacheClearPeriod();

  constexpr ::System::TimeSpan const& __cordl_internal_get_maximumItemLifespan() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_maximumItemLifespan();

  constexpr void __cordl_internal_set_CacheLock(::System::Object* value);

  constexpr void __cordl_internal_set_Contents(::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>* value);

  constexpr void __cordl_internal_set__LastCacheClean_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set_cacheClearPeriod(::System::TimeSpan value);

  constexpr void __cordl_internal_set_maximumItemLifespan(::System::TimeSpan value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer);

  static inline ::System::TimeSpan getStaticF_DefaultCacheClearPeriod();

  static inline ::System::TimeSpan getStaticF_DefaultMaximumItemLifespan();

  /// @brief Method get_CacheClearPeriod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_CacheClearPeriod();

  /// @brief Method get_ItemCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_ItemCount();

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<TKey>* get_Keys();

  /// @brief Method get_LastCacheClean, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastCacheClean();

  /// @brief Method get_MaximumItemLifespan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_MaximumItemLifespan();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache"
  constexpr ::Amazon::Runtime::Internal::Util::ICache* i___Amazon__Runtime__Internal__Util__ICache() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache_2<TKey,TValue>"
  constexpr ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>* i___Amazon__Runtime__Internal__Util__ICache_2_TKey_TValue_() noexcept;

  static inline void setStaticF_DefaultCacheClearPeriod(::System::TimeSpan value);

  static inline void setStaticF_DefaultMaximumItemLifespan(::System::TimeSpan value);

  /// @brief Method set_CacheClearPeriod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_CacheClearPeriod(::System::TimeSpan value);

  /// @brief Method set_LastCacheClean, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_LastCacheClean(::System::DateTime value);

  /// @brief Method set_MaximumItemLifespan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_MaximumItemLifespan(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cache_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cache_2(Cache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cache_2(Cache_2 const&) = delete;

  /// @brief Field Contents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>* ___Contents;

  /// @brief Field CacheLock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___CacheLock;

  /// @brief Field <LastCacheClean>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____LastCacheClean_k__BackingField;

  /// @brief Field maximumItemLifespan, offset: 0x28, size: 0x8, def value: None
  ::System::TimeSpan ___maximumItemLifespan;

  /// @brief Field cacheClearPeriod, offset: 0x30, size: 0x8, def value: None
  ::System::TimeSpan ___cacheClearPeriod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::Cache_2, "Amazon.Runtime.Internal.Util", "Cache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1, "Amazon.Runtime.Internal.Util", "Cache`2/CacheItem`1");
