#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StructWrapperPool)
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperPool;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool);
// Type: ExitGames.Client.Photon.StructWrapping::StructWrapperPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.StructWrapping::StructWrapperPool*
class CORDL_TYPE StructWrapperPool : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetWrappedType, addr 0x2ac4284, size 0x278, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::WrappedType GetWrappedType(::System::Type* type);

  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool* New_ctor();

  /// @brief Method .ctor, addr 0x2ac44fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StructWrapperPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StructWrapperPool(StructWrapperPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StructWrapperPool(StructWrapperPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPool");
