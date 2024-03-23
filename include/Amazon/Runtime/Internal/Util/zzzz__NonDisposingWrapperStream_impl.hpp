#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__NonDisposingWrapperStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::*)(::System::IO::Stream*)>(
    &::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2443f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::*)(bool)>(
    &::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2443f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>::get(), 21));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream* Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::New_ctor(::System::IO::Stream* baseStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>(baseStream));
}
inline void Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::_ctor(::System::IO::Stream* baseStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseStream);
}
inline void Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream::NonDisposingWrapperStream() {}
