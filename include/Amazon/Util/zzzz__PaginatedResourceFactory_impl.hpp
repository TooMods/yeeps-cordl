#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__PaginatedResourceFactory_def.hpp"
#include "Amazon/Util/zzzz__Marker_1_def.hpp"
#include "Amazon/Util/zzzz__PaginatedResourceFactory_def.hpp"
#include "Amazon/Util/zzzz__PaginatedResourceInfo_def.hpp"
#include "Amazon/Util/zzzz__PaginatedResource_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::System::Reflection::MethodInfo*& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_fetcherMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetcherMethod;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const&
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_fetcherMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetcherMethod;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_fetcherMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fetcherMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::System::Object*& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_client(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>*
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>*>());
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline TResponseType Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::_Create_b__0(TRequestType req) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>*>::get(), "<Create>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequestType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResponseType, false>(this, ___internal_method, req);
}
// Ctor Parameters []
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>::__PaginatedResourceFactory____c__DisplayClass1_0_3() {}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr TRequestType& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr TRequestType const& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_request(TRequestType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_tokenRequestPropertyPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenRequestPropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW const& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_tokenRequestPropertyPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenRequestPropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_tokenRequestPropertyPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tokenRequestPropertyPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::System::Func_2<TRequestType, TResponseType>*& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_call() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TRequestType, TResponseType>*> const&
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_call() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_call(::System::Func_2<TRequestType, TResponseType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___call)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_tokenResponsePropertyPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenResponsePropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW const& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_tokenResponsePropertyPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenResponsePropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_tokenResponsePropertyPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tokenResponsePropertyPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_itemListPropertyPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemListPropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::StringW const& Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_get_itemListPropertyPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemListPropertyPath;
}
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__cordl_internal_set_itemListPropertyPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemListPropertyPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>*
Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>*>());
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline void Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline ::Amazon::Util::Marker_1<ItemType>* Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::_Create_b__0(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>*>::get(), "<Create>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Marker_1<ItemType>*, false>(this, ___internal_method, token);
}
// Ctor Parameters []
template <typename ItemType, typename TRequestType, typename TResponseType>
constexpr ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>::__PaginatedResourceFactory____c__DisplayClass2_0_3() {}
//  Writing Method size for method: ::Amazon::Util::PaginatedResourceFactory.SetPropertyValueAtPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::StringW, ::StringW)>(
    &::Amazon::Util::PaginatedResourceFactory::SetPropertyValueAtPath)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x220a060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "SetPropertyValueAtPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::PaginatedResourceFactory.GetPropertyTypeFromPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::StringW)>(
    &::Amazon::Util::PaginatedResourceFactory::GetPropertyTypeFromPath)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x220a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "GetPropertyTypeFromPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
template <typename TItemType, typename TRequestType, typename TResponseType> inline ::System::Object* Amazon::Util::PaginatedResourceFactory::Create(::Amazon::Util::PaginatedResourceInfo* pri) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "Create",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::PaginatedResourceInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, pri);
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline ::Amazon::Util::PaginatedResource_1<ItemType>* Amazon::Util::PaginatedResourceFactory::Create(::System::Object* client, ::StringW methodName, ::System::Object* request,
                                                                                                     ::StringW tokenRequestPropertyPath, ::StringW tokenResponsePropertyPath,
                                                                                                     ::StringW itemListPropertyPath) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "Create",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() },
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ItemType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::PaginatedResource_1<ItemType>*, false>(nullptr, ___internal_method, client, methodName, request, tokenRequestPropertyPath,
                                                                                                    tokenResponsePropertyPath, itemListPropertyPath);
}
template <typename ItemType, typename TRequestType, typename TResponseType>
inline ::Amazon::Util::PaginatedResource_1<ItemType>* Amazon::Util::PaginatedResourceFactory::Create(::System::Func_2<TRequestType, TResponseType>* call, TRequestType request,
                                                                                                     ::StringW tokenRequestPropertyPath, ::StringW tokenResponsePropertyPath,
                                                                                                     ::StringW itemListPropertyPath) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "Create",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TRequestType, TResponseType>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequestType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ItemType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequestType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponseType>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::PaginatedResource_1<ItemType>*, false>(nullptr, ___internal_method, call, request, tokenRequestPropertyPath, tokenResponsePropertyPath,
                                                                                                    itemListPropertyPath);
}
inline void Amazon::Util::PaginatedResourceFactory::SetPropertyValueAtPath(::System::Object* instance, ::StringW path, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "SetPropertyValueAtPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, path, value);
}
template <typename T> inline T Amazon::Util::PaginatedResourceFactory::GetPropertyValueFromPath(::System::Object* instance, ::StringW path) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "GetPropertyValueFromPath",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, instance, path);
}
inline ::System::Type* Amazon::Util::PaginatedResourceFactory::GetPropertyTypeFromPath(::System::Type* start, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "GetPropertyTypeFromPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, start, path);
}
template <typename T, typename U> inline ::System::Type* Amazon::Util::PaginatedResourceFactory::GetFuncType() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "GetFuncType",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
template <typename T> inline T Amazon::Util::PaginatedResourceFactory::Cast(::System::Object* o) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResourceFactory*>::get(), "Cast",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Amazon::Util::PaginatedResourceFactory::PaginatedResourceFactory() {}
