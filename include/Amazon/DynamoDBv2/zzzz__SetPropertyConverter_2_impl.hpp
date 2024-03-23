#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__SetPropertyConverter_2_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IPropertyConverter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
/// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
template <typename TCollection, typename TElement>
constexpr Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
template <typename TCollection, typename TElement>
constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
template <typename TCollection, typename TElement>
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::__cordl_internal_get__Conversion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
template <typename TCollection, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::__cordl_internal_get__Conversion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
template <typename TCollection, typename TElement>
constexpr void Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::__cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Conversion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TCollection, typename TElement> inline void Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::setStaticF_collectionType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "collectionType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get>(
      std::forward<::System::Type*>(value));
}
template <typename TCollection, typename TElement> inline ::System::Type* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::getStaticF_collectionType() {
  return ::cordl_internals::getStaticField<::System::Type*, "collectionType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get>();
}
template <typename TCollection, typename TElement> inline void Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::setStaticF_elementType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "elementType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get>(
      std::forward<::System::Type*>(value));
}
template <typename TCollection, typename TElement> inline ::System::Type* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::getStaticF_elementType() {
  return ::cordl_internals::getStaticField<::System::Type*, "elementType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get>();
}
template <typename TCollection, typename TElement> inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::get_Conversion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get(), "get_Conversion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(this, ___internal_method);
}
template <typename TCollection, typename TElement> inline void Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get(), "set_Conversion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TCollection, typename TElement>
inline ::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>());
}
template <typename TCollection, typename TElement> inline void Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCollection, typename TElement>
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::ToEntry(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get(), "ToEntry",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, value);
}
template <typename TCollection, typename TElement>
inline ::System::Object* Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
template <typename TCollection, typename TElement> constexpr ::Amazon::DynamoDBv2::SetPropertyConverter_2<TCollection, TElement>::SetPropertyConverter_2() {}
