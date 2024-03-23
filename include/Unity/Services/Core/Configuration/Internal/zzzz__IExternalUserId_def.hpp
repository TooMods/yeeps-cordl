#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IExternalUserId)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration::Internal {
class IExternalUserId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::Internal::IExternalUserId);
// Type: Unity.Services.Core.Configuration.Internal::IExternalUserId
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration.Internal::IExternalUserId*
class CORDL_TYPE IExternalUserId {
public:
  // Declarations
  __declspec(property(get = get_UserId))::StringW UserId;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method add_UserIdChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_UserIdChanged(::System::Action_1<::StringW>* value);

  /// @brief Method get_UserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_UserId();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Method remove_UserIdChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_UserIdChanged(::System::Action_1<::StringW>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IExternalUserId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExternalUserId(IExternalUserId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExternalUserId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExternalUserId(IExternalUserId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Configuration::Internal
NEED_NO_BOX(::Unity::Services::Core::Configuration::Internal::IExternalUserId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::Internal::IExternalUserId*, "Unity.Services.Core.Configuration.Internal", "IExternalUserId");
