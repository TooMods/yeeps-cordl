#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AWS4SigningResult)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AWS4SigningResult);
// Type: Amazon.Runtime.Internal.Auth::AWS4SigningResult
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AWS4SigningResult*
class CORDL_TYPE AWS4SigningResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessKeyId))::StringW AccessKeyId;

  __declspec(property(get = get_ForAuthorizationHeader))::StringW ForAuthorizationHeader;

  __declspec(property(get = get_ForQueryParameters))::StringW ForQueryParameters;

  __declspec(property(get = get_ISO8601Date))::StringW ISO8601Date;

  __declspec(property(get = get_ISO8601DateTime))::StringW ISO8601DateTime;

  __declspec(property(get = get_Scope))::StringW Scope;

  __declspec(property(get = get_Signature))::StringW Signature;

  __declspec(property(get = get_SignatureBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> SignatureBytes;

  __declspec(property(get = get_SignedHeaders))::StringW SignedHeaders;

  __declspec(property(get = get_SigningKey))::ArrayW<uint8_t, ::Array<uint8_t>*> SigningKey;

  /// @brief Field _awsAccessKeyId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__awsAccessKeyId, put = __cordl_internal_set__awsAccessKeyId))::StringW _awsAccessKeyId;

  /// @brief Field _originalDateTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__originalDateTime, put = __cordl_internal_set__originalDateTime))::System::DateTime _originalDateTime;

  /// @brief Field _scope, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scope, put = __cordl_internal_set__scope))::StringW _scope;

  /// @brief Field _signature, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__signature, put = __cordl_internal_set__signature))::ArrayW<uint8_t, ::Array<uint8_t>*> _signature;

  /// @brief Field _signedHeaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__signedHeaders, put = __cordl_internal_set__signedHeaders))::StringW _signedHeaders;

  /// @brief Field _signingKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__signingKey, put = __cordl_internal_set__signingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _signingKey;

  static inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* New_ctor(::StringW awsAccessKeyId, ::System::DateTime signedAt, ::StringW signedHeaders, ::StringW scope,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> signingKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::StringW const& __cordl_internal_get__awsAccessKeyId() const;

  constexpr ::StringW& __cordl_internal_get__awsAccessKeyId();

  constexpr ::System::DateTime const& __cordl_internal_get__originalDateTime() const;

  constexpr ::System::DateTime& __cordl_internal_get__originalDateTime();

  constexpr ::StringW const& __cordl_internal_get__scope() const;

  constexpr ::StringW& __cordl_internal_get__scope();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__signature();

  constexpr ::StringW const& __cordl_internal_get__signedHeaders() const;

  constexpr ::StringW& __cordl_internal_get__signedHeaders();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__signingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__signingKey();

  constexpr void __cordl_internal_set__awsAccessKeyId(::StringW value);

  constexpr void __cordl_internal_set__originalDateTime(::System::DateTime value);

  constexpr void __cordl_internal_set__scope(::StringW value);

  constexpr void __cordl_internal_set__signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__signedHeaders(::StringW value);

  constexpr void __cordl_internal_set__signingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x25e2480, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::System::DateTime signedAt, ::StringW signedHeaders, ::StringW scope, ::ArrayW<uint8_t, ::Array<uint8_t>*> signingKey,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method get_AccessKeyId, addr 0x25e5308, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKeyId();

  /// @brief Method get_ForAuthorizationHeader, addr 0x25de8ec, size 0x170, virtual false, abstract: false, final false
  inline ::StringW get_ForAuthorizationHeader();

  /// @brief Method get_ForQueryParameters, addr 0x25e5558, size 0x204, virtual false, abstract: false, final false
  inline ::StringW get_ForQueryParameters();

  /// @brief Method get_ISO8601Date, addr 0x25e5380, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_ISO8601Date();

  /// @brief Method get_ISO8601DateTime, addr 0x25e5310, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_ISO8601DateTime();

  /// @brief Method get_Scope, addr 0x25e53f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Scope();

  /// @brief Method get_Signature, addr 0x25e547c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_Signature();

  /// @brief Method get_SignatureBytes, addr 0x25e54dc, size 0x7c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SignatureBytes();

  /// @brief Method get_SignedHeaders, addr 0x25e53f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SignedHeaders();

  /// @brief Method get_SigningKey, addr 0x25e5400, size 0x7c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SigningKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWS4SigningResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWS4SigningResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWS4SigningResult(AWS4SigningResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWS4SigningResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWS4SigningResult(AWS4SigningResult const&) = delete;

  /// @brief Field _awsAccessKeyId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____awsAccessKeyId;

  /// @brief Field _originalDateTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____originalDateTime;

  /// @brief Field _signedHeaders, offset: 0x20, size: 0x8, def value: None
  ::StringW ____signedHeaders;

  /// @brief Field _scope, offset: 0x28, size: 0x8, def value: None
  ::StringW ____scope;

  /// @brief Field _signingKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____signingKey;

  /// @brief Field _signature, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AWS4SigningResult, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____awsAccessKeyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____originalDateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____signedHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____scope) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____signingKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::AWS4SigningResult, ____signature) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AWS4SigningResult);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AWS4SigningResult*, "Amazon.Runtime.Internal.Auth", "AWS4SigningResult");
