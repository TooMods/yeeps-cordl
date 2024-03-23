#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonLambdaException)
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
namespace Amazon::Lambda {
class AmazonLambdaException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::AmazonLambdaException);
// Type: Amazon.Lambda::AmazonLambdaException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::AmazonLambdaException*
class CORDL_TYPE AmazonLambdaException : public ::Amazon::Runtime::AmazonServiceException {
public:
  // Declarations
  static inline ::Amazon::Lambda::AmazonLambdaException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::Lambda::AmazonLambdaException* New_ctor(::StringW message);

  static inline ::Amazon::Lambda::AmazonLambdaException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                  ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Lambda::AmazonLambdaException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::Lambda::AmazonLambdaException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                  ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x2bb5098, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bb5088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2bb50dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x2bb5090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bb50e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonLambdaException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonLambdaException(AmazonLambdaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonLambdaException(AmazonLambdaException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::AmazonLambdaException, 0xa8>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::AmazonLambdaException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::AmazonLambdaException*, "Amazon.Lambda", "AmazonLambdaException");
