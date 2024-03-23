#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MyIntersectNodeSort_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntersectNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MyIntersectNodeSort.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::MyIntersectNodeSort::*)(
    ::UnityEngine::Rendering::Universal::IntersectNode*, ::UnityEngine::Rendering::Universal::IntersectNode*)>(&::UnityEngine::Rendering::Universal::MyIntersectNodeSort::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1e22114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MyIntersectNodeSort*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MyIntersectNodeSort._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MyIntersectNodeSort::*)()>(
    &::UnityEngine::Rendering::Universal::MyIntersectNodeSort::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e2214c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MyIntersectNodeSort*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>"
constexpr UnityEngine::Rendering::Universal::MyIntersectNodeSort::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*
UnityEngine::Rendering::Universal::MyIntersectNodeSort::i___System__Collections__Generic__IComparer_1___UnityEngine__Rendering__Universal__IntersectNode__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::Rendering::Universal::MyIntersectNodeSort::Compare(::UnityEngine::Rendering::Universal::IntersectNode* node1, ::UnityEngine::Rendering::Universal::IntersectNode* node2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MyIntersectNodeSort*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, node1, node2);
}
inline ::UnityEngine::Rendering::Universal::MyIntersectNodeSort* UnityEngine::Rendering::Universal::MyIntersectNodeSort::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MyIntersectNodeSort*>());
}
inline void UnityEngine::Rendering::Universal::MyIntersectNodeSort::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MyIntersectNodeSort*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MyIntersectNodeSort::MyIntersectNodeSort() {}
