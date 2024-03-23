#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDebugData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDebugData_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "resourceReadLists", ty:
// "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "resourceWriteLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "culled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData::__RenderGraphDebugData__PassDebugData(
    ::StringW name, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReadLists,
    ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceWriteLists, bool culled, bool generateDebugData) noexcept {
  this->name = name;
  this->resourceReadLists = resourceReadLists;
  this->resourceWriteLists = resourceWriteLists;
  this->culled = culled;
  this->generateDebugData = generateDebugData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData::__RenderGraphDebugData__PassDebugData() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "creationPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "consumerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "producerList", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData::__RenderGraphDebugData__ResourceDebugData(
    ::StringW name, bool imported, int32_t creationPassIndex, int32_t releasePassIndex, ::System::Collections::Generic::List_1<int32_t>* consumerList,
    ::System::Collections::Generic::List_1<int32_t>* producerList) noexcept {
  this->name = name;
  this->imported = imported;
  this->creationPassIndex = creationPassIndex;
  this->releasePassIndex = releasePassIndex;
  this->consumerList = consumerList;
  this->producerList = producerList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData::__RenderGraphDebugData__ResourceDebugData() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::Clear)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x23cb9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>::get(),
                                                 "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23cbb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_get_passList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_get_passList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passList;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_set_passList(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_get_resourceLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_get_resourceLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceLists;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::__cordl_internal_set_resourceLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData::RenderGraphDebugData() {}
