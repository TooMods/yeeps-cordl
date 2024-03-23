#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DictionaryPool_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class __DictionaryPool_2____c;
}
namespace UnityEngine::Rendering {
template <typename T> struct __ObjectPool_1__PooledObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class DictionaryPool_2;
}
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class __DictionaryPool_2____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DictionaryPool_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__DictionaryPool_2____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::DictionaryPool`2::<>c<TKey,TValue>*
class CORDL_TYPE __DictionaryPool_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__DictionaryPool_2____c<TKey, TValue>* __9;

  static inline ::UnityEngine::Rendering::__DictionaryPool_2____c<TKey, TValue>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Collections::Generic::Dictionary_2<TKey, TValue>* l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__DictionaryPool_2____c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::__DictionaryPool_2____c<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DictionaryPool_2____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryPool_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DictionaryPool_2____c(__DictionaryPool_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryPool_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DictionaryPool_2____c(__DictionaryPool_2____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DictionaryPool`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DictionaryPool`2<TKey,TValue>*
class CORDL_TYPE DictionaryPool_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__DictionaryPool_2____c<TKey, TValue>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Get();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
  Get(ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> value);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::Dictionary_2<TKey, TValue>* toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryPool_2(DictionaryPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryPool_2(DictionaryPool_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DictionaryPool_2, "UnityEngine.Rendering", "DictionaryPool`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__DictionaryPool_2____c, "UnityEngine.Rendering", "DictionaryPool`2/<>c");
