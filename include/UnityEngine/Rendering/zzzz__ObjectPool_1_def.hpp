#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct __ObjectPool_1__PooledObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct __ObjectPool_1__PooledObject;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ObjectPool_1);
MARK_GEN_VAL_T(::UnityEngine::Rendering::__ObjectPool_1__PooledObject);
// Type: ::PooledObject
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ObjectPool`1::PooledObject<T>
struct CORDL_TYPE __ObjectPool_1__PooledObject {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, ::UnityEngine::Rendering::ObjectPool_1<T>* pool);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectPool_1__PooledObject();

  // Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::Rendering::ObjectPool_1<T>*", modifiers: "", def_value:
  // None }]
  constexpr __ObjectPool_1__PooledObject(T m_ToReturn, ::UnityEngine::Rendering::ObjectPool_1<T>* m_Pool) noexcept;

  /// @brief Field m_ToReturn, offset: 0x0, size: 0x8, def value: None
  T m_ToReturn;

  /// @brief Field m_Pool, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObjectPool_1<T>* m_Pool;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::ObjectPool`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  using PooledObject = ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<T>;

  /// @brief Field <countAll>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__countAll_k__BackingField, put = __cordl_internal_set__countAll_k__BackingField)) int32_t _countAll_k__BackingField;

  __declspec(property(get = get_countActive)) int32_t countActive;

  __declspec(property(get = get_countAll, put = set_countAll)) int32_t countAll;

  __declspec(property(get = get_countInactive)) int32_t countInactive;

  /// @brief Field m_ActionOnGet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnGet, put = __cordl_internal_set_m_ActionOnGet))::UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionOnRelease, put = __cordl_internal_set_m_ActionOnRelease))::UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease;

  /// @brief Field m_CollectionCheck, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CollectionCheck, put = __cordl_internal_set_m_CollectionCheck)) bool m_CollectionCheck;

  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack))::System::Collections::Generic::Stack_1<T>* m_Stack;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<T> Get(ByRef<T> v);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::Rendering::ObjectPool_1<T>* New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease,
                                                                    bool collectionCheck);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T element);

  constexpr int32_t const& __cordl_internal_get__countAll_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__countAll_k__BackingField();

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_m_ActionOnGet();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> const& __cordl_internal_get_m_ActionOnGet() const;

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_m_ActionOnRelease();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> const& __cordl_internal_get_m_ActionOnRelease() const;

  constexpr bool const& __cordl_internal_get_m_CollectionCheck() const;

  constexpr bool& __cordl_internal_get_m_CollectionCheck();

  constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_m_Stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const& __cordl_internal_get_m_Stack() const;

  constexpr void __cordl_internal_set__countAll_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr void __cordl_internal_set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr void __cordl_internal_set_m_CollectionCheck(bool value);

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease, bool collectionCheck);

  /// @brief Method get_countActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countActive();

  /// @brief Method get_countAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countAll();

  /// @brief Method get_countInactive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_countInactive();

  /// @brief Method set_countAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_countAll(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectPool_1(ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectPool_1(ObjectPool_1 const&) = delete;

  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Stack;

  /// @brief Field m_ActionOnGet, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnRelease;

  /// @brief Field m_CollectionCheck, offset: 0x28, size: 0x1, def value: None
  bool ___m_CollectionCheck;

  /// @brief Field <countAll>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____countAll_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ObjectPool_1, "UnityEngine.Rendering", "ObjectPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::__ObjectPool_1__PooledObject, "UnityEngine.Rendering", "ObjectPool`1/PooledObject");
