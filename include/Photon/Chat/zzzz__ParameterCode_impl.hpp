#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Chat/zzzz__ParameterCode_def.hpp"
//  Writing Method size for method: ::Photon::Chat::ParameterCode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ParameterCode::*)()>(&::Photon::Chat::ParameterCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1811064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ParameterCode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Photon::Chat::ParameterCode* Photon::Chat::ParameterCode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Chat::ParameterCode*>());
}
inline void Photon::Chat::ParameterCode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ParameterCode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Chat::ParameterCode::ParameterCode() {}
