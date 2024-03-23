#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisabledDiagnosticsFactory)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnostics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DisabledDiagnosticsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory);
// Type: Unity.Services.Core.Telemetry.Internal::DisabledDiagnosticsFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DisabledDiagnosticsFactory*
class CORDL_TYPE DisabledDiagnosticsFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags))::System::Collections::Generic::IReadOnlyDictionary_2<
      ::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags;

  /// @brief Field <Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.CommonTags>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField,
                      put = __cordl_internal_set__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField))::System::Collections::Generic::
      IReadOnlyDictionary_2<::StringW, ::StringW>* _Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory* New_ctor();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.Create, addr 0x270b76c, size 0x5c, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create(::StringW packageName);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.get_CommonTags, addr 0x270b764, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags();

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*> const&
  __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField() const;

  constexpr void
  __cordl_internal_set__Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x270b7c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisabledDiagnosticsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisabledDiagnosticsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisabledDiagnosticsFactory(DisabledDiagnosticsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisabledDiagnosticsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisabledDiagnosticsFactory(DisabledDiagnosticsFactory const&) = delete;

  /// @brief Field <Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.CommonTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* ____Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory, ____Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTags_k__BackingField) == 0x10,
              "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DisabledDiagnosticsFactory*, "Unity.Services.Core.Telemetry.Internal", "DisabledDiagnosticsFactory");
