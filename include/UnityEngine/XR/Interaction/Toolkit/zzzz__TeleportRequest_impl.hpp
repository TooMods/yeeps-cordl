#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "destinationPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "destinationRotation", ty:
// "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchOrientation", ty:
// "::UnityEngine::XR::Interaction::Toolkit::MatchOrientation", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest::TeleportRequest(::UnityEngine::Vector3 destinationPosition, ::UnityEngine::Quaternion destinationRotation, float_t requestTime,
                                                                                    ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation) noexcept {
  this->destinationPosition = destinationPosition;
  this->destinationRotation = destinationRotation;
  this->requestTime = requestTime;
  this->matchOrientation = matchOrientation;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest::TeleportRequest() {}
