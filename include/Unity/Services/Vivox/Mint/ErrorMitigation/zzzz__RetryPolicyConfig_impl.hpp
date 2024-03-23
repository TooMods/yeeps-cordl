#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicyConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__ExceptionPredicate_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicyConfig_def.hpp"
template <typename TException>
inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::setStaticF___9(
    ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get>(
      std::forward<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>(value));
}
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get>();
}
template <typename TException>
inline void
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::setStaticF___9__17_0(::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get>(
      std::forward<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>(value));
}
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get>();
}
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>());
}
template <typename TException> inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TException>
inline ::System::Exception* Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::_HandleException_b__17_0(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>*>::get(), "<HandleException>b__17_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, exception);
}
// Ctor Parameters []
template <typename TException> constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__17_1<TException>::__RetryPolicyConfig____c__17_1() {}
template <typename TException>
constexpr ::System::Func_2<TException, bool>*& Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::__cordl_internal_get_condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condition;
}
template <typename TException>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TException, bool>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::__cordl_internal_get_condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___condition;
}
template <typename TException>
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::__cordl_internal_set_condition(::System::Func_2<TException, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___condition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>*
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>*>());
}
template <typename TException> inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TException>
inline ::System::Exception* Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::_HandleException_b__0(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>*>::get(),
      "<HandleException>b__0", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, exception);
}
// Ctor Parameters []
template <typename TException> constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicyConfig____c__DisplayClass18_0_1<TException>::__RetryPolicyConfig____c__DisplayClass18_0_1() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.get_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170769c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_MaxRetries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.set_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)(uint32_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17076a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_MaxRetries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.get_JitterMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_JitterMagnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17076ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(),
                                                 "get_JitterMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.set_JitterMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)(float_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_JitterMagnitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17076b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_JitterMagnitude",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.get_DelayScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_DelayScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17076d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_DelayScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.set_DelayScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)(float_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_DelayScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17076dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_DelayScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.get_MaxDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_MaxDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17076fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_MaxDelayTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.set_MaxDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)(float_t)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_MaxDelayTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1707704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_MaxDelayTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig.IsHandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)(::System::Exception*)>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::IsHandledException)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1707728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "IsHandledException",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::*)()>(
    &::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17078b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__jitterMagnitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jitterMagnitude;
}
constexpr float_t const& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__jitterMagnitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jitterMagnitude;
}
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_set__jitterMagnitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jitterMagnitude = value;
}
constexpr float_t& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__delayScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayScale;
}
constexpr float_t const& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__delayScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayScale;
}
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_set__delayScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayScale = value;
}
constexpr float_t& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__maxDelayTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDelayTime;
}
constexpr float_t const& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__maxDelayTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDelayTime;
}
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_set__maxDelayTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDelayTime = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>*&
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__exceptionsToHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionsToHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__exceptionsToHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionsToHandle;
}
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_set__exceptionsToHandle(
    ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionsToHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__MaxRetries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
constexpr uint32_t const& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_get__MaxRetries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::__cordl_internal_set__MaxRetries_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxRetries_k__BackingField = value;
}
inline uint32_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_MaxRetries() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_MaxRetries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_MaxRetries(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_MaxRetries",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_JitterMagnitude() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(),
                                               "get_JitterMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_JitterMagnitude(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_JitterMagnitude",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_DelayScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_DelayScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_DelayScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_DelayScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::get_MaxDelayTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "get_MaxDelayTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::set_MaxDelayTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "set_MaxDelayTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TException> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::HandleException() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "HandleException",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TException> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::HandleException(::System::Func_2<TException, bool>* condition) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "HandleException",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TException, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, condition);
}
inline bool Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::IsHandledException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), "IsHandledException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>());
}
inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig::RetryPolicyConfig() {}
