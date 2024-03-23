#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonS3)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonS3;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonS3
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonS3*
class CORDL_TYPE ICoreAmazonS3 {
public:
  // Declarations
  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteAsync(::StringW bucketName, ::StringW objectKey, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeletesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeletesAsync(::StringW bucketName, ::System::Collections::Generic::IEnumerable_1<::StringW>* objectKeys,
                                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                        ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoesS3BucketExistAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* DoesS3BucketExistAsync(::StringW bucketName);

  /// @brief Method DownloadToFilePathAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DownloadToFilePathAsync(::StringW bucketName, ::StringW objectKey, ::StringW filepath,
                                                                   ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method EnsureBucketExistsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EnsureBucketExistsAsync(::StringW bucketName);

  /// @brief Method GeneratePreSignedURL, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GeneratePreSignedURL(::StringW bucketName, ::StringW objectKey, ::System::DateTime expiration,
                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties);

  /// @brief Method GetAllObjectKeysAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::StringW>*>*
  GetAllObjectKeysAsync(::StringW bucketName, ::StringW prefix, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties);

  /// @brief Method GetObjectStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetObjectStreamAsync(::StringW bucketName, ::StringW objectKey,
                                                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MakeObjectPublicAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* MakeObjectPublicAsync(::StringW bucketName, ::StringW objectKey, bool enable);

  /// @brief Method UploadObjectFromFilePathAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* UploadObjectFromFilePathAsync(::StringW bucketName, ::StringW objectKey, ::StringW filepath,
                                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UploadObjectFromStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* UploadObjectFromStreamAsync(::StringW bucketName, ::StringW objectKey, ::System::IO::Stream* stream,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonS3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonS3(ICoreAmazonS3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonS3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonS3(ICoreAmazonS3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonS3");
