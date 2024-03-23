#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExternalUserId)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Services::Core::Configuration::Internal {
class IExternalUserId;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ExternalUserId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ExternalUserId);
// Type: Unity.Services.Core.Configuration::ExternalUserId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration::ExternalUserId*
class CORDL_TYPE ExternalUserId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UserId))::StringW UserId;

  /// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
  constexpr operator ::Unity::Services::Core::Configuration::Internal::IExternalUserId*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  static inline ::Unity::Services::Core::Configuration::ExternalUserId* New_ctor();

  /// @brief Method .ctor, addr 0x264ac8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_UserIdChanged, addr 0x264abb4, size 0x6c, virtual true, abstract: false, final true
  inline void add_UserIdChanged(::System::Action_1<::StringW>* value);

  /// @brief Method get_UserId, addr 0x264ab50, size 0x64, virtual true, abstract: false, final true
  inline ::StringW get_UserId();

  /// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
  constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId* i___Unity__Services__Core__Configuration__Internal__IExternalUserId() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Method remove_UserIdChanged, addr 0x264ac20, size 0x6c, virtual true, abstract: false, final true
  inline void remove_UserIdChanged(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalUserId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalUserId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalUserId(ExternalUserId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalUserId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalUserId(ExternalUserId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ExternalUserId, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ExternalUserId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ExternalUserId*, "Unity.Services.Core.Configuration", "ExternalUserId");
