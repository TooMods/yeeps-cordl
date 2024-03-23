#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NullSigner)
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
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class NullSigner;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::NullSigner);
// Type: Amazon.Runtime.Internal.Auth::NullSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::NullSigner*
class CORDL_TYPE NullSigner : public ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner {
public:
  // Declarations
  __declspec(property(get = get_Protocol))::Amazon::Runtime::Internal::Auth::ClientProtocol Protocol;

  static inline ::Amazon::Runtime::Internal::Auth::NullSigner* New_ctor();

  /// @brief Method Sign, addr 0x25e5ab0, size 0x4, virtual true, abstract: false, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method .ctor, addr 0x25e5abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Protocol, addr 0x25e5ab4, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::ClientProtocol get_Protocol();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullSigner(NullSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullSigner(NullSigner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::NullSigner, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::NullSigner);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::NullSigner*, "Amazon.Runtime.Internal.Auth", "NullSigner");
