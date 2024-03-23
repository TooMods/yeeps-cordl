#pragma once
#include "System/ComponentModel/zzzz__LicenseContext_impl.hpp"
#include "System/ComponentModel/Design/zzzz__RuntimeLicenseContext_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.GetLocalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::Design::RuntimeLicenseContext::*)(::StringW)>(
    &::System::ComponentModel::Design::RuntimeLicenseContext::GetLocalPath)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x18ea4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(), "GetLocalPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.GetSavedLicenseKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::Design::RuntimeLicenseContext::*)(
    ::System::Type*, ::System::Reflection::Assembly*)>(&::System::ComponentModel::Design::RuntimeLicenseContext::GetSavedLicenseKey)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x18ea530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.CaseInsensitiveManifestResourceStreamLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::System::ComponentModel::Design::RuntimeLicenseContext::*)(::System::Reflection::Assembly*, ::StringW)>(
        &::System::ComponentModel::Design::RuntimeLicenseContext::CaseInsensitiveManifestResourceStreamLookup)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x18eaa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(),
                                                 "CaseInsensitiveManifestResourceStreamLookup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::RuntimeLicenseContext::*)()>(
    &::System::ComponentModel::Design::RuntimeLicenseContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18eae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_get_savedLicenseKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedLicenseKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_get_savedLicenseKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedLicenseKeys;
}
constexpr void System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_set_savedLicenseKeys(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___savedLicenseKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::Design::RuntimeLicenseContext::setStaticF_s_runtimeLicenseContextSwitch(::System::Diagnostics::TraceSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "s_runtimeLicenseContextSwitch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get>(
      std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::Design::RuntimeLicenseContext::getStaticF_s_runtimeLicenseContextSwitch() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "s_runtimeLicenseContextSwitch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get>();
}
inline ::StringW System::ComponentModel::Design::RuntimeLicenseContext::GetLocalPath(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(), "GetLocalPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, fileName);
}
inline ::StringW System::ComponentModel::Design::RuntimeLicenseContext::GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, type, resourceAssembly);
}
inline ::System::IO::Stream* System::ComponentModel::Design::RuntimeLicenseContext::CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly* satellite, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(),
                                               "CaseInsensitiveManifestResourceStreamLookup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, satellite, name);
}
inline ::System::ComponentModel::Design::RuntimeLicenseContext* System::ComponentModel::Design::RuntimeLicenseContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::Design::RuntimeLicenseContext*>());
}
inline void System::ComponentModel::Design::RuntimeLicenseContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::RuntimeLicenseContext*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::RuntimeLicenseContext::RuntimeLicenseContext() {}
