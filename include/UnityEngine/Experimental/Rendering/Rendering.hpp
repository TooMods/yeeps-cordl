#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Experimental/Rendering/BuiltinRuntimeReflectionSystem.hpp"
#include "UnityEngine/Experimental/Rendering/DebugProbeShadingMode.hpp"
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
#include "UnityEngine/Experimental/Rendering/FormatUsage.hpp"
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
#include "UnityEngine/Experimental/Rendering/GraphicsFormatUtility.hpp"
#include "UnityEngine/Experimental/Rendering/IScriptableRuntimeReflectionSystem.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeBrickIndex.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeBrickPool.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeCellIndices.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeDilationSettings.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeReferenceVolume.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeReferenceVolumeProfile.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolume.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeAsset.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeBakingProcessSettings.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeDebug.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumePerSceneData.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeSHBands.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeSceneData.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeShadingParameters.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeState.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeSystemParameters.hpp"
#include "UnityEngine/Experimental/Rendering/ProbeVolumeTextureMemoryBudget.hpp"
#include "UnityEngine/Experimental/Rendering/RendererList.hpp"
#include "UnityEngine/Experimental/Rendering/RendererListDesc.hpp"
#include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemSettings.hpp"
#include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemWrapper.hpp"
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
#include "UnityEngine/Experimental/Rendering/VirtualOffsetSettings.hpp"
#ifdef __cpp_modules
export module Rendering;
#endif
