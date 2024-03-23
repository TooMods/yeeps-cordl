#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisabledMetricsFactory)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DisabledMetricsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory);
// Type: Unity.Services.Core.Telemetry.Internal::DisabledMetricsFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DisabledMetricsFactory*
class CORDL_TYPE DisabledMetricsFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_get_CommonTags))::System::Collections::Generic::IReadOnlyDictionary_2<
      ::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags;

  /// @brief Field <Unity.Services.Core.Telemetry.Internal.IMetricsFactory.CommonTags>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField,
                      put = __cordl_internal_set__Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField))::System::Collections::Generic::
      IReadOnlyDictionary_2<::StringW, ::StringW>* _Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory* New_ctor();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetricsFactory.Create, addr 0x270cae8, size 0x5c, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity_Services_Core_Telemetry_Internal_IMetricsFactory_Create(::StringW packageName);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetricsFactory.get_CommonTags, addr 0x270cae0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Unity_Services_Core_Telemetry_Internal_IMetricsFactory_get_CommonTags();

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*> const&
  __cordl_internal_get__Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField() const;

  constexpr void
  __cordl_internal_set__Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x270cb44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* i___Unity__Services__Core__Telemetry__Internal__IMetricsFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisabledMetricsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisabledMetricsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisabledMetricsFactory(DisabledMetricsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisabledMetricsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisabledMetricsFactory(DisabledMetricsFactory const&) = delete;

  /// @brief Field <Unity.Services.Core.Telemetry.Internal.IMetricsFactory.CommonTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* ____Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory, ____Unity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTags_k__BackingField) == 0x10,
              "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DisabledMetricsFactory*, "Unity.Services.Core.Telemetry.Internal", "DisabledMetricsFactory");
