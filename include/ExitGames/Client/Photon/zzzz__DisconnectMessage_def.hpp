#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectMessage)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::DisconnectMessage);
// Type: ExitGames.Client.Photon::DisconnectMessage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::DisconnectMessage*
class CORDL_TYPE DisconnectMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field Code, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code)) int16_t Code;

  /// @brief Field DebugMessage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DebugMessage, put = __cordl_internal_set_DebugMessage))::StringW DebugMessage;

  /// @brief Field Parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters, put = __cordl_internal_set_Parameters))::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* Parameters;

  static inline ::ExitGames::Client::Photon::DisconnectMessage* New_ctor();

  constexpr int16_t const& __cordl_internal_get_Code() const;

  constexpr int16_t& __cordl_internal_get_Code();

  constexpr ::StringW const& __cordl_internal_get_DebugMessage() const;

  constexpr ::StringW& __cordl_internal_get_DebugMessage();

  constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*& __cordl_internal_get_Parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*> const& __cordl_internal_get_Parameters() const;

  constexpr void __cordl_internal_set_Code(int16_t value);

  constexpr void __cordl_internal_set_DebugMessage(::StringW value);

  constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x286164c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisconnectMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectMessage(DisconnectMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectMessage(DisconnectMessage const&) = delete;

  /// @brief Field Code, offset: 0x10, size: 0x2, def value: None
  int16_t ___Code;

  /// @brief Field DebugMessage, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DebugMessage;

  /// @brief Field Parameters, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::DisconnectMessage, 0x28>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::DisconnectMessage, ___Code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::DisconnectMessage, ___DebugMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::DisconnectMessage, ___Parameters) == 0x20, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::DisconnectMessage);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DisconnectMessage*, "ExitGames.Client.Photon", "DisconnectMessage");
