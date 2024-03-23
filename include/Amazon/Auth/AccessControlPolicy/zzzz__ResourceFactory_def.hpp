#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceFactory)
namespace Amazon::Auth::AccessControlPolicy {
class Resource;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
class ResourceFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ResourceFactory);
// Type: Amazon.Auth.AccessControlPolicy::ResourceFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::ResourceFactory*
class CORDL_TYPE ResourceFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method FormatAccountId, addr 0x25ec048, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW FormatAccountId(::StringW accountId);

  /// @brief Method NewS3BucketResource, addr 0x25ebd78, size 0xe0, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Resource* NewS3BucketResource(::StringW bucketName);

  /// @brief Method NewS3ObjectResource, addr 0x25ebe58, size 0x144, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Resource* NewS3ObjectResource(::StringW bucketName, ::StringW keyPattern);

  /// @brief Method NewSQSQueueResource, addr 0x25ebf9c, size 0xac, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Resource* NewSQSQueueResource(::StringW accountId, ::StringW queueName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceFactory(ResourceFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceFactory(ResourceFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ResourceFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ResourceFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ResourceFactory*, "Amazon.Auth.AccessControlPolicy", "ResourceFactory");
