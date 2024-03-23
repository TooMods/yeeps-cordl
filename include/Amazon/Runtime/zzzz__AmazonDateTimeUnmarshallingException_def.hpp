#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonUnmarshallingException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonDateTimeUnmarshallingException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonDateTimeUnmarshallingException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonDateTimeUnmarshallingException);
// Type: Amazon.Runtime::AmazonDateTimeUnmarshallingException
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonDateTimeUnmarshallingException*
class CORDL_TYPE AmazonDateTimeUnmarshallingException : public ::Amazon::Runtime::AmazonUnmarshallingException {
public:
  // Declarations
  __declspec(property(get = get_InvalidDateTimeToken, put = set_InvalidDateTimeToken))::StringW InvalidDateTimeToken;

  /// @brief Field <InvalidDateTimeToken>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__InvalidDateTimeToken_k__BackingField,
                      put = __cordl_internal_set__InvalidDateTimeToken_k__BackingField))::StringW _InvalidDateTimeToken_k__BackingField;

  static inline ::Amazon::Runtime::AmazonDateTimeUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW invalidDateTimeToken,
                                                                                  ::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonDateTimeUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW invalidDateTimeToken,
                                                                                  ::System::Exception* innerException);

  static inline ::Amazon::Runtime::AmazonDateTimeUnmarshallingException* New_ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW invalidDateTimeToken,
                                                                                  ::StringW message, ::System::Exception* innerException);

  constexpr ::StringW const& __cordl_internal_get__InvalidDateTimeToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InvalidDateTimeToken_k__BackingField();

  constexpr void __cordl_internal_set__InvalidDateTimeToken_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fdb038, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW invalidDateTimeToken, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fdb0d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW invalidDateTimeToken, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1fdb174, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId, ::StringW lastKnownLocation, ::StringW responseBody, ::StringW invalidDateTimeToken, ::StringW message, ::System::Exception* innerException);

  /// @brief Method get_InvalidDateTimeToken, addr 0x1fdb028, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InvalidDateTimeToken();

  /// @brief Method set_InvalidDateTimeToken, addr 0x1fdb030, size 0x8, virtual false, abstract: false, final false
  inline void set_InvalidDateTimeToken(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonDateTimeUnmarshallingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonDateTimeUnmarshallingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonDateTimeUnmarshallingException(AmazonDateTimeUnmarshallingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonDateTimeUnmarshallingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonDateTimeUnmarshallingException(AmazonDateTimeUnmarshallingException const&) = delete;

  /// @brief Field <InvalidDateTimeToken>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____InvalidDateTimeToken_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonDateTimeUnmarshallingException, 0xc0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonDateTimeUnmarshallingException, ____InvalidDateTimeToken_k__BackingField) == 0xb8, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonDateTimeUnmarshallingException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonDateTimeUnmarshallingException*, "Amazon.Runtime", "AmazonDateTimeUnmarshallingException");
