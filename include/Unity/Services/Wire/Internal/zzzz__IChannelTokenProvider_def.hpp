#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IChannelTokenProvider)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Wire::Internal {
struct ChannelToken;
}
// Forward declare root types
namespace Unity::Services::Wire::Internal {
class IChannelTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Wire::Internal::IChannelTokenProvider);
// Type: Unity.Services.Wire.Internal::IChannelTokenProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Wire::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Wire.Internal::IChannelTokenProvider*
class CORDL_TYPE IChannelTokenProvider {
public:
  // Declarations
  /// @brief Method GetTokenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Wire::Internal::ChannelToken>* GetTokenAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IChannelTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannelTokenProvider(IChannelTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannelTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelTokenProvider(IChannelTokenProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Wire::Internal
NEED_NO_BOX(::Unity::Services::Wire::Internal::IChannelTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Wire::Internal::IChannelTokenProvider*, "Unity.Services.Wire.Internal", "IChannelTokenProvider");
