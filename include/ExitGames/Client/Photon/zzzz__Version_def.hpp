#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
// Forward declare root types
namespace ExitGames::Client::Photon {
class Version;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::Version);
// Type: ExitGames.Client.Photon::Version
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Version*
class CORDL_TYPE Version : public ::System::Object {
public:
  // Declarations
  /// @brief Field clientVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clientVersion, put = setStaticF_clientVersion))::ArrayW<uint8_t, ::Array<uint8_t>*> clientVersion;

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_clientVersion();

  static inline void setStaticF_clientVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Version();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Version(Version&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Version(Version const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Version, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::Version);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Version*, "ExitGames.Client.Photon", "Version");
