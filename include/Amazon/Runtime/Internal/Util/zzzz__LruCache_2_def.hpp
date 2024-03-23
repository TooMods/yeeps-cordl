#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LruCache_2)
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruListItem_2;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruList_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruCache_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::LruCache_2);
// Type: Amazon.Runtime.Internal.Util::LruCache`2
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::LruCache`2<TKey,TValue>*
class CORDL_TYPE LruCache_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MaxEntries, put = set_MaxEntries)) int32_t MaxEntries;

  /// @brief Field <MaxEntries>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxEntries_k__BackingField, put = __cordl_internal_set__MaxEntries_k__BackingField)) int32_t _MaxEntries_k__BackingField;

  /// @brief Field cache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cache,
                      put = __cordl_internal_set_cache))::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>* cache;

  /// @brief Field cacheLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cacheLock, put = __cordl_internal_set_cacheLock))::System::Object* cacheLock;

  /// @brief Field lruList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lruList, put = __cordl_internal_set_lruList))::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* lruList;

  /// @brief Method AddOrUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddOrUpdate(TKey key, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Evict, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Evict(TKey key);

  /// @brief Method EvictExpiredLRUListItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EvictExpiredLRUListItems(int32_t validityInSeconds);

  /// @brief Method FindOldestItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* FindOldestItem();

  /// @brief Method GetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetOrAdd(TKey key, ::System::Func_2<TKey, TValue>* factory);

  static inline ::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>* New_ctor(int32_t maxEntries);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  constexpr int32_t const& __cordl_internal_get__MaxEntries_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxEntries_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>*& __cordl_internal_get_cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>*> const&
  __cordl_internal_get_cache() const;

  constexpr ::System::Object*& __cordl_internal_get_cacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_cacheLock() const;

  constexpr ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*& __cordl_internal_get_lruList();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*> const& __cordl_internal_get_lruList() const;

  constexpr void __cordl_internal_set__MaxEntries_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_cache(::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set_cacheLock(::System::Object* value);

  constexpr void __cordl_internal_set_lruList(::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxEntries);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_MaxEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_MaxEntries();

  /// @brief Method set_MaxEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_MaxEntries(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LruCache_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LruCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LruCache_2(LruCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LruCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LruCache_2(LruCache_2 const&) = delete;

  /// @brief Field cacheLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___cacheLock;

  /// @brief Field cache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>* ___cache;

  /// @brief Field lruList, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* ___lruList;

  /// @brief Field <MaxEntries>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____MaxEntries_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::LruCache_2, "Amazon.Runtime.Internal.Util", "LruCache`2");
