#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadWriteDictionary_3)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TV> class ValueEventArg_2;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::ReadWriteDictionary_3);
// Type: Unity.Services.Vivox::ReadWriteDictionary`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename TK, typename TI, typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ReadWriteDictionary`3<TK,TI,T>*
class CORDL_TYPE ReadWriteDictionary_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field AfterKeyAdded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterKeyAdded, put = __cordl_internal_set_AfterKeyAdded))::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* AfterKeyAdded;

  /// @brief Field AfterValueUpdated, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterValueUpdated,
                      put = __cordl_internal_set_AfterValueUpdated))::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* AfterValueUpdated;

  /// @brief Field BeforeKeyRemoved, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_BeforeKeyRemoved,
                      put = __cordl_internal_set_BeforeKeyRemoved))::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* BeforeKeyRemoved;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TI Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TK>* Keys;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items))::System::Collections::Generic::Dictionary_2<TK, TI>* _items;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TI>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TI>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyDictionary_2<TK,TI>"
  constexpr operator ::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>*() noexcept;

  /// @brief Method At, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T At(TK key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TK key);

  /// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsValue(T item);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TI>* GetEnumerator();

  static inline ::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>* New_ctor();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TK key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Value_PropertyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Value_PropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*& __cordl_internal_get_AfterKeyAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*> const& __cordl_internal_get_AfterKeyAdded() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*& __cordl_internal_get_AfterValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*> const& __cordl_internal_get_AfterValueUpdated() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*& __cordl_internal_get_BeforeKeyRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*> const& __cordl_internal_get_BeforeKeyRemoved() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TK, TI>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TK, TI>*> const& __cordl_internal_get__items() const;

  constexpr void __cordl_internal_set_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  constexpr void __cordl_internal_set_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value);

  constexpr void __cordl_internal_set_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<TK, TI>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method add_AfterValueUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value);

  /// @brief Method add_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TI get_Item(TK key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TK>* get_Keys();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TI>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TI>* i___System__Collections__Generic__IEnumerable_1_TI_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IReadOnlyDictionary_2<TK,TI>"
  constexpr ::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>* i___Unity__Services__Vivox__IReadOnlyDictionary_2_TK_TI_() noexcept;

  /// @brief Method remove_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method remove_AfterValueUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value);

  /// @brief Method remove_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TK key, TI value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadWriteDictionary_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteDictionary_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadWriteDictionary_3(ReadWriteDictionary_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteDictionary_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadWriteDictionary_3(ReadWriteDictionary_3 const&) = delete;

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TK, TI>* ____items;

  /// @brief Field AfterKeyAdded, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* ___AfterKeyAdded;

  /// @brief Field AfterValueUpdated, offset: 0x20, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* ___AfterValueUpdated;

  /// @brief Field BeforeKeyRemoved, offset: 0x28, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* ___BeforeKeyRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::ReadWriteDictionary_3, "Unity.Services.Vivox", "ReadWriteDictionary`3");
