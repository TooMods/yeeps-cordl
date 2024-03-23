#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooManyRequestsException)
namespace Amazon::Lambda {
class ThrottleReason;
}
namespace Amazon::Runtime {
struct ErrorType;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class TooManyRequestsException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::TooManyRequestsException);
// Type: Amazon.Lambda.Model::TooManyRequestsException
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::TooManyRequestsException*
class CORDL_TYPE TooManyRequestsException : public ::Amazon::Lambda::AmazonLambdaException {
public:
  // Declarations
  __declspec(property(get = get_Reason, put = set_Reason))::Amazon::Lambda::ThrottleReason* Reason;

  __declspec(property(get = get_RetryAfterSeconds, put = set_RetryAfterSeconds))::StringW RetryAfterSeconds;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field _reason, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__reason, put = __cordl_internal_set__reason))::Amazon::Lambda::ThrottleReason* _reason;

  /// @brief Field _retryAfterSeconds, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__retryAfterSeconds, put = __cordl_internal_set__retryAfterSeconds))::StringW _retryAfterSeconds;

  /// @brief Field _type, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::StringW _type;

  /// @brief Method IsSetReason, addr 0x31093d8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReason();

  /// @brief Method IsSetRetryAfterSeconds, addr 0x3109448, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRetryAfterSeconds();

  /// @brief Method IsSetType, addr 0x3109468, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetType();

  static inline ::Amazon::Lambda::Model::TooManyRequestsException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::TooManyRequestsException* New_ctor(::StringW message);

  static inline ::Amazon::Lambda::Model::TooManyRequestsException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                            ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Lambda::Model::TooManyRequestsException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::TooManyRequestsException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                            ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  constexpr ::Amazon::Lambda::ThrottleReason*& __cordl_internal_get__reason();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::ThrottleReason*> const& __cordl_internal_get__reason() const;

  constexpr ::StringW const& __cordl_internal_get__retryAfterSeconds() const;

  constexpr ::StringW& __cordl_internal_get__retryAfterSeconds();

  constexpr ::StringW const& __cordl_internal_get__type() const;

  constexpr ::StringW& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__reason(::Amazon::Lambda::ThrottleReason* value);

  constexpr void __cordl_internal_set__retryAfterSeconds(::StringW value);

  constexpr void __cordl_internal_set__type(::StringW value);

  /// @brief Method .ctor, addr 0x31093b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x31093a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x31093c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x31093a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x31093b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_Reason, addr 0x31093c8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::ThrottleReason* get_Reason();

  /// @brief Method get_RetryAfterSeconds, addr 0x3109438, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RetryAfterSeconds();

  /// @brief Method get_Type, addr 0x3109458, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_Reason, addr 0x31093d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Reason(::Amazon::Lambda::ThrottleReason* value);

  /// @brief Method set_RetryAfterSeconds, addr 0x3109440, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryAfterSeconds(::StringW value);

  /// @brief Method set_Type, addr 0x3109460, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooManyRequestsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TooManyRequestsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooManyRequestsException(TooManyRequestsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooManyRequestsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooManyRequestsException(TooManyRequestsException const&) = delete;

  /// @brief Field _reason, offset: 0xa8, size: 0x8, def value: None
  ::Amazon::Lambda::ThrottleReason* ____reason;

  /// @brief Field _retryAfterSeconds, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____retryAfterSeconds;

  /// @brief Field _type, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::TooManyRequestsException, 0xc0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TooManyRequestsException, ____reason) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TooManyRequestsException, ____retryAfterSeconds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TooManyRequestsException, ____type) == 0xb8, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::TooManyRequestsException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::TooManyRequestsException*, "Amazon.Lambda.Model", "TooManyRequestsException");
