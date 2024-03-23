#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConverterCache_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConverterCache.HasConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::ConverterCache::*)(::System::Type*)>(
    &::Amazon::DynamoDBv2::ConverterCache::HasConverter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12088d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "HasConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConverterCache.AddConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ConverterCache::*)(
    ::Amazon::DynamoDBv2::Converter*, ::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::ConverterCache::AddConverter)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x1209f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "AddConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConverterCache.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Converter* (::Amazon::DynamoDBv2::ConverterCache::*)(::System::Type*)>(
    &::Amazon::DynamoDBv2::ConverterCache::GetConverter)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1208a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConverterCache.TryGetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::ConverterCache::*)(::System::Type*, ByRef<::Amazon::DynamoDBv2::Converter*>)>(
    &::Amazon::DynamoDBv2::ConverterCache::TryGetConverter)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x120b3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::Converter*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConverterCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ConverterCache::*)()>(&::Amazon::DynamoDBv2::ConverterCache::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x12086b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>*& Amazon::DynamoDBv2::ConverterCache::__cordl_internal_get_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>*> const&
Amazon::DynamoDBv2::ConverterCache::__cordl_internal_get_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr void Amazon::DynamoDBv2::ConverterCache::__cordl_internal_set_Cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::ConverterCache::setStaticF_EnumType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::DynamoDBv2::ConverterCache::getStaticF_EnumType() {
  return ::cordl_internals::getStaticField<::System::Type*, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get>();
}
inline bool Amazon::DynamoDBv2::ConverterCache::HasConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "HasConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline void Amazon::DynamoDBv2::ConverterCache::AddConverter(::Amazon::DynamoDBv2::Converter* converter, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "AddConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converter, conversion);
}
inline ::Amazon::DynamoDBv2::Converter* Amazon::DynamoDBv2::ConverterCache::GetConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Converter*, false>(this, ___internal_method, type);
}
inline bool Amazon::DynamoDBv2::ConverterCache::TryGetConverter(::System::Type* type, ByRef<::Amazon::DynamoDBv2::Converter*> converter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), "TryGetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::Converter*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, converter);
}
inline ::Amazon::DynamoDBv2::ConverterCache* Amazon::DynamoDBv2::ConverterCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ConverterCache*>());
}
inline void Amazon::DynamoDBv2::ConverterCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConverterCache*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ConverterCache::ConverterCache() {}
