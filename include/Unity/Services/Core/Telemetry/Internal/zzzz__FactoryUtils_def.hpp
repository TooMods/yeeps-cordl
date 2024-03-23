#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactoryUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class FactoryUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::FactoryUtils);
// Type: Unity.Services.Core.Telemetry.Internal::FactoryUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::FactoryUtils*
class CORDL_TYPE FactoryUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreatePackageTags, addr 0x270b59c, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CreatePackageTags(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig,
                                                                                                       ::StringW packageName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryUtils(FactoryUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryUtils(FactoryUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::FactoryUtils, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::FactoryUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::FactoryUtils*, "Unity.Services.Core.Telemetry.Internal", "FactoryUtils");
