#pragma once
#include "Amazon/DynamoDBv2/zzzz__DictionaryConverterV1_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__DictionaryConverterV2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DictionaryConverterV2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DictionaryConverterV2::*)()>(&::Amazon::DynamoDBv2::DictionaryConverterV2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120e7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DictionaryConverterV2*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::DictionaryConverterV2* Amazon::DynamoDBv2::DictionaryConverterV2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DictionaryConverterV2*>());
}
inline void Amazon::DynamoDBv2::DictionaryConverterV2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DictionaryConverterV2*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DictionaryConverterV2::DictionaryConverterV2() {}
