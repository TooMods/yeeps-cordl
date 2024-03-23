#pragma once
#include "Amazon/DynamoDBv2/zzzz__SetPropertyConverter_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ListToSetPropertyConverter_1_def.hpp"
template <typename TElement> inline ::Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>* Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>*>());
}
template <typename TElement> inline void Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TElement> constexpr ::Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>::ListToSetPropertyConverter_1() {}
