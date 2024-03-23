#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBuffer)
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct ComputeBufferMode;
}
namespace UnityEngine {
struct ComputeBufferType;
}
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ComputeBuffer);
// Type: UnityEngine::ComputeBuffer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ComputeBuffer*
class CORDL_TYPE ComputeBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(put = set_name))::StringW name;

  __declspec(property(get = get_stride)) int32_t stride;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method DestroyBuffer, addr 0x284abac, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyBuffer(::UnityEngine::ComputeBuffer* buf);

  /// @brief Method Dispose, addr 0x284ab48, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x284aa64, size 0xe4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x284a9cc, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InitBuffer, addr 0x284abe8, size 0x5c, virtual false, abstract: false, final false
  static inline void* InitBuffer(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage);

  /// @brief Method InternalSetData, addr 0x284b014, size 0x74, virtual false, abstract: false, final false
  inline void InternalSetData(::System::Array* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetNativeData, addr 0x284b088, size 0x74, virtual false, abstract: false, final false
  inline void InternalSetNativeData(void* data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage);

  static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, int32_t stackDepth);

  /// @brief Method Release, addr 0x284ae30, size 0x4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetData, addr 0x284aeac, size 0x168, virtual false, abstract: false, final false
  inline void SetData(::System::Array* data);

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetData(::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetData(::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count);

  /// @brief Method SetName, addr 0x284b140, size 0x44, virtual false, abstract: false, final false
  inline void SetName(::StringW name);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x284ac44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride);

  /// @brief Method .ctor, addr 0x284ae24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type);

  /// @brief Method .ctor, addr 0x284ae2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage);

  /// @brief Method .ctor, addr 0x284ac50, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, int32_t stackDepth);

  /// @brief Method get_count, addr 0x284ae34, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_stride, addr 0x284ae70, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_stride();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_name, addr 0x284b0fc, size 0x44, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBuffer(ComputeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBuffer(ComputeBuffer const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ComputeBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
