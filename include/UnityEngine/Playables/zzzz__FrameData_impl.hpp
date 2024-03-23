#pragma once
#include "UnityEngine/Playables/zzzz__FrameData_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::__FrameData__Flags::__FrameData__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::__FrameData__Flags::__FrameData__Flags() {}
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::Evaluate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::SeekOccured{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::Loop{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::Hold{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::EffectivePlayStateDelayed{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Playables::__FrameData__Flags UnityEngine::Playables::__FrameData__Flags::EffectivePlayStatePlaying{ static_cast<int32_t>(0x20) };
// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::__FrameData__Flags", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData::FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay,
                                                         float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed, ::UnityEngine::Playables::__FrameData__Flags m_Flags,
                                                         ::UnityEngine::Playables::PlayableOutput m_Output) noexcept {
  this->m_FrameID = m_FrameID;
  this->m_DeltaTime = m_DeltaTime;
  this->m_Weight = m_Weight;
  this->m_EffectiveWeight = m_EffectiveWeight;
  this->m_EffectiveParentDelay = m_EffectiveParentDelay;
  this->m_EffectiveParentSpeed = m_EffectiveParentSpeed;
  this->m_EffectiveSpeed = m_EffectiveSpeed;
  this->m_Flags = m_Flags;
  this->m_Output = m_Output;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData::FrameData() {}
