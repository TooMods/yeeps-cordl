#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IInstallationId)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Device::Internal {
class IInstallationId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::Internal::IInstallationId);
// Type: Unity.Services.Core.Device.Internal::IInstallationId
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Device::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Device.Internal::IInstallationId*
class CORDL_TYPE IInstallationId {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method GetOrCreateIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetOrCreateIdentifier();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInstallationId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInstallationId(IInstallationId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInstallationId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstallationId(IInstallationId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Device::Internal
NEED_NO_BOX(::Unity::Services::Core::Device::Internal::IInstallationId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::Internal::IInstallationId*, "Unity.Services.Core.Device.Internal", "IInstallationId");
