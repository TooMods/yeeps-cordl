#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__S3Link_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IPropertyConverter_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__S3ClientCache_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__S3Link_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(&::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14233dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter.ToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::*)(::System::Object*)>(&::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::ToEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1431aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), "ToEntry",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter.FromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(&::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::FromEntry)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1431b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
constexpr Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::__cordl_internal_set_context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter* Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>(context));
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::ToEntry(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), "ToEntry",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, value);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__S3LinkConverter::__S3Link__S3LinkConverter() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo.get_s3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::__S3Link__S3* (::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::get_s3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(),
                                                                               "get_s3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo.set_s3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::*)(::Amazon::DynamoDBv2::DataModel::__S3Link__S3*)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::set_s3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), "set_s3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::*)(::StringW, ::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14314e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::*)(::StringW, ::StringW, ::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1431590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__S3*& Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::__cordl_internal_get__s3_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*> const&
Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::__cordl_internal_get__s3_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::__cordl_internal_set__s3_k__BackingField(::Amazon::DynamoDBv2::DataModel::__S3Link__S3* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::get_s3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(),
                                                                             "get_s3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::set_s3(::Amazon::DynamoDBv2::DataModel::__S3Link__S3* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), "set_s3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>());
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::New_ctor(::StringW bucketName, ::StringW key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>(bucketName, key));
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor(::StringW bucketName, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bucketName, key);
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::New_ctor(::StringW bucketName, ::StringW key, ::StringW region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>(bucketName, key, region));
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::_ctor(::StringW bucketName, ::StringW key, ::StringW region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bucketName, key, region);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo::__S3Link__LinkInfo() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.get_bucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_bucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(),
                                                                               "get_bucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.set_bucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_bucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_bucket",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.get_key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "get_key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.set_key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_key", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.get_region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(),
                                                                               "get_region", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3.set_region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_region",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)()>(&::Amazon::DynamoDBv2::DataModel::__S3Link__S3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__S3Link__S3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__S3Link__S3::*)(::StringW, ::StringW, ::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__S3Link__S3::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1431c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__bucket_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__bucket_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bucket_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_set__bucket_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bucket_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_set__key_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__region_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____region_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_get__region_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____region_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__S3Link__S3::__cordl_internal_set__region_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____region_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_bucket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(),
                                                                             "get_bucket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_bucket(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_bucket", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "get_key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_key(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::__S3Link__S3::get_region() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(),
                                                                             "get_region", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3::set_region(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), "set_region", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* Amazon::DynamoDBv2::DataModel::__S3Link__S3::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>());
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DataModel::__S3Link__S3* Amazon::DynamoDBv2::DataModel::__S3Link__S3::New_ctor(::StringW bucketName, ::StringW key, ::StringW region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>(bucketName, key, region));
}
inline void Amazon::DynamoDBv2::DataModel::__S3Link__S3::_ctor(::StringW bucketName, ::StringW key, ::StringW region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__S3Link__S3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bucketName, key, region);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__S3::__S3Link__S3() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DataModel::S3Link* (*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::StringW, ::StringW, ::Amazon::RegionEndpoint*)>(
        &::Amazon::DynamoDBv2::DataModel::S3Link::Create)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1430ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::S3Link::*)()>(&::Amazon::DynamoDBv2::DataModel::S3Link::get_Key)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x143122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "get_Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::StringW)>(&::Amazon::DynamoDBv2::DataModel::S3Link::set_Key)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1431250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.get_BucketName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::S3Link::*)()>(&::Amazon::DynamoDBv2::DataModel::S3Link::get_BucketName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1431274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(),
                                                                               "get_BucketName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.set_BucketName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::S3Link::set_BucketName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1431298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_BucketName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.get_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::S3Link::*)()>(&::Amazon::DynamoDBv2::DataModel::S3Link::get_Region)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x14312bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "get_Region",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.set_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::StringW)>(&::Amazon::DynamoDBv2::DataModel::S3Link::set_Region)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x143133c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_Region", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.get_RegionAsEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (::Amazon::DynamoDBv2::DataModel::S3Link::*)()>(
    &::Amazon::DynamoDBv2::DataModel::S3Link::get_RegionAsEndpoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x14313c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(),
                                                                               "get_RegionAsEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::Amazon::DynamoDBv2::DataModel::S3ClientCache*, ::StringW, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::S3Link::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1431458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::Amazon::DynamoDBv2::DataModel::S3ClientCache*, ::StringW, ::StringW, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::S3Link::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1430fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(
    ::Amazon::DynamoDBv2::DataModel::S3ClientCache*, ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*)>(&::Amazon::DynamoDBv2::DataModel::S3Link::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14314ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::Amazon::DynamoDBv2::DataModel::S3ClientCache*, ::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::S3Link::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x14316bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.GetRegionFromJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)(::StringW)>(&::Amazon::DynamoDBv2::DataModel::S3Link::GetRegionFromJSON)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x14317c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "GetRegionFromJSON",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.CreatClientCacheFromContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::S3ClientCache* (*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::S3Link::CreatClientCacheFromContext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x143105c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "CreatClientCacheFromContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.GetPreSignedURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::S3Link::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::DataModel::S3Link::GetPreSignedURL)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x14318a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "GetPreSignedURL",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3Link.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::S3Link::*)()>(&::Amazon::DynamoDBv2::DataModel::S3Link::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x143198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "ToJson",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DataModel::S3ClientCache*& Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_get_s3ClientCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s3ClientCache;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::S3ClientCache*> const& Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_get_s3ClientCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s3ClientCache;
}
constexpr void Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_set_s3ClientCache(::Amazon::DynamoDBv2::DataModel::S3ClientCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s3ClientCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*& Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_get_linker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linker;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*> const& Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_get_linker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linker;
}
constexpr void Amazon::DynamoDBv2::DataModel::S3Link::__cordl_internal_set_linker(::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::setStaticF_Caches(
    ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>*, "Caches",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>*
Amazon::DynamoDBv2::DataModel::S3Link::getStaticF_Caches() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::S3ClientCache*>*, "Caches",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::setStaticF_cacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "cacheLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::S3Link::getStaticF_cacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "cacheLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get>();
}
inline ::Amazon::DynamoDBv2::DataModel::S3Link* Amazon::DynamoDBv2::DataModel::S3Link::Create(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::StringW bucket, ::StringW key,
                                                                                              ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::S3Link*, false>(nullptr, ___internal_method, context, bucket, key, region);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::S3Link::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::set_Key(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::S3Link::get_BucketName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "get_BucketName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::set_BucketName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_BucketName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::S3Link::get_Region() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "get_Region",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::set_Region(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "set_Region", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::RegionEndpoint* Amazon::DynamoDBv2::DataModel::S3Link::get_RegionAsEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(),
                                                                             "get_RegionAsEndpoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DataModel::S3Link* Amazon::DynamoDBv2::DataModel::S3Link::New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::S3Link*>(clientCache, bucketName, key));
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCache, bucketName, key);
}
inline ::Amazon::DynamoDBv2::DataModel::S3Link* Amazon::DynamoDBv2::DataModel::S3Link::New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key,
                                                                                                ::StringW region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::S3Link*>(clientCache, bucketName, key, region));
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW bucketName, ::StringW key, ::StringW region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCache, bucketName, key, region);
}
inline ::Amazon::DynamoDBv2::DataModel::S3Link* Amazon::DynamoDBv2::DataModel::S3Link::New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache,
                                                                                                ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* linker) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::S3Link*>(clientCache, linker));
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo* linker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__S3Link__LinkInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCache, linker);
}
inline ::Amazon::DynamoDBv2::DataModel::S3Link* Amazon::DynamoDBv2::DataModel::S3Link::New_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW json) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::S3Link*>(clientCache, json));
}
inline void Amazon::DynamoDBv2::DataModel::S3Link::_ctor(::Amazon::DynamoDBv2::DataModel::S3ClientCache* clientCache, ::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCache, json);
}
inline ::Amazon::RegionEndpoint* Amazon::DynamoDBv2::DataModel::S3Link::GetRegionFromJSON(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "GetRegionFromJSON",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method, json);
}
inline ::Amazon::DynamoDBv2::DataModel::S3ClientCache* Amazon::DynamoDBv2::DataModel::S3Link::CreatClientCacheFromContext(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "CreatClientCacheFromContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::S3ClientCache*, false>(nullptr, ___internal_method, context);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::S3Link::GetPreSignedURL(::System::DateTime expiration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "GetPreSignedURL", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, expiration);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::S3Link::ToJson() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3Link*>::get(), "ToJson",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::S3Link::S3Link() {}
