#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptUploadPartStream_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptUploadPartStream_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
template <typename T>
inline ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>*
Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>::New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>*>(baseStream, key, IV));
}
template <typename T>
inline void Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>::_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseStream, key, IV);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<T>::EncryptUploadPartStream_1() {}
