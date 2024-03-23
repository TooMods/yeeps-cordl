#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CachedComponentFilter_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__CachedSearchType_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__IComponentHost_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename TFilterType, typename TRootType> constexpr Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TFilterType, typename TRootType> constexpr ::System::IDisposable* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TFilterType, typename TRootType>
constexpr ::System::Collections::Generic::List_1<TFilterType>*& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_get_m_MasterComponentStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MasterComponentStorage;
}
template <typename TFilterType, typename TRootType>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TFilterType>*> const&
Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_get_m_MasterComponentStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MasterComponentStorage;
}
template <typename TFilterType, typename TRootType>
constexpr void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_set_m_MasterComponentStorage(::System::Collections::Generic::List_1<TFilterType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MasterComponentStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TFilterType, typename TRootType> constexpr bool& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_get_m_DisposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
template <typename TFilterType, typename TRootType> constexpr bool const& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_get_m_DisposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
template <typename TFilterType, typename TRootType> constexpr void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::__cordl_internal_set_m_DisposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisposedValue = value;
}
template <typename TFilterType, typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::setStaticF_k_TempComponentList(::System::Collections::Generic::List_1<TFilterType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<TFilterType>*, "k_TempComponentList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get>(
      std::forward<::System::Collections::Generic::List_1<TFilterType>*>(value));
}
template <typename TFilterType, typename TRootType>
inline ::System::Collections::Generic::List_1<TFilterType>* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::getStaticF_k_TempComponentList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<TFilterType>*, "k_TempComponentList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get>();
}
template <typename TFilterType, typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::setStaticF_k_TempHostComponentList(
    ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*, "k_TempHostComponentList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*>(value));
}
template <typename TFilterType, typename TRootType>
inline ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*
Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::getStaticF_k_TempHostComponentList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*, "k_TempHostComponentList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get>();
}
/// @param cachedSearchType: ::Unity::XR::CoreUtils::CachedSearchType (default: static_cast<int32_t>(0x3))
/// @param includeDisabled: bool (default: true)
template <typename TFilterType, typename TRootType>
inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*
Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::New_ctor(TRootType componentRoot, ::Unity::XR::CoreUtils::CachedSearchType cachedSearchType, bool includeDisabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>(componentRoot, cachedSearchType, includeDisabled));
}
/// @param cachedSearchType: ::Unity::XR::CoreUtils::CachedSearchType (default: static_cast<int32_t>(0x3))
/// @param includeDisabled: bool (default: true)
template <typename TFilterType, typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::_ctor(TRootType componentRoot, ::Unity::XR::CoreUtils::CachedSearchType cachedSearchType, bool includeDisabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRootType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::CachedSearchType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentRoot, cachedSearchType, includeDisabled);
}
/// @param includeDisabled: bool (default: true)
template <typename TFilterType, typename TRootType>
inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*
Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::New_ctor(::ArrayW<TFilterType, ::Array<TFilterType>*> componentList, bool includeDisabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>(componentList, includeDisabled));
}
/// @param includeDisabled: bool (default: true)
template <typename TFilterType, typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::_ctor(::ArrayW<TFilterType, ::Array<TFilterType>*> componentList, bool includeDisabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFilterType, ::Array<TFilterType>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentList, includeDisabled);
}
template <typename TFilterType, typename TRootType>
template <typename TChildType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::StoreMatchingComponents(::System::Collections::Generic::List_1<TChildType>* outputList) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), "StoreMatchingComponents",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TChildType>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TChildType>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TChildType>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputList);
}
template <typename TFilterType, typename TRootType>
template <typename TChildType>
inline ::ArrayW<TChildType, ::Array<TChildType>*> Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::GetMatchingComponents() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), "GetMatchingComponents",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TChildType>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TChildType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TChildType, ::Array<TChildType>*>, false>(this, ___internal_method);
}
template <typename TFilterType, typename TRootType> inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::FilteredCopyToMaster(bool includeDisabled) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), "FilteredCopyToMaster",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, includeDisabled);
}
template <typename TFilterType, typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::FilteredCopyToMaster(bool includeDisabled, TRootType requiredRoot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), "FilteredCopyToMaster",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRootType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, includeDisabled, requiredRoot);
}
template <typename TFilterType, typename TRootType> inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TFilterType, typename TRootType> inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TFilterType, typename TRootType> constexpr ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType, TRootType>::CachedComponentFilter_2() {}
