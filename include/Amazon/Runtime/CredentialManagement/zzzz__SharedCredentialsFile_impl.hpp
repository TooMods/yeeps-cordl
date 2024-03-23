#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__SharedCredentialsFile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfilePropertyMapping_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileStore_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__SharedCredentialsFile_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ProfileIniFile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::*)()>(
    &::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203180c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c._ListProfileNames_b__33_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::_ListProfileNames_b__33_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2031814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get(), "<ListProfileNames>b__33_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::setStaticF___9(::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::setStaticF___9__33_0(::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*, "<>9__33_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*>(value));
}
inline ::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>*, "<>9__33_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get>();
}
inline ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>());
}
inline void Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::_ListProfileNames_b__33_0(::Amazon::Runtime::CredentialManagement::CredentialProfile* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*>::get(), "<ListProfileNames>b__33_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c::__SharedCredentialsFile____c() {}
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.get_FilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::get_FilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202fd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "get_FilePath",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.set_FilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::set_FilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202fd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "set_FilePath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x202fd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x202c568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.SetUpFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::SetUpFilePath)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x202fde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "SetUpFilePath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.ListProfileNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListProfileNames)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x202ffc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListProfileNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.ListProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* (
    ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListProfiles)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x202c9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListProfiles",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.TryGetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(
    ::StringW, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>)>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetProfile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x202c640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.RegisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RegisterProfile)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x202d224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.RegisterProfileInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfile*)>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RegisterProfileInternal)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x2030e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RegisterProfileInternal",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.UnregisterProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::UnregisterProfile)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20313b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "UnregisterProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.RenameProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RenameProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20313f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.RenameProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW, ::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RenameProfile)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x20313fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.CopyProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::CopyProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2031458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.CopyProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(::StringW, ::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::CopyProfile)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2031460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::Refresh)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x202febc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "Refresh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.ListAllProfileNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (
    ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)()>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListAllProfileNames)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20300f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListAllProfileNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.TryGetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(
    ::StringW, bool, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>)>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetProfile)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0x203017c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.TryGetSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::*)(
    ::StringW, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>)>(&::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetSection)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2031590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetSection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile.IsSupportedProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>)>(
    &::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::IsSupportedProfileType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2030dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "IsSupportedProfileType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
constexpr Amazon::Runtime::CredentialManagement::SharedCredentialsFile::operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::i___Amazon__Runtime__CredentialManagement__ICredentialProfileStore() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr Amazon::Runtime::CredentialManagement::SharedCredentialsFile::operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept {
  return static_cast<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::ProfileIniFile*& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__credentialsFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentialsFile;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ProfileIniFile*> const&
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__credentialsFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentialsFile;
}
constexpr void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_set__credentialsFile(::Amazon::Runtime::Internal::Util::ProfileIniFile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credentialsFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::ProfileIniFile*& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__configFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configFile;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ProfileIniFile*> const&
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__configFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configFile;
}
constexpr void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_set__configFile(::Amazon::Runtime::Internal::Util::ProfileIniFile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__FilePath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilePath_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_get__FilePath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilePath_k__BackingField;
}
constexpr void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::__cordl_internal_set__FilePath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FilePath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::setStaticF_ReservedPropertyNames(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ReservedPropertyNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::getStaticF_ReservedPropertyNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ReservedPropertyNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::setStaticF_ProfileTypeWhitelist(
    ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*, "ProfileTypeWhitelist",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::getStaticF_ProfileTypeWhitelist() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*, "ProfileTypeWhitelist",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::setStaticF_PropertyMapping(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*, "PropertyMapping",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>(
      std::forward<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*>(value));
}
inline ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::getStaticF_PropertyMapping() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*, "PropertyMapping",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::setStaticF_DefaultDirectory(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultDirectory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Runtime::CredentialManagement::SharedCredentialsFile::getStaticF_DefaultDirectory() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultDirectory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>();
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::setStaticF_DefaultFilePath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultFilePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Runtime::CredentialManagement::SharedCredentialsFile::getStaticF_DefaultFilePath() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultFilePath",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get>();
}
inline ::StringW Amazon::Runtime::CredentialManagement::SharedCredentialsFile::get_FilePath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "get_FilePath",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::set_FilePath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "set_FilePath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>());
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>(filePath));
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::SetUpFilePath(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "SetUpFilePath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListProfileNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListProfileNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListProfiles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListProfiles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, profile);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RegisterProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RegisterProfileInternal(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RegisterProfileInternal",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::UnregisterProfile(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "UnregisterProfile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profileName);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RenameProfile(::StringW oldProfileName, ::StringW newProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldProfileName, newProfileName);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::RenameProfile(::StringW oldProfileName, ::StringW newProfileName, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "RenameProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldProfileName, newProfileName, force);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::CopyProfile(::StringW fromProfileName, ::StringW toProfileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromProfileName, toProfileName);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::CopyProfile(::StringW fromProfileName, ::StringW toProfileName, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "CopyProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromProfileName, toProfileName, force);
}
inline void Amazon::Runtime::CredentialManagement::SharedCredentialsFile::Refresh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "Refresh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::CredentialManagement::SharedCredentialsFile::ListAllProfileNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "ListAllProfileNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetProfile(::StringW profileName, bool doRefresh,
                                                                                        ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, doRefresh, profile);
}
inline bool Amazon::Runtime::CredentialManagement::SharedCredentialsFile::TryGetSection(::StringW sectionName,
                                                                                        ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> iniProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "TryGetSection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sectionName, iniProperties);
}
inline bool
Amazon::Runtime::CredentialManagement::SharedCredentialsFile::IsSupportedProfileType(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*>::get(), "IsSupportedProfileType",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileType);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile::SharedCredentialsFile() {}
