#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRHoverFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRInteractionStrengthFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRSelectFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRTargetEvaluatorLinkable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRTargetFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeAxis.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeStateData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdDatum.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdDatumProperty.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRAngleGazeEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRBaseTargetFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRDistanceEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRHoverFilterDelegate.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRInteractionStrengthFilterDelegate.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRLastSelectedEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeLogic.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRSelectFilterDelegate.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetEvaluatorEnabledAttribute.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetFilter.hpp"
#ifdef __cpp_modules
export module Filtering;
#endif
