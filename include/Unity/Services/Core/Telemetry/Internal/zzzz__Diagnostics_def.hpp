#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Diagnostics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class DiagnosticsHandler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnostics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class Diagnostics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::Diagnostics);
// Type: Unity.Services.Core.Telemetry.Internal::Diagnostics
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::Diagnostics*
class CORDL_TYPE Diagnostics : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Handler))::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* Handler;

  __declspec(property(get = get_PackageTags))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* PackageTags;

  /// @brief Field <Handler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Handler_k__BackingField,
                      put = __cordl_internal_set__Handler_k__BackingField))::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* _Handler_k__BackingField;

  /// @brief Field <PackageTags>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PackageTags_k__BackingField,
                      put = __cordl_internal_set__PackageTags_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _PackageTags_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::Diagnostics* New_ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler,
                                                                                    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags);

  /// @brief Method SendDiagnostic, addr 0x270b150, size 0x274, virtual true, abstract: false, final true
  inline void SendDiagnostic(::StringW name, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*& __cordl_internal_get__Handler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*> const& __cordl_internal_get__Handler_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__PackageTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__PackageTags_k__BackingField() const;

  constexpr void __cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* value);

  constexpr void __cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x270b124, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags);

  /// @brief Method get_Handler, addr 0x270b114, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* get_Handler();

  /// @brief Method get_PackageTags, addr 0x270b11c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_PackageTags();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnostics"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* i___Unity__Services__Core__Telemetry__Internal__IDiagnostics() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Diagnostics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Diagnostics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Diagnostics(Diagnostics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Diagnostics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Diagnostics(Diagnostics const&) = delete;

  /// @brief Field <Handler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* ____Handler_k__BackingField;

  /// @brief Field <PackageTags>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____PackageTags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::Diagnostics, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Diagnostics, ____Handler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Diagnostics, ____PackageTags_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::Diagnostics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::Diagnostics*, "Unity.Services.Core.Telemetry.Internal", "Diagnostics");
