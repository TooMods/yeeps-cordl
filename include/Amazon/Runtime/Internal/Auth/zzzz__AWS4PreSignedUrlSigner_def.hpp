#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4Signer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AWS4PreSignedUrlSigner)
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AWS4PreSignedUrlSigner;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner);
// Type: Amazon.Runtime.Internal.Auth::AWS4PreSignedUrlSigner
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AWS4PreSignedUrlSigner*
class CORDL_TYPE AWS4PreSignedUrlSigner : public ::Amazon::Runtime::Internal::Auth::AWS4Signer {
public:
  // Declarations
  /// @brief Field ServicesUsingUnsignedPayload, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ServicesUsingUnsignedPayload,
                             put = setStaticF_ServicesUsingUnsignedPayload))::System::Collections::Generic::HashSet_1<::StringW>* ServicesUsingUnsignedPayload;

  static inline ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner* New_ctor();

  /// @brief Method Sign, addr 0x25e4074, size 0x50, virtual true, abstract: false, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method SignRequest, addr 0x25e40c4, size 0x190, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* SignRequest(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                           ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  /// @brief Method SignRequest, addr 0x25e4254, size 0xf60, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* SignRequest(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                                  ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey,
                                                                                  ::StringW service, ::StringW overrideSigningRegion);

  /// @brief Method .ctor, addr 0x25e51b4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_ServicesUsingUnsignedPayload();

  static inline void setStaticF_ServicesUsingUnsignedPayload(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWS4PreSignedUrlSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWS4PreSignedUrlSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWS4PreSignedUrlSigner(AWS4PreSignedUrlSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWS4PreSignedUrlSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWS4PreSignedUrlSigner(AWS4PreSignedUrlSigner const&) = delete;

  /// @brief Field MaxAWS4PreSignedUrlExpiry offset 0xffffffff size 0x8
  static constexpr int64_t MaxAWS4PreSignedUrlExpiry{ static_cast<int64_t>(0x93a80) };

  /// @brief Field XAmzAlgorithm offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzAlgorithm{ u"X-Amz-Algorithm" };

  /// @brief Field XAmzCredential offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzCredential{ u"X-Amz-Credential" };

  /// @brief Field XAmzExpires offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzExpires{ u"X-Amz-Expires" };

  /// @brief Field XAmzSignature offset 0xffffffff size 0x8
  static constexpr ::ConstString XAmzSignature{ u"X-Amz-Signature" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*, "Amazon.Runtime.Internal.Auth", "AWS4PreSignedUrlSigner");
