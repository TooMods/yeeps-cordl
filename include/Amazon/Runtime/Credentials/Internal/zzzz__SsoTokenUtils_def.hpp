#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SsoTokenUtils)
namespace Amazon::Runtime::Credentials::Internal {
class SsoToken;
}
namespace Amazon::Runtime::Credentials::Internal {
class __SsoTokenUtils__JsonPropertyNames;
}
// Forward declare root types
namespace Amazon::Runtime::Credentials::Internal {
class SsoTokenUtils;
}
namespace Amazon::Runtime::Credentials::Internal {
class __SsoTokenUtils__JsonPropertyNames;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Credentials::Internal::SsoTokenUtils);
MARK_REF_PTR_T(::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames);
// Type: ::JsonPropertyNames
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Credentials::Internal {
// Is value type: false
// CS Name: ::SsoTokenUtils::JsonPropertyNames*
class CORDL_TYPE __SsoTokenUtils__JsonPropertyNames : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SsoTokenUtils__JsonPropertyNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SsoTokenUtils__JsonPropertyNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SsoTokenUtils__JsonPropertyNames(__SsoTokenUtils__JsonPropertyNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SsoTokenUtils__JsonPropertyNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SsoTokenUtils__JsonPropertyNames(__SsoTokenUtils__JsonPropertyNames const&) = delete;

  /// @brief Field AccessToken offset 0xffffffff size 0x8
  static constexpr ::ConstString AccessToken{ u"accessToken" };

  /// @brief Field ExpiresAt offset 0xffffffff size 0x8
  static constexpr ::ConstString ExpiresAt{ u"expiresAt" };

  /// @brief Field Region offset 0xffffffff size 0x8
  static constexpr ::ConstString Region{ u"region" };

  /// @brief Field StartUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString StartUrl{ u"startUrl" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Credentials::Internal
// Type: Amazon.Runtime.Credentials.Internal::SsoTokenUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Credentials::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Credentials.Internal::SsoTokenUtils*
class CORDL_TYPE SsoTokenUtils : public ::System::Object {
public:
  // Declarations
  using JsonPropertyNames = ::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames;

  /// @brief Method AsJson, addr 0x20274ec, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW AsJson(::Amazon::Runtime::Credentials::Internal::SsoToken* token);

  /// @brief Method FromJson, addr 0x20271c8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Credentials::Internal::SsoToken* FromJson(::StringW json);

  /// @brief Method IsExpired, addr 0x2026c88, size 0x94, virtual false, abstract: false, final false
  static inline bool IsExpired(::Amazon::Runtime::Credentials::Internal::SsoToken* token);

  /// @brief Method ToJson, addr 0x2026f50, size 0x278, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::Amazon::Runtime::Credentials::Internal::SsoToken* token);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SsoTokenUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SsoTokenUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SsoTokenUtils(SsoTokenUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SsoTokenUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SsoTokenUtils(SsoTokenUtils const&) = delete;

  /// @brief Field TokenExpirationBufferMinutes offset 0xffffffff size 0x4
  static constexpr int32_t TokenExpirationBufferMinutes{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Credentials::Internal
NEED_NO_BOX(::Amazon::Runtime::Credentials::Internal::SsoTokenUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*, "Amazon.Runtime.Credentials.Internal", "SsoTokenUtils");
NEED_NO_BOX(::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames*, "Amazon.Runtime.Credentials.Internal", "SsoTokenUtils/JsonPropertyNames");
