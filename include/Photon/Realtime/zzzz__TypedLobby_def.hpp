#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__LobbyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypedLobby)
namespace Photon::Realtime {
struct LobbyType;
}
// Forward declare root types
namespace Photon::Realtime {
class TypedLobby;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::TypedLobby);
// Type: Photon.Realtime::TypedLobby
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::TypedLobby*
class CORDL_TYPE TypedLobby : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Photon::Realtime::TypedLobby* Default;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field Type, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::Photon::Realtime::LobbyType Type;

  static inline ::Photon::Realtime::TypedLobby* New_ctor();

  static inline ::Photon::Realtime::TypedLobby* New_ctor(::StringW name, ::Photon::Realtime::LobbyType type);

  /// @brief Method ToString, addr 0x2247dfc, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::Photon::Realtime::LobbyType const& __cordl_internal_get_Type() const;

  constexpr ::Photon::Realtime::LobbyType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Type(::Photon::Realtime::LobbyType value);

  /// @brief Method .ctor, addr 0x2247dc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2247dcc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Photon::Realtime::LobbyType type);

  static inline ::Photon::Realtime::TypedLobby* getStaticF_Default();

  /// @brief Method get_IsDefault, addr 0x2245104, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDefault();

  static inline void setStaticF_Default(::Photon::Realtime::TypedLobby* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedLobby();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedLobby", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedLobby(TypedLobby&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedLobby", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedLobby(TypedLobby const&) = delete;

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Type, offset: 0x18, size: 0x1, def value: None
  ::Photon::Realtime::LobbyType ___Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::TypedLobby, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::TypedLobby, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::TypedLobby, ___Type) == 0x18, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::TypedLobby);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::TypedLobby*, "Photon.Realtime", "TypedLobby");
