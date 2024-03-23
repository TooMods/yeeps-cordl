#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EC2UnexpectedException)
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
class EC2UnexpectedException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::EC2UnexpectedException);
// Type: Amazon.Lambda.Model::EC2UnexpectedException
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::EC2UnexpectedException*
class CORDL_TYPE EC2UnexpectedException : public ::Amazon::Lambda::AmazonLambdaException {
public:
  // Declarations
  __declspec(property(get = get_EC2ErrorCode, put = set_EC2ErrorCode))::StringW EC2ErrorCode;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field _ec2ErrorCode, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__ec2ErrorCode, put = __cordl_internal_set__ec2ErrorCode))::StringW _ec2ErrorCode;

  /// @brief Field _type, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::StringW _type;

  /// @brief Method IsSetEC2ErrorCode, addr 0x2bc7c68, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEC2ErrorCode();

  /// @brief Method IsSetType, addr 0x2bc7c88, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetType();

  static inline ::Amazon::Lambda::Model::EC2UnexpectedException* New_ctor(::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::EC2UnexpectedException* New_ctor(::StringW message);

  static inline ::Amazon::Lambda::Model::EC2UnexpectedException* New_ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId,
                                                                          ::System::Net::HttpStatusCode statusCode);

  static inline ::Amazon::Lambda::Model::EC2UnexpectedException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Amazon::Lambda::Model::EC2UnexpectedException* New_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode,
                                                                          ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  constexpr ::StringW const& __cordl_internal_get__ec2ErrorCode() const;

  constexpr ::StringW& __cordl_internal_get__ec2ErrorCode();

  constexpr ::StringW const& __cordl_internal_get__type() const;

  constexpr ::StringW& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__ec2ErrorCode(::StringW value);

  constexpr void __cordl_internal_set__type(::StringW value);

  /// @brief Method .ctor, addr 0x2bc7c44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bc7c34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2bc7c50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method .ctor, addr 0x2bc7c3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2bc7c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::ErrorType errorType, ::StringW errorCode, ::StringW requestId, ::System::Net::HttpStatusCode statusCode);

  /// @brief Method get_EC2ErrorCode, addr 0x2bc7c58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EC2ErrorCode();

  /// @brief Method get_Type, addr 0x2bc7c78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_EC2ErrorCode, addr 0x2bc7c60, size 0x8, virtual false, abstract: false, final false
  inline void set_EC2ErrorCode(::StringW value);

  /// @brief Method set_Type, addr 0x2bc7c80, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EC2UnexpectedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EC2UnexpectedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EC2UnexpectedException(EC2UnexpectedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EC2UnexpectedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EC2UnexpectedException(EC2UnexpectedException const&) = delete;

  /// @brief Field _ec2ErrorCode, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____ec2ErrorCode;

  /// @brief Field _type, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::EC2UnexpectedException, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EC2UnexpectedException, ____ec2ErrorCode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EC2UnexpectedException, ____type) == 0xb0, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::EC2UnexpectedException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::EC2UnexpectedException*, "Amazon.Lambda.Model", "EC2UnexpectedException");
