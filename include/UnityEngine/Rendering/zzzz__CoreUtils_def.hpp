#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUtils)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
class __CoreUtils__Priorities;
}
namespace UnityEngine::Rendering {
class __CoreUtils__Sections;
}
namespace UnityEngine::Rendering {
class __CoreUtils____c;
}
namespace UnityEngine::Rendering {
template <typename T> class __CoreUtils____c__82_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class CubemapArray;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUtils;
}
namespace UnityEngine::Rendering {
class __CoreUtils__Priorities;
}
namespace UnityEngine::Rendering {
class __CoreUtils__Sections;
}
namespace UnityEngine::Rendering {
class __CoreUtils____c;
}
namespace UnityEngine::Rendering {
template <typename T> class __CoreUtils____c__82_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::__CoreUtils__Priorities);
MARK_REF_PTR_T(::UnityEngine::Rendering::__CoreUtils__Sections);
MARK_REF_PTR_T(::UnityEngine::Rendering::__CoreUtils____c);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__CoreUtils____c__82_1);
// Type: ::Sections
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::CoreUtils::Sections*
class CORDL_TYPE __CoreUtils__Sections : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUtils__Sections();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils__Sections", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreUtils__Sections(__CoreUtils__Sections&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils__Sections", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreUtils__Sections(__CoreUtils__Sections const&) = delete;

  /// @brief Field section1 offset 0xffffffff size 0x4
  static constexpr int32_t section1{ static_cast<int32_t>(0x2710) };

  /// @brief Field section2 offset 0xffffffff size 0x4
  static constexpr int32_t section2{ static_cast<int32_t>(0x4e20) };

  /// @brief Field section3 offset 0xffffffff size 0x4
  static constexpr int32_t section3{ static_cast<int32_t>(0x7530) };

  /// @brief Field section4 offset 0xffffffff size 0x4
  static constexpr int32_t section4{ static_cast<int32_t>(0x9c40) };

  /// @brief Field section5 offset 0xffffffff size 0x4
  static constexpr int32_t section5{ static_cast<int32_t>(0xc350) };

  /// @brief Field section6 offset 0xffffffff size 0x4
  static constexpr int32_t section6{ static_cast<int32_t>(0xea60) };

  /// @brief Field section7 offset 0xffffffff size 0x4
  static constexpr int32_t section7{ static_cast<int32_t>(0x11170) };

  /// @brief Field section8 offset 0xffffffff size 0x4
  static constexpr int32_t section8{ static_cast<int32_t>(0x13880) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CoreUtils__Sections, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Priorities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::CoreUtils::Priorities*
class CORDL_TYPE __CoreUtils__Priorities : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUtils__Priorities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils__Priorities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreUtils__Priorities(__CoreUtils__Priorities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils__Priorities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreUtils__Priorities(__CoreUtils__Priorities const&) = delete;

  /// @brief Field assetsCreateRenderingMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateRenderingMenuPriority{ static_cast<int32_t>(0x134) };

  /// @brief Field assetsCreateShaderMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateShaderMenuPriority{ static_cast<int32_t>(0x53) };

  /// @brief Field editMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority{ static_cast<int32_t>(0x140) };

  /// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t gameObjectMenuPriority{ static_cast<int32_t>(0xa) };

  /// @brief Field srpLensFlareMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t srpLensFlareMenuPriority{ static_cast<int32_t>(0x12f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CoreUtils__Priorities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::CoreUtils::<>c*
class CORDL_TYPE __CoreUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__CoreUtils____c* __9;

  /// @brief Field <>9__81_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__81_0,
                             put = setStaticF___9__81_0))::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* __9__81_0;

  static inline ::UnityEngine::Rendering::__CoreUtils____c* New_ctor();

  /// @brief Method <GetAllAssemblyTypes>b__81_0, addr 0x17cf250, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetAllAssemblyTypes_b__81_0(::System::Reflection::Assembly* t);

  /// @brief Method .ctor, addr 0x17cf248, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__CoreUtils____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__81_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__CoreUtils____c* value);

  static inline void setStaticF___9__81_0(::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreUtils____c(__CoreUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreUtils____c(__CoreUtils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CoreUtils____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c__82`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::CoreUtils::<>c__82`1<T>*
class CORDL_TYPE __CoreUtils____c__82_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__CoreUtils____c__82_1<T>* __9;

  /// @brief Field <>9__82_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__82_0, put = setStaticF___9__82_0))::System::Func_2<::System::Type*, bool>* __9__82_0;

  static inline ::UnityEngine::Rendering::__CoreUtils____c__82_1<T>* New_ctor();

  /// @brief Method <GetAllTypesDerivedFrom>b__82_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetAllTypesDerivedFrom_b__82_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__CoreUtils____c__82_1<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__82_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__CoreUtils____c__82_1<T>* value);

  static inline void setStaticF___9__82_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUtils____c__82_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils____c__82_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreUtils____c__82_1(__CoreUtils____c__82_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUtils____c__82_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreUtils____c__82_1(__CoreUtils____c__82_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::CoreUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CoreUtils*
class CORDL_TYPE CoreUtils : public ::System::Object {
public:
  // Declarations
  using Priorities = ::UnityEngine::Rendering::__CoreUtils__Priorities;

  using Sections = ::UnityEngine::Rendering::__CoreUtils__Sections;

  using __c = ::UnityEngine::Rendering::__CoreUtils____c;

  template <typename T> using __c__82_1 = ::UnityEngine::Rendering::__CoreUtils____c__82_1<T>;

  /// @brief Field lookAtList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lookAtList, put = setStaticF_lookAtList))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> lookAtList;

  /// @brief Field m_AssemblyTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_AssemblyTypes, put = setStaticF_m_AssemblyTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* m_AssemblyTypes;

  /// @brief Field m_BlackCubeTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackCubeTexture, put = setStaticF_m_BlackCubeTexture))::UnityW<::UnityEngine::Cubemap> m_BlackCubeTexture;

  /// @brief Field m_BlackVolumeTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackVolumeTexture, put = setStaticF_m_BlackVolumeTexture))::UnityW<::UnityEngine::Texture3D> m_BlackVolumeTexture;

  /// @brief Field m_EmptyUAV, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_EmptyUAV, put = setStaticF_m_EmptyUAV))::UnityW<::UnityEngine::RenderTexture> m_EmptyUAV;

  /// @brief Field m_MagentaCubeTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaCubeTexture, put = setStaticF_m_MagentaCubeTexture))::UnityW<::UnityEngine::Cubemap> m_MagentaCubeTexture;

  /// @brief Field m_MagentaCubeTextureArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaCubeTextureArray, put = setStaticF_m_MagentaCubeTextureArray))::UnityW<::UnityEngine::CubemapArray> m_MagentaCubeTextureArray;

  /// @brief Field m_WhiteCubeTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_WhiteCubeTexture, put = setStaticF_m_WhiteCubeTexture))::UnityW<::UnityEngine::Cubemap> m_WhiteCubeTexture;

  /// @brief Field upVectorList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_upVectorList, put = setStaticF_upVectorList))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> upVectorList;

  /// @brief Method AreAnimatedMaterialsEnabled, addr 0x17cec74, size 0x8, virtual false, abstract: false, final false
  static inline bool AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera);

  /// @brief Method ArePostProcessesEnabled, addr 0x17cec6c, size 0x8, virtual false, abstract: false, final false
  static inline bool ArePostProcessesEnabled(::UnityEngine::Camera* camera);

  /// @brief Method ClearCubemap, addr 0x17cde94, size 0x1b4, virtual false, abstract: false, final false
  static inline void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor, bool clearMips);

  /// @brief Method ClearRenderTarget, addr 0x17cbe28, size 0x24, virtual false, abstract: false, final false
  static inline void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method ConvertLinearToActiveColorSpace, addr 0x17ce510, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method ConvertSRGBToActiveColorSpace, addr 0x17ce494, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method CreateCubeMesh, addr 0x17ce8c8, size 0x3a4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method CreateEngineMaterial, addr 0x17c79e8, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::UnityEngine::Shader* shader);

  /// @brief Method CreateEngineMaterial, addr 0x17ce58c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::StringW shaderPath);

  /// @brief Method Destroy, addr 0x17c7e74, size 0x88, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method DrawFullScreen, addr 0x17ce1e0, size 0x108, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x17ce104, size 0xdc, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x17ce2e8, size 0xe4, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x17ce3cc, size 0xc8, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x17ce048, size 0xbc, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawRendererList, addr 0x17ceca4, size 0x14c, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                      ::UnityEngine::Experimental::Rendering::RendererList rendererList);

  /// @brief Method DrawRendererList, addr 0x17cedf0, size 0x90, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                      ::UnityEngine::Rendering::RendererUtils::RendererList rendererList);

  /// @brief Method FixupDepthSlice, addr 0x17cbe4c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::Rendering::RTHandle* buffer);

  /// @brief Method FixupDepthSlice, addr 0x17cbe88, size 0x18, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method GetAllAssemblyTypes, addr 0x17ce728, size 0x190, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes();

  /// @brief Method GetAllTypesDerivedFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllTypesDerivedFrom();

  /// @brief Method GetCorePath, addr 0x17cf01c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetCorePath();

  /// @brief Method GetLastEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetLastEnumValue();

  /// @brief Method GetRenderTargetAutoName, addr 0x17cd4c0, size 0x250, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes);

  /// @brief Method GetRenderTargetAutoName, addr 0x17cd808, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                  ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                  bool dynamicRes);

  /// @brief Method GetRenderTargetAutoName, addr 0x17cd710, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetRenderTargetAutoName, addr 0x17cd3c8, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::StringW name, bool mips, bool enableMSAA,
                                                  ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetTextureAutoName, addr 0x17cd9f4, size 0x3b8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x17cddac, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Rendering::TextureDimension dim,
                                             ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x17cd90c, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                             int32_t depth);

  /// @brief Method GetTextureHash, addr 0x17cee80, size 0x170, virtual false, abstract: false, final false
  static inline int32_t GetTextureHash(::UnityEngine::Texture* texture);

  /// @brief Method HasFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool HasFlag(T mask, T flag);

  /// @brief Method IsLightOverlapDebugEnabled, addr 0x17cec84, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLightOverlapDebugEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneFilteringEnabled, addr 0x17cec94, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneFilteringEnabled();

  /// @brief Method IsSceneLightingDisabled, addr 0x17cec7c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneLightingDisabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewFogEnabled, addr 0x17cec8c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewFogEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewPrefabStageContextHidden, addr 0x17cec9c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewPrefabStageContextHidden();

  /// @brief Method PreviousPowerOfTwo, addr 0x17ceff0, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t PreviousPowerOfTwo(int32_t size);

  /// @brief Method SafeRelease, addr 0x17ce8b8, size 0x10, virtual false, abstract: false, final false
  static inline void SafeRelease(::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetKeyword, addr 0x17ce6c8, size 0x20, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x17ce708, size 0x20, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x17ce6e8, size 0x20, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state);

  /// @brief Method SetRenderTarget, addr 0x17ccc40, size 0x12c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17c89a4, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cbea0, size 0x110, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cbfb0, size 0xd0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cc8f8, size 0x10c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x17cc6fc, size 0xc0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x17cc608, size 0xf4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x17cce68, size 0x1a4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cd00c, size 0x108, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17ccd6c, size 0xfc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cca04, size 0x108, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x17cc7bc, size 0x13c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x17cc174, size 0x140, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cc2b4, size 0x100, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cc080, size 0xf4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x17cd114, size 0xd4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x17cd1e8, size 0xd8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x17cd2c0, size 0x108, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x17cc3b4, size 0xac, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x17cc550, size 0xb8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x17cc460, size 0xf0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetViewport, addr 0x17ccbb0, size 0x90, virtual false, abstract: false, final false
  static inline void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target);

  /// @brief Method SetViewportAndClear, addr 0x17ccb0c, size 0xa4, virtual false, abstract: false, final false
  static inline void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                         ::UnityEngine::Color clearColor);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Swap(ByRef<T> a, ByRef<T> b);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_lookAtList();

  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_m_AssemblyTypes();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_BlackCubeTexture();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackVolumeTexture();

  static inline ::UnityW<::UnityEngine::RenderTexture> getStaticF_m_EmptyUAV();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_MagentaCubeTexture();

  static inline ::UnityW<::UnityEngine::CubemapArray> getStaticF_m_MagentaCubeTextureArray();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_WhiteCubeTexture();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_upVectorList();

  /// @brief Method get_blackCubeTexture, addr 0x17cb544, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_blackCubeTexture();

  /// @brief Method get_blackVolumeTexture, addr 0x17cbcac, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> get_blackVolumeTexture();

  /// @brief Method get_emptyUAV, addr 0x17cbb7c, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_emptyUAV();

  /// @brief Method get_magentaCubeTexture, addr 0x17cb6bc, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_magentaCubeTexture();

  /// @brief Method get_magentaCubeTextureArray, addr 0x17cb834, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::CubemapArray> get_magentaCubeTextureArray();

  /// @brief Method get_whiteCubeTexture, addr 0x17cba04, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_whiteCubeTexture();

  static inline void setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  static inline void setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture> value);

  static inline void setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray> value);

  static inline void setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils(CoreUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils(CoreUtils const&) = delete;

  /// @brief Field assetCreateMenuPriority1 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority1{ static_cast<int32_t>(0xe6) };

  /// @brief Field assetCreateMenuPriority2 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority2{ static_cast<int32_t>(0xf1) };

  /// @brief Field assetCreateMenuPriority3 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority3{ static_cast<int32_t>(0x12c) };

  /// @brief Field editMenuPriority1 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority1{ static_cast<int32_t>(0x140) };

  /// @brief Field editMenuPriority2 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority2{ static_cast<int32_t>(0x14b) };

  /// @brief Field editMenuPriority3 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority3{ static_cast<int32_t>(0x156) };

  /// @brief Field editMenuPriority4 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority4{ static_cast<int32_t>(0x161) };

  /// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t gameObjectMenuPriority{ static_cast<int32_t>(0xa) };

  /// @brief Field obsoletePriorityMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString obsoletePriorityMessage{ u"Use CoreUtils.Priorities instead" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils*, "UnityEngine.Rendering", "CoreUtils");
NEED_NO_BOX(::UnityEngine::Rendering::__CoreUtils__Priorities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CoreUtils__Priorities*, "UnityEngine.Rendering", "CoreUtils/Priorities");
NEED_NO_BOX(::UnityEngine::Rendering::__CoreUtils__Sections);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CoreUtils__Sections*, "UnityEngine.Rendering", "CoreUtils/Sections");
NEED_NO_BOX(::UnityEngine::Rendering::__CoreUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CoreUtils____c*, "UnityEngine.Rendering", "CoreUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__CoreUtils____c__82_1, "UnityEngine.Rendering", "CoreUtils/<>c__82`1");
