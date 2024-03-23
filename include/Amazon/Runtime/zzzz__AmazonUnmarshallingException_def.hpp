#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonUnmarshallingException)
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonUnmarshallingException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonUnmarshallingException);
// Type: Amazon.Runtime::AmazonUnmarshallingException
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonUnmarshallingException*
class CORDL_TYPE AmazonUnmarshallingException : public ::Amazon::Runtime::AmazonServiceException {
public:
  // Declarations
  __declspec(property(get = get_LastKnownLocation, put = set_LastKnownLocation))::StringW LastKnownLocation;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_ResponseBody, put = set_ResponseBody))::StringW ResponseBody;

  /// @brief Field <LastKnownLocation>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__LastKnownLocation_k__BackingField, put = __cordl_internal_set__LastKnownLocation_k__BackingField))::StringW _LastKnownLocation_k__BackingField;

  /// @brief Field <ResponseBody>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__ResponseBody_k__BackingField, put = __cordl_internal_set__ResponseBody_k__BackingField))::StringW _ResponseBody_k__BackingField;

  /// @brief Method AppendFormat, addr 0x1fdf170, size 0xac, virtual false, abstract: false, final false
  static inline void AppendFormat(::System::Text::StringBuilder* sb, ::StringW format, ::StringW value);

  static inline ::Amazon::Runtime::AmazonUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::System::Exception* innerException,
                                                                          ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Runtime::AmazonUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::System::Exception* innerException,
                                                                          ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Runtime::AmazonUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW message,
                                                                          ::System::Exception* innerException);

  constexpr ::StringW const& __cordl_internal_get__LastKnownLocation_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LastKnownLocation_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ResponseBody_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ResponseBody_k__BackingField();

  constexpr void __cordl_internal_set__LastKnownLocation_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ResponseBody_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fdb060, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fdee98, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1fdb0fc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fdef14, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::System::Exception* innerException, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x1fdb1a0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW message, ::System::Exception* innerException);

  /// @brief Method get_LastKnownLocation, addr 0x1fdef9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastKnownLocation();

  /// @brief Method get_Message, addr 0x1fdefbc, size 0x1b4, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_ResponseBody, addr 0x1fdefac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ResponseBody();

  /// @brief Method set_LastKnownLocation, addr 0x1fdefa4, size 0x8, virtual false, abstract: false, final false
  inline void set_LastKnownLocation(::StringW value);

  /// @brief Method set_ResponseBody, addr 0x1fdefb4, size 0x8, virtual false, abstract: false, final false
  inline void set_ResponseBody(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonUnmarshallingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonUnmarshallingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonUnmarshallingException(AmazonUnmarshallingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonUnmarshallingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonUnmarshallingException(AmazonUnmarshallingException const&) = delete;

  /// @brief Field <LastKnownLocation>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____LastKnownLocation_k__BackingField;

  /// @brief Field <ResponseBody>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____ResponseBody_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonUnmarshallingException, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonUnmarshallingException, ____LastKnownLocation_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonUnmarshallingException, ____ResponseBody_k__BackingField) == 0xb0, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonUnmarshallingException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonUnmarshallingException*, "Amazon.Runtime", "AmazonUnmarshallingException");
