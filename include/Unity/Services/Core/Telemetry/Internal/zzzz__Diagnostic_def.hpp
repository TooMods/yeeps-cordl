#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Diagnostic)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
struct Diagnostic;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::Diagnostic);
// Type: Unity.Services.Core.Telemetry.Internal::Diagnostic
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Telemetry.Internal::Diagnostic
struct CORDL_TYPE Diagnostic {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
  constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* i___Unity__Services__Core__Telemetry__Internal__ITelemetryEvent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Diagnostic();

  // Ctor Parameters [CppParam { name: "Content", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }]
  constexpr Diagnostic(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Content) noexcept;

  /// @brief Field Content, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Content;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::Diagnostic, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Diagnostic, Content) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::Diagnostic, "Unity.Services.Core.Telemetry.Internal", "Diagnostic");
