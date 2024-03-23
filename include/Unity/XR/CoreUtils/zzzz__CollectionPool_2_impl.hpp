#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CollectionPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template <typename TCollection, typename TValue>
inline void Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>::setStaticF_k_CollectionQueue(::System::Collections::Generic::Queue_1<TCollection>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<TCollection>*, "k_CollectionQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>*>::get>(
      std::forward<::System::Collections::Generic::Queue_1<TCollection>*>(value));
}
template <typename TCollection, typename TValue>
inline ::System::Collections::Generic::Queue_1<TCollection>* Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>::getStaticF_k_CollectionQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<TCollection>*, "k_CollectionQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>*>::get>();
}
template <typename TCollection, typename TValue> inline TCollection Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>::GetCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>*>::get(), "GetCollection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TCollection, false>(nullptr, ___internal_method);
}
template <typename TCollection, typename TValue> inline void Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>::RecycleCollection(TCollection collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>*>::get(), "RecycleCollection",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCollection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
template <typename TCollection, typename TValue> constexpr ::Unity::XR::CoreUtils::CollectionPool_2<TCollection, TValue>::CollectionPool_2() {}
