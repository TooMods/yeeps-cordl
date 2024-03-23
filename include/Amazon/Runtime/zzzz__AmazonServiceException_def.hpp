#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ErrorType_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonServiceException)
namespace Amazon::Runtime {
struct ErrorType;
}
namespace Amazon::Runtime {
class RetryableDetails;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonServiceException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonServiceException);
// Type: Amazon.Runtime::AmazonServiceException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonServiceException*
class CORDL_TYPE AmazonServiceException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode, put = set_ErrorCode))::StringW ErrorCode;

  __declspec(property(get = get_ErrorType, put = set_ErrorType))::Amazon::Runtime::ErrorType ErrorType;

  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  __declspec(property(get = get_Retryable))::Amazon::Runtime::RetryableDetails* Retryable;

  __declspec(property(get = get_StatusCode, put = set_StatusCode))::System::Net::HttpStatusCode StatusCode;

  /// @brief Field errorCode, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_errorCode, put = __cordl_internal_set_errorCode))::StringW errorCode;

  /// @brief Field errorType, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_errorType, put = __cordl_internal_set_errorType))::Amazon::Runtime::ErrorType errorType;

  /// @brief Field requestId, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_requestId, put = __cordl_internal_set_requestId))::StringW requestId;

  /// @brief Field statusCode, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_statusCode, put = __cordl_internal_set_statusCode))::System::Net::HttpStatusCode statusCode;

  /// @brief Method BuildGenericErrorMessage, addr 0x1fdec9c, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW BuildGenericErrorMessage(::StringW errorCode, ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor();

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                    ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                    ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Runtime::AmazonServiceException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode);

  constexpr ::StringW const& __cordl_internal_get_errorCode() const;

  constexpr ::StringW& __cordl_internal_get_errorCode();

  constexpr ::Amazon::Runtime::ErrorType const& __cordl_internal_get_errorType() const;

  constexpr ::Amazon::Runtime::ErrorType& __cordl_internal_get_errorType();

  constexpr ::StringW const& __cordl_internal_get_requestId() const;

  constexpr ::StringW& __cordl_internal_get_requestId();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get_statusCode() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get_statusCode();

  constexpr void __cordl_internal_set_errorCode(::StringW value);

  constexpr void __cordl_internal_set_errorType(::Amazon::Runtime::ErrorType value);

  constexpr void __cordl_internal_set_requestId(::StringW value);

  constexpr void __cordl_internal_set_statusCode(::System::Net::HttpStatusCode value);

  /// @brief Method .ctor, addr 0x1fde9c8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1fdeb7c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fdea20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1fdebf8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1fdea88, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fded5c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1fdeaf8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_ErrorCode, addr 0x1fdee20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ErrorCode();

  /// @brief Method get_ErrorType, addr 0x1fdee10, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ErrorType get_ErrorType();

  /// @brief Method get_RequestId, addr 0x1fdee30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_Retryable, addr 0x1fdee50, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::RetryableDetails* get_Retryable();

  /// @brief Method get_StatusCode, addr 0x1fdee40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method set_ErrorCode, addr 0x1fdee28, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCode(::StringW value);

  /// @brief Method set_ErrorType, addr 0x1fdee18, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorType(::Amazon::Runtime::ErrorType value);

  /// @brief Method set_RequestId, addr 0x1fdee38, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

  /// @brief Method set_StatusCode, addr 0x1fdee48, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonServiceException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonServiceException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonServiceException(AmazonServiceException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonServiceException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonServiceException(AmazonServiceException const&) = delete;

  /// @brief Field errorType, offset: 0x8c, size: 0x4, def value: None
  ::Amazon::Runtime::ErrorType ___errorType;

  /// @brief Field errorCode, offset: 0x90, size: 0x8, def value: None
  ::StringW ___errorCode;

  /// @brief Field requestId, offset: 0x98, size: 0x8, def value: None
  ::StringW ___requestId;

  /// @brief Field statusCode, offset: 0xa0, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ___statusCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonServiceException, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceException, ___errorType) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceException, ___errorCode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceException, ___requestId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceException, ___statusCode) == 0xa0, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonServiceException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonServiceException*, "Amazon.Runtime", "AmazonServiceException");
