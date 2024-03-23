#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__ProfileManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Util/zzzz__ProfileManager_def.hpp"
#include "Amazon/Util/zzzz__ProfileSettingsBase_def.hpp"
#include "Amazon/Util/zzzz__SAMLEndpointSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::__ProfileManager____c::*)()>(&::Amazon::Util::__ProfileManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c._ListProfileNames_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::__ProfileManager____c::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::__ProfileManager____c::_ListProfileNames_b__9_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x220d6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get(), "<ListProfileNames>b__9_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Util::__ProfileManager____c::setStaticF___9(::Amazon::Util::__ProfileManager____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::__ProfileManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get>(
      std::forward<::Amazon::Util::__ProfileManager____c*>(value));
}
inline ::Amazon::Util::__ProfileManager____c* Amazon::Util::__ProfileManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Util::__ProfileManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get>();
}
inline void Amazon::Util::__ProfileManager____c::setStaticF___9__9_0(::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* Amazon::Util::__ProfileManager____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get>();
}
inline ::Amazon::Util::__ProfileManager____c* Amazon::Util::__ProfileManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__ProfileManager____c*>());
}
inline void Amazon::Util::__ProfileManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::__ProfileManager____c::_ListProfileNames_b__9_0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c*>::get(), "<ListProfileNames>b__9_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, os);
}
// Ctor Parameters []
constexpr ::Amazon::Util::__ProfileManager____c::__ProfileManager____c() {}
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::__ProfileManager____c__DisplayClass22_0::*)()>(
    &::Amazon::Util::__ProfileManager____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass22_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c__DisplayClass22_0._ReadProfileSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::__ProfileManager____c__DisplayClass22_0::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::__ProfileManager____c__DisplayClass22_0::_ReadProfileSettings_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x220d744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass22_0*>::get(), "<ReadProfileSettings>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::__ProfileManager____c__DisplayClass22_0::__cordl_internal_get_profileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileName;
}
constexpr ::StringW const& Amazon::Util::__ProfileManager____c__DisplayClass22_0::__cordl_internal_get_profileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileName;
}
constexpr void Amazon::Util::__ProfileManager____c__DisplayClass22_0::__cordl_internal_set_profileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___profileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::__ProfileManager____c__DisplayClass22_0* Amazon::Util::__ProfileManager____c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__ProfileManager____c__DisplayClass22_0*>());
}
inline void Amazon::Util::__ProfileManager____c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass22_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Util::__ProfileManager____c__DisplayClass22_0::_ReadProfileSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass22_0*>::get(), "<ReadProfileSettings>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::__ProfileManager____c__DisplayClass22_0::__ProfileManager____c__DisplayClass22_0() {}
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::__ProfileManager____c__DisplayClass23_0::*)()>(
    &::Amazon::Util::__ProfileManager____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass23_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__ProfileManager____c__DisplayClass23_0._ReadSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Util::__ProfileManager____c__DisplayClass23_0::*)(
    ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::__ProfileManager____c__DisplayClass23_0::_ReadSettings_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x220d7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass23_0*>::get(), "<ReadSettings>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::__ProfileManager____c__DisplayClass23_0::__cordl_internal_get_settingsKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsKey;
}
constexpr ::StringW const& Amazon::Util::__ProfileManager____c__DisplayClass23_0::__cordl_internal_get_settingsKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsKey;
}
constexpr void Amazon::Util::__ProfileManager____c__DisplayClass23_0::__cordl_internal_set_settingsKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settingsKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::__ProfileManager____c__DisplayClass23_0* Amazon::Util::__ProfileManager____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__ProfileManager____c__DisplayClass23_0*>());
}
inline void Amazon::Util::__ProfileManager____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass23_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Util::__ProfileManager____c__DisplayClass23_0::_ReadSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__ProfileManager____c__DisplayClass23_0*>::get(), "<ReadSettings>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Util::__ProfileManager____c__DisplayClass23_0::__ProfileManager____c__DisplayClass23_0() {}
//  Writing Method size for method: ::Amazon::Util::ProfileManager.get_IsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Util::ProfileManager::get_IsAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "get_IsAvailable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.RegisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::Amazon::Util::ProfileManager::RegisterProfile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x220b09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.RegisterSAMLRoleProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Amazon::Util::ProfileManager::RegisterSAMLRoleProfile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220b3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLRoleProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.RegisterSAMLRoleProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::Amazon::Util::ProfileManager::RegisterSAMLRoleProfile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220b3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLRoleProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.RegisterSAMLEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Uri*, ::StringW)>(&::Amazon::Util::ProfileManager::RegisterSAMLEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x220b860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.UnregisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::Util::ProfileManager::UnregisterProfile)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x220bc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "UnregisterProfile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.ListProfileNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(&::Amazon::Util::ProfileManager::ListProfileNames)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x220bf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ListProfileNames",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.ListProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Util::ProfileSettingsBase*>* (*)()>(
    &::Amazon::Util::ProfileManager::ListProfiles)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x220c164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ListProfiles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.IsProfileKnown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::Util::ProfileManager::IsProfileKnown)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x220c768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "IsProfileKnown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.CopyProfileSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Amazon::Util::ProfileManager::CopyProfileSettings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x220c8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "CopyProfileSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.CopyProfileSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW)>(
    &::Amazon::Util::ProfileManager::CopyProfileSettings)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x220c948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "CopyProfileSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.TryGetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::Amazon::Runtime::AWSCredentials*>)>(
    &::Amazon::Util::ProfileManager::TryGetAWSCredentials)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x220ced0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)(::StringW)>(&::Amazon::Util::ProfileManager::GetAWSCredentials)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x220d0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.GetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::ProfileSettingsBase* (*)(::StringW)>(&::Amazon::Util::ProfileManager::GetProfile)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x220d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetProfile", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.TryGetSAMLEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::Amazon::Util::SAMLEndpointSettings*>)>(
    &::Amazon::Util::ProfileManager::TryGetSAMLEndpoint)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x220d2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "TryGetSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Util::SAMLEndpointSettings*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.GetSAMLEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::SAMLEndpointSettings* (*)(::StringW)>(&::Amazon::Util::ProfileManager::GetSAMLEndpoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x220d4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.ReadProfileSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (*)(::StringW)>(
    &::Amazon::Util::ProfileManager::ReadProfileSettings)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x220c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadProfileSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.ReadProfileSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (*)(::Amazon::Runtime::Internal::Settings::SettingsCollection*, ::StringW)>(
        &::Amazon::Util::ProfileManager::ReadProfileSettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x220be88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadProfileSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::ProfileManager.ReadSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (*)(::Amazon::Runtime::Internal::Settings::SettingsCollection*, ::StringW)>(
        &::Amazon::Util::ProfileManager::ReadSettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x220d5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool Amazon::Util::ProfileManager::get_IsAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "get_IsAvailable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::Util::ProfileManager::RegisterProfile(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profileName, accessKeyId, secretKey);
}
inline void Amazon::Util::ProfileManager::RegisterSAMLRoleProfile(::StringW profileName, ::StringW endpointName, ::StringW roleArn, ::StringW userIdentity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLRoleProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profileName, endpointName, roleArn, userIdentity);
}
inline void Amazon::Util::ProfileManager::RegisterSAMLRoleProfile(::StringW profileName, ::StringW endpointName, ::StringW roleArn, ::StringW userIdentity, ::StringW stsRegion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLRoleProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profileName, endpointName, roleArn, userIdentity, stsRegion);
}
inline ::StringW Amazon::Util::ProfileManager::RegisterSAMLEndpoint(::StringW endpointName, ::System::Uri* endpoint, ::StringW authenticationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "RegisterSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, endpointName, endpoint, authenticationType);
}
inline void Amazon::Util::ProfileManager::UnregisterProfile(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "UnregisterProfile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profileName);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::ProfileManager::ListProfileNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ListProfileNames",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::ProfileSettingsBase*>* Amazon::Util::ProfileManager::ListProfiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ListProfiles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Util::ProfileSettingsBase*>*, false>(nullptr, ___internal_method);
}
inline bool Amazon::Util::ProfileManager::IsProfileKnown(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "IsProfileKnown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileName);
}
inline ::StringW Amazon::Util::ProfileManager::CopyProfileSettings(::StringW sourceProfileName, ::StringW destinationProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "CopyProfileSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sourceProfileName, destinationProfileName);
}
inline ::StringW Amazon::Util::ProfileManager::CopyProfileSettings(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* source, ::StringW destinationProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "CopyProfileSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source, destinationProfileName);
}
inline bool Amazon::Util::ProfileManager::TryGetAWSCredentials(::StringW profileName, ByRef<::Amazon::Runtime::AWSCredentials*> credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileName, credentials);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Util::ProfileManager::GetAWSCredentials(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, profileName);
}
inline ::Amazon::Util::ProfileSettingsBase* Amazon::Util::ProfileManager::GetProfile(::StringW profileName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetProfile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::ProfileSettingsBase*, false>(nullptr, ___internal_method, profileName);
}
template <typename T> inline T Amazon::Util::ProfileManager::GetProfile(::StringW profileName) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetProfile",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, profileName);
}
template <typename T> inline bool Amazon::Util::ProfileManager::TryGetProfile(::StringW profileName, ByRef<T> profile) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "TryGetProfile",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileName, profile);
}
inline bool Amazon::Util::ProfileManager::TryGetSAMLEndpoint(::StringW endpointName, ByRef<::Amazon::Util::SAMLEndpointSettings*> endpointSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "TryGetSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Util::SAMLEndpointSettings*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, endpointName, endpointSettings);
}
inline ::Amazon::Util::SAMLEndpointSettings* Amazon::Util::ProfileManager::GetSAMLEndpoint(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "GetSAMLEndpoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::SAMLEndpointSettings*, false>(nullptr, ___internal_method, endpointName);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Util::ProfileManager::ReadProfileSettings(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadProfileSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(nullptr, ___internal_method, profileName);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*
Amazon::Util::ProfileManager::ReadProfileSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings, ::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadProfileSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(nullptr, ___internal_method, settings, profileName);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Util::ProfileManager::ReadSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                                                                                                               ::StringW settingsKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::ProfileManager*>::get(), "ReadSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::SettingsCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(nullptr, ___internal_method, settings, settingsKey);
}
// Ctor Parameters []
constexpr ::Amazon::Util::ProfileManager::ProfileManager() {}
