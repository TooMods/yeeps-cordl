#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HeaderKeys)
// Forward declare root types
namespace Amazon::Util {
class HeaderKeys;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::HeaderKeys);
// Type: Amazon.Util::HeaderKeys
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::HeaderKeys*
class CORDL_TYPE HeaderKeys : public ::System::Object {
public:
  // Declarations
  static inline ::Amazon::Util::HeaderKeys* New_ctor();

  /// @brief Method .ctor, addr 0x220a058, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderKeys();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderKeys", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderKeys(HeaderKeys&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderKeys", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderKeys(HeaderKeys const&) = delete;

  /// @brief Field AcceptHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString AcceptHeader{ u"Accept" };

  /// @brief Field AmzSdkInvocationId offset 0xffffffff size 0x8
  static constexpr ::ConstString AmzSdkInvocationId{ u"amz-sdk-invocation-id" };

  /// @brief Field AmzSdkRequest offset 0xffffffff size 0x8
  static constexpr ::ConstString AmzSdkRequest{ u"amz-sdk-request" };

  /// @brief Field AuthorizationHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString AuthorizationHeader{ u"Authorization" };

  /// @brief Field ConfirmSelfBucketAccess offset 0xffffffff size 0x8
  static constexpr ::ConstString ConfirmSelfBucketAccess{ u"x-amz-confirm-remove-self-bucket-access" };

  /// @brief Field ConnectionHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ConnectionHeader{ u"Connection" };

  /// @brief Field ContentDispositionHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentDispositionHeader{ u"Content-Disposition" };

  /// @brief Field ContentEncodingHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentEncodingHeader{ u"Content-Encoding" };

  /// @brief Field ContentLengthHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentLengthHeader{ u"Content-Length" };

  /// @brief Field ContentMD5Header offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentMD5Header{ u"Content-MD5" };

  /// @brief Field ContentRangeHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentRangeHeader{ u"Content-Range" };

  /// @brief Field ContentTypeHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ContentTypeHeader{ u"Content-Type" };

  /// @brief Field DateHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString DateHeader{ u"Date" };

  /// @brief Field ETagHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ETagHeader{ u"ETag" };

  /// @brief Field ExpectHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString ExpectHeader{ u"Expect" };

  /// @brief Field Expires offset 0xffffffff size 0x8
  static constexpr ::ConstString Expires{ u"Expires" };

  /// @brief Field HostHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString HostHeader{ u"host" };

  /// @brief Field IfMatchHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString IfMatchHeader{ u"If-Match" };

  /// @brief Field IfModifiedSinceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString IfModifiedSinceHeader{ u"If-Modified-Since" };

  /// @brief Field IfNoneMatchHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString IfNoneMatchHeader{ u"If-None-Match" };

  /// @brief Field IfUnmodifiedSinceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString IfUnmodifiedSinceHeader{ u"If-Unmodified-Since" };

  /// @brief Field LocationHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString LocationHeader{ u"location" };

  /// @brief Field RangeHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString RangeHeader{ u"Range" };

  /// @brief Field RequestIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString RequestIdHeader{ u"x-amzn-RequestId" };

  /// @brief Field StatusHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString StatusHeader{ u"Status" };

  /// @brief Field TransferEncodingHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString TransferEncodingHeader{ u"transfer-encoding" };

  /// @brief Field UserAgentHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString UserAgentHeader{ u"User-Agent" };

  /// @brief Field XAmzAbortDateHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAbortDateHeader{ u"x-amz-abort-date" };

  /// @brief Field XAmzAbortRuleIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAbortRuleIdHeader{ u"x-amz-abort-rule-id" };

  /// @brief Field XAmzAccountId offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAccountId{ u"x-amz-account-id" };

  /// @brief Field XAmzAclHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAclHeader{ u"x-amz-acl" };

  /// @brief Field XAmzApiVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzApiVersion{ u"x-amz-api-version" };

  /// @brief Field XAmzAuthorizationHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAuthorizationHeader{ u"X-Amzn-Authorization" };

  /// @brief Field XAmzBucketRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzBucketRegion{ u"x-amz-bucket-region" };

  /// @brief Field XAmzCloudFrontIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCloudFrontIdHeader{ u"X-Amz-Cf-Id" };

  /// @brief Field XAmzContentLengthHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzContentLengthHeader{ u"x-amz-content-length" };

  /// @brief Field XAmzContentSha256Header offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzContentSha256Header{ u"X-Amz-Content-SHA256" };

  /// @brief Field XAmzCopySourceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceHeader{ u"x-amz-copy-source" };

  /// @brief Field XAmzCopySourceIfMatchHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceIfMatchHeader{ u"x-amz-copy-source-if-match" };

