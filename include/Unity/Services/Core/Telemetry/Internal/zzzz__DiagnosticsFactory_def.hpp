#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticsFactory)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Core::Telemetry::Internal {
class DiagnosticsHandler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnostics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DiagnosticsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory);
// Type: Unity.Services.Core.Telemetry.Internal::DiagnosticsFactory
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DiagnosticsFactory*
class CORDL_TYPE DiagnosticsFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CommonTags))::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* CommonTags;

  __declspec(property(get = get_Handler))::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* Handler;

  /// @brief Field <CommonTags>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CommonTags_k__BackingField,
                      put = __cordl_internal_set__CommonTags_k__BackingField))::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* _CommonTags_k__BackingField;

  /// @brief Field <Handler>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Handler_k__BackingField,
                      put = __cordl_internal_set__Handler_k__BackingField))::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* _Handler_k__BackingField;

  /// @brief Field m_ProjectConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProjectConfig, put = __cordl_internal_set_m_ProjectConfig))::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* m_ProjectConfig;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*() noexcept;

  /// @brief Method Create, addr 0x270b4b8, size 0xe4, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* Create(::StringW packageName);

  static inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory* New_ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler,
                                                                                           ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig);

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__CommonTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__CommonTags_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*& __cordl_internal_get__Handler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*> const& __cordl_internal_get__Handler_k__BackingField() const;

  constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*& __cordl_internal_get_m_ProjectConfig();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*> const& __cordl_internal_get_m_ProjectConfig() const;

  constexpr void __cordl_internal_set__CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* value);

  constexpr void __cordl_internal_set_m_ProjectConfig(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* value);

  /// @brief Method .ctor, addr 0x270b3d4, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* handler, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig);

  /// @brief Method get_CommonTags, addr 0x270b3c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* get_CommonTags();

  /// @brief Method get_Handler, addr 0x270b3cc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* get_Handler();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticsFactory(DiagnosticsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticsFactory(DiagnosticsFactory const&) = delete;

  /// @brief Field m_ProjectConfig, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* ___m_ProjectConfig;

  /// @brief Field <CommonTags>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* ____CommonTags_k__BackingField;

  /// @brief Field <Handler>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* ____Handler_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, ___m_ProjectConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, ____CommonTags_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, ____Handler_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory*, "Unity.Services.Core.Telemetry.Internal", "DiagnosticsFactory");
