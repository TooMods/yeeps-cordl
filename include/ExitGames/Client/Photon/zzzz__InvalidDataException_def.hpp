#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidDataException)
// Forward declare root types
namespace ExitGames::Client::Photon {
class InvalidDataException;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::InvalidDataException);
// Type: ExitGames.Client.Photon::InvalidDataException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::InvalidDataException*
class CORDL_TYPE InvalidDataException : public ::System::Exception {
public:
  // Declarations
  static inline ::ExitGames::Client::Photon::InvalidDataException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x28635fc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidDataException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidDataException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidDataException(InvalidDataException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidDataException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidDataException(InvalidDataException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::InvalidDataException, 0x90>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::InvalidDataException);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::InvalidDataException*, "ExitGames.Client.Photon", "InvalidDataException");
