#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__StreamReadTracker_def.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::StreamReadTracker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StreamReadTracker::*)(
    ::System::Object*, ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*, int64_t, int64_t)>(&::Amazon::Runtime::Internal::StreamReadTracker::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23dbb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StreamReadTracker.ReadProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StreamReadTracker::*)(int32_t)>(
    &::Amazon::Runtime::Internal::StreamReadTracker::ReadProgress)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23dbba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), "ReadProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StreamReadTracker.UpdateProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StreamReadTracker::*)(float_t)>(
    &::Amazon::Runtime::Internal::StreamReadTracker::UpdateProgress)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dbcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), "UpdateProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_sender(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*> const&
Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_callback(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr int64_t const& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentLength = value;
}
constexpr int64_t& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_totalBytesRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytesRead;
}
constexpr int64_t const& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_totalBytesRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytesRead;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_totalBytesRead(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBytesRead = value;
}
constexpr int64_t& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_totalIncrementTransferred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalIncrementTransferred;
}
constexpr int64_t const& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_totalIncrementTransferred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalIncrementTransferred;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_totalIncrementTransferred(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalIncrementTransferred = value;
}
constexpr int64_t& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_progressUpdateInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressUpdateInterval;
}
constexpr int64_t const& Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_get_progressUpdateInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressUpdateInterval;
}
constexpr void Amazon::Runtime::Internal::StreamReadTracker::__cordl_internal_set_progressUpdateInterval(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progressUpdateInterval = value;
}
inline ::Amazon::Runtime::Internal::StreamReadTracker* Amazon::Runtime::Internal::StreamReadTracker::New_ctor(::System::Object* sender,
                                                                                                              ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback,
                                                                                                              int64_t contentLength, int64_t progressUpdateInterval) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::StreamReadTracker*>(sender, callback, contentLength, progressUpdateInterval));
}
inline void Amazon::Runtime::Internal::StreamReadTracker::_ctor(::System::Object* sender, ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback, int64_t contentLength,
                                                                int64_t progressUpdateInterval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, callback, contentLength, progressUpdateInterval);
}
inline void Amazon::Runtime::Internal::StreamReadTracker::ReadProgress(int32_t bytesRead) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), "ReadProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytesRead);
}
inline void Amazon::Runtime::Internal::StreamReadTracker::UpdateProgress(float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StreamReadTracker*>::get(), "UpdateProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::StreamReadTracker::StreamReadTracker() {}
