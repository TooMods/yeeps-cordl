#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonMessageInfo)
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::PhotonMessageInfo);
// Type: Photon.Pun::PhotonMessageInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::Photon.Pun::PhotonMessageInfo
struct CORDL_TYPE PhotonMessageInfo {
public:
  // Declarations
  __declspec(property(get = get_SentServerTime)) double_t SentServerTime;

  __declspec(property(get = get_SentServerTimestamp)) int32_t SentServerTimestamp;

  __declspec(property(get = get_timestamp)) double_t timestamp;

  /// @brief Method ToString, addr 0x2754824, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x274778c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::Player* player, int32_t timestamp, ::Photon::Pun::PhotonView* view);

  /// @brief Method get_SentServerTime, addr 0x2754804, size 0x18, virtual false, abstract: false, final false
  inline double_t get_SentServerTime();

  /// @brief Method get_SentServerTimestamp, addr 0x275481c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SentServerTimestamp();

  /// @brief Method get_timestamp, addr 0x27547ec, size 0x18, virtual false, abstract: false, final false
  inline double_t get_timestamp();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonMessageInfo();

  // Ctor Parameters [CppParam { name: "timeInt", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Sender", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: None },
  // CppParam { name: "photonView", ty: "::UnityW<::Photon::Pun::PhotonView>", modifiers: "", def_value: None }]
  constexpr PhotonMessageInfo(int32_t timeInt, ::Photon::Realtime::Player* Sender, ::UnityW<::Photon::Pun::PhotonView> photonView) noexcept;

  /// @brief Field timeInt, offset: 0x0, size: 0x4, def value: None
  int32_t timeInt;

  /// @brief Field Sender, offset: 0x8, size: 0x8, def value: None
  ::Photon::Realtime::Player* Sender;

  /// @brief Field photonView, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::PhotonView> photonView;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonMessageInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonMessageInfo, timeInt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonMessageInfo, Sender) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonMessageInfo, photonView) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonMessageInfo, "Photon.Pun", "PhotonMessageInfo");
