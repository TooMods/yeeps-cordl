#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetSsoTokenResponse)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class GetSsoTokenResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse);
// Type: Amazon.Runtime.SharedInterfaces::GetSsoTokenResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::GetSsoTokenResponse*
class CORDL_TYPE GetSsoTokenResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessToken, put = set_AccessToken))::StringW AccessToken;

  __declspec(property(get = get_ExpiresAt, put = set_ExpiresAt))::System::DateTime ExpiresAt;

  /// @brief Field <AccessToken>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessToken_k__BackingField, put = __cordl_internal_set__AccessToken_k__BackingField))::StringW _AccessToken_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpiresAt_k__BackingField, put = __cordl_internal_set__ExpiresAt_k__BackingField))::System::DateTime _ExpiresAt_k__BackingField;

  static inline ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ExpiresAt_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ExpiresAt_k__BackingField();

  constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ExpiresAt_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x202151c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessToken, addr 0x20214fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_ExpiresAt, addr 0x202150c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_ExpiresAt();

  /// @brief Method set_AccessToken, addr 0x2021504, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessToken(::StringW value);

  /// @brief Method set_ExpiresAt, addr 0x2021514, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpiresAt(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetSsoTokenResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetSsoTokenResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetSsoTokenResponse(GetSsoTokenResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetSsoTokenResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetSsoTokenResponse(GetSsoTokenResponse const&) = delete;

  /// @brief Field <AccessToken>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AccessToken_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____ExpiresAt_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse, ____AccessToken_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse, ____ExpiresAt_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*, "Amazon.Runtime.SharedInterfaces", "GetSsoTokenResponse");
