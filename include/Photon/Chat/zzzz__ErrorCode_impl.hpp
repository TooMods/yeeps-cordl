#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Chat/zzzz__ErrorCode_def.hpp"
//  Writing Method size for method: ::Photon::Chat::ErrorCode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ErrorCode::*)()>(&::Photon::Chat::ErrorCode::_ctor)> {
  constexpr static std::size_t size = 0x1b534;
  constexpr static std::size_t addrs = 0x181106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ErrorCode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Photon::Chat::ErrorCode* Photon::Chat::ErrorCode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Chat::ErrorCode*>());
}
inline void Photon::Chat::ErrorCode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ErrorCode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Chat::ErrorCode::ErrorCode() {}
