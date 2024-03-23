#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitializationOptionsExtensions)
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class InitializationOptionsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::InitializationOptionsExtensions);
// Type: Unity.Services.Vivox::InitializationOptionsExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::InitializationOptionsExtensions*
class CORDL_TYPE InitializationOptionsExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetVivoxCredentials, addr 0x1c18294, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::InitializationOptions* SetVivoxCredentials(::Unity::Services::Core::InitializationOptions* self, ::StringW server, ::StringW domain, ::StringW issuer,
                                                                                    ::StringW tokenKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationOptionsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationOptionsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationOptionsExtensions(InitializationOptionsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationOptionsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationOptionsExtensions(InitializationOptionsExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::InitializationOptionsExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::InitializationOptionsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::InitializationOptionsExtensions*, "Unity.Services.Vivox", "InitializationOptionsExtensions");
