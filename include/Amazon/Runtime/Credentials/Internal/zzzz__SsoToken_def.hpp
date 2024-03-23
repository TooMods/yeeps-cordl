#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SsoToken)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Credentials::Internal {
class SsoToken;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Credentials::Internal::SsoToken);
// Type: Amazon.Runtime.Credentials.Internal::SsoToken
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Credentials::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Credentials.Internal::SsoToken*
class CORDL_TYPE SsoToken : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessToken, put = set_AccessToken))::StringW AccessToken;

  __declspec(property(get = get_ExpiresAt, put = set_ExpiresAt))::System::DateTime ExpiresAt;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_StartUrl, put = set_StartUrl))::StringW StartUrl;

  /// @brief Field <AccessToken>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessToken_k__BackingField, put = __cordl_internal_set__AccessToken_k__BackingField))::StringW _AccessToken_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpiresAt_k__BackingField, put = __cordl_internal_set__ExpiresAt_k__BackingField))::System::DateTime _ExpiresAt_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__StartUrl_k__BackingField, put = __cordl_internal_set__StartUrl_k__BackingField))::StringW _StartUrl_k__BackingField;

  static inline ::Amazon::Runtime::Credentials::Internal::SsoToken* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ExpiresAt_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ExpiresAt_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StartUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StartUrl_k__BackingField();

  constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ExpiresAt_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StartUrl_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x202658c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessToken, addr 0x202654c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_ExpiresAt, addr 0x202655c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_ExpiresAt();

  /// @brief Method get_Region, addr 0x202656c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_StartUrl, addr 0x202657c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StartUrl();

  /// @brief Method set_AccessToken, addr 0x2026554, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessToken(::StringW value);

  /// @brief Method set_ExpiresAt, addr 0x2026564, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpiresAt(::System::DateTime value);

  /// @brief Method set_Region, addr 0x2026574, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_StartUrl, addr 0x2026584, size 0x8, virtual false, abstract: false, final false
  inline void set_StartUrl(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SsoToken();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SsoToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SsoToken(SsoToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SsoToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SsoToken(SsoToken const&) = delete;

  /// @brief Field <AccessToken>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AccessToken_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____ExpiresAt_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____StartUrl_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Credentials::Internal::SsoToken, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoToken, ____AccessToken_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoToken, ____ExpiresAt_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoToken, ____Region_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoToken, ____StartUrl_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Credentials::Internal
NEED_NO_BOX(::Amazon::Runtime::Credentials::Internal::SsoToken);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Credentials::Internal::SsoToken*, "Amazon.Runtime.Credentials.Internal", "SsoToken");
