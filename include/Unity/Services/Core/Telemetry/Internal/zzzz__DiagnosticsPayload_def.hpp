#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticsPayload)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct Diagnostic;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryPayload;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
struct DiagnosticsPayload;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload);
// Type: Unity.Services.Core.Telemetry.Internal::DiagnosticsPayload
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DiagnosticsPayload
struct CORDL_TYPE DiagnosticsPayload {
public:
  // Declarations
  __declspec(property(get = Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_CommonTags;

  __declspec(property(get = Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count)) int32_t Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Count;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add, addr 0x270d0e4, size 0x174, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add(::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* telemetryEvent);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags, addr 0x270d090, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count, addr 0x270d098, size 0x4c, virtual true, abstract: false, final true
  inline int32_t Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload"
  constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload* i___Unity__Services__Core__Telemetry__Internal__ITelemetryPayload();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsPayload();

  // Ctor Parameters [CppParam { name: "Diagnostics", ty: "::System::Collections::Generic::List_1<::Unity::Services::Core::Telemetry::Internal::Diagnostic>*", modifiers: "", def_value: None },
  // CppParam { name: "CommonTags", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "DiagnosticsCommonTags", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }]
  constexpr DiagnosticsPayload(::System::Collections::Generic::List_1<::Unity::Services::Core::Telemetry::Internal::Diagnostic>* Diagnostics,
                               ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CommonTags,
                               ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DiagnosticsCommonTags) noexcept;

  /// @brief Field Diagnostics, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Core::Telemetry::Internal::Diagnostic>* Diagnostics;

  /// @brief Field CommonTags, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CommonTags;

  /// @brief Field DiagnosticsCommonTags, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DiagnosticsCommonTags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload, Diagnostics) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload, CommonTags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload, DiagnosticsCommonTags) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload, "Unity.Services.Core.Telemetry.Internal", "DiagnosticsPayload");
