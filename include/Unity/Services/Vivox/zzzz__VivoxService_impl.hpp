#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxService_def.hpp"
#include "Unity/Services/Vivox/zzzz__IVivoxService_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxService.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::IVivoxService* (*)()>(&::Unity::Services::Vivox::VivoxService::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1c19330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxService.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Vivox::IVivoxService*)>(&::Unity::Services::Vivox::VivoxService::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1c19378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IVivoxService*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::VivoxService::setStaticF__Instance_k__BackingField(::Unity::Services::Vivox::IVivoxService* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Vivox::IVivoxService*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get>(
      std::forward<::Unity::Services::Vivox::IVivoxService*>(value));
}
inline ::Unity::Services::Vivox::IVivoxService* Unity::Services::Vivox::VivoxService::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::Unity::Services::Vivox::IVivoxService*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get>();
}
inline ::Unity::Services::Vivox::IVivoxService* Unity::Services::Vivox::VivoxService::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::IVivoxService*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Vivox::VivoxService::set_Instance(::Unity::Services::Vivox::IVivoxService* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxService*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::IVivoxService*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxService::VivoxService() {}
