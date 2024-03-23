#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__ResourceFactory_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Resource_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ResourceFactory.NewS3BucketResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Resource* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ResourceFactory::NewS3BucketResource)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x25ebd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewS3BucketResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ResourceFactory.NewS3ObjectResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Resource* (*)(::StringW, ::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ResourceFactory::NewS3ObjectResource)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x25ebe58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewS3ObjectResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ResourceFactory.NewSQSQueueResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Resource* (*)(::StringW, ::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ResourceFactory::NewSQSQueueResource)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25ebf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewSQSQueueResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ResourceFactory.FormatAccountId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Auth::AccessControlPolicy::ResourceFactory::FormatAccountId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25ec048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "FormatAccountId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Auth::AccessControlPolicy::Resource* Amazon::Auth::AccessControlPolicy::ResourceFactory::NewS3BucketResource(::StringW bucketName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewS3BucketResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Resource*, false>(nullptr, ___internal_method, bucketName);
}
inline ::Amazon::Auth::AccessControlPolicy::Resource* Amazon::Auth::AccessControlPolicy::ResourceFactory::NewS3ObjectResource(::StringW bucketName, ::StringW keyPattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewS3ObjectResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Resource*, false>(nullptr, ___internal_method, bucketName, keyPattern);
}
inline ::Amazon::Auth::AccessControlPolicy::Resource* Amazon::Auth::AccessControlPolicy::ResourceFactory::NewSQSQueueResource(::StringW accountId, ::StringW queueName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "NewSQSQueueResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Resource*, false>(nullptr, ___internal_method, accountId, queueName);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::ResourceFactory::FormatAccountId(::StringW accountId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ResourceFactory*>::get(), "FormatAccountId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, accountId);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::ResourceFactory::ResourceFactory() {}
