#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadWriteHashSet_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyHashSet_1;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename T> class ReadWriteHashSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::ReadWriteHashSet_1);
// Type: Unity.Services.Vivox::ReadWriteHashSet`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ReadWriteHashSet`1<T>*
class CORDL_TYPE ReadWriteHashSet_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field AfterKeyAdded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterKeyAdded, put = __cordl_internal_set_AfterKeyAdded))::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* AfterKeyAdded;

  /// @brief Field BeforeKeyRemoved, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_BeforeKeyRemoved, put = __cordl_internal_set_BeforeKeyRemoved))::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* BeforeKeyRemoved;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items))::System::Collections::Generic::HashSet_1<T>* _items;

  /// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyHashSet_1<T>"
  constexpr operator ::Unity::Services::Vivox::IReadOnlyHashSet_1<T>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(T key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T key);

  static inline ::Unity::Services::Vivox::ReadWriteHashSet_1<T>* New_ctor();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T key);

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*& __cordl_internal_get_AfterKeyAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*> const& __cordl_internal_get_AfterKeyAdded() const;

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*& __cordl_internal_get_BeforeKeyRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*> const& __cordl_internal_get_BeforeKeyRemoved() const;

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get__items() const;

  constexpr void __cordl_internal_set_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

  constexpr void __cordl_internal_set_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::HashSet_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

  /// @brief Method add_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::Unity::Services::Vivox::IReadOnlyHashSet_1<T>"
  constexpr ::Unity::Services::Vivox::IReadOnlyHashSet_1<T>* i___Unity__Services__Vivox__IReadOnlyHashSet_1_T_() noexcept;

  /// @brief Method remove_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

  /// @brief Method remove_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadWriteHashSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteHashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadWriteHashSet_1(ReadWriteHashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteHashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadWriteHashSet_1(ReadWriteHashSet_1 const&) = delete;

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ____items;

  /// @brief Field AfterKeyAdded, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* ___AfterKeyAdded;

  /// @brief Field BeforeKeyRemoved, offset: 0x20, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* ___BeforeKeyRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::ReadWriteHashSet_1, "Unity.Services.Vivox", "ReadWriteHashSet`1");
