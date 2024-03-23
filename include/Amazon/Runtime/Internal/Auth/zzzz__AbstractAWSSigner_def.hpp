#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractAWSSigner)
namespace Amazon::Runtime::Internal::Auth {
class AWS4Signer;
}
namespace Amazon::Runtime::Internal::Auth {
struct ClientProtocol;
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
namespace Amazon::Runtime {
struct SigningAlgorithm;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner);
// Type: Amazon.Runtime.Internal.Auth::AbstractAWSSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AbstractAWSSigner*
class CORDL_TYPE AbstractAWSSigner : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AWS4SignerInstance))::Amazon::Runtime::Internal::Auth::AWS4Signer* AWS4SignerInstance;

  __declspec(property(get = get_Protocol))::Amazon::Runtime::Internal::Auth::ClientProtocol Protocol;

  /// @brief Field _aws4Signer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__aws4Signer, put = __cordl_internal_set__aws4Signer))::Amazon::Runtime::Internal::Auth::AWS4Signer* _aws4Signer;

  /// @brief Method ComputeHash, addr 0x2454300, size 0x218, virtual false, abstract: false, final false
  static inline ::StringW ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW secretkey, ::Amazon::Runtime::SigningAlgorithm algorithm);

  /// @brief Method ComputeHash, addr 0x24540ec, size 0x214, virtual false, abstract: false, final false
  static inline ::StringW ComputeHash(::StringW data, ::StringW secretkey, ::Amazon::Runtime::SigningAlgorithm algorithm);

  static inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* New_ctor();

  /// @brief Method SelectSigner, addr 0x2454b18, size 0x44, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* SelectSigner(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* defaultSigner, bool useSigV4Setting,
                                                                            ::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* config);

  /// @brief Method SelectSigner, addr 0x2454aec, size 0x2c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* SelectSigner(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* config);

  /// @brief Method Sign, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method UseV4Signing, addr 0x2454518, size 0x5d4, virtual false, abstract: false, final false
  static inline bool UseV4Signing(bool useSigV4Setting, ::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* config);

  constexpr ::Amazon::Runtime::Internal::Auth::AWS4Signer*& __cordl_internal_get__aws4Signer();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4Signer*> const& __cordl_internal_get__aws4Signer() const;

  constexpr void __cordl_internal_set__aws4Signer(::Amazon::Runtime::Internal::Auth::AWS4Signer* value);

  /// @brief Method .ctor, addr 0x2454b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AWS4SignerInstance, addr 0x2453fcc, size 0x120, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AWS4Signer* get_AWS4SignerInstance();

  /// @brief Method get_Protocol, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Auth::ClientProtocol get_Protocol();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractAWSSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractAWSSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractAWSSigner(AbstractAWSSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractAWSSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractAWSSigner(AbstractAWSSigner const&) = delete;

  /// @brief Field _aws4Signer, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::AWS4Signer* ____aws4Signer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner, ____aws4Signer) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, "Amazon.Runtime.Internal.Auth", "AbstractAWSSigner");
