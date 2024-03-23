#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Util/zzzz__JitteredDelay_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::Util::JitteredDelay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::JitteredDelay::*)(::System::TimeSpan, ::System::TimeSpan)>(
    &::Amazon::Util::JitteredDelay::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2205190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::JitteredDelay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::JitteredDelay::*)(::System::TimeSpan, ::System::TimeSpan, ::System::TimeSpan)>(
    &::Amazon::Util::JitteredDelay::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22051e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::JitteredDelay.GetRetryDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::Amazon::Util::JitteredDelay::*)(int32_t)>(&::Amazon::Util::JitteredDelay::GetRetryDelay)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2205278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "GetRetryDelay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::JitteredDelay.Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::Amazon::Util::JitteredDelay::*)()>(&::Amazon::Util::JitteredDelay::Next)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2205340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "Next",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::JitteredDelay.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::JitteredDelay::*)()>(&::Amazon::Util::JitteredDelay::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220537c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::TimeSpan& Amazon::Util::JitteredDelay::__cordl_internal_get__maxDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDelay;
}
constexpr ::System::TimeSpan const& Amazon::Util::JitteredDelay::__cordl_internal_get__maxDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDelay;
}
constexpr void Amazon::Util::JitteredDelay::__cordl_internal_set__maxDelay(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDelay = value;
}
constexpr ::System::TimeSpan& Amazon::Util::JitteredDelay::__cordl_internal_get__variance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variance;
}
constexpr ::System::TimeSpan const& Amazon::Util::JitteredDelay::__cordl_internal_get__variance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variance;
}
constexpr void Amazon::Util::JitteredDelay::__cordl_internal_set__variance(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variance = value;
}
constexpr ::System::TimeSpan& Amazon::Util::JitteredDelay::__cordl_internal_get__baseIncrement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseIncrement;
}
constexpr ::System::TimeSpan const& Amazon::Util::JitteredDelay::__cordl_internal_get__baseIncrement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseIncrement;
}
constexpr void Amazon::Util::JitteredDelay::__cordl_internal_set__baseIncrement(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseIncrement = value;
}
constexpr ::System::Random*& Amazon::Util::JitteredDelay::__cordl_internal_get__rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rand;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& Amazon::Util::JitteredDelay::__cordl_internal_get__rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rand;
}
constexpr void Amazon::Util::JitteredDelay::__cordl_internal_set__rand(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Util::JitteredDelay::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& Amazon::Util::JitteredDelay::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void Amazon::Util::JitteredDelay::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline ::Amazon::Util::JitteredDelay* Amazon::Util::JitteredDelay::New_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::JitteredDelay*>(baseIncrement, variance));
}
inline void Amazon::Util::JitteredDelay::_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseIncrement, variance);
}
inline ::Amazon::Util::JitteredDelay* Amazon::Util::JitteredDelay::New_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance, ::System::TimeSpan maxDelay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::JitteredDelay*>(baseIncrement, variance, maxDelay));
}
inline void Amazon::Util::JitteredDelay::_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance, ::System::TimeSpan maxDelay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseIncrement, variance, maxDelay);
}
inline ::System::TimeSpan Amazon::Util::JitteredDelay::GetRetryDelay(int32_t attemptCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "GetRetryDelay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, attemptCount);
}
inline ::System::TimeSpan Amazon::Util::JitteredDelay::Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "Next",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline void Amazon::Util::JitteredDelay::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::JitteredDelay*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::JitteredDelay::JitteredDelay() {}
