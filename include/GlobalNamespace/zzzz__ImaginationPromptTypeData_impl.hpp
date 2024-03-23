#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ImaginationPromptTypeData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "autoDismiss", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoDismissDelay", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::ImaginationPromptTypeData::ImaginationPromptTypeData(::UnityEngine::Color color, ::UnityW<::UnityEngine::Sprite> icon, bool autoDismiss,
                                                                                  float_t autoDismissDelay) noexcept {
  this->color = color;
  this->icon = icon;
  this->autoDismiss = autoDismiss;
  this->autoDismissDelay = autoDismissDelay;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImaginationPromptTypeData::ImaginationPromptTypeData() {}
