#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(HashSetPool_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
template <typename T> class __HashSetPool_1____c;
}
namespace UnityEngine::Rendering {
template <typename T> struct __ObjectPool_1__PooledObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class HashSetPool_1;
}
namespace UnityEngine::Rendering {
template <typename T> class __HashSetPool_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::HashSetPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__HashSetPool_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HashSetPool`1::<>c<T>*
class CORDL_TYPE __HashSetPool_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__HashSetPool_1____c<T>* __9;

  static inline ::UnityEngine::Rendering::__HashSetPool_1____c<T>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Collections::Generic::HashSet_1<T>* l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__HashSetPool_1____c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::__HashSetPool_1____c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashSetPool_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HashSetPool_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HashSetPool_1____c(__HashSetPool_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HashSetPool_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HashSetPool_1____c(__HashSetPool_1____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::HashSetPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::HashSetPool`1<T>*
class CORDL_TYPE HashSetPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__HashSetPool_1____c<T>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<T>* Get();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<::System::Collections::Generic::HashSet_1<T>*> Get(ByRef<::System::Collections::Generic::HashSet_1<T>*> value);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::HashSet_1<T>* toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSetPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetPool_1(HashSetPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetPool_1(HashSetPool_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::HashSetPool_1, "UnityEngine.Rendering", "HashSetPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__HashSetPool_1____c, "UnityEngine.Rendering", "HashSetPool`1/<>c");
