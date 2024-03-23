#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProvisionedConcurrencyConfigNotFoundException)
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
namespace Amazon::Lambda::Model {
class ProvisionedConcurrencyConfigNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException);
// Type: Amazon.Lambda.Model::ProvisionedConcurrencyConfigNotFoundException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ProvisionedConcurrencyConfigNotFoundException*
class CORDL_TYPE ProvisionedConcurrencyConfigNotFoundException : public ::Amazon::Lambda::AmazonLambdaException {
public:
  // Declarations
  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field _type, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::StringW _type;

  /// @brief Method IsSetType, addr 0x2bceeb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetType();

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* New_ctor(::StringW message);

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                                                 ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType,
                                                                                                 ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  constexpr ::StringW const& __cordl_internal_get__type() const;

  constexpr ::StringW& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::StringW value);

  /// @brief Method .ctor, addr 0x2bcee94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bcee84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2bceea0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x2bcee8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bcee98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_Type, addr 0x2bceea8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_Type, addr 0x2bceeb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedConcurrencyConfigNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedConcurrencyConfigNotFoundException(ProvisionedConcurrencyConfigNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedConcurrencyConfigNotFoundException(ProvisionedConcurrencyConfigNotFoundException const&) = delete;

  /// @brief Field _type, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException, ____type) == 0xa8, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigNotFoundException*, "Amazon.Lambda.Model", "ProvisionedConcurrencyConfigNotFoundException");
