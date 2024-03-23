#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceComponent)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IServiceComponent);
// Type: Unity.Services.Core.Internal::IServiceComponent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IServiceComponent*
class CORDL_TYPE IServiceComponent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IServiceComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IServiceComponent(IServiceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IServiceComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServiceComponent(IServiceComponent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IServiceComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IServiceComponent*, "Unity.Services.Core.Internal", "IServiceComponent");
