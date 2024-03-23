#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveComparer_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::Compare)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1659934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::operator ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::i___System__Collections__Generic__IComparer_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::setStaticF_Default(::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get>();
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::Compare(::Amazon::DynamoDBv2::DocumentModel::Primitive* x, ::Amazon::DynamoDBv2::DocumentModel::Primitive* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer::PrimitiveComparer() {}
