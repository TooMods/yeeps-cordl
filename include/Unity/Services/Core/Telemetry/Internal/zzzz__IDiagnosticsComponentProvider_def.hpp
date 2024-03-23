#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDiagnosticsComponentProvider)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider);
// Type: Unity.Services.Core.Telemetry.Internal::IDiagnosticsComponentProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::IDiagnosticsComponentProvider*
class CORDL_TYPE IDiagnosticsComponentProvider {
public:
  // Declarations
  /// @brief Method CreateDiagnosticsComponents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>* CreateDiagnosticsComponents();

  /// @brief Method GetSerializedProjectConfigurationAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetSerializedProjectConfigurationAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IDiagnosticsComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDiagnosticsComponentProvider(IDiagnosticsComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDiagnosticsComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDiagnosticsComponentProvider(IDiagnosticsComponentProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*, "Unity.Services.Core.Telemetry.Internal", "IDiagnosticsComponentProvider");
