#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderData)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderData);
// Type: UnityEngine.Rendering.Universal::ShaderData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShaderData*
class CORDL_TYPE ShaderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AdditionalLightShadowParamsStructuredBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowParamsStructuredBuffer,
                      put = __cordl_internal_set_m_AdditionalLightShadowParamsStructuredBuffer))::UnityEngine::ComputeBuffer* m_AdditionalLightShadowParamsStructuredBuffer;

  /// @brief Field m_AdditionalLightShadowSliceMatricesStructuredBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowSliceMatricesStructuredBuffer,
                      put = __cordl_internal_set_m_AdditionalLightShadowSliceMatricesStructuredBuffer))::UnityEngine::ComputeBuffer* m_AdditionalLightShadowSliceMatricesStructuredBuffer;

  /// @brief Field m_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Instance, put = setStaticF_m_Instance))::UnityEngine::Rendering::Universal::ShaderData* m_Instance;

  /// @brief Field m_LightDataBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightDataBuffer, put = __cordl_internal_set_m_LightDataBuffer))::UnityEngine::ComputeBuffer* m_LightDataBuffer;

  /// @brief Field m_LightIndicesBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightIndicesBuffer, put = __cordl_internal_set_m_LightIndicesBuffer))::UnityEngine::ComputeBuffer* m_LightIndicesBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27309a0, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeBuffer, addr 0x2730a00, size 0x24, virtual false, abstract: false, final false
  inline void DisposeBuffer(ByRef<::UnityEngine::ComputeBuffer*> buffer);

  /// @brief Method GetAdditionalLightShadowParamsStructuredBuffer, addr 0x2730adc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetAdditionalLightShadowParamsStructuredBuffer(int32_t size);

  /// @brief Method GetAdditionalLightShadowSliceMatricesStructuredBuffer, addr 0x2730b38, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetAdditionalLightShadowSliceMatricesStructuredBuffer(int32_t size);

  /// @brief Method GetLightDataBuffer, addr 0x2730a24, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetLightDataBuffer(int32_t size);

  /// @brief Method GetLightIndicesBuffer, addr 0x2730a80, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetLightIndicesBuffer(int32_t size);

  /// @brief Method GetOrUpdateBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::ComputeBuffer* GetOrUpdateBuffer(ByRef<::UnityEngine::ComputeBuffer*> buffer, int32_t size);

  static inline ::UnityEngine::Rendering::Universal::ShaderData* New_ctor();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_AdditionalLightShadowParamsStructuredBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_AdditionalLightShadowParamsStructuredBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_AdditionalLightShadowSliceMatricesStructuredBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_AdditionalLightShadowSliceMatricesStructuredBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_LightDataBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_LightDataBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_LightIndicesBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_LightIndicesBuffer() const;

  constexpr void __cordl_internal_set_m_AdditionalLightShadowParamsStructuredBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowSliceMatricesStructuredBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_LightDataBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_LightIndicesBuffer(::UnityEngine::ComputeBuffer* value);

  /// @brief Method .ctor, addr 0x2730918, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ShaderData* getStaticF_m_Instance();

  /// @brief Method get_instance, addr 0x2730920, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ShaderData* get_instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_m_Instance(::UnityEngine::Rendering::Universal::ShaderData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderData(ShaderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderData(ShaderData const&) = delete;

  /// @brief Field m_LightDataBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_LightDataBuffer;

  /// @brief Field m_LightIndicesBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_LightIndicesBuffer;

  /// @brief Field m_AdditionalLightShadowParamsStructuredBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_AdditionalLightShadowParamsStructuredBuffer;

  /// @brief Field m_AdditionalLightShadowSliceMatricesStructuredBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_AdditionalLightShadowSliceMatricesStructuredBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderData, ___m_LightDataBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderData, ___m_LightIndicesBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderData, ___m_AdditionalLightShadowParamsStructuredBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderData, ___m_AdditionalLightShadowSliceMatricesStructuredBuffer) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderData*, "UnityEngine.Rendering.Universal", "ShaderData");
