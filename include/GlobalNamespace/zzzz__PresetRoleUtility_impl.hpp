#pragma once
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_impl.hpp"
#include "GlobalNamespace/zzzz__PresetRoleUtility_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresetRoleUtility.GetFunctionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PresetRoleUtility::*)()>(&::GlobalNamespace::PresetRoleUtility::GetFunctionEndpoint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x276d748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetRoleUtility.GetInputJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::PresetRoleUtility::*)(::StringW)>(
    &::GlobalNamespace::PresetRoleUtility::GetInputJSON)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x276d788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetRoleUtility.ParseJSONBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PresetRoleUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::PresetRoleUtility::ParseJSONBody)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x276d910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetRoleUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresetRoleUtility::*)()>(&::GlobalNamespace::PresetRoleUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276d930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PresetRoleUtility::__cordl_internal_get_roleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKey;
}
constexpr ::StringW const& GlobalNamespace::PresetRoleUtility::__cordl_internal_get_roleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKey;
}
constexpr void GlobalNamespace::PresetRoleUtility::__cordl_internal_set_roleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roleKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PresetRoleUtility::__cordl_internal_get_inputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr ::StringW const& GlobalNamespace::PresetRoleUtility::__cordl_internal_get_inputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr void GlobalNamespace::PresetRoleUtility::__cordl_internal_set_inputs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PresetRoleUtility::GetFunctionEndpoint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::PresetRoleUtility::GetInputJSON(::StringW password) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, password);
}
inline ::StringW GlobalNamespace::PresetRoleUtility::ParseJSONBody(::OVRSimpleJSON::JSONNode* body) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, body);
}
inline ::GlobalNamespace::PresetRoleUtility* GlobalNamespace::PresetRoleUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PresetRoleUtility*>());
}
inline void GlobalNamespace::PresetRoleUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetRoleUtility*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresetRoleUtility::PresetRoleUtility() {}
