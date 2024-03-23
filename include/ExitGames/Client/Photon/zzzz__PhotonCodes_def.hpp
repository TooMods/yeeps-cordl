#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonCodes)
// Forward declare root types
namespace ExitGames::Client::Photon {
class PhotonCodes;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::PhotonCodes);
// Type: ExitGames.Client.Photon::PhotonCodes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::PhotonCodes*
class CORDL_TYPE PhotonCodes : public ::System::Object {
public:
  // Declarations
  /// @brief Field ClientKey, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ClientKey, put = setStaticF_ClientKey)) uint8_t ClientKey;

  /// @brief Field InitEncryption, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_InitEncryption, put = setStaticF_InitEncryption)) uint8_t InitEncryption;

  /// @brief Field ModeKey, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ModeKey, put = setStaticF_ModeKey)) uint8_t ModeKey;

  /// @brief Field Ping, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_Ping, put = setStaticF_Ping)) uint8_t Ping;

  /// @brief Field ServerKey, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ServerKey, put = setStaticF_ServerKey)) uint8_t ServerKey;

  static inline uint8_t getStaticF_ClientKey();

  static inline uint8_t getStaticF_InitEncryption();

  static inline uint8_t getStaticF_ModeKey();

  static inline uint8_t getStaticF_Ping();

  static inline uint8_t getStaticF_ServerKey();

  static inline void setStaticF_ClientKey(uint8_t value);

  static inline void setStaticF_InitEncryption(uint8_t value);

  static inline void setStaticF_ModeKey(uint8_t value);

  static inline void setStaticF_Ping(uint8_t value);

  static inline void setStaticF_ServerKey(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonCodes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonCodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonCodes(PhotonCodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonCodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonCodes(PhotonCodes const&) = delete;

  /// @brief Field Ok offset 0xffffffff size 0x1
  static constexpr uint8_t Ok{ static_cast<uint8_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::PhotonCodes, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::PhotonCodes);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PhotonCodes*, "ExitGames.Client.Photon", "PhotonCodes");
