#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProvisionedThroughputExceededException)
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
class ProvisionedThroughputExceededException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException);
// Type: Amazon.DynamoDBv2.Model::ProvisionedThroughputExceededException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ProvisionedThroughputExceededException*
class CORDL_TYPE ProvisionedThroughputExceededException : public ::Amazon::DynamoDBv2::AmazonDynamoDBException {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException* New_ctor(::StringW message);

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                                              ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType,
                                                                                              ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x104c914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x104c904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x104c924, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x104c90c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x104c91c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedThroughputExceededException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputExceededException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedThroughputExceededException(ProvisionedThroughputExceededException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedThroughputExceededException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedThroughputExceededException(ProvisionedThroughputExceededException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException, 0xa8>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ProvisionedThroughputExceededException*, "Amazon.DynamoDBv2.Model", "ProvisionedThroughputExceededException");
