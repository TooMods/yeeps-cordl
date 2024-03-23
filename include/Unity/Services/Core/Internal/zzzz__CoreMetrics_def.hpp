#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoreMetrics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Type;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreMetrics);
// Type: Unity.Services.Core.Internal::CoreMetrics
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::CoreMetrics*
class CORDL_TYPE CoreMetrics : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllPackageMetrics))::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>* AllPackageMetrics;

  __declspec(property(get = get_Metrics, put = set_Metrics))::Unity::Services::Core::Telemetry::Internal::IMetrics* Metrics;

  /// @brief Field <AllPackageMetrics>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AllPackageMetrics_k__BackingField, put = __cordl_internal_set__AllPackageMetrics_k__BackingField))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>* _AllPackageMetrics_k__BackingField;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::Unity::Services::Core::Internal::CoreMetrics* _Instance_k__BackingField;

  /// @brief Field <Metrics>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Metrics_k__BackingField,
                      put = __cordl_internal_set__Metrics_k__BackingField))::Unity::Services::Core::Telemetry::Internal::IMetrics* _Metrics_k__BackingField;

  /// @brief Method FindAndCacheAllPackageMetrics, addr 0x26702d4, size 0x444, virtual false, abstract: false, final false
  inline void FindAndCacheAllPackageMetrics(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* configuration,
                                            ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* factory);

  /// @brief Method Initialize, addr 0x2670170, size 0x164, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* configuration, ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* factory,
                         ::System::Type* corePackageType);

  static inline ::Unity::Services::Core::Internal::CoreMetrics* New_ctor();

  /// @brief Method SendAllPackagesInitSuccessMetric, addr 0x266fe5c, size 0xd0, virtual false, abstract: false, final false
  inline void SendAllPackagesInitSuccessMetric();

  /// @brief Method SendAllPackagesInitTimeMetric, addr 0x266ff2c, size 0xe0, virtual false, abstract: false, final false
  inline void SendAllPackagesInitTimeMetric(double_t initTimeSeconds);

  /// @brief Method SendInitTimeMetricForPackage, addr 0x267000c, size 0x164, virtual false, abstract: false, final false
  inline void SendInitTimeMetricForPackage(::System::Type* packageType, double_t initTimeSeconds);

  constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>*& __cordl_internal_get__AllPackageMetrics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>*> const&
  __cordl_internal_get__AllPackageMetrics_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics*& __cordl_internal_get__Metrics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IMetrics*> const& __cordl_internal_get__Metrics_k__BackingField() const;

  constexpr void
  __cordl_internal_set__AllPackageMetrics_k__BackingField(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>* value);

  constexpr void __cordl_internal_set__Metrics_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IMetrics* value);

  /// @brief Method .ctor, addr 0x2670718, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Core::Internal::CoreMetrics* getStaticF__Instance_k__BackingField();

  /// @brief Method get_AllPackageMetrics, addr 0x266fe54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>* get_AllPackageMetrics();

  /// @brief Method get_Instance, addr 0x266fdb0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::CoreMetrics* get_Instance();

  /// @brief Method get_Metrics, addr 0x266fe44, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* get_Metrics();

  static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics* value);

  /// @brief Method set_Instance, addr 0x266fdf8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Unity::Services::Core::Internal::CoreMetrics* value);

  /// @brief Method set_Metrics, addr 0x266fe4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Metrics(::Unity::Services::Core::Telemetry::Internal::IMetrics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreMetrics(CoreMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreMetrics(CoreMetrics const&) = delete;

  /// @brief Field <Metrics>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IMetrics* ____Metrics_k__BackingField;

  /// @brief Field <AllPackageMetrics>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Unity::Services::Core::Telemetry::Internal::IMetrics*>* ____AllPackageMetrics_k__BackingField;

  /// @brief Field AllPackageNamesKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AllPackageNamesKey{ u"com.unity.services.core.all-package-names" };

  /// @brief Field AllPackageNamesSeparator offset 0xffffffff size 0x2
  static constexpr char16_t AllPackageNamesSeparator{ u';' };

  /// @brief Field AllPackagesInitSuccessMetricName offset 0xffffffff size 0x8
  static constexpr ::ConstString AllPackagesInitSuccessMetricName{ u"all_packages_init_success" };

  /// @brief Field AllPackagesInitTimeMetricName offset 0xffffffff size 0x8
  static constexpr ::ConstString AllPackagesInitTimeMetricName{ u"all_packages_init_time" };

  /// @brief Field PackageInitTimeMetricName offset 0xffffffff size 0x8
  static constexpr ::ConstString PackageInitTimeMetricName{ u"package_init_time" };

  /// @brief Field PackageInitializerNamesKeyFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString PackageInitializerNamesKeyFormat{ u"{0}.initializer-assembly-qualified-names" };

  /// @brief Field PackageInitializerNamesSeparator offset 0xffffffff size 0x2
  static constexpr char16_t PackageInitializerNamesSeparator{ u';' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreMetrics, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreMetrics, ____Metrics_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreMetrics, ____AllPackageMetrics_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreMetrics*, "Unity.Services.Core.Internal", "CoreMetrics");
