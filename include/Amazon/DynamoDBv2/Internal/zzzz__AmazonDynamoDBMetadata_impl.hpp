#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Internal/zzzz__AmazonDynamoDBMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata.get_ServiceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::*)()>(
    &::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::get_ServiceId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1745618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                               "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata.get_OperationNameMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::*)()>(&::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::get_OperationNameMapping)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1745658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                               "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::*)()>(
    &::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17456cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::i___Amazon__Runtime__Internal__IServiceMetadata() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
inline ::StringW Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::get_ServiceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                             "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::get_OperationNameMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                             "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata* Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>());
}
inline void Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Internal::AmazonDynamoDBMetadata::AmazonDynamoDBMetadata() {}
