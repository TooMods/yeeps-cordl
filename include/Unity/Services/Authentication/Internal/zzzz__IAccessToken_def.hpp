#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAccessToken)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Internal::IAccessToken);
// Type: Unity.Services.Authentication.Internal::IAccessToken
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Authentication::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Authentication.Internal::IAccessToken*
class CORDL_TYPE IAccessToken {
public:
  // Declarations
  __declspec(property(get = get_AccessToken))::StringW AccessToken;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method get_AccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AccessToken();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAccessToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAccessToken(IAccessToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAccessToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAccessToken(IAccessToken const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Authentication::Internal
NEED_NO_BOX(::Unity::Services::Authentication::Internal::IAccessToken);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Internal::IAccessToken*, "Unity.Services.Authentication.Internal", "IAccessToken");
