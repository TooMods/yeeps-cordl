#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugHandler)
namespace GlobalNamespace {
class __DebugHandler__DebugRenderPassEnumerable__Enumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettings;
}
namespace UnityEngine::Rendering::Universal {
struct DebugFullScreenMode;
}
namespace UnityEngine::Rendering::Universal {
class DebugRenderSetup;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DebugRenderPassEnumerable;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DrawFunction;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
class __DebugHandler__DebugRenderPassEnumerable__Enumerator;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DebugRenderPassEnumerable;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DrawFunction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugHandler);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction);
// Type: ::Enumerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugHandler::DebugRenderPassEnumerable::Enumerator*
class CORDL_TYPE __DebugHandler__DebugRenderPassEnumerable__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current, put = set_Current))::UnityEngine::Rendering::Universal::DebugRenderSetup* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <Current>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Current_k__BackingField,
                      put = __cordl_internal_set__Current_k__BackingField))::UnityEngine::Rendering::Universal::DebugRenderSetup* _Current_k__BackingField;

  /// @brief Field m_CommandBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandBuffer, put = __cordl_internal_set_m_CommandBuffer))::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  /// @brief Field m_Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context))::UnityEngine::Rendering::ScriptableRenderContext m_Context;

  /// @brief Field m_DebugHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugHandler, put = __cordl_internal_set_m_DebugHandler))::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;

  /// @brief Field m_Index, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_NumIterations, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumIterations, put = __cordl_internal_set_m_NumIterations)) int32_t m_NumIterations;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2c65170, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x2c65044, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator*
  New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method Reset, addr 0x2c65148, size 0x28, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c6503c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::UnityEngine::Rendering::Universal::DebugRenderSetup*& __cordl_internal_get__Current_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugRenderSetup*> const& __cordl_internal_get__Current_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_m_CommandBuffer() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get_m_Context() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get_m_Context();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get_m_DebugHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugHandler*> const& __cordl_internal_get_m_DebugHandler() const;

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr int32_t const& __cordl_internal_get_m_NumIterations() const;

  constexpr int32_t& __cordl_internal_get_m_NumIterations();

  constexpr void __cordl_internal_set__Current_k__BackingField(::UnityEngine::Rendering::Universal::DebugRenderSetup* value);

  constexpr void __cordl_internal_set_m_CommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_Context(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_NumIterations(int32_t value);

  /// @brief Method .ctor, addr 0x2c64fb4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method get_Current, addr 0x2c6502c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::DebugRenderSetup* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__Rendering__Universal__DebugRenderSetup__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Current, addr 0x2c65034, size 0x8, virtual false, abstract: false, final false
  inline void set_Current(::UnityEngine::Rendering::Universal::DebugRenderSetup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugHandler__DebugRenderPassEnumerable__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DebugRenderPassEnumerable__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugHandler__DebugRenderPassEnumerable__Enumerator(__DebugHandler__DebugRenderPassEnumerable__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DebugRenderPassEnumerable__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugHandler__DebugRenderPassEnumerable__Enumerator(__DebugHandler__DebugRenderPassEnumerable__Enumerator const&) = delete;

  /// @brief Field m_DebugHandler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ___m_DebugHandler;

  /// @brief Field m_Context, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ___m_Context;

  /// @brief Field m_CommandBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CommandBuffer;

  /// @brief Field m_NumIterations, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_NumIterations;

  /// @brief Field m_Index, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field <Current>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugRenderSetup* ____Current_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ___m_DebugHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ___m_Context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ___m_CommandBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ___m_NumIterations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ___m_Index) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator, ____Current_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DebugRenderPassEnumerable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugHandler::DebugRenderPassEnumerable*
class CORDL_TYPE __DebugHandler__DebugRenderPassEnumerable : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator;

  /// @brief Field m_CommandBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandBuffer, put = __cordl_internal_set_m_CommandBuffer))::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  /// @brief Field m_Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context))::UnityEngine::Rendering::ScriptableRenderContext m_Context;

  /// @brief Field m_DebugHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugHandler, put = __cordl_internal_set_m_DebugHandler))::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x2c64f3c, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* GetEnumerator();

  static inline ::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable*
  New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c65028, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_m_CommandBuffer() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get_m_Context() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get_m_Context();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get_m_DebugHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugHandler*> const& __cordl_internal_get_m_DebugHandler() const;

  constexpr void __cordl_internal_set_m_CommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_Context(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value);

  /// @brief Method .ctor, addr 0x2c643d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__Rendering__Universal__DebugRenderSetup__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugHandler__DebugRenderPassEnumerable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DebugRenderPassEnumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugHandler__DebugRenderPassEnumerable(__DebugHandler__DebugRenderPassEnumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DebugRenderPassEnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugHandler__DebugRenderPassEnumerable(__DebugHandler__DebugRenderPassEnumerable const&) = delete;

  /// @brief Field m_DebugHandler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ___m_DebugHandler;

  /// @brief Field m_Context, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ___m_Context;

  /// @brief Field m_CommandBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CommandBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable, ___m_DebugHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable, ___m_Context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable, ___m_CommandBuffer) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::DrawFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugHandler::DrawFunction*
class CORDL_TYPE __DebugHandler__DrawFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c65258, size 0x14c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                             ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                             ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c653a4, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                        ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c65244, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                     ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                     ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock);

  static inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c65180, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugHandler__DrawFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DrawFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugHandler__DrawFunction(__DebugHandler__DrawFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugHandler__DrawFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugHandler__DrawFunction(__DebugHandler__DrawFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugHandler
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugHandler*
class CORDL_TYPE DebugHandler : public ::System::Object {
public:
  // Declarations
  using DebugRenderPassEnumerable = ::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable;

  using DrawFunction = ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_DebugDisplaySettings))::UnityEngine::Rendering::Universal::DebugDisplaySettings* DebugDisplaySettings;

  __declspec(property(get = get_IsActiveModeUnsupportedForDeferred)) bool IsActiveModeUnsupportedForDeferred;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  __declspec(property(get = get_IsRenderPassSupported)) bool IsRenderPassSupported;

  __declspec(property(get = get_IsScreenClearNeeded)) bool IsScreenClearNeeded;

  __declspec(property(get = get_LightingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* LightingSettings;

  __declspec(property(get = get_MaterialSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* MaterialSettings;

  __declspec(property(get = get_RenderingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* RenderingSettings;

  __declspec(property(get = get_ReplacementMaterial))::UnityW<::UnityEngine::Material> ReplacementMaterial;

  /// @brief Field k_DebugColorInvalidModePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugColorInvalidModePropertyId, put = setStaticF_k_DebugColorInvalidModePropertyId)) int32_t k_DebugColorInvalidModePropertyId;

  /// @brief Field k_DebugColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugColorPropertyId, put = setStaticF_k_DebugColorPropertyId)) int32_t k_DebugColorPropertyId;

  /// @brief Field k_DebugFullScreenModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugFullScreenModeId, put = setStaticF_k_DebugFullScreenModeId)) int32_t k_DebugFullScreenModeId;

  /// @brief Field k_DebugLightingFeatureFlagsId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugLightingFeatureFlagsId, put = setStaticF_k_DebugLightingFeatureFlagsId)) int32_t k_DebugLightingFeatureFlagsId;

  /// @brief Field k_DebugLightingModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugLightingModeId, put = setStaticF_k_DebugLightingModeId)) int32_t k_DebugLightingModeId;

  /// @brief Field k_DebugMaterialModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugMaterialModeId, put = setStaticF_k_DebugMaterialModeId)) int32_t k_DebugMaterialModeId;

  /// @brief Field k_DebugMaterialValidationModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugMaterialValidationModeId, put = setStaticF_k_DebugMaterialValidationModeId)) int32_t k_DebugMaterialValidationModeId;

  /// @brief Field k_DebugMipInfoModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugMipInfoModeId, put = setStaticF_k_DebugMipInfoModeId)) int32_t k_DebugMipInfoModeId;

  /// @brief Field k_DebugRenderTargetSupportsStereo, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugRenderTargetSupportsStereo, put = setStaticF_k_DebugRenderTargetSupportsStereo)) int32_t k_DebugRenderTargetSupportsStereo;

  /// @brief Field k_DebugSceneOverrideModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugSceneOverrideModeId, put = setStaticF_k_DebugSceneOverrideModeId)) int32_t k_DebugSceneOverrideModeId;

  /// @brief Field k_DebugTextureDisplayRect, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugTextureDisplayRect, put = setStaticF_k_DebugTextureDisplayRect)) int32_t k_DebugTextureDisplayRect;

  /// @brief Field k_DebugTextureNoStereoPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugTextureNoStereoPropertyId, put = setStaticF_k_DebugTextureNoStereoPropertyId)) int32_t k_DebugTextureNoStereoPropertyId;

  /// @brief Field k_DebugTexturePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugTexturePropertyId, put = setStaticF_k_DebugTexturePropertyId)) int32_t k_DebugTexturePropertyId;

  /// @brief Field k_DebugValidateAboveMaxThresholdColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId,
                             put = setStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId)) int32_t k_DebugValidateAboveMaxThresholdColorPropertyId;

  /// @brief Field k_DebugValidateAlbedoCompareColorId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAlbedoCompareColorId, put = setStaticF_k_DebugValidateAlbedoCompareColorId)) int32_t k_DebugValidateAlbedoCompareColorId;

  /// @brief Field k_DebugValidateAlbedoHueToleranceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAlbedoHueToleranceId, put = setStaticF_k_DebugValidateAlbedoHueToleranceId)) int32_t k_DebugValidateAlbedoHueToleranceId;

  /// @brief Field k_DebugValidateAlbedoMaxLuminanceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAlbedoMaxLuminanceId, put = setStaticF_k_DebugValidateAlbedoMaxLuminanceId)) int32_t k_DebugValidateAlbedoMaxLuminanceId;

  /// @brief Field k_DebugValidateAlbedoMinLuminanceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAlbedoMinLuminanceId, put = setStaticF_k_DebugValidateAlbedoMinLuminanceId)) int32_t k_DebugValidateAlbedoMinLuminanceId;

  /// @brief Field k_DebugValidateAlbedoSaturationToleranceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateAlbedoSaturationToleranceId,
                             put = setStaticF_k_DebugValidateAlbedoSaturationToleranceId)) int32_t k_DebugValidateAlbedoSaturationToleranceId;

  /// @brief Field k_DebugValidateBelowMinThresholdColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateBelowMinThresholdColorPropertyId,
                             put = setStaticF_k_DebugValidateBelowMinThresholdColorPropertyId)) int32_t k_DebugValidateBelowMinThresholdColorPropertyId;

  /// @brief Field k_DebugValidateMetallicMaxValueId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateMetallicMaxValueId, put = setStaticF_k_DebugValidateMetallicMaxValueId)) int32_t k_DebugValidateMetallicMaxValueId;

  /// @brief Field k_DebugValidateMetallicMinValueId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidateMetallicMinValueId, put = setStaticF_k_DebugValidateMetallicMinValueId)) int32_t k_DebugValidateMetallicMinValueId;

  /// @brief Field k_DebugValidationModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugValidationModeId, put = setStaticF_k_DebugValidationModeId)) int32_t k_DebugValidationModeId;

  /// @brief Field k_DebugVertexAttributeModeId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DebugVertexAttributeModeId, put = setStaticF_k_DebugVertexAttributeModeId)) int32_t k_DebugVertexAttributeModeId;

  /// @brief Field k_RangeMaximumId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_RangeMaximumId, put = setStaticF_k_RangeMaximumId)) int32_t k_RangeMaximumId;

  /// @brief Field k_RangeMinimumId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_RangeMinimumId, put = setStaticF_k_RangeMinimumId)) int32_t k_RangeMinimumId;

  /// @brief Field k_ValidationChannelsId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ValidationChannelsId, put = setStaticF_k_ValidationChannelsId)) int32_t k_ValidationChannelsId;

  /// @brief Field m_DebugDisplaySettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugDisplaySettings,
                      put = __cordl_internal_set_m_DebugDisplaySettings))::UnityEngine::Rendering::Universal::DebugDisplaySettings* m_DebugDisplaySettings;

  /// @brief Field m_DebugRenderTargetIdentifier, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetIdentifier,
                      put = __cordl_internal_set_m_DebugRenderTargetIdentifier))::UnityEngine::Rendering::RenderTargetIdentifier m_DebugRenderTargetIdentifier;

  /// @brief Field m_DebugRenderTargetPixelRect, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetPixelRect, put = __cordl_internal_set_m_DebugRenderTargetPixelRect))::UnityEngine::Vector4 m_DebugRenderTargetPixelRect;

  /// @brief Field m_DebugRenderTargetSupportsStereo, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetSupportsStereo, put = __cordl_internal_set_m_DebugRenderTargetSupportsStereo)) bool m_DebugRenderTargetSupportsStereo;

  /// @brief Field m_HasDebugRenderTarget, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasDebugRenderTarget, put = __cordl_internal_set_m_HasDebugRenderTarget)) bool m_HasDebugRenderTarget;

  /// @brief Field m_ReplacementMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReplacementMaterial, put = __cordl_internal_set_m_ReplacementMaterial))::UnityW<::UnityEngine::Material> m_ReplacementMaterial;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreateDebugRenderSetupEnumerable, addr 0x2c64358, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*
  CreateDebugRenderSetupEnumerable(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method DrawWithDebugRenderState, addr 0x2c6440c, size 0x41c, virtual false, abstract: false, final false
  inline void DrawWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                       ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                       ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock,
                                       ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* func);

  /// @brief Method IsActiveForCamera, addr 0x2c638dc, size 0x38, virtual false, abstract: false, final false
  inline bool IsActiveForCamera(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  static inline ::UnityEngine::Rendering::Universal::DebugHandler* New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* scriptableRendererData);

  /// @brief Method ResetDebugRenderTarget, addr 0x2c63e10, size 0x8, virtual false, abstract: false, final false
  inline void ResetDebugRenderTarget();

  /// @brief Method SetDebugRenderTarget, addr 0x2c63d7c, size 0x94, virtual false, abstract: false, final false
  inline void SetDebugRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier, ::UnityEngine::Rect displayRect, bool supportsStereo);

  /// @brief Method Setup, addr 0x2c64014, size 0x344, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupShaderProperties, addr 0x2c6396c, size 0x410, virtual false, abstract: false, final false
  inline void SetupShaderProperties(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t passIndex);

  /// @brief Method TryGetFullscreenDebugMode, addr 0x2c63914, size 0x1c, virtual false, abstract: false, final false
  inline bool TryGetFullscreenDebugMode(ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode);

  /// @brief Method TryGetFullscreenDebugMode, addr 0x2c63930, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetFullscreenDebugMode(ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode, ByRef<int32_t> textureHeightPercent);

  /// @brief Method TryGetScreenClearColor, addr 0x2c63764, size 0x18, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  /// @brief Method UpdateShaderGlobalPropertiesForFinalValidationPass, addr 0x2c63e18, size 0x1fc, virtual false, abstract: false, final false
  inline void UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool isFinalPass);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettings*& __cordl_internal_get_m_DebugDisplaySettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettings*> const& __cordl_internal_get_m_DebugDisplaySettings() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_DebugRenderTargetIdentifier() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_DebugRenderTargetIdentifier();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_DebugRenderTargetPixelRect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_DebugRenderTargetPixelRect();

  constexpr bool const& __cordl_internal_get_m_DebugRenderTargetSupportsStereo() const;

  constexpr bool& __cordl_internal_get_m_DebugRenderTargetSupportsStereo();

  constexpr bool const& __cordl_internal_get_m_HasDebugRenderTarget() const;

  constexpr bool& __cordl_internal_get_m_HasDebugRenderTarget();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ReplacementMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ReplacementMaterial();

  constexpr void __cordl_internal_set_m_DebugDisplaySettings(::UnityEngine::Rendering::Universal::DebugDisplaySettings* value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetPixelRect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetSupportsStereo(bool value);

  constexpr void __cordl_internal_set_m_HasDebugRenderTarget(bool value);

  constexpr void __cordl_internal_set_m_ReplacementMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x2c637ec, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* scriptableRendererData);

  static inline int32_t getStaticF_k_DebugColorInvalidModePropertyId();

  static inline int32_t getStaticF_k_DebugColorPropertyId();

  static inline int32_t getStaticF_k_DebugFullScreenModeId();

  static inline int32_t getStaticF_k_DebugLightingFeatureFlagsId();

  static inline int32_t getStaticF_k_DebugLightingModeId();

  static inline int32_t getStaticF_k_DebugMaterialModeId();

  static inline int32_t getStaticF_k_DebugMaterialValidationModeId();

  static inline int32_t getStaticF_k_DebugMipInfoModeId();

  static inline int32_t getStaticF_k_DebugRenderTargetSupportsStereo();

  static inline int32_t getStaticF_k_DebugSceneOverrideModeId();

  static inline int32_t getStaticF_k_DebugTextureDisplayRect();

  static inline int32_t getStaticF_k_DebugTextureNoStereoPropertyId();

  static inline int32_t getStaticF_k_DebugTexturePropertyId();

  static inline int32_t getStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoCompareColorId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoHueToleranceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoMaxLuminanceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoMinLuminanceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoSaturationToleranceId();

  static inline int32_t getStaticF_k_DebugValidateBelowMinThresholdColorPropertyId();

  static inline int32_t getStaticF_k_DebugValidateMetallicMaxValueId();

  static inline int32_t getStaticF_k_DebugValidateMetallicMinValueId();

  static inline int32_t getStaticF_k_DebugValidationModeId();

  static inline int32_t getStaticF_k_DebugVertexAttributeModeId();

  static inline int32_t getStaticF_k_RangeMaximumId();

  static inline int32_t getStaticF_k_RangeMinimumId();

  static inline int32_t getStaticF_k_ValidationChannelsId();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c636b0, size 0x18, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_DebugDisplaySettings, addr 0x2c63784, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettings* get_DebugDisplaySettings();

  /// @brief Method get_IsActiveModeUnsupportedForDeferred, addr 0x2c636f8, size 0x6c, virtual false, abstract: false, final false
  inline bool get_IsActiveModeUnsupportedForDeferred();

  /// @brief Method get_IsLightingActive, addr 0x2c636e0, size 0x18, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c636c8, size 0x18, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_IsRenderPassSupported, addr 0x2c637c0, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsRenderPassSupported();

  /// @brief Method get_IsScreenClearNeeded, addr 0x2c6378c, size 0x34, virtual false, abstract: false, final false
  inline bool get_IsScreenClearNeeded();

  /// @brief Method get_LightingSettings, addr 0x2c6365c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings();

  /// @brief Method get_MaterialSettings, addr 0x2c63678, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings();

  /// @brief Method get_RenderingSettings, addr 0x2c63694, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings();

  /// @brief Method get_ReplacementMaterial, addr 0x2c6377c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_ReplacementMaterial();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  static inline void setStaticF_k_DebugColorInvalidModePropertyId(int32_t value);

  static inline void setStaticF_k_DebugColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugFullScreenModeId(int32_t value);

  static inline void setStaticF_k_DebugLightingFeatureFlagsId(int32_t value);

  static inline void setStaticF_k_DebugLightingModeId(int32_t value);

  static inline void setStaticF_k_DebugMaterialModeId(int32_t value);

  static inline void setStaticF_k_DebugMaterialValidationModeId(int32_t value);

  static inline void setStaticF_k_DebugMipInfoModeId(int32_t value);

  static inline void setStaticF_k_DebugRenderTargetSupportsStereo(int32_t value);

  static inline void setStaticF_k_DebugSceneOverrideModeId(int32_t value);

  static inline void setStaticF_k_DebugTextureDisplayRect(int32_t value);

  static inline void setStaticF_k_DebugTextureNoStereoPropertyId(int32_t value);

  static inline void setStaticF_k_DebugTexturePropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoCompareColorId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoHueToleranceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoMaxLuminanceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoMinLuminanceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoSaturationToleranceId(int32_t value);

  static inline void setStaticF_k_DebugValidateBelowMinThresholdColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateMetallicMaxValueId(int32_t value);

  static inline void setStaticF_k_DebugValidateMetallicMinValueId(int32_t value);

  static inline void setStaticF_k_DebugValidationModeId(int32_t value);

  static inline void setStaticF_k_DebugVertexAttributeModeId(int32_t value);

  static inline void setStaticF_k_RangeMaximumId(int32_t value);

  static inline void setStaticF_k_RangeMinimumId(int32_t value);

  static inline void setStaticF_k_ValidationChannelsId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugHandler(DebugHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugHandler(DebugHandler const&) = delete;

  /// @brief Field m_ReplacementMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ReplacementMaterial;

  /// @brief Field m_HasDebugRenderTarget, offset: 0x18, size: 0x1, def value: None
  bool ___m_HasDebugRenderTarget;

  /// @brief Field m_DebugRenderTargetSupportsStereo, offset: 0x19, size: 0x1, def value: None
  bool ___m_DebugRenderTargetSupportsStereo;

  /// @brief Field m_DebugRenderTargetPixelRect, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_DebugRenderTargetPixelRect;

  /// @brief Field m_DebugRenderTargetIdentifier, offset: 0x30, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_DebugRenderTargetIdentifier;

  /// @brief Field m_DebugDisplaySettings, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettings* ___m_DebugDisplaySettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugHandler, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_ReplacementMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_HasDebugRenderTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetSupportsStereo) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetPixelRect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetIdentifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugDisplaySettings) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugHandler__DebugRenderPassEnumerable__Enumerator*, "UnityEngine.Rendering.Universal", "DebugHandler/DebugRenderPassEnumerable/Enumerator");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler*, "UnityEngine.Rendering.Universal", "DebugHandler");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugHandler__DebugRenderPassEnumerable*, "UnityEngine.Rendering.Universal", "DebugHandler/DebugRenderPassEnumerable");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*, "UnityEngine.Rendering.Universal", "DebugHandler/DrawFunction");
