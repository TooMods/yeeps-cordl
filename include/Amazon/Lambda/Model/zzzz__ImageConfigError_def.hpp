#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImageConfigError)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ImageConfigError;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ImageConfigError);
// Type: Amazon.Lambda.Model::ImageConfigError
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ImageConfigError*
class CORDL_TYPE ImageConfigError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode, put = set_ErrorCode))::StringW ErrorCode;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field _errorCode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__errorCode, put = __cordl_internal_set__errorCode))::StringW _errorCode;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message))::StringW _message;

  /// @brief Method IsSetErrorCode, addr 0x2bcc69c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetErrorCode();

  /// @brief Method IsSetMessage, addr 0x2bcc6bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMessage();

  static inline ::Amazon::Lambda::Model::ImageConfigError* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__errorCode() const;

  constexpr ::StringW& __cordl_internal_get__errorCode();

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr void __cordl_internal_set__errorCode(::StringW value);

  constexpr void __cordl_internal_set__message(::StringW value);

  /// @brief Method .ctor, addr 0x2bcc6cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ErrorCode, addr 0x2bcc68c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ErrorCode();

  /// @brief Method get_Message, addr 0x2bcc6ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_ErrorCode, addr 0x2bcc694, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCode(::StringW value);

  /// @brief Method set_Message, addr 0x2bcc6b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConfigError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageConfigError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConfigError(ImageConfigError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConfigError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConfigError(ImageConfigError const&) = delete;

  /// @brief Field _errorCode, offset: 0x10, size: 0x8, def value: None
  ::StringW ____errorCode;

  /// @brief Field _message, offset: 0x18, size: 0x8, def value: None
  ::StringW ____message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ImageConfigError, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfigError, ____errorCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ImageConfigError, ____message) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ImageConfigError);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ImageConfigError*, "Amazon.Lambda.Model", "ImageConfigError");
