#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChain)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRTextUpdatePainter;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNodePool_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__RenderChainStaticIndexAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__RenderNodeData;
}
namespace UnityEngine::UIElements::UIR {
class __RenderChain____c;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class __RenderChain____c;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__RenderChainStaticIndexAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct __RenderChain__RenderNodeData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__RenderChain____c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData);
// Type: ::DepthOrderedDirtyTracking
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::RenderChain::DepthOrderedDirtyTracking
struct CORDL_TYPE __RenderChain__DepthOrderedDirtyTracking {
public:
  // Declarations
  /// @brief Method ClearDirty, addr 0x12743ac, size 0x190, virtual false, abstract: false, final false
  inline void ClearDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse);

  /// @brief Method EnsureFits, addr 0x12740d4, size 0x11c, virtual false, abstract: false, final false
  inline void EnsureFits(int32_t maxDepth);

  /// @brief Method RegisterDirty, addr 0x12741f0, size 0x1bc, virtual false, abstract: false, final false
  inline void RegisterDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass);

  /// @brief Method Reset, addr 0x127453c, size 0x78, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderChain__DepthOrderedDirtyTracking();

  // Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "tails",
  // ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "minDepths", ty:
  // "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __RenderChain__DepthOrderedDirtyTracking(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads,
                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails, ::ArrayW<int32_t, ::Array<int32_t>*> minDepths,
                                                     ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths, uint32_t dirtyID) noexcept;

  /// @brief Field heads, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads;

  /// @brief Field tails, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails;

  /// @brief Field minDepths, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> minDepths;

  /// @brief Field maxDepths, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths;

  /// @brief Field dirtyID, offset: 0x20, size: 0x4, def value: None
  uint32_t dirtyID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, heads) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, tails) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, minDepths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, maxDepths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, dirtyID) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::RenderChainStaticIndexAllocator
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::RenderChain::RenderChainStaticIndexAllocator
#pragma pack(push, 0)
struct CORDL_TYPE __RenderChain__RenderChainStaticIndexAllocator {
public:
  // Declarations
  /// @brief Field renderChains, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_renderChains, put = setStaticF_renderChains))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* renderChains;

  /// @brief Method AccessIndex, addr 0x1274788, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChain* AccessIndex(int32_t index);

  /// @brief Method AllocateIndex, addr 0x12745b4, size 0x150, virtual false, abstract: false, final false
  static inline int32_t AllocateIndex(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method FreeIndex, addr 0x1274704, size 0x84, virtual false, abstract: false, final false
  static inline void FreeIndex(int32_t index);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* getStaticF_renderChains();

  static inline void setStaticF_renderChains(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderChain__RenderChainStaticIndexAllocator();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::RenderNodeData
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::RenderChain::RenderNodeData
struct CORDL_TYPE __RenderChain__RenderNodeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderChain__RenderNodeData();

  // Ctor Parameters [CppParam { name: "standardMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "initialMaterial", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "matPropBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam {
  // name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "device", ty:
  // "::UnityEngine::UIElements::UIR::UIRenderDevice*", modifiers: "", def_value: None }, CppParam { name: "vectorAtlas", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None },
  // CppParam { name: "shaderInfoAtlas", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "dpiScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "transformConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name:
  // "clipRectConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
  constexpr __RenderChain__RenderNodeData(::UnityW<::UnityEngine::Material> standardMaterial, ::UnityW<::UnityEngine::Material> initialMaterial, ::UnityEngine::MaterialPropertyBlock* matPropBlock,
                                          ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                          ::UnityW<::UnityEngine::Texture> vectorAtlas, ::UnityW<::UnityEngine::Texture> shaderInfoAtlas, float_t dpiScale,
                                          ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants,
                                          ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants) noexcept;

  /// @brief Field standardMaterial, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> standardMaterial;

  /// @brief Field initialMaterial, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> initialMaterial;

  /// @brief Field matPropBlock, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* matPropBlock;

  /// @brief Field firstCommand, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand;

  /// @brief Field device, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* device;

  /// @brief Field vectorAtlas, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> vectorAtlas;

  /// @brief Field shaderInfoAtlas, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> shaderInfoAtlas;

  /// @brief Field dpiScale, offset: 0x38, size: 0x4, def value: None
  float_t dpiScale;

  /// @brief Field transformConstants, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants;

  /// @brief Field clipRectConstants, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, standardMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, initialMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, matPropBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, firstCommand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, vectorAtlas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, shaderInfoAtlas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, dpiScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, transformConstants) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, clipRectConstants) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::RenderChain::<>c*
class CORDL_TYPE __RenderChain____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__RenderChain____c* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0))::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__37_0;

