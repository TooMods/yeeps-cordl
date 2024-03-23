#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileUtils_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(
        &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProperties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2033468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProperties",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.SetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::SetProperty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2033478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "SetProperty",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20334e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProperty",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.EnsureUniqueKeyAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Guid (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*)>(
        &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::EnsureUniqueKeyAssigned)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2033560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "EnsureUniqueKeyAssigned",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.GetUniqueKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetUniqueKey)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x20336d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetUniqueKey",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.SetUniqueKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::System::Nullable_1<::System::Guid>)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::SetUniqueKey)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20337a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "SetUniqueKey",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.GetProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> (*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProfileType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20337e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProfileType",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils.IsCallbackRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(
    &::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::IsCallbackRequired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20337f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "IsCallbackRequired",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProperties(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProperties",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::SetProperty(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "SetProperty",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profile, key, value);
}
inline ::StringW Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProperty(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProperty",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, profile, key);
}
inline ::System::Guid Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::EnsureUniqueKeyAssigned(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                                                                       ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* profileStore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "EnsureUniqueKeyAssigned",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, profile, profileStore);
}
inline ::StringW Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetUniqueKey(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetUniqueKey",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::SetUniqueKey(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                                                  ::System::Nullable_1<::System::Guid> uniqueKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "SetUniqueKey",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profile, uniqueKey);
}
inline ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>
Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::GetProfileType(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "GetProfileType",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>, false>(nullptr, ___internal_method, profile);
}
inline bool Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::IsCallbackRequired(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*>::get(), "IsCallbackRequired",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profile);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils::CredentialProfileUtils() {}
