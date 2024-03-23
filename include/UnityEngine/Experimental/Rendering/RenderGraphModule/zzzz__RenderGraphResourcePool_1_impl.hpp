#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
template <typename Type>
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>::__RenderGraphResourcePool_1__ResourceLogInfo(::StringW name,
                                                                                                                                                                      int64_t size) noexcept {
  this->name = name;
  this->size = size;
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>::__RenderGraphResourcePool_1__ResourceLogInfo() {}
template <typename Type>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::setStaticF___9(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>(value));
}
template <typename Type>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get>();
}
template <typename Type>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::setStaticF___9__17_0(
    ::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>*>(value));
}
template <typename Type>
inline ::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<
      ::System::Comparison_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>*, "<>9__17_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get>();
}
template <typename Type>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>());
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type>
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::_LogResources_b__17_0(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type> a,
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>*>::get(), "<LogResources>b__17_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1__ResourceLogInfo<Type>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourcePool_1____c<Type>::__RenderGraphResourcePool_1____c() {}
template <typename Type>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_ResourcePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
template <typename Type>
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_ResourcePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
template <typename Type>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_set_m_ResourcePool(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourcePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_RemoveList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveList;
}
template <typename Type>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_RemoveList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveList;
}
template <typename Type>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_set_m_RemoveList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoveList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_FrameAllocatedResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameAllocatedResources;
}
template <typename Type>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_FrameAllocatedResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameAllocatedResources;
}
template <typename Type>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_set_m_FrameAllocatedResources(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FrameAllocatedResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::setStaticF_s_CurrentFrameIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentFrameIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get>(
      std::forward<int32_t>(value));
}
template <typename Type> inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::getStaticF_s_CurrentFrameIndex() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentFrameIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get>();
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ReleaseInternalResource(Type res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
template <typename Type> inline ::StringW UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceName(Type res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, res);
}
template <typename Type> inline int64_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceSize(Type res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, res);
}
template <typename Type> inline ::StringW UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceTypeName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename Type> inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetSortIndex(Type res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, res);
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ReleaseResource(int32_t hash, Type resource, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), "ReleaseResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Type>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, resource, currentFrameIndex);
}
template <typename Type> inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::TryGetResource(int32_t hashCode, ByRef<Type> resource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), "TryGetResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Type>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hashCode, resource);
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::Cleanup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::RegisterFrameAllocation(int32_t hash, Type value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), "RegisterFrameAllocation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, value);
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::UnregisterFrameAllocation(int32_t hash, Type value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), "UnregisterFrameAllocation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, value);
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::CheckFrameAllocation(bool onException, int32_t frameIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onException, frameIndex);
}
template <typename Type>
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::LogResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
template <typename Type>
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ShouldReleaseResource(int32_t lastUsedFrameIndex, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), "ShouldReleaseResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lastUsedFrameIndex, currentFrameIndex);
}
template <typename Type>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>());
}
template <typename Type> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::RenderGraphResourcePool_1() {}
