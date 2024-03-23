#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedPool_1)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> struct PooledObject_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class __LinkedPool_1__LinkedPoolItem;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class __LinkedPool_1__LinkedPoolItem;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem);
// Type: ::LinkedPoolItem
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::LinkedPool`1::LinkedPoolItem<T>*
class CORDL_TYPE __LinkedPool_1__LinkedPoolItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolNext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poolNext,
                      put = __cordl_internal_set_poolNext))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* poolNext;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) T value;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*& __cordl_internal_get_poolNext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const& __cordl_internal_get_poolNext() const;

  constexpr T const& __cordl_internal_get_value() const;

  constexpr T& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_poolNext(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value);

  constexpr void __cordl_internal_set_value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LinkedPool_1__LinkedPoolItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LinkedPool_1__LinkedPoolItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LinkedPool_1__LinkedPoolItem(__LinkedPool_1__LinkedPoolItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LinkedPool_1__LinkedPoolItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LinkedPool_1__LinkedPoolItem(__LinkedPool_1__LinkedPoolItem const&) = delete;

  /// @brief Field poolNext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* ___poolNext;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  T ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling::LinkedPool`1
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling::LinkedPool`1<T>*
class CORDL_TYPE LinkedPool_1 : public ::System::Object {
public:
  // Declarations
  using LinkedPoolItem = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>;

  /// @brief Field <countInactive>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__countInactive_k__BackingField, put = __cordl_internal_set__countInactive_k__BackingField)) int32_t _countInactive_k__BackingField;

  __declspec(property(get = get_countInactive, put = set_countInactive)) int32_t countInactive;

  /// @brief Field m_ActionOnDestroy, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnDestroy, put = __cordl_internal_set_m_ActionOnDestroy))::System::Action_1<T>* m_ActionOnDestroy;

  /// @brief Field m_ActionOnGet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnGet, put = __cordl_internal_set_m_ActionOnGet))::System::Action_1<T>* m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnRelease, put = __cordl_internal_set_m_ActionOnRelease))::System::Action_1<T>* m_ActionOnRelease;

  /// @brief Field m_CollectionCheck, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CollectionCheck, put = __cordl_internal_set_m_CollectionCheck)) bool m_CollectionCheck;

  /// @brief Field m_CreateFunc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateFunc, put = __cordl_internal_set_m_CreateFunc))::System::Func_1<T>* m_CreateFunc;

  /// @brief Field m_Limit, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Limit, put = __cordl_internal_set_m_Limit)) int32_t m_Limit;

  /// @brief Field m_NextAvailableListItem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextAvailableListItem,
                      put = __cordl_internal_set_m_NextAvailableListItem))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* m_NextAvailableListItem;

  /// @brief Field m_PoolFirst, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PoolFirst,
                      put = __cordl_internal_set_m_PoolFirst))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* m_PoolFirst;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T> Get(ByRef<T> v);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*
  New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease, ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t maxSize);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T item);

  constexpr int32_t const& __cordl_internal_get__countInactive_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__countInactive_k__BackingField();

  constexpr ::System::Action_1<T>*& __cordl_internal_get_m_ActionOnDestroy();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_m_ActionOnDestroy() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_m_ActionOnGet();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_m_ActionOnGet() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_m_ActionOnRelease();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_m_ActionOnRelease() const;

  constexpr bool const& __cordl_internal_get_m_CollectionCheck() const;

  constexpr bool& __cordl_internal_get_m_CollectionCheck();

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_CreateFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_m_CreateFunc() const;

  constexpr int32_t const& __cordl_internal_get_m_Limit() const;

  constexpr int32_t& __cordl_internal_get_m_Limit();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*& __cordl_internal_get_m_NextAvailableListItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const&
  __cordl_internal_get_m_NextAvailableListItem() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*& __cordl_internal_get_m_PoolFirst();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const& __cordl_internal_get_m_PoolFirst() const;

  constexpr void __cordl_internal_set__countInactive_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_ActionOnDestroy(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_m_ActionOnGet(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_m_ActionOnRelease(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_m_CollectionCheck(bool value);

  constexpr void __cordl_internal_set_m_CreateFunc(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_Limit(int32_t value);

  constexpr void __cordl_internal_set_m_NextAvailableListItem(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value);

  constexpr void __cordl_internal_set_m_PoolFirst(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease, ::System::Action_1<T>* actionOnDestroy, bool collectionCheck,
                    int32_t maxSize);

  /// @brief Method get_countInactive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countInactive();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_countInactive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_countInactive(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedPool_1(LinkedPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedPool_1(LinkedPool_1 const&) = delete;

  /// @brief Field m_CreateFunc, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_CreateFunc;

  /// @brief Field m_ActionOnGet, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnRelease;

  /// @brief Field m_ActionOnDestroy, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ActionOnDestroy;

  /// @brief Field m_Limit, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_Limit;

  /// @brief Field m_PoolFirst, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* ___m_PoolFirst;

  /// @brief Field m_NextAvailableListItem, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* ___m_NextAvailableListItem;

  /// @brief Field m_CollectionCheck, offset: 0x48, size: 0x1, def value: None
  bool ___m_CollectionCheck;

  /// @brief Field <countInactive>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____countInactive_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling", "LinkedPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem, "UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling",
                                     "LinkedPool`1/LinkedPoolItem");
