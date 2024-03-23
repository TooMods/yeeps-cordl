#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebFlags)
// Forward declare root types
namespace Photon::Realtime {
class WebFlags;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::WebFlags);
// Type: Photon.Realtime::WebFlags
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::WebFlags*
class CORDL_TYPE WebFlags : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Photon::Realtime::WebFlags* Default;

  __declspec(property(get = get_HttpForward, put = set_HttpForward)) bool HttpForward;

  __declspec(property(get = get_SendAuthCookie, put = set_SendAuthCookie)) bool SendAuthCookie;

  __declspec(property(get = get_SendState, put = set_SendState)) bool SendState;

  __declspec(property(get = get_SendSync, put = set_SendSync)) bool SendSync;

  /// @brief Field WebhookFlags, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_WebhookFlags, put = __cordl_internal_set_WebhookFlags)) uint8_t WebhookFlags;

  static inline ::Photon::Realtime::WebFlags* New_ctor(uint8_t webhookFlags);

  constexpr uint8_t const& __cordl_internal_get_WebhookFlags() const;

  constexpr uint8_t& __cordl_internal_get_WebhookFlags();

  constexpr void __cordl_internal_set_WebhookFlags(uint8_t value);

  /// @brief Method .ctor, addr 0x1613310, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint8_t webhookFlags);

  static inline ::Photon::Realtime::WebFlags* getStaticF_Default();

  /// @brief Method get_HttpForward, addr 0x1613270, size 0xc, virtual false, abstract: false, final false
  inline bool get_HttpForward();

  /// @brief Method get_SendAuthCookie, addr 0x1613298, size 0xc, virtual false, abstract: false, final false
  inline bool get_SendAuthCookie();

  /// @brief Method get_SendState, addr 0x16132e8, size 0xc, virtual false, abstract: false, final false
  inline bool get_SendState();

  /// @brief Method get_SendSync, addr 0x16132c0, size 0xc, virtual false, abstract: false, final false
  inline bool get_SendSync();

  static inline void setStaticF_Default(::Photon::Realtime::WebFlags* value);

  /// @brief Method set_HttpForward, addr 0x161327c, size 0x1c, virtual false, abstract: false, final false
  inline void set_HttpForward(bool value);

  /// @brief Method set_SendAuthCookie, addr 0x16132a4, size 0x1c, virtual false, abstract: false, final false
  inline void set_SendAuthCookie(bool value);

  /// @brief Method set_SendState, addr 0x16132f4, size 0x1c, virtual false, abstract: false, final false
  inline void set_SendState(bool value);

  /// @brief Method set_SendSync, addr 0x16132cc, size 0x1c, virtual false, abstract: false, final false
  inline void set_SendSync(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebFlags(WebFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebFlags(WebFlags const&) = delete;

  /// @brief Field WebhookFlags, offset: 0x10, size: 0x1, def value: None
  uint8_t ___WebhookFlags;

  /// @brief Field HttpForwardConst offset 0xffffffff size 0x1
  static constexpr uint8_t HttpForwardConst{ static_cast<uint8_t>(0x1u) };

  /// @brief Field SendAuthCookieConst offset 0xffffffff size 0x1
  static constexpr uint8_t SendAuthCookieConst{ static_cast<uint8_t>(0x2u) };

  /// @brief Field SendStateConst offset 0xffffffff size 0x1
  static constexpr uint8_t SendStateConst{ static_cast<uint8_t>(0x8u) };

  /// @brief Field SendSyncConst offset 0xffffffff size 0x1
  static constexpr uint8_t SendSyncConst{ static_cast<uint8_t>(0x4u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::WebFlags, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::WebFlags, ___WebhookFlags) == 0x10, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::WebFlags);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::WebFlags*, "Photon.Realtime", "WebFlags");
