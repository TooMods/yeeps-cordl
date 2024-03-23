#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GenericPool_1)
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct __ObjectPool_1__PooledObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class GenericPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::GenericPool_1);
// Type: UnityEngine.Rendering::GenericPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::GenericPool`1<T>*
class CORDL_TYPE GenericPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::Rendering::ObjectPool_1<T>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<T> Get(ByRef<T> value);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(T toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<T>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPool_1(GenericPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPool_1(GenericPool_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::GenericPool_1, "UnityEngine.Rendering", "GenericPool`1");
