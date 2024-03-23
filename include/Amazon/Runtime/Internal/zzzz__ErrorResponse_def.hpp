#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ErrorType_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorResponse)
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
namespace Amazon::Runtime::Internal {
class ErrorResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ErrorResponse);
// Type: Amazon.Runtime.Internal::ErrorResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ErrorResponse*
class CORDL_TYPE ErrorResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::StringW Code;

  __declspec(property(get = get_InnerException, put = set_InnerException))::System::Exception* InnerException;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  __declspec(property(get = get_StatusCode, put = set_StatusCode))::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_Type, put = set_Type))::Amazon::Runtime::ErrorType Type;

  /// @brief Field <Code>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField))::StringW _Code_k__BackingField;

  /// @brief Field <InnerException>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerException_k__BackingField, put = __cordl_internal_set__InnerException_k__BackingField))::System::Exception* _InnerException_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField))::System::Net::HttpStatusCode _StatusCode_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Amazon::Runtime::ErrorType _Type_k__BackingField;

  static inline ::Amazon::Runtime::Internal::ErrorResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Code_k__BackingField();

  constexpr ::System::Exception*& __cordl_internal_get__InnerException_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__InnerException_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr ::Amazon::Runtime::ErrorType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Amazon::Runtime::ErrorType& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Code_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__InnerException_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::Amazon::Runtime::ErrorType value);

  /// @brief Method .ctor, addr 0x23d7cb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x23d7c68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Code();

  /// @brief Method get_InnerException, addr 0x23d7c98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_InnerException();

  /// @brief Method get_Message, addr 0x23d7c78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_RequestId, addr 0x23d7c88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_StatusCode, addr 0x23d7ca8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method get_Type, addr 0x23d7c58, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ErrorType get_Type();

  /// @brief Method set_Code, addr 0x23d7c70, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::StringW value);

  /// @brief Method set_InnerException, addr 0x23d7ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_InnerException(::System::Exception* value);

  /// @brief Method set_Message, addr 0x23d7c80, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_RequestId, addr 0x23d7c90, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

  /// @brief Method set_StatusCode, addr 0x23d7cb0, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

  /// @brief Method set_Type, addr 0x23d7c60, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Amazon::Runtime::ErrorType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorResponse(ErrorResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorResponse(ErrorResponse const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Runtime::ErrorType ____Type_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Code_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  /// @brief Field <InnerException>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* ____InnerException_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ____StatusCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ErrorResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____Code_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____Message_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____RequestId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____InnerException_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ErrorResponse, ____StatusCode_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ErrorResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ErrorResponse*, "Amazon.Runtime.Internal", "ErrorResponse");
