#pragma once
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_impl.hpp"
#include "GlobalNamespace/zzzz__AddRoleUtility_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddRoleUtility.GetFunctionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AddRoleUtility::*)()>(&::GlobalNamespace::AddRoleUtility::GetFunctionEndpoint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x276b600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddRoleUtility.GetInputJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::AddRoleUtility::*)(::StringW)>(
    &::GlobalNamespace::AddRoleUtility::GetInputJSON)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x276b640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddRoleUtility.ParseJSONBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AddRoleUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::AddRoleUtility::ParseJSONBody)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x276b998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddRoleUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AddRoleUtility::*)()>(&::GlobalNamespace::AddRoleUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276bf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AddRoleUtility::__cordl_internal_get_roleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKey;
}
constexpr ::StringW const& GlobalNamespace::AddRoleUtility::__cordl_internal_get_roleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKey;
}
constexpr void GlobalNamespace::AddRoleUtility::__cordl_internal_set_roleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roleKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::AddRoleUtility::__cordl_internal_get_inputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr ::StringW const& GlobalNamespace::AddRoleUtility::__cordl_internal_get_inputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr void GlobalNamespace::AddRoleUtility::__cordl_internal_set_inputs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AddRoleUtility::__cordl_internal_get_shouldStrip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldStrip;
}
constexpr bool const& GlobalNamespace::AddRoleUtility::__cordl_internal_get_shouldStrip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldStrip;
}
constexpr void GlobalNamespace::AddRoleUtility::__cordl_internal_set_shouldStrip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldStrip = value;
}
inline ::StringW GlobalNamespace::AddRoleUtility::GetFunctionEndpoint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::AddRoleUtility::GetInputJSON(::StringW password) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, password);
}
inline ::StringW GlobalNamespace::AddRoleUtility::ParseJSONBody(::OVRSimpleJSON::JSONNode* body) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, body);
}
inline ::GlobalNamespace::AddRoleUtility* GlobalNamespace::AddRoleUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AddRoleUtility*>());
}
inline void GlobalNamespace::AddRoleUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddRoleUtility*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddRoleUtility::AddRoleUtility() {}
