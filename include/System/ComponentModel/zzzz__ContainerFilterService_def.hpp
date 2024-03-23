#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContainerFilterService)
namespace System::ComponentModel {
class ComponentCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ContainerFilterService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ContainerFilterService);
// Type: System.ComponentModel::ContainerFilterService
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ContainerFilterService*
class CORDL_TYPE ContainerFilterService : public ::System::Object {
public:
  // Declarations
  /// @brief Method FilterComponents, addr 0x1aed91c, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ComponentCollection* FilterComponents(::System::ComponentModel::ComponentCollection* components);

  static inline ::System::ComponentModel::ContainerFilterService* New_ctor();

  /// @brief Method .ctor, addr 0x1aed914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainerFilterService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerFilterService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerFilterService(ContainerFilterService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerFilterService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerFilterService(ContainerFilterService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ContainerFilterService, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ContainerFilterService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ContainerFilterService*, "System.ComponentModel", "ContainerFilterService");
