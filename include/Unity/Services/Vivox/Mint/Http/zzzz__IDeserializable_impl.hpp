#pragma once
#include "Unity/Services/Vivox/Mint/Http/zzzz__IDeserializable_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__DeserializationSettings_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::IDeserializable.GetAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::Mint::Http::IDeserializable::*)()>(
    &::Unity::Services::Vivox::Mint::Http::IDeserializable::GetAsString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IDeserializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IDeserializable*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Vivox::Mint::Http::IDeserializable::GetAsString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IDeserializable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @param deserializationSettings: ::Unity::Services::Vivox::Mint::Http::DeserializationSettings* (default: nullptr)
template <typename T> inline T Unity::Services::Vivox::Mint::Http::IDeserializable::GetAs(::Unity::Services::Vivox::Mint::Http::DeserializationSettings* deserializationSettings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IDeserializable*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, deserializationSettings);
}
