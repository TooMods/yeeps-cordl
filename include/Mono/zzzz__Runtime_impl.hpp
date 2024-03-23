#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__Runtime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Runtime.GetDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Mono::Runtime::GetDisplayName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1d03388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get(), "GetDisplayName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::Runtime::setStaticF_dump(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "dump", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Runtime::getStaticF_dump() {
  return ::cordl_internals::getStaticField<::System::Object*, "dump", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get>();
}
inline ::StringW Mono::Runtime::GetDisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get(), "GetDisplayName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Runtime::Runtime() {}
