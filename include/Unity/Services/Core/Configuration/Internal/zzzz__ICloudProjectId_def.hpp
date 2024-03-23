#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICloudProjectId)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::Internal::ICloudProjectId);
// Type: Unity.Services.Core.Configuration.Internal::ICloudProjectId
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Configuration::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Configuration.Internal::ICloudProjectId*
class CORDL_TYPE ICloudProjectId {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method GetCloudProjectId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetCloudProjectId();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICloudProjectId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICloudProjectId(ICloudProjectId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICloudProjectId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICloudProjectId(ICloudProjectId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Configuration::Internal
NEED_NO_BOX(::Unity::Services::Core::Configuration::Internal::ICloudProjectId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, "Unity.Services.Core.Configuration.Internal", "ICloudProjectId");
