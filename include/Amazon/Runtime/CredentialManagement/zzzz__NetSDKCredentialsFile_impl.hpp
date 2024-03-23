#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__NetSDKCredentialsFile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfilePropertyMapping_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileStore_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__NetSDKCredentialsFile_def.hpp"
#include "Amazon/Util/Internal/zzzz__NamedSettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::*)()>(
    &::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202eb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c._ListProfileNames_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::_ListProfileNames_b__18_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x202eb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get(), "<ListProfileNames>b__18_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::setStaticF___9(::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::setStaticF___9__18_0(::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*, "<>9__18_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*, "<>9__18_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get>();
}
inline ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>());
}
inline void Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::_ListProfileNames_b__18_0(::Amazon::Runtime::CredentialManagement::CredentialProfile* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*>::get(), "<ListProfileNames>b__18_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c::__NetSDKCredentialsFile____c() {}
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)()>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x202bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.ListProfileNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)()>(&::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::ListProfileNames)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x202d4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "ListProfileNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.ListProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* (
    ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)()>(&::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::ListProfiles)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x202c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "ListProfiles",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.TryGetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(
    ::StringW, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>)>(&::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::TryGetProfile)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x202bd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.RegisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RegisterProfile)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x202ccd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.UnregisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::UnregisterProfile)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x202dfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "UnregisterProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.RenameProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RenameProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202dfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.RenameProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(::StringW, ::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RenameProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202e000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.CopyProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::CopyProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202e020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.CopyProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::*)(::StringW, ::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::CopyProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202e040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile.SetProfileTypeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType)>(
        &::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::SetProfileTypeField)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x202d9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "SetProfileTypeField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
constexpr Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*
Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::i___Amazon__Runtime__CredentialManagement__ICredentialProfileStore() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*
Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
constexpr ::Amazon::Util::Internal::NamedSettingsManager*& Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::NamedSettingsManager*> const&
Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::__cordl_internal_set__settingsManager(::Amazon::Util::Internal::NamedSettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::setStaticF_ReservedPropertyNames(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ReservedPropertyNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::getStaticF_ReservedPropertyNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ReservedPropertyNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::setStaticF_PropertyMapping(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*, "PropertyMapping",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::getStaticF_PropertyMapping() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*, "PropertyMapping",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get>();
}
inline ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile* Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>());
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::ListProfileNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "ListProfileNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::ListProfiles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "ListProfiles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, profile);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::UnregisterProfile(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "UnregisterProfile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profileName);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RenameProfile(::StringW oldProfileName, ::StringW newProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldProfileName, newProfileName);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::RenameProfile(::StringW oldProfileName, ::StringW newProfileName, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldProfileName, newProfileName, force);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::CopyProfile(::StringW fromProfileName, ::StringW toProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromProfileName, toProfileName);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::CopyProfile(::StringW fromProfileName, ::StringW toProfileName, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromProfileName, toProfileName, force);
}
inline void Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::SetProfileTypeField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* properties,
                                                                                              ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType profileType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*>::get(), "SetProfileTypeField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, properties, profileType);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile::NetSDKCredentialsFile() {}
