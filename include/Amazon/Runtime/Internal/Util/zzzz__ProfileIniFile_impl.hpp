#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__IniFile_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ProfileIniFile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ProfileIniFile.get_ProfileMarkerRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::ProfileIniFile::*)()>(
    &::Amazon::Runtime::Internal::Util::ProfileIniFile::get_ProfileMarkerRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2444e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(),
                                                                               "get_ProfileMarkerRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ProfileIniFile.set_ProfileMarkerRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ProfileIniFile::*)(bool)>(
    &::Amazon::Runtime::Internal::Util::ProfileIniFile::set_ProfileMarkerRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2444e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), "set_ProfileMarkerRequired",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ProfileIniFile.ListSectionNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Amazon::Runtime::Internal::Util::ProfileIniFile::*)()>(
    &::Amazon::Runtime::Internal::Util::ProfileIniFile::ListSectionNames)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2444e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ProfileIniFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ProfileIniFile::*)(::StringW, bool)>(
    &::Amazon::Runtime::Internal::Util::ProfileIniFile::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24450d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ProfileIniFile.TryGetSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::ProfileIniFile::*)(
    ::StringW, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>)>(&::Amazon::Runtime::Internal::Util::ProfileIniFile::TryGetSection)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24450f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), 5));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::Internal::Util::ProfileIniFile::__cordl_internal_get__ProfileMarkerRequired_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfileMarkerRequired_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::Util::ProfileIniFile::__cordl_internal_get__ProfileMarkerRequired_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfileMarkerRequired_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::ProfileIniFile::__cordl_internal_set__ProfileMarkerRequired_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProfileMarkerRequired_k__BackingField = value;
}
inline bool Amazon::Runtime::Internal::Util::ProfileIniFile::get_ProfileMarkerRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(),
                                                                             "get_ProfileMarkerRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::ProfileIniFile::set_ProfileMarkerRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), "set_ProfileMarkerRequired",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Util::ProfileIniFile::ListSectionNames() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Util::ProfileIniFile* Amazon::Runtime::Internal::Util::ProfileIniFile::New_ctor(::StringW filePath, bool profileMarkerRequired) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::ProfileIniFile*>(filePath, profileMarkerRequired));
}
inline void Amazon::Runtime::Internal::Util::ProfileIniFile::_ctor(::StringW filePath, bool profileMarkerRequired) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath, profileMarkerRequired);
}
inline bool Amazon::Runtime::Internal::Util::ProfileIniFile::TryGetSection(::StringW sectionName, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ProfileIniFile*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sectionName, properties);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::ProfileIniFile::ProfileIniFile() {}
