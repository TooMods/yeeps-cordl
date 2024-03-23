#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BackupNotFoundException)
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
class BackupNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BackupNotFoundException);
// Type: Amazon.DynamoDBv2.Model::BackupNotFoundException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BackupNotFoundException*
class CORDL_TYPE BackupNotFoundException : public ::Amazon::DynamoDBv2::AmazonDynamoDBException {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::BackupNotFoundException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::BackupNotFoundException* New_ctor(::StringW message);

  static inline ::Amazon::DynamoDBv2::Model::BackupNotFoundException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                               ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::DynamoDBv2::Model::BackupNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::BackupNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                               ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x12262f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x12262e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1226304, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x12262f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x12262fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupNotFoundException(BackupNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupNotFoundException(BackupNotFoundException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BackupNotFoundException, 0xa8>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BackupNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BackupNotFoundException*, "Amazon.DynamoDBv2.Model", "BackupNotFoundException");