  /// @brief Field <>9__37_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_1, put = setStaticF___9__37_1))::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__37_1;

  static inline ::UnityEngine::UIElements::UIR::__RenderChain____c* New_ctor();

  /// @brief Method <.ctor>b__37_0, addr 0x1274904, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* __ctor_b__37_0();

  /// @brief Method <.ctor>b__37_1, addr 0x1274960, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__37_1(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method .ctor, addr 0x12748fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::__RenderChain____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__37_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__37_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__RenderChain____c* value);

  static inline void setStaticF___9__37_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__37_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderChain____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderChain____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderChain____c(__RenderChain____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderChain____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderChain____c(__RenderChain____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__RenderChain____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::RenderChain
// SizeInfo { instance_size: 552, native_size: -1, calculated_instance_size: 552, calculated_native_size: 546, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::RenderChain*
class CORDL_TYPE RenderChain : public ::System::Object {
public:
  // Declarations
  using DepthOrderedDirtyTracking = ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking;

  using RenderChainStaticIndexAllocator = ::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator;

  using RenderNodeData = ::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData;

  using __c = ::UnityEngine::UIElements::UIR::__RenderChain____c;

  /// @brief Field OnPreRender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnPreRender, put = setStaticF_OnPreRender))::System::Action* OnPreRender;

  /// @brief Field <atlas>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__atlas_k__BackingField, put = __cordl_internal_set__atlas_k__BackingField))::UnityEngine::UIElements::AtlasBase* _atlas_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField))::UnityEngine::UIElements::UIR::UIRenderDevice* _device_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset 0x221, size 0x1
  __declspec(property(get = __cordl_internal_get__drawInCameras_k__BackingField, put = __cordl_internal_set__drawInCameras_k__BackingField)) bool _drawInCameras_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset 0x220, size 0x1
  __declspec(property(get = __cordl_internal_get__drawStats_k__BackingField, put = __cordl_internal_set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field <painter>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__painter_k__BackingField,
                      put = __cordl_internal_set__painter_k__BackingField))::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* _painter_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__panel_k__BackingField, put = __cordl_internal_set__panel_k__BackingField))::UnityEngine::UIElements::BaseVisualElementPanel* _panel_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__vectorImageManager_k__BackingField,
                      put = __cordl_internal_set__vectorImageManager_k__BackingField))::UnityEngine::UIElements::UIR::VectorImageManager* _vectorImageManager_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas))::UnityEngine::UIElements::AtlasBase* atlas;

  __declspec(property(put = set_defaultShader))::UnityW<::UnityEngine::Shader> defaultShader;

  __declspec(property(put = set_defaultWorldSpaceShader))::UnityW<::UnityEngine::Shader> defaultWorldSpaceShader;

  __declspec(property(get = get_device, put = set_device))::UnityEngine::UIElements::UIR::UIRenderDevice* device;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawInCameras, put = set_drawInCameras)) bool drawInCameras;

  __declspec(property(get = get_drawStats, put = set_drawStats)) bool drawStats;

  /// @brief Field m_ActiveRenderNodes, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveRenderNodes, put = __cordl_internal_set_m_ActiveRenderNodes)) int32_t m_ActiveRenderNodes;

  /// @brief Field m_BlockDirtyRegistration, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BlockDirtyRegistration, put = __cordl_internal_set_m_BlockDirtyRegistration)) bool m_BlockDirtyRegistration;

  /// @brief Field m_CommandPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandPool,
                      put = __cordl_internal_set_m_CommandPool))::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* m_CommandPool;

  /// @brief Field m_CustomMaterialCommands, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CustomMaterialCommands, put = __cordl_internal_set_m_CustomMaterialCommands)) int32_t m_CustomMaterialCommands;

  /// @brief Field m_DefaultMat, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultMat, put = __cordl_internal_set_m_DefaultMat))::UnityW<::UnityEngine::Material> m_DefaultMat;

  /// @brief Field m_DefaultShader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultShader, put = __cordl_internal_set_m_DefaultShader))::UnityW<::UnityEngine::Shader> m_DefaultShader;

  /// @brief Field m_DefaultWorldSpaceMat, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultWorldSpaceMat, put = __cordl_internal_set_m_DefaultWorldSpaceMat))::UnityW<::UnityEngine::Material> m_DefaultWorldSpaceMat;

  /// @brief Field m_DefaultWorldSpaceShader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultWorldSpaceShader, put = __cordl_internal_set_m_DefaultWorldSpaceShader))::UnityW<::UnityEngine::Shader> m_DefaultWorldSpaceShader;

  /// @brief Field m_DirtyTextRemaining, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DirtyTextRemaining, put = __cordl_internal_set_m_DirtyTextRemaining)) int32_t m_DirtyTextRemaining;

  /// @brief Field m_DirtyTextStartIndex, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DirtyTextStartIndex, put = __cordl_internal_set_m_DirtyTextStartIndex)) int32_t m_DirtyTextStartIndex;

  /// @brief Field m_DirtyTracker, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_m_DirtyTracker, put = __cordl_internal_set_m_DirtyTracker))::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking m_DirtyTracker;

  /// @brief Field m_FirstCommand, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstCommand, put = __cordl_internal_set_m_FirstCommand))::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand;

  /// @brief Field m_FirstTextElement, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstTextElement, put = __cordl_internal_set_m_FirstTextElement))::UnityEngine::UIElements::VisualElement* m_FirstTextElement;

  /// @brief Field m_FontWasReset, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FontWasReset, put = __cordl_internal_set_m_FontWasReset)) bool m_FontWasReset;

  /// @brief Field m_LastGroupTransformElementScale, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastGroupTransformElementScale,
                      put = __cordl_internal_set_m_LastGroupTransformElementScale))::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*,
                                                                                                                                ::UnityEngine::Vector2>* m_LastGroupTransformElementScale;

  /// @brief Field m_RenderNodesData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderNodesData,
                      put = __cordl_internal_set_m_RenderNodesData))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>* m_RenderNodesData;

  /// @brief Field m_StaticIndex, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StaticIndex, put = __cordl_internal_set_m_StaticIndex)) int32_t m_StaticIndex;

  /// @brief Field m_Stats, offset 0x88, size 0x60
  __declspec(property(get = __cordl_internal_get_m_Stats, put = __cordl_internal_set_m_Stats))::UnityEngine::UIElements::UIR::ChainBuilderStats m_Stats;

  /// @brief Field m_StatsElementsAdded, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsAdded, put = __cordl_internal_set_m_StatsElementsAdded)) uint32_t m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsRemoved, put = __cordl_internal_set_m_StatsElementsRemoved)) uint32_t m_StatsElementsRemoved;

  /// @brief Field m_TextElementCount, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextElementCount, put = __cordl_internal_set_m_TextElementCount)) int32_t m_TextElementCount;

  /// @brief Field m_TextUpdatePainter, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextUpdatePainter,
                      put = __cordl_internal_set_m_TextUpdatePainter))::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* m_TextUpdatePainter;

  /// @brief Field m_TexturePool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TexturePool,
                      put = __cordl_internal_set_m_TexturePool))::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* m_TexturePool;

  /// @brief Field m_TextureRegistry, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureRegistry, put = __cordl_internal_set_m_TextureRegistry))::UnityEngine::UIElements::TextureRegistry* m_TextureRegistry;

  __declspec(property(get = get_painter, put = set_painter))::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* painter;

  __declspec(property(get = get_panel, put = set_panel))::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  /// @brief Field s_MarkerClipProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerClipProcessing, put = setStaticF_s_MarkerClipProcessing))::Unity::Profiling::ProfilerMarker s_MarkerClipProcessing;

  /// @brief Field s_MarkerColorsProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerColorsProcessing, put = setStaticF_s_MarkerColorsProcessing))::Unity::Profiling::ProfilerMarker s_MarkerColorsProcessing;

  /// @brief Field s_MarkerOpacityProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerOpacityProcessing, put = setStaticF_s_MarkerOpacityProcessing))::Unity::Profiling::ProfilerMarker s_MarkerOpacityProcessing;

  /// @brief Field s_MarkerProcess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerProcess, put = setStaticF_s_MarkerProcess))::Unity::Profiling::ProfilerMarker s_MarkerProcess;

  /// @brief Field s_MarkerTextRegen, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTextRegen, put = setStaticF_s_MarkerTextRegen))::Unity::Profiling::ProfilerMarker s_MarkerTextRegen;

  /// @brief Field s_MarkerTransformProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTransformProcessing, put = setStaticF_s_MarkerTransformProcessing))::Unity::Profiling::ProfilerMarker s_MarkerTransformProcessing;

  /// @brief Field s_MarkerVisualsProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerVisualsProcessing, put = setStaticF_s_MarkerVisualsProcessing))::Unity::Profiling::ProfilerMarker s_MarkerVisualsProcessing;

  /// @brief Field shaderInfoAllocator, offset 0x148, size 0xd0
  __declspec(property(get = __cordl_internal_get_shaderInfoAllocator, put = __cordl_internal_set_shaderInfoAllocator))::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator shaderInfoAllocator;

  __declspec(property(get = get_vectorImageManager, put = set_vectorImageManager))::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AccessRenderNodeData, addr 0x12988d8, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData AccessRenderNodeData(void* obj);

  /// @brief Method AddTextElement, addr 0x1298724, size 0x34, virtual false, abstract: false, final false
  inline void AddTextElement(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method AllocCommand, addr 0x1298558, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* AllocCommand();

  /// @brief Method AppendTexture, addr 0x12992f8, size 0x10a8, virtual false, abstract: false, final false
  inline void AppendTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas);

  /// @brief Method ChildWillBeRemoved, addr 0x12984a0, size 0xb8, virtual false, abstract: false, final false
  inline void ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Constructor, addr 0x1295714, size 0x388, virtual false, abstract: false, final false
  inline void Constructor(::UnityEngine::UIElements::BaseVisualElementPanel* panelObj, ::UnityEngine::UIElements::UIR::UIRenderDevice* deviceObj, ::UnityEngine::UIElements::AtlasBase* atlas,
                          ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageMan);

  /// @brief Method Destructor, addr 0x1295a9c, size 0x244, virtual false, abstract: false, final false
  inline void Destructor();

  /// @brief Method Dispose, addr 0x1295e48, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1295eb8, size 0x2c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawStats, addr 0x1296b04, size 0xe74, virtual false, abstract: false, final false
  inline void DrawStats();

  /// @brief Method EnsureFitsDepth, addr 0x1298494, size 0xc, virtual false, abstract: false, final false
  inline void EnsureFitsDepth(int32_t depth);

  /// @brief Method FreeCommand, addr 0x12985c0, size 0xb0, virtual false, abstract: false, final false
  inline void FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method GetFirstElementInPanel, addr 0x1295ce0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetStandardMaterial, addr 0x1296a18, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetStandardMaterial();

  /// @brief Method GetStandardWorldSpaceMaterial, addr 0x12983a8, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetStandardWorldSpaceMaterial();

  static inline ::UnityEngine::UIElements::UIR::RenderChain* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method OnFontReset, addr 0x12992ec, size 0xc, virtual false, abstract: false, final false
  inline void OnFontReset(::UnityEngine::Font* font);

  /// @brief Method OnGroupTransformElementChangedTransform, addr 0x12987ac, size 0x12c, virtual false, abstract: false, final false
  inline void OnGroupTransformElementChangedTransform(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method OnRegisterIntermediateRendererMat, addr 0x1298eb8, size 0x354, virtual false, abstract: false, final false
  static inline void OnRegisterIntermediateRendererMat(::UnityEngine::UIElements::BaseRuntimePanel* rtp, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                       ByRef<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData> rnd, ::UnityEngine::Camera* camera, int32_t sameDistanceSortPriority);

  /// @brief Method OnRegisterIntermediateRenderers, addr 0x1298a58, size 0x460, virtual false, abstract: false, final false
  static inline void OnRegisterIntermediateRenderers(::UnityEngine::Camera* camera);

  /// @brief Method OnRenderCommandAdded, addr 0x1298670, size 0x8c, virtual false, abstract: false, final false
  inline void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command);

  /// @brief Method OnRenderCommandsRemoved, addr 0x12986fc, size 0x28, virtual false, abstract: false, final false
  inline void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand);

  /// @brief Method OnRenderNodeExecute, addr 0x12989b0, size 0xa8, virtual false, abstract: false, final false
  static inline void OnRenderNodeExecute(void* obj);

  /// @brief Method ProcessChanges, addr 0x1295ee4, size 0x5cc, virtual false, abstract: false, final false
  inline void ProcessChanges();

  /// @brief Method ProcessTextRegen, addr 0x12964b0, size 0x230, virtual false, abstract: false, final false
  inline void ProcessTextRegen(bool timeSliced);

  /// @brief Method RemoveTextElement, addr 0x1298758, size 0x54, virtual false, abstract: false, final false
  inline void RemoveTextElement(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Render, addr 0x12966e0, size 0x338, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RepaintTexturedElements, addr 0x129920c, size 0xe0, virtual false, abstract: false, final false
  inline void RepaintTexturedElements();

  /// @brief Method ResetTextures, addr 0x1295d28, size 0x10c, virtual false, abstract: false, final false
  inline void ResetTextures(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method StopTrackingGroupTransformElement, addr 0x1297fb8, size 0x58, virtual false, abstract: false, final false
  inline void StopTrackingGroupTransformElement(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildAdded, addr 0x1297978, size 0x1cc, virtual false, abstract: false, final false
  inline void UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildRemoving, addr 0x1297eb8, size 0x100, virtual false, abstract: false, final false
  inline void UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildrenReordered, addr 0x1297d00, size 0x1b8, virtual false, abstract: false, final false
  inline void UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnClippingChanged, addr 0x1297b44, size 0x94, virtual false, abstract: false, final false
  inline void UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnColorChanged, addr 0x12980b0, size 0x88, virtual false, abstract: false, final false
  inline void UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnOpacityChanged, addr 0x1297bd8, size 0x94, virtual false, abstract: false, final false
  inline void UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnRenderHintsChanged, addr 0x1298010, size 0xa0, virtual false, abstract: false, final false
  inline void UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnTransformOrSizeChanged, addr 0x1298138, size 0x98, virtual false, abstract: false, final false
  inline void UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged);

  /// @brief Method UIEOnVisualsChanged, addr 0x1297c6c, size 0x94, virtual false, abstract: false, final false
  inline void UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get__atlas_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& __cordl_internal_get__atlas_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::UIRenderDevice*> const& __cordl_internal_get__device_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawInCameras_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawInCameras_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawStats_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawStats_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*& __cordl_internal_get__painter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*> const& __cordl_internal_get__painter_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__panel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __cordl_internal_get__panel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __cordl_internal_get__vectorImageManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageManager*> const& __cordl_internal_get__vectorImageManager_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get_m_ActiveRenderNodes() const;

  constexpr int32_t& __cordl_internal_get_m_ActiveRenderNodes();

  constexpr bool const& __cordl_internal_get_m_BlockDirtyRegistration() const;

  constexpr bool& __cordl_internal_get_m_BlockDirtyRegistration();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& __cordl_internal_get_m_CommandPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*> const& __cordl_internal_get_m_CommandPool() const;

  constexpr int32_t const& __cordl_internal_get_m_CustomMaterialCommands() const;

  constexpr int32_t& __cordl_internal_get_m_CustomMaterialCommands();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultMat();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultShader();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultWorldSpaceMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultWorldSpaceMat();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultWorldSpaceShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultWorldSpaceShader();

  constexpr int32_t const& __cordl_internal_get_m_DirtyTextRemaining() const;

  constexpr int32_t& __cordl_internal_get_m_DirtyTextRemaining();

  constexpr int32_t const& __cordl_internal_get_m_DirtyTextStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DirtyTextStartIndex();

  constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking const& __cordl_internal_get_m_DirtyTracker() const;

  constexpr ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking& __cordl_internal_get_m_DirtyTracker();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& __cordl_internal_get_m_FirstCommand() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_FirstTextElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_FirstTextElement() const;

  constexpr bool const& __cordl_internal_get_m_FontWasReset() const;

  constexpr bool& __cordl_internal_get_m_FontWasReset();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>*& __cordl_internal_get_m_LastGroupTransformElementScale();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>*> const&
  __cordl_internal_get_m_LastGroupTransformElementScale() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>*& __cordl_internal_get_m_RenderNodesData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>*> const&
  __cordl_internal_get_m_RenderNodesData() const;

  constexpr int32_t const& __cordl_internal_get_m_StaticIndex() const;

  constexpr int32_t& __cordl_internal_get_m_StaticIndex();

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& __cordl_internal_get_m_Stats() const;

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& __cordl_internal_get_m_Stats();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsAdded() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsAdded();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsRemoved() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsRemoved();

  constexpr int32_t const& __cordl_internal_get_m_TextElementCount() const;

  constexpr int32_t& __cordl_internal_get_m_TextElementCount();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*& __cordl_internal_get_m_TextUpdatePainter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*> const& __cordl_internal_get_m_TextUpdatePainter() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& __cordl_internal_get_m_TexturePool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*> const& __cordl_internal_get_m_TexturePool() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_m_TextureRegistry();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextureRegistry*> const& __cordl_internal_get_m_TextureRegistry() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator const& __cordl_internal_get_shaderInfoAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator& __cordl_internal_get_shaderInfoAllocator();

  constexpr void __cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawInCameras_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawStats_k__BackingField(bool value);

  constexpr void __cordl_internal_set__painter_k__BackingField(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value);

  constexpr void __cordl_internal_set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr void __cordl_internal_set_m_ActiveRenderNodes(int32_t value);

  constexpr void __cordl_internal_set_m_BlockDirtyRegistration(bool value);

  constexpr void __cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  constexpr void __cordl_internal_set_m_CustomMaterialCommands(int32_t value);

  constexpr void __cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DefaultWorldSpaceMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DefaultWorldSpaceShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DirtyTextRemaining(int32_t value);

  constexpr void __cordl_internal_set_m_DirtyTextStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking value);

  constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_FirstTextElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_FontWasReset(bool value);

  constexpr void __cordl_internal_set_m_LastGroupTransformElementScale(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set_m_RenderNodesData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>* value);

  constexpr void __cordl_internal_set_m_StaticIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value);

  constexpr void __cordl_internal_set_m_StatsElementsAdded(uint32_t value);

  constexpr void __cordl_internal_set_m_StatsElementsRemoved(uint32_t value);

  constexpr void __cordl_internal_set_m_TextElementCount(int32_t value);

  constexpr void __cordl_internal_set_m_TextUpdatePainter(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* value);

  constexpr void __cordl_internal_set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* value);

  constexpr void __cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  constexpr void __cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator value);

  /// @brief Method .ctor, addr 0x129535c, size 0x3b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::System::Action* getStaticF_OnPreRender();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerClipProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerColorsProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerOpacityProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerProcess();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTextRegen();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTransformProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerVisualsProcessing();

  /// @brief Method get_atlas, addr 0x12981f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method get_device, addr 0x12981e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::UIRenderDevice* get_device();

  /// @brief Method get_disposed, addr 0x1295e34, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawInCameras, addr 0x1298234, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawInCameras();

  /// @brief Method get_drawStats, addr 0x1298220, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_painter, addr 0x1298210, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* get_painter();

  /// @brief Method get_panel, addr 0x12981d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_vectorImageManager, addr 0x1298200, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageManager* get_vectorImageManager();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_OnPreRender(::System::Action* value);

  static inline void setStaticF_s_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerProcess(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerTextRegen(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_atlas, addr 0x12981f8, size 0x8, virtual false, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method set_defaultShader, addr 0x1298248, size 0xb0, virtual false, abstract: false, final false
  inline void set_defaultShader(::UnityEngine::Shader* value);

  /// @brief Method set_defaultWorldSpaceShader, addr 0x12982f8, size 0xb0, virtual false, abstract: false, final false
  inline void set_defaultWorldSpaceShader(::UnityEngine::Shader* value);

  /// @brief Method set_device, addr 0x12981e8, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  /// @brief Method set_disposed, addr 0x1295e3c, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_drawInCameras, addr 0x129823c, size 0xc, virtual false, abstract: false, final false
  inline void set_drawInCameras(bool value);

  /// @brief Method set_drawStats, addr 0x1298228, size 0xc, virtual false, abstract: false, final false
  inline void set_drawStats(bool value);

  /// @brief Method set_painter, addr 0x1298218, size 0x8, virtual false, abstract: false, final false
  inline void set_painter(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value);

  /// @brief Method set_panel, addr 0x12981d8, size 0x8, virtual false, abstract: false, final false
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_vectorImageManager, addr 0x1298208, size 0x8, virtual false, abstract: false, final false
  inline void set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain(RenderChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain(RenderChain const&) = delete;

  /// @brief Field m_FirstCommand, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_FirstCommand;

  /// @brief Field m_DirtyTracker, offset: 0x18, size: 0x28, def value: None
  ::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking ___m_DirtyTracker;

  /// @brief Field m_CommandPool, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* ___m_CommandPool;

  /// @brief Field m_TexturePool, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* ___m_TexturePool;

  /// @brief Field m_RenderNodesData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData>* ___m_RenderNodesData;

  /// @brief Field m_DefaultShader, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultShader;

  /// @brief Field m_DefaultWorldSpaceShader, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultWorldSpaceShader;

  /// @brief Field m_DefaultMat, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultMat;

  /// @brief Field m_DefaultWorldSpaceMat, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultWorldSpaceMat;

  /// @brief Field m_BlockDirtyRegistration, offset: 0x78, size: 0x1, def value: None
  bool ___m_BlockDirtyRegistration;

  /// @brief Field m_StaticIndex, offset: 0x7c, size: 0x4, def value: None
  int32_t ___m_StaticIndex;

  /// @brief Field m_ActiveRenderNodes, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_ActiveRenderNodes;

  /// @brief Field m_CustomMaterialCommands, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_CustomMaterialCommands;

  /// @brief Field m_Stats, offset: 0x88, size: 0x60, def value: None
  ::UnityEngine::UIElements::UIR::ChainBuilderStats ___m_Stats;

  /// @brief Field m_StatsElementsAdded, offset: 0xe8, size: 0x4, def value: None
  uint32_t ___m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset: 0xec, size: 0x4, def value: None
  uint32_t ___m_StatsElementsRemoved;

  /// @brief Field m_FirstTextElement, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_FirstTextElement;

  /// @brief Field m_TextUpdatePainter, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* ___m_TextUpdatePainter;

  /// @brief Field m_TextElementCount, offset: 0x100, size: 0x4, def value: None
  int32_t ___m_TextElementCount;

  /// @brief Field m_DirtyTextStartIndex, offset: 0x104, size: 0x4, def value: None
  int32_t ___m_DirtyTextStartIndex;

  /// @brief Field m_DirtyTextRemaining, offset: 0x108, size: 0x4, def value: None
  int32_t ___m_DirtyTextRemaining;

  /// @brief Field m_FontWasReset, offset: 0x10c, size: 0x1, def value: None
  bool ___m_FontWasReset;

  /// @brief Field m_LastGroupTransformElementScale, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2>* ___m_LastGroupTransformElementScale;

  /// @brief Field m_TextureRegistry, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___m_TextureRegistry;

  /// @brief Field <disposed>k__BackingField, offset: 0x120, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____panel_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* ____device_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ____atlas_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ____vectorImageManager_k__BackingField;

  /// @brief Field shaderInfoAllocator, offset: 0x148, size: 0xd0, def value: None
  ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator ___shaderInfoAllocator;

  /// @brief Field <painter>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* ____painter_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset: 0x220, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset: 0x221, size: 0x1, def value: None
  bool ____drawInCameras_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain, 0x228>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_FirstCommand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DirtyTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_CommandPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TexturePool) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_RenderNodesData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultShader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultWorldSpaceShader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultMat) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultWorldSpaceMat) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_BlockDirtyRegistration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StaticIndex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_ActiveRenderNodes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_CustomMaterialCommands) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_Stats) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsAdded) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsRemoved) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_FirstTextElement) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TextUpdatePainter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TextElementCount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DirtyTextStartIndex) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DirtyTextRemaining) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_FontWasReset) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_LastGroupTransformElementScale) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TextureRegistry) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____disposed_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____panel_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____device_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____atlas_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____vectorImageManager_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___shaderInfoAllocator) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____painter_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawStats_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawInCameras_k__BackingField) == 0x221, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain*, "UnityEngine.UIElements.UIR", "RenderChain");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__RenderChain____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__RenderChain____c*, "UnityEngine.UIElements.UIR", "RenderChain/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__RenderChain__DepthOrderedDirtyTracking, "UnityEngine.UIElements.UIR", "RenderChain/DepthOrderedDirtyTracking");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__RenderChain__RenderChainStaticIndexAllocator, "UnityEngine.UIElements.UIR", "RenderChain/RenderChainStaticIndexAllocator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__RenderChain__RenderNodeData, "UnityEngine.UIElements.UIR", "RenderChain/RenderNodeData");
