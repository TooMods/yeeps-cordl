#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializablePackage)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IInitializablePackage);
// Type: Unity.Services.Core.Internal::IInitializablePackage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IInitializablePackage*
class CORDL_TYPE IInitializablePackage {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry* registry);

  // Ctor Parameters [CppParam { name: "", ty: "IInitializablePackage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInitializablePackage(IInitializablePackage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializablePackage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializablePackage(IInitializablePackage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IInitializablePackage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IInitializablePackage*, "Unity.Services.Core.Internal", "IInitializablePackage");
