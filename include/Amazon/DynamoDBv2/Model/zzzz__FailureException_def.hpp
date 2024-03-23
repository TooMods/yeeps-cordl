#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FailureException)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class FailureException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::FailureException);
// Type: Amazon.DynamoDBv2.Model::FailureException
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::FailureException*
class CORDL_TYPE FailureException : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExceptionDescription, put = set_ExceptionDescription))::StringW ExceptionDescription;

  __declspec(property(get = get_ExceptionName, put = set_ExceptionName))::StringW ExceptionName;

  /// @brief Field _exceptionDescription, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionDescription, put = __cordl_internal_set__exceptionDescription))::StringW _exceptionDescription;

  /// @brief Field _exceptionName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionName, put = __cordl_internal_set__exceptionName))::StringW _exceptionName;

  /// @brief Method IsSetExceptionDescription, addr 0x10483e8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExceptionDescription();

  /// @brief Method IsSetExceptionName, addr 0x1048408, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExceptionName();

  static inline ::Amazon::DynamoDBv2::Model::FailureException* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__exceptionDescription() const;

  constexpr ::StringW& __cordl_internal_get__exceptionDescription();

  constexpr ::StringW const& __cordl_internal_get__exceptionName() const;

  constexpr ::StringW& __cordl_internal_get__exceptionName();

  constexpr void __cordl_internal_set__exceptionDescription(::StringW value);

  constexpr void __cordl_internal_set__exceptionName(::StringW value);

  /// @brief Method .ctor, addr 0x1048418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExceptionDescription, addr 0x10483d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExceptionDescription();

  /// @brief Method get_ExceptionName, addr 0x10483f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExceptionName();

  /// @brief Method set_ExceptionDescription, addr 0x10483e0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExceptionDescription(::StringW value);

  /// @brief Method set_ExceptionName, addr 0x1048400, size 0x8, virtual false, abstract: false, final false
  inline void set_ExceptionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FailureException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FailureException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FailureException(FailureException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FailureException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FailureException(FailureException const&) = delete;

  /// @brief Field _exceptionDescription, offset: 0x10, size: 0x8, def value: None
  ::StringW ____exceptionDescription;

  /// @brief Field _exceptionName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____exceptionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::FailureException, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::FailureException, ____exceptionDescription) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::FailureException, ____exceptionName) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::FailureException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::FailureException*, "Amazon.DynamoDBv2.Model", "FailureException");
