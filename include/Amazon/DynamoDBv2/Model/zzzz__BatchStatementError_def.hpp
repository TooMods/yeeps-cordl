#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchStatementError)
namespace Amazon::DynamoDBv2 {
class BatchStatementErrorCodeEnum;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchStatementError;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchStatementError);
// Type: Amazon.DynamoDBv2.Model::BatchStatementError
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchStatementError*
class CORDL_TYPE BatchStatementError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Code;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  /// @brief Field _code, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* _code;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message))::StringW _message;

  /// @brief Method IsSetCode, addr 0x1226d50, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetCode();

  /// @brief Method IsSetMessage, addr 0x1226dc0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMessage();

  static inline ::Amazon::DynamoDBv2::Model::BatchStatementError* New_ctor();

  constexpr ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*& __cordl_internal_get__code();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*> const& __cordl_internal_get__code() const;

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr void __cordl_internal_set__code(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  constexpr void __cordl_internal_set__message(::StringW value);

  /// @brief Method .ctor, addr 0x1226dd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x1226d40, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* get_Code();

  /// @brief Method get_Message, addr 0x1226db0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Code, addr 0x1226d48, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  /// @brief Method set_Message, addr 0x1226db8, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchStatementError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchStatementError(BatchStatementError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchStatementError(BatchStatementError const&) = delete;

  /// @brief Field _code, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ____code;

  /// @brief Field _message, offset: 0x18, size: 0x8, def value: None
  ::StringW ____message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchStatementError, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementError, ____code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementError, ____message) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchStatementError);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchStatementError*, "Amazon.DynamoDBv2.Model", "BatchStatementError");
