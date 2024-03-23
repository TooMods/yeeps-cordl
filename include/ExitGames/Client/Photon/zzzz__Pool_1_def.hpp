#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pool_1)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
template <typename T> class Pool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ExitGames::Client::Photon::Pool_1);
// Type: ExitGames.Client.Photon::Pool`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Pool`1<T>*
class CORDL_TYPE Pool_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field createFunction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_createFunction, put = __cordl_internal_set_createFunction))::System::Func_1<T>* createFunction;

  /// @brief Field pool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pool, put = __cordl_internal_set_pool))::System::Collections::Generic::Queue_1<T>* pool;

  /// @brief Field resetFunction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resetFunction, put = __cordl_internal_set_resetFunction))::System::Action_1<T>* resetFunction;

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Acquire();

  /// @brief Method CreatePoolItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CreatePoolItems(int32_t numItems);

  static inline ::ExitGames::Client::Photon::Pool_1<T>* New_ctor(::System::Func_1<T>* createFunction, int32_t poolCapacity);

  static inline ::ExitGames::Client::Photon::Pool_1<T>* New_ctor(::System::Func_1<T>* createFunction, ::System::Action_1<T>* resetFunction, int32_t poolCapacity);

  /// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Pop();

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Push(T item);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T item);

  constexpr ::System::Func_1<T>*& __cordl_internal_get_createFunction();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_createFunction() const;

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_pool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& __cordl_internal_get_pool() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_resetFunction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_resetFunction() const;

  constexpr void __cordl_internal_set_createFunction(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Queue_1<T>* value);

  constexpr void __cordl_internal_set_resetFunction(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* createFunction, int32_t poolCapacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* createFunction, ::System::Action_1<T>* resetFunction, int32_t poolCapacity);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pool_1(Pool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pool_1(Pool_1 const&) = delete;

  /// @brief Field createFunction, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___createFunction;

  /// @brief Field pool, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ___pool;

  /// @brief Field resetFunction, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___resetFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ExitGames::Client::Photon::Pool_1, "ExitGames.Client.Photon", "Pool`1");
