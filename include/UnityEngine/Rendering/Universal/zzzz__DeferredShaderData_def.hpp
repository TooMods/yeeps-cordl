#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ComputeBufferType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredShaderData)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct PreTile;
}
namespace UnityEngine::Rendering::Universal {
struct __DeferredShaderData__ComputeBufferInfo;
}
namespace UnityEngine {
struct ComputeBufferType;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DeferredShaderData;
}
namespace UnityEngine::Rendering::Universal {
struct __DeferredShaderData__ComputeBufferInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DeferredShaderData);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo);
// Type: ::ComputeBufferInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::DeferredShaderData::ComputeBufferInfo
struct CORDL_TYPE __DeferredShaderData__ComputeBufferInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredShaderData__ComputeBufferInfo();

  // Ctor Parameters [CppParam { name: "frameUsed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::ComputeBufferType", modifiers: "", def_value: None }]
  constexpr __DeferredShaderData__ComputeBufferInfo(uint32_t frameUsed, ::UnityEngine::ComputeBufferType type) noexcept;

  /// @brief Field frameUsed, offset: 0x0, size: 0x4, def value: None
  uint32_t frameUsed;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::ComputeBufferType type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, frameUsed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, type) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DeferredShaderData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DeferredShaderData*
class CORDL_TYPE DeferredShaderData : public ::System::Object {
public:
  // Declarations
  using ComputeBufferInfo = ::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo;

  /// @brief Field m_BufferCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BufferCount, put = __cordl_internal_set_m_BufferCount)) int32_t m_BufferCount;

  /// @brief Field m_BufferInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BufferInfos,
                      put = __cordl_internal_set_m_BufferInfos))::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo,
                                                                         ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> m_BufferInfos;

  /// @brief Field m_Buffers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffers, put = __cordl_internal_set_m_Buffers))::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> m_Buffers;

  /// @brief Field m_CachedBufferIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedBufferIndex, put = __cordl_internal_set_m_CachedBufferIndex)) int32_t m_CachedBufferIndex;

  /// @brief Field m_FrameIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameIndex, put = __cordl_internal_set_m_FrameIndex)) uint32_t m_FrameIndex;

  /// @brief Field m_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Instance, put = setStaticF_m_Instance))::UnityEngine::Rendering::Universal::DeferredShaderData* m_Instance;

  /// @brief Field m_PreTiles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreTiles,
                      put = __cordl_internal_set_m_PreTiles))::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>,
                                                                      ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*> m_PreTiles;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Align, addr 0x2e1aae4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Align(int32_t s, int32_t alignment);

  /// @brief Method Dispose, addr 0x2e1a544, size 0xb4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeBuffers, addr 0x2e1a9f4, size 0xf0, virtual false, abstract: false, final false
  inline void DisposeBuffers(Il2CppObject* buffers);

  /// @brief Method DisposeNativeArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DisposeNativeArrays(ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>> nativeArrays);

  /// @brief Method GetOrUpdateBuffer, addr 0x2e1a66c, size 0x370, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetOrUpdateBuffer(int32_t count, int32_t stride, bool isConstantBuffer);

  /// @brief Method GetOrUpdateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Unity::Collections::NativeArray_1<T> GetOrUpdateNativeArray(ByRef<::ArrayW<::Unity::Collections::NativeArray_1<T>, ::Array<::Unity::Collections::NativeArray_1<T>>*>> nativeArrays,
                                                                       int32_t level, int32_t count);

  /// @brief Method GetPreTiles, addr 0x2e1a608, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile> GetPreTiles(int32_t level, int32_t count);

  /// @brief Method IsLessCircular, addr 0x2e1a9dc, size 0x18, virtual false, abstract: false, final false
  static inline bool IsLessCircular(uint32_t a, uint32_t b);

  static inline ::UnityEngine::Rendering::Universal::DeferredShaderData* New_ctor();

  /// @brief Method ReserveBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::ComputeBuffer* ReserveBuffer(int32_t count, bool asCBuffer);

  /// @brief Method ResetBuffers, addr 0x2e1a5f8, size 0x10, virtual false, abstract: false, final false
  inline void ResetBuffers();

  constexpr int32_t const& __cordl_internal_get_m_BufferCount() const;

  constexpr int32_t& __cordl_internal_get_m_BufferCount();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> const&
  __cordl_internal_get_m_BufferInfos() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*>&
  __cordl_internal_get_m_BufferInfos();

  constexpr ::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> const& __cordl_internal_get_m_Buffers() const;

  constexpr ::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*>& __cordl_internal_get_m_Buffers();

  constexpr int32_t const& __cordl_internal_get_m_CachedBufferIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CachedBufferIndex();

  constexpr uint32_t const& __cordl_internal_get_m_FrameIndex() const;

  constexpr uint32_t& __cordl_internal_get_m_FrameIndex();

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>,
                     ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*> const&
  __cordl_internal_get_m_PreTiles() const;

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*>&
  __cordl_internal_get_m_PreTiles();

  constexpr void __cordl_internal_set_m_BufferCount(int32_t value);

  constexpr void __cordl_internal_set_m_BufferInfos(
      ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> value);

  constexpr void __cordl_internal_set_m_Buffers(::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> value);

  constexpr void __cordl_internal_set_m_CachedBufferIndex(int32_t value);

  constexpr void __cordl_internal_set_m_FrameIndex(uint32_t value);

  constexpr void __cordl_internal_set_m_PreTiles(
      ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*> value);

  /// @brief Method .ctor, addr 0x2e1a41c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DeferredShaderData* getStaticF_m_Instance();

  /// @brief Method get_instance, addr 0x2e1a4c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::DeferredShaderData* get_instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_m_Instance(::UnityEngine::Rendering::Universal::DeferredShaderData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredShaderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredShaderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredShaderData(DeferredShaderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredShaderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredShaderData(DeferredShaderData const&) = delete;

  /// @brief Field m_PreTiles, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>, ::Array<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>>*>
      ___m_PreTiles;

  /// @brief Field m_Buffers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ComputeBuffer*, ::Array<::UnityEngine::ComputeBuffer*>*> ___m_Buffers;

  /// @brief Field m_BufferInfos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, ::Array<::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo>*> ___m_BufferInfos;

  /// @brief Field m_BufferCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_BufferCount;

  /// @brief Field m_CachedBufferIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_CachedBufferIndex;

  /// @brief Field m_FrameIndex, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_FrameIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DeferredShaderData, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_PreTiles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_Buffers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_BufferInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_BufferCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_CachedBufferIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DeferredShaderData, ___m_FrameIndex) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DeferredShaderData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DeferredShaderData*, "UnityEngine.Rendering.Universal", "DeferredShaderData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DeferredShaderData__ComputeBufferInfo, "UnityEngine.Rendering.Universal", "DeferredShaderData/ComputeBufferInfo");
