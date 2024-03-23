#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConditionalCheckFailedException)
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
namespace Amazon::DynamoDBv2::Model {
class ConditionalCheckFailedException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException);
// Type: Amazon.DynamoDBv2.Model::ConditionalCheckFailedException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ConditionalCheckFailedException*
class CORDL_TYPE ConditionalCheckFailedException : public ::Amazon::DynamoDBv2::AmazonDynamoDBException {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException* New_ctor(::StringW message);

  static inline ::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                                       ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType,
                                                                                       ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1227b90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1227b80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1227b9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1227b88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1227b94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalCheckFailedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalCheckFailedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalCheckFailedException(ConditionalCheckFailedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalCheckFailedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalCheckFailedException(ConditionalCheckFailedException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException, 0xa8>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ConditionalCheckFailedException*, "Amazon.DynamoDBv2.Model", "ConditionalCheckFailedException");
