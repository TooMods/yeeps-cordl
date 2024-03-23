#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVivoxTokenProvider)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IVivoxTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IVivoxTokenProvider);
// Type: Unity.Services.Vivox::IVivoxTokenProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IVivoxTokenProvider*
class CORDL_TYPE IVivoxTokenProvider {
public:
  // Declarations
  /// @brief Method GetTokenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action,
                                                                      ::StringW channelUri, ::StringW fromUserUri, ::StringW realm);

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivoxTokenProvider(IVivoxTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivoxTokenProvider(IVivoxTokenProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IVivoxTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IVivoxTokenProvider*, "Unity.Services.Vivox", "IVivoxTokenProvider");
