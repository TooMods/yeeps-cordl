#pragma once
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourVertex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ad3620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty:
// "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex::ContourVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 Position, ::System::Object* Data) noexcept {
  this->Position = Position;
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex::ContourVertex() {}
