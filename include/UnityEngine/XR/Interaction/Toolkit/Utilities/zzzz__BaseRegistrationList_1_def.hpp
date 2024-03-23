#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseRegistrationList_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class __BaseRegistrationList_1____c;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class BaseRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class __BaseRegistrationList_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1);
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BaseRegistrationList`1::<>c<T>*
class CORDL_TYPE __BaseRegistrationList_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* __9;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* New_ctor();

  /// @brief Method <.cctor>b__30_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* __cctor_b__30_0();

  /// @brief Method <.cctor>b__30_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__30_1(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseRegistrationList_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseRegistrationList_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseRegistrationList_1____c(__BaseRegistrationList_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseRegistrationList_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseRegistrationList_1____c(__BaseRegistrationList_1____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::BaseRegistrationList`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::BaseRegistrationList`1<T>*
class CORDL_TYPE BaseRegistrationList_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>;

  /// @brief Field <registeredSnapshot>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__registeredSnapshot_k__BackingField,
                      put = __cordl_internal_set__registeredSnapshot_k__BackingField))::System::Collections::Generic::List_1<T>* _registeredSnapshot_k__BackingField;

  __declspec(property(get = get_bufferedAddCount)) int32_t bufferedAddCount;

  __declspec(property(get = get_bufferedRemoveCount)) int32_t bufferedRemoveCount;

  __declspec(property(get = get_flushedCount)) int32_t flushedCount;

  /// @brief Field m_BufferedAdd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BufferedAdd, put = __cordl_internal_set_m_BufferedAdd))::System::Collections::Generic::List_1<T>* m_BufferedAdd;

  /// @brief Field m_BufferedRemove, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BufferedRemove, put = __cordl_internal_set_m_BufferedRemove))::System::Collections::Generic::List_1<T>* m_BufferedRemove;

  __declspec(property(get = get_registeredSnapshot))::System::Collections::Generic::List_1<T>* registeredSnapshot;

  /// @brief Field s_BufferedListPool, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_BufferedListPool,
               put = setStaticF_s_BufferedListPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>* s_BufferedListPool;

  /// @brief Method AddToBufferedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddToBufferedAdd(T item);

  /// @brief Method AddToBufferedRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddToBufferedRemove(T item);

  /// @brief Method ClearBufferedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearBufferedAdd();

  /// @brief Method ClearBufferedRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearBufferedRemove();

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void EnsureCapacity(::System::Collections::Generic::List_1<T>* list, int32_t capacity);

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method GetRegisteredItemAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T GetRegisteredItemAt(int32_t index);

  /// @brief Method GetRegisteredItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetRegisteredItems(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method IsRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsRegistered(T item);

  /// @brief Method IsStillRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsStillRegistered(T item);

  /// @brief Method MoveItemImmediately, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveItemImmediately(T item, int32_t newIndex);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>* New_ctor();

  /// @brief Method OnItemMovedImmediately, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnItemMovedImmediately(T item, int32_t newIndex);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Register(T item);

  /// @brief Method RemoveFromBufferedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool RemoveFromBufferedAdd(T item);

  /// @brief Method RemoveFromBufferedRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool RemoveFromBufferedRemove(T item);

  /// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Unregister(T item);

  /// @brief Method UnregisterAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterAll();

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__registeredSnapshot_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get__registeredSnapshot_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_BufferedAdd();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get_m_BufferedAdd() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_BufferedRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get_m_BufferedRemove() const;

  constexpr void __cordl_internal_set__registeredSnapshot_k__BackingField(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_BufferedAdd(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_BufferedRemove(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_s_BufferedListPool();

  /// @brief Method get_bufferedAddCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_bufferedAddCount();

  /// @brief Method get_bufferedRemoveCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_bufferedRemoveCount();

  /// @brief Method get_flushedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_flushedCount();

  /// @brief Method get_registeredSnapshot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_registeredSnapshot();

  static inline void setStaticF_s_BufferedListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRegistrationList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRegistrationList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRegistrationList_1(BaseRegistrationList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRegistrationList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRegistrationList_1(BaseRegistrationList_1 const&) = delete;

  /// @brief Field <registeredSnapshot>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____registeredSnapshot_k__BackingField;

  /// @brief Field m_BufferedAdd, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_BufferedAdd;

  /// @brief Field m_BufferedRemove, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_BufferedRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BaseRegistrationList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BaseRegistrationList`1/<>c");
