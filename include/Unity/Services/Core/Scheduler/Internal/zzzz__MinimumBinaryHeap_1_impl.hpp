#pragma once
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_1_def.hpp"
// Ctor Parameters [CppParam { name: "smallest", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__4__this", ty: "::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>::__MinimumBinaryHeap_1____c__DisplayClass21_0(
    int32_t smallest, int32_t currentIndex, ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>* __4__this) noexcept {
  this->smallest = smallest;
  this->currentIndex = currentIndex;
  this->__4__this = __4__this;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>::__MinimumBinaryHeap_1____c__DisplayClass21_0() {}
template <typename T> constexpr ::System::Object*& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_Lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lock;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_Lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lock;
}
template <typename T> constexpr void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_set_m_Lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>*& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_Comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Comparer;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<T>*> const&
Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_Comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Comparer;
}
template <typename T> constexpr void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_set_m_Comparer(::System::Collections::Generic::IComparer_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_MinimumCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumCapacity;
}
template <typename T> constexpr int32_t const& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_MinimumCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimumCapacity;
}
template <typename T> constexpr void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_set_m_MinimumCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinimumCapacity = value;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_HeapArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeapArray;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get_m_HeapArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeapArray;
}
template <typename T> constexpr void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_set_m_HeapArray(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeapArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get__Count_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename T> constexpr int32_t const& Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_get__Count_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Count_k__BackingField = value;
}
template <typename T> inline int32_t Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "set_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::get_Min() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "get_Min",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
/// @param minimumCapacity: int32_t (default: static_cast<int32_t>(0xa))
template <typename T>
inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*
Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer, int32_t minimumCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>(comparer, minimumCapacity));
}
/// @param minimumCapacity: int32_t (default: static_cast<int32_t>(0xa))
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>* comparer, int32_t minimumCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer, minimumCapacity);
}
/// @param minimumCapacity: int32_t (default: static_cast<int32_t>(0xa))
template <typename T>
inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*
Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::New_ctor(::System::Collections::Generic::ICollection_1<T>* collection, ::System::Collections::Generic::IComparer_1<T>* comparer,
                                                                             int32_t minimumCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>(collection, comparer, minimumCapacity));
}
/// @param minimumCapacity: int32_t (default: static_cast<int32_t>(0xa))
template <typename T>
inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::_ctor(::System::Collections::Generic::ICollection_1<T>* collection,
                                                                                      ::System::Collections::Generic::IComparer_1<T>* comparer, int32_t minimumCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, comparer, minimumCapacity);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::Insert(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "Insert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::IncreaseHeapCapacityWhenFull() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(),
                                               "IncreaseHeapCapacityWhenFull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "IndexOf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline T Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::ExtractMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "ExtractMin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::DecreaseHeapCapacityWhenSpare() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(),
                                               "DecreaseHeapCapacityWhenSpare", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::MinHeapify() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "MinHeapify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::Swap(ByRef<T> lhs, ByRef<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "Swap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline int32_t Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::GetParentIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "GetParentIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, index);
}
template <typename T> inline int32_t Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::GetLeftChildIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "GetLeftChildIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, index);
}
template <typename T> inline int32_t Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::GetRightChildIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "GetRightChildIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, index);
}
template <typename T>
inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::_MinHeapify_g__UpdateSmallestIndex_21_0(
    ByRef<::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "<MinHeapify>g__UpdateSmallestIndex|21_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template <typename T>
inline void Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::_MinHeapify_g__UpdateSmallestIfCandidateIsSmaller_21_1(
    int32_t candidate, ByRef<::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*>::get(), "<MinHeapify>g__UpdateSmallestIfCandidateIsSmaller|21_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Scheduler::Internal::__MinimumBinaryHeap_1____c__DisplayClass21_0<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, candidate, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>::MinimumBinaryHeap_1() {}
