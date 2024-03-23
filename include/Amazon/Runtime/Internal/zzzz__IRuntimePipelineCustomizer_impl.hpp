#pragma once
#include "Amazon/Runtime/Internal/zzzz__IRuntimePipelineCustomizer_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipeline_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer.get_UniqueName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::IRuntimePipelineCustomizer::*)()>(
    &::Amazon::Runtime::Internal::IRuntimePipelineCustomizer::get_UniqueName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer.Customize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::IRuntimePipelineCustomizer::*)(
    ::System::Type*, ::Amazon::Runtime::Internal::RuntimePipeline*)>(&::Amazon::Runtime::Internal::IRuntimePipelineCustomizer::Customize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(), 1));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Runtime::Internal::IRuntimePipelineCustomizer::get_UniqueName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::IRuntimePipelineCustomizer::Customize(::System::Type* type, ::Amazon::Runtime::Internal::RuntimePipeline* pipeline) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, pipeline);
}
