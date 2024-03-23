#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisabledDiagnostics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnostics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DisabledDiagnostics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics);
// Type: Unity.Services.Core.Telemetry.Internal::DisabledDiagnostics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DisabledDiagnostics*
class CORDL_TYPE DisabledDiagnostics : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics* New_ctor();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IDiagnostics.SendDiagnostic, addr 0x270b758, size 0x4, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic(::StringW name, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method .ctor, addr 0x270b75c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* i___Unity__Services__Core__Telemetry__Internal__IDiagnostics() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisabledDiagnostics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisabledDiagnostics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisabledDiagnostics(DisabledDiagnostics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisabledDiagnostics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisabledDiagnostics(DisabledDiagnostics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnostics*, "Unity.Services.Core.Telemetry.Internal", "DisabledDiagnostics");
