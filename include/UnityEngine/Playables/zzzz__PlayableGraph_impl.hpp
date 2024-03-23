#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
// Ctor Parameters [CppParam { name: "m_Handle", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph(void* m_Handle, uint32_t m_Version) noexcept {
  this->m_Handle = m_Handle;
  this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph() {}
