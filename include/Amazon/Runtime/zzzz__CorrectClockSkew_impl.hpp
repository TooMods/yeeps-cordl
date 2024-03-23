#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__CorrectClockSkew_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CorrectClockSkew.get_GlobalClockCorrection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)()>(&::Amazon::Runtime::CorrectClockSkew::get_GlobalClockCorrection)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fe46c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(),
                                                                               "get_GlobalClockCorrection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CorrectClockSkew.set_GlobalClockCorrection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Amazon::Runtime::CorrectClockSkew::set_GlobalClockCorrection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe4754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "set_GlobalClockCorrection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CorrectClockSkew.GetClockCorrectionForEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::StringW)>(&::Amazon::Runtime::CorrectClockSkew::GetClockCorrectionForEndpoint)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1fe24dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "GetClockCorrectionForEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CorrectClockSkew.GetCorrectedUtcNowForEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::StringW)>(&::Amazon::Runtime::CorrectClockSkew::GetCorrectedUtcNowForEndpoint)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1fe2100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "GetCorrectedUtcNowForEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CorrectClockSkew.SetClockCorrectionForEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::TimeSpan)>(&::Amazon::Runtime::CorrectClockSkew::SetClockCorrectionForEndpoint)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1fe47ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "SetClockCorrectionForEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::CorrectClockSkew::setStaticF_manualClockCorrection(::System::Nullable_1<::System::TimeSpan> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<::System::TimeSpan>, "manualClockCorrection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>(std::forward<::System::Nullable_1<::System::TimeSpan>>(value));
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::Runtime::CorrectClockSkew::getStaticF_manualClockCorrection() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<::System::TimeSpan>, "manualClockCorrection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>();
}
inline void Amazon::Runtime::CorrectClockSkew::setStaticF_manualClockCorrectionLock(::System::Threading::ReaderWriterLockSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterLockSlim*, "manualClockCorrectionLock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>(std::forward<::System::Threading::ReaderWriterLockSlim*>(value));
}
inline ::System::Threading::ReaderWriterLockSlim* Amazon::Runtime::CorrectClockSkew::getStaticF_manualClockCorrectionLock() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterLockSlim*, "manualClockCorrectionLock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>();
}
inline void Amazon::Runtime::CorrectClockSkew::setStaticF_clockCorrectionDictionary(::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>*, "clockCorrectionDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>(
      std::forward<::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>* Amazon::Runtime::CorrectClockSkew::getStaticF_clockCorrectionDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::System::TimeSpan>*, "clockCorrectionDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>();
}
inline void Amazon::Runtime::CorrectClockSkew::setStaticF_clockCorrectionDictionaryLock(::System::Threading::ReaderWriterLockSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterLockSlim*, "clockCorrectionDictionaryLock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>(std::forward<::System::Threading::ReaderWriterLockSlim*>(value));
}
inline ::System::Threading::ReaderWriterLockSlim* Amazon::Runtime::CorrectClockSkew::getStaticF_clockCorrectionDictionaryLock() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterLockSlim*, "clockCorrectionDictionaryLock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get>();
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::Runtime::CorrectClockSkew::get_GlobalClockCorrection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(),
                                                                             "get_GlobalClockCorrection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::CorrectClockSkew::set_GlobalClockCorrection(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "set_GlobalClockCorrection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan Amazon::Runtime::CorrectClockSkew::GetClockCorrectionForEndpoint(::StringW endpoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "GetClockCorrectionForEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, endpoint);
}
inline ::System::DateTime Amazon::Runtime::CorrectClockSkew::GetCorrectedUtcNowForEndpoint(::StringW endpoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(), "GetCorrectedUtcNowForEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, endpoint);
}
inline void Amazon::Runtime::CorrectClockSkew::SetClockCorrectionForEndpoint(::StringW endpoint, ::System::TimeSpan correction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CorrectClockSkew*>::get(),
                                                                             "SetClockCorrectionForEndpoint", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, endpoint, correction);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CorrectClockSkew::CorrectClockSkew() {}
