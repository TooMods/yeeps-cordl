#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadWriteQueue_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
namespace Unity::Services::Vivox {
template <typename T> class QueueItemAddedEventArgs_1;
}
namespace Unity::Services::Vivox {
template <typename T> class __ReadWriteQueue_1____c__DisplayClass11_0;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename T> class ReadWriteQueue_1;
}
namespace Unity::Services::Vivox {
template <typename T> class __ReadWriteQueue_1____c__DisplayClass11_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::ReadWriteQueue_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0);
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ReadWriteQueue`1::<>c__DisplayClass11_0<T>*
class CORDL_TYPE __ReadWriteQueue_1____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) T item;

  static inline ::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>* New_ctor();

  /// @brief Method <RemoveAll>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _RemoveAll_b__0(T i);

  constexpr T const& __cordl_internal_get_item() const;

  constexpr T& __cordl_internal_get_item();

  constexpr void __cordl_internal_set_item(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadWriteQueue_1____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReadWriteQueue_1____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReadWriteQueue_1____c__DisplayClass11_0(__ReadWriteQueue_1____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReadWriteQueue_1____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReadWriteQueue_1____c__DisplayClass11_0(__ReadWriteQueue_1____c__DisplayClass11_0 const&) = delete;

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  T ___item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::ReadWriteQueue`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ReadWriteQueue`1<T>*
class CORDL_TYPE ReadWriteQueue_1 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>;

  /// @brief Field AfterItemAdded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AfterItemAdded,
                      put = __cordl_internal_set_AfterItemAdded))::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* AfterItemAdded;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items))::System::Collections::Generic::List_1<T>* _items;

  /// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyQueue_1<T>"
  constexpr operator ::Unity::Services::Vivox::IReadOnlyQueue_1<T>*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T item);

  static inline ::Unity::Services::Vivox::ReadWriteQueue_1<T>* New_ctor();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Peek();

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RemoveAll(T item);

  constexpr ::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*& __cordl_internal_get_AfterItemAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*> const& __cordl_internal_get_AfterItemAdded() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get__items() const;

  constexpr void __cordl_internal_set_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_AfterItemAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::Unity::Services::Vivox::IReadOnlyQueue_1<T>"
  constexpr ::Unity::Services::Vivox::IReadOnlyQueue_1<T>* i___Unity__Services__Vivox__IReadOnlyQueue_1_T_() noexcept;

  /// @brief Method remove_AfterItemAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadWriteQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadWriteQueue_1(ReadWriteQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadWriteQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadWriteQueue_1(ReadWriteQueue_1 const&) = delete;

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____items;

  /// @brief Field AfterItemAdded, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* ___AfterItemAdded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::ReadWriteQueue_1, "Unity.Services.Vivox", "ReadWriteQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0, "Unity.Services.Vivox", "ReadWriteQueue`1/<>c__DisplayClass11_0");
