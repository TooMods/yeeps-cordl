#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonS3_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.GeneratePreSignedURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(
    ::StringW, ::StringW, ::System::DateTime, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GeneratePreSignedURL)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.GetAllObjectKeysAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::StringW>*>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GetAllObjectKeysAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.UploadObjectFromStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::System::IO::Stream*, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*,
                                                           ::System::Threading::CancellationToken)>(&::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::UploadObjectFromStreamAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.DeleteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, ::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DeleteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.DeletesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*,
                                                           ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, ::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DeletesAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.GetObjectStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, ::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GetObjectStreamAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.UploadObjectFromFilePathAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*,
                                                           ::System::Threading::CancellationToken)>(&::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::UploadObjectFromFilePathAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.DownloadToFilePathAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*,
                                                           ::System::Threading::CancellationToken)>(&::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DownloadToFilePathAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.MakeObjectPublicAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW, ::StringW, bool)>(&::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::MakeObjectPublicAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.EnsureBucketExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::EnsureBucketExistsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3.DoesS3BucketExistAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::*)(::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DoesS3BucketExistAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 10));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GeneratePreSignedURL(::StringW bucketName, ::StringW objectKey, ::System::DateTime expiration,
                                                                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bucketName, objectKey, expiration, additionalProperties);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::StringW>*>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GetAllObjectKeysAsync(::StringW bucketName, ::StringW prefix,
                                                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::StringW>*>*, false>(this, ___internal_method, bucketName, prefix,
                                                                                                                                              additionalProperties);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::UploadObjectFromStreamAsync(::StringW bucketName, ::StringW objectKey, ::System::IO::Stream* stream,
                                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                              ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKey, stream, additionalProperties, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DeleteAsync(::StringW bucketName, ::StringW objectKey,
                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                              ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKey, additionalProperties, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DeletesAsync(::StringW bucketName, ::System::Collections::Generic::IEnumerable_1<::StringW>* objectKeys,
                                                               ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                               ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKeys, additionalProperties, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::GetObjectStreamAsync(::StringW bucketName, ::StringW objectKey,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method, bucketName, objectKey, additionalProperties,
                                                                                                                cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::UploadObjectFromFilePathAsync(::StringW bucketName, ::StringW objectKey, ::StringW filepath,
                                                                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                                ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKey, filepath, additionalProperties, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DownloadToFilePathAsync(::StringW bucketName, ::StringW objectKey, ::StringW filepath,
                                                                          ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                          ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKey, filepath, additionalProperties, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::MakeObjectPublicAsync(::StringW bucketName, ::StringW objectKey, bool enable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName, objectKey, enable);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::EnsureBucketExistsAsync(::StringW bucketName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, bucketName);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::SharedInterfaces::ICoreAmazonS3::DoesS3BucketExistAsync(::StringW bucketName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, bucketName);
}
