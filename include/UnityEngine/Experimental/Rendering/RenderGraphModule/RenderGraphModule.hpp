#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/ComputeBufferDesc.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/ComputeBufferHandle.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/ComputeBufferPool.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/ComputeBufferResource.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/DepthAccess.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/FastMemoryDesc.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/IRenderGraphResource.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/IRenderGraphResourcePool.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderFunc_1.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraph.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphBuilder.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphContext.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphDebugData.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphDebugParams.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphDefaultResources.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphExecution.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphLogIndent.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphLogger.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphObjectPool.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphParameters.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphPass.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphPass_1.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphProfileId.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphProfilingScope.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourcePool_1.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceRegistry.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceType.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource_2.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RendererListHandle.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RendererListResource.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/ResourceHandle.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TexturePool.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureResource.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureSizeMode.hpp"
#ifdef __cpp_modules
export module RenderGraphModule;
#endif
