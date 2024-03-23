#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransactionCanceledException)
namespace Amazon::DynamoDBv2::Model {
class CancellationReason;
}
namespace Amazon::Runtime {
struct ErrorType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactionCanceledException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactionCanceledException);
// Type: Amazon.DynamoDBv2.Model::TransactionCanceledException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactionCanceledException*
class CORDL_TYPE TransactionCanceledException : public ::Amazon::DynamoDBv2::AmazonDynamoDBException {
public:
  // Declarations
  __declspec(property(get = get_CancellationReasons, put = set_CancellationReasons))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* CancellationReasons;

  /// @brief Field _cancellationReasons, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationReasons,
                      put = __cordl_internal_set__cancellationReasons))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* _cancellationReasons;

  /// @brief Method IsSetCancellationReasons, addr 0x105369c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetCancellationReasons();

  static inline ::Amazon::DynamoDBv2::Model::TransactionCanceledException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::TransactionCanceledException* New_ctor(::StringW message);

  static inline ::Amazon::DynamoDBv2::Model::TransactionCanceledException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                                    ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::DynamoDBv2::Model::TransactionCanceledException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::DynamoDBv2::Model::TransactionCanceledException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                                    ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>*& __cordl_internal_get__cancellationReasons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>*> const& __cordl_internal_get__cancellationReasons() const;

  constexpr void __cordl_internal_set__cancellationReasons(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* value);

  /// @brief Method .ctor, addr 0x1053480, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1053360, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x10535d0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x10533ec, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x105350c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_CancellationReasons, addr 0x105368c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* get_CancellationReasons();

  /// @brief Method set_CancellationReasons, addr 0x1053694, size 0x8, virtual false, abstract: false, final false
  inline void set_CancellationReasons(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactionCanceledException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactionCanceledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactionCanceledException(TransactionCanceledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactionCanceledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactionCanceledException(TransactionCanceledException const&) = delete;

  /// @brief Field _cancellationReasons, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::CancellationReason*>* ____cancellationReasons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactionCanceledException, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactionCanceledException, ____cancellationReasons) == 0xa8, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactionCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactionCanceledException*, "Amazon.DynamoDBv2.Model", "TransactionCanceledException");
