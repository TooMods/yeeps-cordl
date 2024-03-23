#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITypeResolutionService)
namespace System::Reflection {
class AssemblyName;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class ITypeResolutionService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::ITypeResolutionService);
// Type: System.ComponentModel.Design::ITypeResolutionService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::ITypeResolutionService*
class CORDL_TYPE ITypeResolutionService {
public:
  // Declarations
  /// @brief Method GetPathOfAssembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetPathOfAssembly(::System::Reflection::AssemblyName* name);

  /// @brief Method GetType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetType(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "ITypeResolutionService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITypeResolutionService(ITypeResolutionService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeResolutionService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeResolutionService(ITypeResolutionService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::ITypeResolutionService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::ITypeResolutionService*, "System.ComponentModel.Design", "ITypeResolutionService");
