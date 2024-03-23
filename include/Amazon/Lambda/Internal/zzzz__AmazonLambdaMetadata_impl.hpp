#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Internal/zzzz__AmazonLambdaMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Internal::AmazonLambdaMetadata.get_ServiceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Internal::AmazonLambdaMetadata::*)()>(
    &::Amazon::Lambda::Internal::AmazonLambdaMetadata::get_ServiceId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bc2c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(),
                                                                               "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Internal::AmazonLambdaMetadata.get_OperationNameMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Lambda::Internal::AmazonLambdaMetadata::*)()>(&::Amazon::Lambda::Internal::AmazonLambdaMetadata::get_OperationNameMapping)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bc2c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(),
                                                                               "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Internal::AmazonLambdaMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Internal::AmazonLambdaMetadata::*)()>(
    &::Amazon::Lambda::Internal::AmazonLambdaMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc2c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr Amazon::Lambda::Internal::AmazonLambdaMetadata::operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
constexpr ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::Lambda::Internal::AmazonLambdaMetadata::i___Amazon__Runtime__Internal__IServiceMetadata() noexcept {
  return static_cast<::Amazon::Runtime::Internal::IServiceMetadata*>(static_cast<void*>(this));
}
inline ::StringW Amazon::Lambda::Internal::AmazonLambdaMetadata::get_ServiceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(),
                                                                             "get_ServiceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Lambda::Internal::AmazonLambdaMetadata::get_OperationNameMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(),
                                                                             "get_OperationNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Internal::AmazonLambdaMetadata* Amazon::Lambda::Internal::AmazonLambdaMetadata::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>());
}
inline void Amazon::Lambda::Internal::AmazonLambdaMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Internal::AmazonLambdaMetadata*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Internal::AmazonLambdaMetadata::AmazonLambdaMetadata() {}
