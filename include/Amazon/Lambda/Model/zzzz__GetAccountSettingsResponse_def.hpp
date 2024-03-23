#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(GetAccountSettingsResponse)
namespace Amazon::Lambda::Model {
class AccountLimit;
}
namespace Amazon::Lambda::Model {
class AccountUsage;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetAccountSettingsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetAccountSettingsResponse);
// Type: Amazon.Lambda.Model::GetAccountSettingsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetAccountSettingsResponse*
class CORDL_TYPE GetAccountSettingsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_AccountLimit, put = set_AccountLimit))::Amazon::Lambda::Model::AccountLimit* AccountLimit;

  __declspec(property(get = get_AccountUsage, put = set_AccountUsage))::Amazon::Lambda::Model::AccountUsage* AccountUsage;

  /// @brief Field _accountLimit, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__accountLimit, put = __cordl_internal_set__accountLimit))::Amazon::Lambda::Model::AccountLimit* _accountLimit;

  /// @brief Field _accountUsage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__accountUsage, put = __cordl_internal_set__accountUsage))::Amazon::Lambda::Model::AccountUsage* _accountUsage;

  /// @brief Method IsSetAccountLimit, addr 0x2bc9a78, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAccountLimit();

  /// @brief Method IsSetAccountUsage, addr 0x2bc9a98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAccountUsage();

  static inline ::Amazon::Lambda::Model::GetAccountSettingsResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::AccountLimit*& __cordl_internal_get__accountLimit();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AccountLimit*> const& __cordl_internal_get__accountLimit() const;

  constexpr ::Amazon::Lambda::Model::AccountUsage*& __cordl_internal_get__accountUsage();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AccountUsage*> const& __cordl_internal_get__accountUsage() const;

  constexpr void __cordl_internal_set__accountLimit(::Amazon::Lambda::Model::AccountLimit* value);

  constexpr void __cordl_internal_set__accountUsage(::Amazon::Lambda::Model::AccountUsage* value);

  /// @brief Method .ctor, addr 0x2bc9aa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccountLimit, addr 0x2bc9a68, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AccountLimit* get_AccountLimit();

  /// @brief Method get_AccountUsage, addr 0x2bc9a88, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AccountUsage* get_AccountUsage();

  /// @brief Method set_AccountLimit, addr 0x2bc9a70, size 0x8, virtual false, abstract: false, final false
  inline void set_AccountLimit(::Amazon::Lambda::Model::AccountLimit* value);

  /// @brief Method set_AccountUsage, addr 0x2bc9a90, size 0x8, virtual false, abstract: false, final false
  inline void set_AccountUsage(::Amazon::Lambda::Model::AccountUsage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetAccountSettingsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetAccountSettingsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetAccountSettingsResponse(GetAccountSettingsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetAccountSettingsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetAccountSettingsResponse(GetAccountSettingsResponse const&) = delete;

  /// @brief Field _accountLimit, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AccountLimit* ____accountLimit;

  /// @brief Field _accountUsage, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AccountUsage* ____accountUsage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetAccountSettingsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetAccountSettingsResponse, ____accountLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetAccountSettingsResponse, ____accountUsage) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetAccountSettingsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetAccountSettingsResponse*, "Amazon.Lambda.Model", "GetAccountSettingsResponse");
