#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentError)
// Forward declare root types
namespace Amazon::Lambda::Model {
class EnvironmentError;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::EnvironmentError);
// Type: Amazon.Lambda.Model::EnvironmentError
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::EnvironmentError*
class CORDL_TYPE EnvironmentError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode, put = set_ErrorCode))::StringW ErrorCode;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field _errorCode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__errorCode, put = __cordl_internal_set__errorCode))::StringW _errorCode;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message))::StringW _message;

  /// @brief Method IsSetErrorCode, addr 0x2bc7f7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetErrorCode();

  /// @brief Method IsSetMessage, addr 0x2bc7f9c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMessage();

  static inline ::Amazon::Lambda::Model::EnvironmentError* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__errorCode() const;

  constexpr ::StringW& __cordl_internal_get__errorCode();

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr void __cordl_internal_set__errorCode(::StringW value);

  constexpr void __cordl_internal_set__message(::StringW value);

  /// @brief Method .ctor, addr 0x2bc7fac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ErrorCode, addr 0x2bc7f6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ErrorCode();

  /// @brief Method get_Message, addr 0x2bc7f8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_ErrorCode, addr 0x2bc7f74, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCode(::StringW value);

  /// @brief Method set_Message, addr 0x2bc7f94, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentError(EnvironmentError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentError(EnvironmentError const&) = delete;

  /// @brief Field _errorCode, offset: 0x10, size: 0x8, def value: None
  ::StringW ____errorCode;

  /// @brief Field _message, offset: 0x18, size: 0x8, def value: None
  ::StringW ____message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::EnvironmentError, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EnvironmentError, ____errorCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EnvironmentError, ____message) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::EnvironmentError);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::EnvironmentError*, "Amazon.Lambda.Model", "EnvironmentError");
