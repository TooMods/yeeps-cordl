#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileStoreChain_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.get_ProfilesLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)()>(
    &::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::get_ProfilesLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202bb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(),
                                                 "get_ProfilesLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.set_ProfilesLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::set_ProfilesLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202bb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "set_ProfilesLocation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)()>(
    &::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x201933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x202bb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.TryGetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(
    ::StringW, ByRef<::Amazon::Runtime::AWSCredentials*>)>(&::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::TryGetAWSCredentials)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x202bb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(),
                                                 "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.TryGetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(
    ::StringW, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>)>(&::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::TryGetProfile)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x202bc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.ListProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* (
    ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)()>(&::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::ListProfiles)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x202c64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "ListProfiles",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.RegisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::RegisterProfile)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x202cc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "RegisterProfile",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain.UnregisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::UnregisterProfile)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x202d404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "UnregisterProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*
Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
constexpr ::StringW& Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::__cordl_internal_get__ProfilesLocation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfilesLocation_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::__cordl_internal_get__ProfilesLocation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfilesLocation_k__BackingField;
}
constexpr void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::__cordl_internal_set__ProfilesLocation_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProfilesLocation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::get_ProfilesLocation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(),
                                               "get_ProfilesLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::set_ProfilesLocation(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "set_ProfilesLocation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>());
}
inline void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::New_ctor(::StringW profilesLocation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>(profilesLocation));
}
inline void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::_ctor(::StringW profilesLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profilesLocation);
}
inline bool Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::TryGetAWSCredentials(::StringW profileName, ByRef<::Amazon::Runtime::AWSCredentials*> credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(),
                                               "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, credentials);
}
inline bool Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, profile);
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::ListProfiles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "ListProfiles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::UnregisterProfile(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*>::get(), "UnregisterProfile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profileName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain::CredentialProfileStoreChain() {}
