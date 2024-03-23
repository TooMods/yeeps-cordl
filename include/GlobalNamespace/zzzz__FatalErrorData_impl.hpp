#pragma once
#include "GlobalNamespace/zzzz__FatalErrorData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FatalErrorData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FatalErrorData::*)(::StringW, ::StringW, ::StringW, bool)>(
    &::GlobalNamespace::FatalErrorData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29c8c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FatalErrorData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FatalErrorData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FatalErrorData::*)()>(&::GlobalNamespace::FatalErrorData::ToString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x29c8d28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FatalErrorData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FatalErrorData>::get(), 3));
    return ___internal_method;
  }
};
/// @param recoverySuggestion: ::StringW (default: nullptr)
/// @param isError: bool (default: true)
inline void GlobalNamespace::FatalErrorData::_ctor(::StringW shortMessage, ::StringW verboseMessage, ::StringW recoverySuggestion, bool isError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FatalErrorData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortMessage, verboseMessage, recoverySuggestion, isError);
}
inline ::StringW GlobalNamespace::FatalErrorData::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FatalErrorData>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "shortMessage", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "verboseMessage", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "recoverySuggestion", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::FatalErrorData::FatalErrorData(bool isError, ::StringW shortMessage, ::StringW verboseMessage, ::StringW recoverySuggestion) noexcept {
  this->isError = isError;
  this->shortMessage = shortMessage;
  this->verboseMessage = verboseMessage;
  this->recoverySuggestion = recoverySuggestion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FatalErrorData::FatalErrorData() {}
