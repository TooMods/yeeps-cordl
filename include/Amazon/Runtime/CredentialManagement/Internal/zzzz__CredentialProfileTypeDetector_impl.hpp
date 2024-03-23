#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileTypeDetector_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileTypeDetector_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::*)()>(
    &::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20333e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c._DetectProfileType_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::_DetectProfileType_b__26_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20333e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get(), "<DetectProfileType>b__26_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void
Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::setStaticF___9(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*
Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::setStaticF___9__26_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__26_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__26_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get>();
}
inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c* Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>());
}
inline void Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::_DetectProfileType_b__26_0(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c*>::get(), "<DetectProfileType>b__26_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propertyName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfileTypeDetector____c::__CredentialProfileTypeDetector____c() {}
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector.GetUserFriendlyCredentialType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetUserFriendlyCredentialType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x20295cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "GetUserFriendlyCredentialType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector.DetectProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> (*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*)>(&::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::DetectProfileType)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2028488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "DetectProfileType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector.GetPropertiesForProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType)>(
        &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetPropertiesForProfileType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2032624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "GetPropertiesForProfileType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector.GetPropertyNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*)>(
        &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetPropertyNames)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2032484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "GetPropertyNames",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::setStaticF_SsoProperties(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SsoProperties",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::getStaticF_SsoProperties() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SsoProperties",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::setStaticF_TypePropertyDictionary(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>*,
      "TypePropertyDictionary", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>*
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::getStaticF_TypePropertyDictionary() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::System::Collections::Generic::HashSet_1<::StringW>*>*,
      "TypePropertyDictionary", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::setStaticF_CredentialTypeDictionary(
    ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>*, "CredentialTypeDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>*
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::getStaticF_CredentialTypeDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, ::StringW>*,
                                           "CredentialTypeDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get>();
}
inline ::StringW Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetUserFriendlyCredentialType(
    ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(),
                                  "GetUserFriendlyCredentialType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, profileType);
}
inline ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::DetectProfileType(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "DetectProfileType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>, false>(nullptr, ___internal_method, profileOptions);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>*
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetPropertiesForProfileType(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType profileType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "GetPropertiesForProfileType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, profileType);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>*
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::GetPropertyNames(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector*>::get(), "GetPropertyNames",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, profileOptions);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileTypeDetector::CredentialProfileTypeDetector() {}
