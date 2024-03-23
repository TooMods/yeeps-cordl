#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
namespace UnityEngine::Rendering {
struct GraphicsFence;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct SinglePassStereoMode;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
namespace UnityEngine::Rendering {
struct SynchronisationStage;
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
struct CubemapFace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Renderer;
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
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBuffer);
// Type: UnityEngine.Rendering::CommandBuffer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CommandBuffer*
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(put = set_name))::StringW name;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginSample, addr 0x2a8cbc0, size 0x44, virtual false, abstract: false, final false
  inline void BeginSample(::StringW name);

  /// @brief Method BeginSample, addr 0x2a8cc48, size 0x44, virtual false, abstract: false, final false
  inline void BeginSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BeginSample_CustomSampler, addr 0x2a8cc8c, size 0x44, virtual false, abstract: false, final false
  inline void BeginSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method Blit, addr 0x2a8efbc, size 0x90, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit, addr 0x2a8f04c, size 0x9c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit, addr 0x2a8ef2c, size 0x90, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit_Identifier, addr 0x2a8bf60, size 0xa0, virtual false, abstract: false, final false
  inline void Blit_Identifier(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass,
                              ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Identifier_Injected, addr 0x2a8c000, size 0x9c, virtual false, abstract: false, final false
  inline void Blit_Identifier_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat,
                                       int32_t pass, ByRef<::UnityEngine::Vector2> scale, ByRef<::UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Texture, addr 0x2a8be24, size 0xa0, virtual false, abstract: false, final false
  inline void Blit_Texture(::UnityEngine::Texture* source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass, ::UnityEngine::Vector2 scale,
                           ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Texture_Injected, addr 0x2a8bec4, size 0x9c, virtual false, abstract: false, final false
  inline void Blit_Texture_Injected(::UnityEngine::Texture* source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass,
                                    ByRef<::UnityEngine::Vector2> scale, ByRef<::UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Clear, addr 0x2a8b83c, size 0x3c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearRenderTarget, addr 0x2a8c36c, size 0xac, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method ClearRenderTarget, addr 0x2a8c284, size 0x7c, virtual false, abstract: false, final false
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget_Injected, addr 0x2a8c300, size 0x6c, virtual false, abstract: false, final false
  inline void ClearRenderTarget_Injected(::UnityEngine::Rendering::RTClearFlags clearFlags, ByRef<::UnityEngine::Color> backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method CreateAsyncGraphicsFence, addr 0x2a8df5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence();

  /// @brief Method CreateGPUFence_Internal, addr 0x2a8b5a8, size 0x54, virtual false, abstract: false, final false
  inline void* CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method CreateGraphicsFence, addr 0x2a8df68, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method DisableScissorRect, addr 0x2a8bde8, size 0x3c, virtual false, abstract: false, final false
  inline void DisableScissorRect();

  /// @brief Method DisableShaderKeyword, addr 0x2a8c7b4, size 0x44, virtual false, abstract: false, final false
  inline void DisableShaderKeyword(::StringW keyword);

  /// @brief Method DispatchCompute, addr 0x2a8e3e4, size 0x74, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method Dispose, addr 0x2a8deb0, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a8de38, size 0x78, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawMesh, addr 0x2a8e740, size 0x38, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material);

  /// @brief Method DrawMesh, addr 0x2a8e70c, size 0x34, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawMesh, addr 0x2a8e6dc, size 0x30, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawMesh, addr 0x2a8e458, size 0x284, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                       ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstanced, addr 0x2a8eb80, size 0x3a8, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawOcclusionMesh, addr 0x2a8ef28, size 0x4, virtual false, abstract: false, final false
  inline void DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method DrawProcedural, addr 0x2a8eb4c, size 0x34, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount);

  /// @brief Method DrawProcedural, addr 0x2a8eb1c, size 0x30, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x2a8e9a4, size 0x178, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount,
                             ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawRenderer, addr 0x2a8e994, size 0xc, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// @brief Method DrawRenderer, addr 0x2a8e98c, size 0x8, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawRenderer, addr 0x2a8e778, size 0x214, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawRendererList, addr 0x2a8e9a0, size 0x4, virtual false, abstract: false, final false
  inline void DrawRendererList(::UnityEngine::Rendering::RendererUtils::RendererList rendererList);

  /// @brief Method EnableScissorRect, addr 0x2a8bd50, size 0x54, virtual false, abstract: false, final false
  inline void EnableScissorRect(::UnityEngine::Rect scissor);

  /// @brief Method EnableScissorRect_Injected, addr 0x2a8bda4, size 0x44, virtual false, abstract: false, final false
  inline void EnableScissorRect_Injected(ByRef<::UnityEngine::Rect> scissor);

  /// @brief Method EnableShaderKeyword, addr 0x2a8c770, size 0x44, virtual false, abstract: false, final false
  inline void EnableShaderKeyword(::StringW keyword);

  /// @brief Method EndSample, addr 0x2a8cc04, size 0x44, virtual false, abstract: false, final false
  inline void EndSample(::StringW name);

  /// @brief Method EndSample, addr 0x2a8ccd0, size 0x44, virtual false, abstract: false, final false
  inline void EndSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method EndSample_CustomSampler, addr 0x2a8cd14, size 0x44, virtual false, abstract: false, final false
  inline void EndSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method Finalize, addr 0x2a8dda0, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetTemporaryRT, addr 0x2a8c1d0, size 0x70, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporaryRT, addr 0x2a8c154, size 0x7c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRTWithDescriptor, addr 0x2a8c09c, size 0x5c, virtual false, abstract: false, final false
  inline void GetTemporaryRTWithDescriptor(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRTWithDescriptor_Injected, addr 0x2a8c0f8, size 0x5c, virtual false, abstract: false, final false
  inline void GetTemporaryRTWithDescriptor_Injected(int32_t nameID, ByRef<::UnityEngine::RenderTextureDescriptor> desc, ::UnityEngine::FilterMode filter);

  /// @brief Method InitBuffer, addr 0x2a8b580, size 0x28, virtual false, abstract: false, final false
  static inline void* InitBuffer();

  /// @brief Method InternalSetComputeBufferData, addr 0x2a8dd1c, size 0x84, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                           int32_t elemSize);

  /// @brief Method Internal_DispatchCompute, addr 0x2a8b784, size 0x74, virtual false, abstract: false, final false
  inline void Internal_DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method Internal_DrawMesh, addr 0x2a8b878, size 0x84, virtual false, abstract: false, final false
  inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstanced, addr 0x2a8bb98, size 0x8c, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                         ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x2a8b8fc, size 0x84, virtual false, abstract: false, final false
  inline void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                         ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawOcclusionMesh, addr 0x2a8bc24, size 0x50, virtual false, abstract: false, final false
  inline void Internal_DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method Internal_DrawOcclusionMesh_Injected, addr 0x2a8bc74, size 0x44, virtual false, abstract: false, final false
  inline void Internal_DrawOcclusionMesh_Injected(ByRef<::UnityEngine::RectInt> normalizedCamViewport);

  /// @brief Method Internal_DrawProcedural, addr 0x2a8ba80, size 0x8c, virtual false, abstract: false, final false
  inline void Internal_DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount,
                                      int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProcedural_Injected, addr 0x2a8bb0c, size 0x8c, virtual false, abstract: false, final false
  inline void Internal_DrawProcedural_Injected(ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount,
                                               int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawRenderer, addr 0x2a8b980, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method Internal_DrawRendererList, addr 0x2a8b9ec, size 0x50, virtual false, abstract: false, final false
  inline void Internal_DrawRendererList(::UnityEngine::Rendering::RendererUtils::RendererList rendererList);

  /// @brief Method Internal_DrawRendererList_Injected, addr 0x2a8ba3c, size 0x44, virtual false, abstract: false, final false
  inline void Internal_DrawRendererList_Injected(ByRef<::UnityEngine::Rendering::RendererUtils::RendererList> rendererList);

  /// @brief Method Internal_SetComputeConstantComputeBufferParam, addr 0x2a8b710, size 0x74, virtual false, abstract: false, final false
  inline void Internal_SetComputeConstantComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method Internal_SetComputeTextureParam, addr 0x2a8b68c, size 0x84, virtual false, abstract: false, final false
  inline void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                              int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method Internal_SetSinglePassStereo, addr 0x2a8b53c, size 0x44, virtual false, abstract: false, final false
  inline void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x2a8ca78, size 0x54, virtual false, abstract: false, final false
  inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor();

  /// @brief Method ReleaseBuffer, addr 0x2a8b650, size 0x3c, virtual false, abstract: false, final false
  inline void ReleaseBuffer();

  /// @brief Method ReleaseTemporaryRT, addr 0x2a8c240, size 0x44, virtual false, abstract: false, final false
  inline void ReleaseTemporaryRT(int32_t nameID);

  /// @brief Method SetBufferData, addr 0x2a8dba4, size 0x178, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data);

  /// @brief Method SetComputeConstantBufferParam, addr 0x2a8e370, size 0x74, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeTextureParam, addr 0x2a8e2f0, size 0x80, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetExecutionFlags, addr 0x2a8c8f4, size 0x44, virtual false, abstract: false, final false
  inline void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags flags);

  /// @brief Method SetGlobalBuffer, addr 0x2a8f328, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferInternal, addr 0x2a8cb6c, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalBufferInternal(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalColor, addr 0x2a8c618, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor_Injected, addr 0x2a8c674, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalColor_Injected(int32_t nameID, ByRef<::UnityEngine::Color> value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2a8f3e8, size 0x78, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x2a8f37c, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferInternal, addr 0x2a8cd58, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalDepthBias, addr 0x2a8c8a0, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalDepthBias(float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalFloat, addr 0x2a8f0e8, size 0x60, virtual false, abstract: false, final false
  inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x2a8c46c, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x2a8c938, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalInt, addr 0x2a8c4c0, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x2a8f148, size 0x60, virtual false, abstract: false, final false
  inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x2a8c514, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x2a8c6c8, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x2a8c9e0, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrix_Injected, addr 0x2a8c71c, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalMatrix_Injected(int32_t nameID, ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalTexture, addr 0x2a8f1fc, size 0x78, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x2a8f2d0, size 0x58, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x2a8f274, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture_Impl, addr 0x2a8cb10, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalTexture_Impl(int32_t nameID, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x2a8f1a8, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x2a8c568, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x2a8c98c, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVector_Injected, addr 0x2a8c5c4, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVector_Injected(int32_t nameID, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetInstanceMultiplier, addr 0x2a8cdc4, size 0x44, virtual false, abstract: false, final false
  inline void SetInstanceMultiplier(uint32_t multiplier);

  /// @brief Method SetLateLatchProjectionMatrices, addr 0x2a8ca34, size 0x44, virtual false, abstract: false, final false
  inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projectionMat);

  /// @brief Method SetRenderTarget, addr 0x2a8d640, size 0x140, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x2a8d420, size 0x194, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                              int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x2a8d780, size 0x1dc, virtual false, abstract: false, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x2a8ce08, size 0xa0, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x2a8d020, size 0x11c, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x2a8cf1c, size 0x104, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method SetRenderTarget, addr 0x2a8d13c, size 0x140, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x2a8d2a8, size 0x178, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepth_Internal, addr 0x2a8d5b4, size 0x8c, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                 ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetColorDepth_Internal_Injected, addr 0x2a8da74, size 0x8c, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepth_Internal_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> color, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth,
                                                          ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                          ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                          ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetMultiSubtarget, addr 0x2a8d95c, size 0xa4, virtual false, abstract: false, final false
  inline void SetRenderTargetMultiSubtarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                            ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoadActions,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions,
                                            ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel,
                                            ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetMultiSubtarget_Injected, addr 0x2a8db00, size 0xa4, virtual false, abstract: false, final false
  inline void SetRenderTargetMultiSubtarget_Injected(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                                     ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth,
                                                     ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoadActions,
                                                     ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions,
                                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                     int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetSingle_Internal, addr 0x2a8cea8, size 0x74, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0x2a8da00, size 0x74, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                      ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                      ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetSinglePassStereo, addr 0x2a8f460, size 0x44, virtual false, abstract: false, final false
  inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method SetViewProjectionMatrices, addr 0x2a8c7f8, size 0x54, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewProjectionMatrices_Injected, addr 0x2a8c84c, size 0x54, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices_Injected(ByRef<::UnityEngine::Matrix4x4> view, ByRef<::UnityEngine::Matrix4x4> proj);

  /// @brief Method SetViewport, addr 0x2a8bcb8, size 0x54, virtual false, abstract: false, final false
  inline void SetViewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetViewport_Injected, addr 0x2a8bd0c, size 0x44, virtual false, abstract: false, final false
  inline void SetViewport_Injected(ByRef<::UnityEngine::Rect> pixelRect);

  /// @brief Method UnmarkLateLatchMatrix, addr 0x2a8cacc, size 0x44, virtual false, abstract: false, final false
  inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method ValidateAgainstExecutionFlags, addr 0x2a8c418, size 0x54, virtual false, abstract: false, final false
  inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x2a8e150, size 0x8, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x2a8e158, size 0x10, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStage stage);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x2a8e178, size 0xdc, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method WaitOnGPUFence_Internal, addr 0x2a8b5fc, size 0x54, virtual false, abstract: false, final false
  inline void WaitOnGPUFence_Internal(void* fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x2a8df14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_name, addr 0x2a8b7f8, size 0x44, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBuffer(CommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBuffer(CommandBuffer const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
