#pragma once
#include "System/ComponentModel/zzzz__LicenseProvider_impl.hpp"
#include "System/ComponentModel/zzzz__License_impl.hpp"
#include "System/ComponentModel/zzzz__LicFileLicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicFileLicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::*)(
    ::System::ComponentModel::LicFileLicenseProvider*, ::StringW)>(&::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1afa1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense.get_LicenseKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::*)()>(
    &::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::get_LicenseKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afa238;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::*)()>(
    &::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1afa240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::LicFileLicenseProvider*& System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_get__owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::LicFileLicenseProvider*> const&
System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_get__owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner;
}
constexpr void System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_set__owner(::System::ComponentModel::LicFileLicenseProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_get__LicenseKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LicenseKey_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_get__LicenseKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LicenseKey_k__BackingField;
}
constexpr void System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__cordl_internal_set__LicenseKey_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LicenseKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*
System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::New_ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::StringW key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>(owner, key));
}
inline void System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::_ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, key);
}
inline ::StringW System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::get_LicenseKey() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__LicFileLicenseProvider__LicFileLicense::__LicFileLicenseProvider__LicFileLicense() {}
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.IsKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::LicFileLicenseProvider::*)(::StringW, ::System::Type*)>(
    &::System::ComponentModel::LicFileLicenseProvider::IsKeyValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1af9d28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.GetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::LicFileLicenseProvider::*)(::System::Type*)>(
    &::System::ComponentModel::LicFileLicenseProvider::GetKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1af9d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.GetLicense
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::License* (::System::ComponentModel::LicFileLicenseProvider::*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, bool)>(
        &::System::ComponentModel::LicFileLicenseProvider::GetLicense)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x1af9e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::LicFileLicenseProvider::*)()>(
    &::System::ComponentModel::LicFileLicenseProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afa220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::LicFileLicenseProvider::IsKeyValid(::StringW key, ::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, type);
}
inline ::StringW System::ComponentModel::LicFileLicenseProvider::GetKey(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, type);
}
inline ::System::ComponentModel::License* System::ComponentModel::LicFileLicenseProvider::GetLicense(::System::ComponentModel::LicenseContext* context, ::System::Type* type,
                                                                                                     ::System::Object* instance, bool allowExceptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::License*, false>(this, ___internal_method, context, type, instance, allowExceptions);
}
inline ::System::ComponentModel::LicFileLicenseProvider* System::ComponentModel::LicFileLicenseProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::LicFileLicenseProvider*>());
}
inline void System::ComponentModel::LicFileLicenseProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::LicFileLicenseProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicFileLicenseProvider::LicFileLicenseProvider() {}
