#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVivoxTokenProviderInternal)
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
namespace Unity::Services::Vivox::Internal {
class IVivoxTokenProviderInternal;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal);
// Type: Unity.Services.Vivox.Internal::IVivoxTokenProviderInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Internal::IVivoxTokenProviderInternal*
class CORDL_TYPE IVivoxTokenProviderInternal {
public:
  // Declarations
  /// @brief Method GetTokenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW userUri, ::StringW action,
                                                                      ::StringW conferenceUri, ::StringW fromUserUri, ::StringW realm);

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxTokenProviderInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivoxTokenProviderInternal(IVivoxTokenProviderInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxTokenProviderInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivoxTokenProviderInternal(IVivoxTokenProviderInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Internal
NEED_NO_BOX(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Internal::IVivoxTokenProviderInternal*, "Unity.Services.Vivox.Internal", "IVivoxTokenProviderInternal");
