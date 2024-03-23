#pragma once
#include "Unity/Services/Vivox/zzzz__IDirectedMessageResult_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::IDirectedMessageResult.get_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IDirectedMessageResult::*)()>(
    &::Unity::Services::Vivox::IDirectedMessageResult::get_RequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IDirectedMessageResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IDirectedMessageResult*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Vivox::IDirectedMessageResult::get_RequestId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IDirectedMessageResult*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
