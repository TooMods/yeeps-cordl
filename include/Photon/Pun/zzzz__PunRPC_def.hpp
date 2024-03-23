#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PunRPC)
// Forward declare root types
namespace Photon::Pun {
class PunRPC;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PunRPC);
// Type: Photon.Pun::PunRPC
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PunRPC*
class CORDL_TYPE PunRPC : public ::System::Attribute {
public:
  // Declarations
  static inline ::Photon::Pun::PunRPC* New_ctor();

  /// @brief Method .ctor, addr 0x2754650, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunRPC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunRPC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunRPC(PunRPC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunRPC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunRPC(PunRPC const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PunRPC, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PunRPC);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PunRPC*, "Photon.Pun", "PunRPC");
