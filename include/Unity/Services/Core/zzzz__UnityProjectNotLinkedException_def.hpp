#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__ServicesInitializationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityProjectNotLinkedException)
// Forward declare root types
namespace Unity::Services::Core {
class UnityProjectNotLinkedException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::UnityProjectNotLinkedException);
// Type: Unity.Services.Core::UnityProjectNotLinkedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::UnityProjectNotLinkedException*
class CORDL_TYPE UnityProjectNotLinkedException : public ::Unity::Services::Core::ServicesInitializationException {
public:
  // Declarations
  static inline ::Unity::Services::Core::UnityProjectNotLinkedException* New_ctor();

  static inline ::Unity::Services::Core::UnityProjectNotLinkedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x23ba634, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23ba638, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityProjectNotLinkedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityProjectNotLinkedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityProjectNotLinkedException(UnityProjectNotLinkedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityProjectNotLinkedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityProjectNotLinkedException(UnityProjectNotLinkedException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::UnityProjectNotLinkedException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::UnityProjectNotLinkedException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::UnityProjectNotLinkedException*, "Unity.Services.Core", "UnityProjectNotLinkedException");
