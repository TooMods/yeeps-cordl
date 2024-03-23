#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__HashStream_1_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__HashingWrapperMD5_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__MD5Stream_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::MD5Stream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::Internal::Util::MD5Stream::*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int64_t)>(&::Amazon::Runtime::Internal::Util::MD5Stream::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2439c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::MD5Stream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::Internal::Util::MD5Stream::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::Internal::Util::MD5Stream::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::Internal::Util::MD5Stream::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Util::MD5Stream* Amazon::Runtime::Internal::Util::MD5Stream::New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash,
                                                                                                          int64_t expectedLength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::MD5Stream*>(baseStream, expectedHash, expectedLength));
}
inline void Amazon::Runtime::Internal::Util::MD5Stream::_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash, int64_t expectedLength) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::MD5Stream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseStream, expectedHash, expectedLength);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::MD5Stream::MD5Stream() {}
