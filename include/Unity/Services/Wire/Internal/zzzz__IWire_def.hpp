#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWire)
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Wire::Internal {
class IChannelTokenProvider;
}
namespace Unity::Services::Wire::Internal {
class IChannel;
}
// Forward declare root types
namespace Unity::Services::Wire::Internal {
class IWire;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Wire::Internal::IWire);
// Type: Unity.Services.Wire.Internal::IWire
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Wire::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Wire.Internal::IWire*
class CORDL_TYPE IWire {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method CreateChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Wire::Internal::IChannel* CreateChannel(::Unity::Services::Wire::Internal::IChannelTokenProvider* tokenProvider);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IWire", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWire(IWire&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWire", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWire(IWire const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Wire::Internal
NEED_NO_BOX(::Unity::Services::Wire::Internal::IWire);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Wire::Internal::IWire*, "Unity.Services.Wire.Internal", "IWire");
