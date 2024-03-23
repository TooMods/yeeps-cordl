#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PingMono)
namespace System::Net::Sockets {
class Socket;
}
// Forward declare root types
namespace Photon::Realtime {
class PingMono;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::PingMono);
// Type: Photon.Realtime::PingMono
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::PingMono*
class CORDL_TYPE PingMono : public ::Photon::Realtime::PhotonPing {
public:
  // Declarations
  /// @brief Field sock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock))::System::Net::Sockets::Socket* sock;

  /// @brief Method Dispose, addr 0x2248c68, size 0xa0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Done, addr 0x2248a58, size 0x210, virtual true, abstract: false, final false
  inline bool Done();

  static inline ::Photon::Realtime::PingMono* New_ctor();

  /// @brief Method StartPing, addr 0x22487d8, size 0x280, virtual true, abstract: false, final false
  inline bool StartPing(::StringW ip);

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_sock() const;

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  /// @brief Method .ctor, addr 0x2248d08, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PingMono();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PingMono", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PingMono(PingMono&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PingMono", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PingMono(PingMono const&) = delete;

  /// @brief Field sock, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::PingMono, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::PingMono, ___sock) == 0x30, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::PingMono);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::PingMono*, "Photon.Realtime", "PingMono");
