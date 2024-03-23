#pragma once
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRViewCreateInfo_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
// Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::XRViewCreateInfo::XRViewCreateInfo(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Rect viewport,
                                                                                  int32_t textureArraySlice) noexcept {
  this->projMatrix = projMatrix;
  this->viewMatrix = viewMatrix;
  this->viewport = viewport;
  this->textureArraySlice = textureArraySlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRViewCreateInfo::XRViewCreateInfo() {}
