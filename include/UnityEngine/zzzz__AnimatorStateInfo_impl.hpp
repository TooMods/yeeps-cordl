#pragma once
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo(int32_t m_Name, int32_t m_Path, int32_t m_FullPath, float_t m_NormalizedTime, float_t m_Length, float_t m_Speed,
                                                              float_t m_SpeedMultiplier, int32_t m_Tag, int32_t m_Loop) noexcept {
  this->m_Name = m_Name;
  this->m_Path = m_Path;
  this->m_FullPath = m_FullPath;
  this->m_NormalizedTime = m_NormalizedTime;
  this->m_Length = m_Length;
  this->m_Speed = m_Speed;
  this->m_SpeedMultiplier = m_SpeedMultiplier;
  this->m_Tag = m_Tag;
  this->m_Loop = m_Loop;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo() {}
