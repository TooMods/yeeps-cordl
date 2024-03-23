#pragma once
#include "System/IO/zzzz__StringWriter_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__XMLEncodedStringWriter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::*)(::System::IFormatProvider*)>(
    &::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2447dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::Write)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2447de0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter* Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::New_ctor(::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>(formatProvider));
}
inline void Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::_ctor(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formatProvider);
}
inline void Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::XMLEncodedStringWriter::XMLEncodedStringWriter() {}
