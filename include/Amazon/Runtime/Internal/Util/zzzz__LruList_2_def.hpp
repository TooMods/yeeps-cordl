#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LruList_2)
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruListItem_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruList_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::LruList_2);
// Type: Amazon.Runtime.Internal.Util::LruList`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::LruList`2<TKey,TValue>*
class CORDL_TYPE LruList_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Head, put = set_Head))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Head;

  __declspec(property(get = get_Tail, put = set_Tail))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Tail;

  /// @brief Field <Head>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Head_k__BackingField,
                      put = __cordl_internal_set__Head_k__BackingField))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* _Head_k__BackingField;

  /// @brief Field <Tail>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Tail_k__BackingField,
                      put = __cordl_internal_set__Tail_k__BackingField))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* _Tail_k__BackingField;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method EvictOldest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey EvictOldest();

  static inline ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* New_ctor();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item);

  /// @brief Method Touch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Touch(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item);

  constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& __cordl_internal_get__Head_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const& __cordl_internal_get__Head_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& __cordl_internal_get__Tail_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const& __cordl_internal_get__Tail_k__BackingField() const;

  constexpr void __cordl_internal_set__Head_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__Tail_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Head, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* get_Head();

  /// @brief Method get_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* get_Tail();

  /// @brief Method set_Head, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Head(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  /// @brief Method set_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Tail(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LruList_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LruList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LruList_2(LruList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LruList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LruList_2(LruList_2 const&) = delete;

  /// @brief Field <Head>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* ____Head_k__BackingField;

  /// @brief Field <Tail>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* ____Tail_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::LruList_2, "Amazon.Runtime.Internal.Util", "LruList`2");