  /// @brief Field XAmzCopySourceIfModifiedSinceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceIfModifiedSinceHeader{ u"x-amz-copy-source-if-modified-since" };

  /// @brief Field XAmzCopySourceIfNoneMatchHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceIfNoneMatchHeader{ u"x-amz-copy-source-if-none-match" };

  /// @brief Field XAmzCopySourceIfUnmodifiedSinceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceIfUnmodifiedSinceHeader{ u"x-amz-copy-source-if-unmodified-since" };

  /// @brief Field XAmzCopySourceRangeHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceRangeHeader{ u"x-amz-copy-source-range" };

  /// @brief Field XAmzCopySourceSSECustomerAlgorithmHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceSSECustomerAlgorithmHeader{ u"x-amz-copy-source-server-side-encryption-customer-algorithm" };

  /// @brief Field XAmzCopySourceSSECustomerKeyHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceSSECustomerKeyHeader{ u"x-amz-copy-source-server-side-encryption-customer-key" };

  /// @brief Field XAmzCopySourceSSECustomerKeyMD5Header offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCopySourceSSECustomerKeyMD5Header{ u"x-amz-copy-source-server-side-encryption-customer-key-MD5" };

  /// @brief Field XAmzDateHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzDateHeader{ u"X-Amz-Date" };

  /// @brief Field XAmzDecodedContentLengthHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzDecodedContentLengthHeader{ u"X-Amz-Decoded-Content-Length" };

  /// @brief Field XAmzErrorType offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzErrorType{ u"x-amzn-ErrorType" };

  /// @brief Field XAmzId2Header offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzId2Header{ u"x-amz-id-2" };

  /// @brief Field XAmzMetadataDirectiveHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzMetadataDirectiveHeader{ u"x-amz-metadata-directive" };

  /// @brief Field XAmzMfaHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzMfaHeader{ u"x-amz-mfa" };

  /// @brief Field XAmzNonceHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzNonceHeader{ u"x-amz-nonce" };

  /// @brief Field XAmzOutpostId offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzOutpostId{ u"x-amz-outpost-id" };

  /// @brief Field XAmzRequestIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzRequestIdHeader{ u"x-amz-request-id" };

  /// @brief Field XAmzSSECustomerAlgorithmHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSSECustomerAlgorithmHeader{ u"x-amz-server-side-encryption-customer-algorithm" };

  /// @brief Field XAmzSSECustomerKeyHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSSECustomerKeyHeader{ u"x-amz-server-side-encryption-customer-key" };

  /// @brief Field XAmzSSECustomerKeyMD5Header offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSSECustomerKeyMD5Header{ u"x-amz-server-side-encryption-customer-key-MD5" };

  /// @brief Field XAmzSecurityTokenHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSecurityTokenHeader{ u"x-amz-security-token" };

  /// @brief Field XAmzServerSideEncryptionAwsKmsKeyIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzServerSideEncryptionAwsKmsKeyIdHeader{ u"x-amz-server-side-encryption-aws-kms-key-id" };

  /// @brief Field XAmzServerSideEncryptionHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzServerSideEncryptionHeader{ u"x-amz-server-side-encryption" };

  /// @brief Field XAmzSignedHeadersHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSignedHeadersHeader{ u"X-Amz-SignedHeaders" };

  /// @brief Field XAmzStorageClassHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzStorageClassHeader{ u"x-amz-storage-class" };

  /// @brief Field XAmzUserAgentHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzUserAgentHeader{ u"x-amz-user-agent" };

  /// @brief Field XAmzVersionIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzVersionIdHeader{ u"x-amz-version-id" };

  /// @brief Field XAmzWebsiteRedirectLocationHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzWebsiteRedirectLocationHeader{ u"x-amz-website-redirect-location" };

  /// @brief Field XAmznErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmznErrorMessage{ u"x-amzn-error-message" };

  /// @brief Field XAmznTraceIdHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmznTraceIdHeader{ u"x-amzn-trace-id" };

  /// @brief Field XAwsEc2MetadataToken offset 0xffffffff size 0x8
  static constexpr ::ConstString XAwsEc2MetadataToken{ u"x-aws-ec2-metadata-token" };

  /// @brief Field XAwsEc2MetadataTokenTtlSeconds offset 0xffffffff size 0x8
  static constexpr ::ConstString XAwsEc2MetadataTokenTtlSeconds{ u"x-aws-ec2-metadata-token-ttl-seconds" };

  /// @brief Field XHttpMethodOverrideHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString XHttpMethodOverrideHeader{ u"X-HTTP-Method-Override" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::HeaderKeys, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::HeaderKeys);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::HeaderKeys*, "Amazon.Util", "HeaderKeys");
