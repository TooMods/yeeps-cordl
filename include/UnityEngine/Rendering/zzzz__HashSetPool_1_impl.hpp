#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HashSetPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__HashSetPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::__HashSetPool_1____c<T>::setStaticF___9(::UnityEngine::Rendering::__HashSetPool_1____c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::__HashSetPool_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>::get>(
      std::forward<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::__HashSetPool_1____c<T>* UnityEngine::Rendering::__HashSetPool_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::__HashSetPool_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>::get>();
}
template <typename T> inline ::UnityEngine::Rendering::__HashSetPool_1____c<T>* UnityEngine::Rendering::__HashSetPool_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>());
}
template <typename T> inline void UnityEngine::Rendering::__HashSetPool_1____c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::__HashSetPool_1____c<T>::__cctor_b__4_0(::System::Collections::Generic::HashSet_1<T>* l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__HashSetPool_1____c<T>*>::get(), "<.cctor>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::__HashSetPool_1____c<T>::__HashSetPool_1____c() {}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1<T>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*, "s_Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HashSetPool_1<T>*>::get>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* UnityEngine::Rendering::HashSetPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HashSetPool_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* UnityEngine::Rendering::HashSetPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HashSetPool_1<T>*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::__ObjectPool_1__PooledObject<::System::Collections::Generic::HashSet_1<T>*>
UnityEngine::Rendering::HashSetPool_1<T>::Get(ByRef<::System::Collections::Generic::HashSet_1<T>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HashSetPool_1<T>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::HashSet_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__ObjectPool_1__PooledObject<::System::Collections::Generic::HashSet_1<T>*>, false>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1<T>::Release(::System::Collections::Generic::HashSet_1<T>* toRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HashSetPool_1<T>*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::HashSetPool_1<T>::HashSetPool_1() {}
