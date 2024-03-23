#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveEqualityComparer_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x165987c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16598a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16598c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::setStaticF_Default(::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer* Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get>();
}
inline bool Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::Equals(::Amazon::DynamoDBv2::DocumentModel::Primitive* x, ::Amazon::DynamoDBv2::DocumentModel::Primitive* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::GetHashCode(::Amazon::DynamoDBv2::DocumentModel::Primitive* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer* Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::PrimitiveEqualityComparer::PrimitiveEqualityComparer() {}
