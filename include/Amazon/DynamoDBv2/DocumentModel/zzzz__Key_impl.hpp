#pragma once
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Key._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Key::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::Amazon::DynamoDBv2::DocumentModel::Key::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x141f75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Key._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Key::*)()>(&::Amazon::DynamoDBv2::DocumentModel::Key::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x141f7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::DocumentModel::Key*
Amazon::DynamoDBv2::DocumentModel::Key::New_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* values) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::Key*>(values));
}
inline void Amazon::DynamoDBv2::DocumentModel::Key::_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Key* Amazon::DynamoDBv2::DocumentModel::Key::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::Key*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::Key::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::Key::Key() {}
