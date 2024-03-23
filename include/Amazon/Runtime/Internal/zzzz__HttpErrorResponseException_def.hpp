#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpErrorResponseException)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class HttpErrorResponseException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::HttpErrorResponseException);
// Type: Amazon.Runtime.Internal::HttpErrorResponseException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::HttpErrorResponseException*
class CORDL_TYPE HttpErrorResponseException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_Response, put = set_Response))::Amazon::Runtime::Internal::Transform::IWebResponseData* Response;

  /// @brief Field <Response>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Response_k__BackingField,
                      put = __cordl_internal_set__Response_k__BackingField))::Amazon::Runtime::Internal::Transform::IWebResponseData* _Response_k__BackingField;

  static inline ::Amazon::Runtime::Internal::HttpErrorResponseException* New_ctor(::StringW message, ::System::Exception* innerException,
                                                                                  ::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  static inline ::Amazon::Runtime::Internal::HttpErrorResponseException* New_ctor(::StringW message, ::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  static inline ::Amazon::Runtime::Internal::HttpErrorResponseException* New_ctor(::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*& __cordl_internal_get__Response_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IWebResponseData*> const& __cordl_internal_get__Response_k__BackingField() const;

  constexpr void __cordl_internal_set__Response_k__BackingField(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

  /// @brief Method .ctor, addr 0x23e9e6c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  /// @brief Method .ctor, addr 0x23e9df8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  /// @brief Method .ctor, addr 0x23e6874, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::Transform::IWebResponseData* response);

  /// @brief Method get_Response, addr 0x23e9de8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* get_Response();

  /// @brief Method set_Response, addr 0x23e9df0, size 0x8, virtual false, abstract: false, final false
  inline void set_Response(::Amazon::Runtime::Internal::Transform::IWebResponseData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpErrorResponseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpErrorResponseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpErrorResponseException(HttpErrorResponseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpErrorResponseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpErrorResponseException(HttpErrorResponseException const&) = delete;

  /// @brief Field <Response>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IWebResponseData* ____Response_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::HttpErrorResponseException, 0x98>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::HttpErrorResponseException, ____Response_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::HttpErrorResponseException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::HttpErrorResponseException*, "Amazon.Runtime.Internal", "HttpErrorResponseException");
