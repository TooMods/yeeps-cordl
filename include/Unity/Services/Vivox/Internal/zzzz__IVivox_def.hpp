#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVivox)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Vivox::Internal {
class IVivoxTokenProviderInternal;
}
// Forward declare root types
namespace Unity::Services::Vivox::Internal {
class IVivox;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Internal::IVivox);
// Type: Unity.Services.Vivox.Internal::IVivox
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Internal::IVivox*
class CORDL_TYPE IVivox {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method RegisterTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterTokenProvider(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal* tokenProvider);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IVivox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivox(IVivox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivox(IVivox const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Internal
NEED_NO_BOX(::Unity::Services::Vivox::Internal::IVivox);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Internal::IVivox*, "Unity.Services.Vivox.Internal", "IVivox");
