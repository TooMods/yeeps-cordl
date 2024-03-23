#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphObjectPool)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphObjectPool__SharedObjectPoolBase;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename T> class __RenderGraphObjectPool__SharedObjectPool_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphObjectPool__SharedObjectPoolBase;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename T> class __RenderGraphObjectPool__SharedObjectPool_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase);
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1);
// Type: ::SharedObjectPoolBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraphObjectPool::SharedObjectPoolBase*
class CORDL_TYPE __RenderGraphObjectPool__SharedObjectPoolBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_AllocatedPools, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_AllocatedPools, put = setStaticF_s_AllocatedPools))::System::Collections::Generic::List_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>* s_AllocatedPools;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method ClearAll, addr 0x1bc84e4, size 0x178, virtual false, abstract: false, final false
  static inline void ClearAll();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase* New_ctor();

  /// @brief Method .ctor, addr 0x1bc865c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>* getStaticF_s_AllocatedPools();

  static inline void
  setStaticF_s_AllocatedPools(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphObjectPool__SharedObjectPoolBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphObjectPool__SharedObjectPoolBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphObjectPool__SharedObjectPoolBase(__RenderGraphObjectPool__SharedObjectPoolBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphObjectPool__SharedObjectPoolBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphObjectPool__SharedObjectPoolBase(__RenderGraphObjectPool__SharedObjectPoolBase const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::SharedObjectPool`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::RenderGraphObjectPool::SharedObjectPool`1<T>*
class CORDL_TYPE __RenderGraphObjectPool__SharedObjectPool_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase {
public:
  // Declarations
  /// @brief Field m_Pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool))::System::Collections::Generic::Stack_1<T>* m_Pool;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance,
                             put = setStaticF_s_Instance))::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>* s_Instance;

  /// @brief Method AllocatePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>* AllocatePool();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(T value);

  constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const& __cordl_internal_get_m_Pool() const;

  constexpr void __cordl_internal_set_m_Pool(::System::Collections::Generic::Stack_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>* getStaticF_s_Instance();

  /// @brief Method get_sharedPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>* get_sharedPool();

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphObjectPool__SharedObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphObjectPool__SharedObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphObjectPool__SharedObjectPool_1(__RenderGraphObjectPool__SharedObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphObjectPool__SharedObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphObjectPool__SharedObjectPool_1(__RenderGraphObjectPool__SharedObjectPool_1 const&) = delete;

  /// @brief Field m_Pool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphObjectPool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphObjectPool*
class CORDL_TYPE RenderGraphObjectPool : public ::System::Object {
public:
  // Declarations
  using SharedObjectPoolBase = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase;

  template <typename T> using SharedObjectPool_1 = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1<T>;

  /// @brief Field m_AllocatedArrays, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocatedArrays, put = __cordl_internal_set_m_AllocatedArrays))::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* m_AllocatedArrays;

  /// @brief Field m_AllocatedMaterialPropertyBlocks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocatedMaterialPropertyBlocks,
                      put = __cordl_internal_set_m_AllocatedMaterialPropertyBlocks))::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_AllocatedMaterialPropertyBlocks;

  /// @brief Field m_ArrayPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArrayPool,
                      put = __cordl_internal_set_m_ArrayPool))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>,
                                                                                                           ::System::Collections::Generic::Stack_1<::System::Object*>*>* m_ArrayPool;

  /// @brief Method Cleanup, addr 0x1bc83fc, size 0xe8, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Get();

  /// @brief Method GetTempArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetTempArray(int32_t size);

  /// @brief Method GetTempMaterialPropertyBlock, addr 0x1bc7f2c, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* GetTempMaterialPropertyBlock();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Release(T value);

  /// @brief Method ReleaseAllTempAlloc, addr 0x1bc8040, size 0x3bc, virtual false, abstract: false, final false
  inline void ReleaseAllTempAlloc();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*& __cordl_internal_get_m_AllocatedArrays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*> const&
  __cordl_internal_get_m_AllocatedArrays() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_m_AllocatedMaterialPropertyBlocks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*> const& __cordl_internal_get_m_AllocatedMaterialPropertyBlocks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*&
  __cordl_internal_get_m_ArrayPool();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*> const&
  __cordl_internal_get_m_ArrayPool() const;

  constexpr void __cordl_internal_set_m_AllocatedArrays(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* value);

  constexpr void __cordl_internal_set_m_AllocatedMaterialPropertyBlocks(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value);

  constexpr void
  __cordl_internal_set_m_ArrayPool(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* value);

  /// @brief Method .ctor, addr 0x1bc7e28, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphObjectPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphObjectPool(RenderGraphObjectPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphObjectPool(RenderGraphObjectPool const&) = delete;

  /// @brief Field m_ArrayPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* ___m_ArrayPool;

  /// @brief Field m_AllocatedArrays, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* ___m_AllocatedArrays;

  /// @brief Field m_AllocatedMaterialPropertyBlocks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* ___m_AllocatedMaterialPropertyBlocks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_ArrayPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_AllocatedArrays) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_AllocatedMaterialPropertyBlocks) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphObjectPool");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPoolBase*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphObjectPool/SharedObjectPoolBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphObjectPool__SharedObjectPool_1, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                                     "RenderGraphObjectPool/SharedObjectPool`1");
