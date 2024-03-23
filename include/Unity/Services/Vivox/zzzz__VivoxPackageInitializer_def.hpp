#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VivoxPackageInitializer)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxPackageInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxPackageInitializer);
// Type: Unity.Services.Vivox::VivoxPackageInitializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxPackageInitializer*
class CORDL_TYPE VivoxPackageInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
  constexpr operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

  /// @brief Method Initialize, addr 0x1c18aa8, size 0x604, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry* registry);

  static inline ::Unity::Services::Vivox::VivoxPackageInitializer* New_ctor();

  /// @brief Method Register, addr 0x1c188f4, size 0x1ac, virtual false, abstract: false, final false
  static inline void Register();

  /// @brief Method .ctor, addr 0x1c18aa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
  constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxPackageInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxPackageInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxPackageInitializer(VivoxPackageInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxPackageInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxPackageInitializer(VivoxPackageInitializer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxPackageInitializer, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxPackageInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxPackageInitializer*, "Unity.Services.Vivox", "VivoxPackageInitializer");
