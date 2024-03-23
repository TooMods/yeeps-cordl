#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class Room;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class Player;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::Player);
// Type: Photon.Realtime::Player
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::Player*
class CORDL_TYPE Player : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ActorNumber)) int32_t ActorNumber;

  __declspec(property(get = get_CustomProperties, put = set_CustomProperties))::ExitGames::Client::Photon::Hashtable* CustomProperties;

  __declspec(property(get = get_HasRejoined, put = set_HasRejoined)) bool HasRejoined;

  __declspec(property(get = get_IsInactive, put = set_IsInactive)) bool IsInactive;

  /// @brief Field IsLocal, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_IsLocal, put = __cordl_internal_set_IsLocal)) bool IsLocal;

  __declspec(property(get = get_IsMasterClient)) bool IsMasterClient;

  __declspec(property(get = get_NickName, put = set_NickName))::StringW NickName;

  __declspec(property(get = get_RoomReference, put = set_RoomReference))::Photon::Realtime::Room* RoomReference;

  /// @brief Field TagObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_TagObject, put = __cordl_internal_set_TagObject))::System::Object* TagObject;

  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Field <CustomProperties>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CustomProperties_k__BackingField,
                      put = __cordl_internal_set__CustomProperties_k__BackingField))::ExitGames::Client::Photon::Hashtable* _CustomProperties_k__BackingField;

  /// @brief Field <HasRejoined>k__BackingField, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get__HasRejoined_k__BackingField, put = __cordl_internal_set__HasRejoined_k__BackingField)) bool _HasRejoined_k__BackingField;

  /// @brief Field <IsInactive>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInactive_k__BackingField, put = __cordl_internal_set__IsInactive_k__BackingField)) bool _IsInactive_k__BackingField;

  /// @brief Field <RoomReference>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RoomReference_k__BackingField, put = __cordl_internal_set__RoomReference_k__BackingField))::Photon::Realtime::Room* _RoomReference_k__BackingField;

  /// @brief Field <UserId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__UserId_k__BackingField, put = __cordl_internal_set__UserId_k__BackingField))::StringW _UserId_k__BackingField;

  /// @brief Field actorNumber, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_actorNumber, put = __cordl_internal_set_actorNumber)) int32_t actorNumber;

  /// @brief Field nickName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nickName, put = __cordl_internal_set_nickName))::StringW nickName;

  /// @brief Method ChangeLocalID, addr 0x223daf8, size 0x10, virtual false, abstract: false, final false
  inline void ChangeLocalID(int32_t newID);

  /// @brief Method Equals, addr 0x2249514, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* p);

  /// @brief Method Get, addr 0x2248ea4, size 0x1c, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* Get(int32_t id);

  /// @brief Method GetHashCode, addr 0x22495c8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNext, addr 0x2248ec0, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* GetNext();

  /// @brief Method GetNextFor, addr 0x22490c4, size 0x14, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* GetNextFor(::Photon::Realtime::Player* currentPlayer);

  /// @brief Method GetNextFor, addr 0x2248ec8, size 0x1fc, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* GetNextFor(int32_t currentPlayerId);

  /// @brief Method InternalCacheProperties, addr 0x22490d8, size 0x1e4, virtual true, abstract: false, final false
  inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable* properties);

  static inline ::Photon::Realtime::Player* New_ctor(::StringW nickName, int32_t actorNumber, bool isLocal);

  static inline ::Photon::Realtime::Player* New_ctor(::StringW nickName, int32_t actorNumber, bool isLocal, ::ExitGames::Client::Photon::Hashtable* playerProperties);

  /// @brief Method SetCustomProperties, addr 0x223c2b4, size 0x1c4, virtual false, abstract: false, final false
  inline bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedValues, ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method SetPlayerNameProperty, addr 0x2248d90, size 0xb0, virtual false, abstract: false, final false
  inline bool SetPlayerNameProperty();

  /// @brief Method ToString, addr 0x22492bc, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToStringFull, addr 0x2249344, size 0x1d0, virtual false, abstract: false, final false
  inline ::StringW ToStringFull();

  constexpr bool const& __cordl_internal_get_IsLocal() const;

  constexpr bool& __cordl_internal_get_IsLocal();

  constexpr ::System::Object*& __cordl_internal_get_TagObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_TagObject() const;

  constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get__CustomProperties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& __cordl_internal_get__CustomProperties_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__HasRejoined_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasRejoined_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInactive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInactive_k__BackingField();

  constexpr ::Photon::Realtime::Room*& __cordl_internal_get__RoomReference_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Room*> const& __cordl_internal_get__RoomReference_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__UserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_actorNumber() const;

  constexpr int32_t& __cordl_internal_get_actorNumber();

  constexpr ::StringW const& __cordl_internal_get_nickName() const;

  constexpr ::StringW& __cordl_internal_get_nickName();

  constexpr void __cordl_internal_set_IsLocal(bool value);

  constexpr void __cordl_internal_set_TagObject(::System::Object* value);

  constexpr void __cordl_internal_set__CustomProperties_k__BackingField(::ExitGames::Client::Photon::Hashtable* value);

  constexpr void __cordl_internal_set__HasRejoined_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsInactive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RoomReference_k__BackingField(::Photon::Realtime::Room* value);

  constexpr void __cordl_internal_set__UserId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_actorNumber(int32_t value);

  constexpr void __cordl_internal_set_nickName(::StringW value);

  /// @brief Method .ctor, addr 0x2248e98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW nickName, int32_t actorNumber, bool isLocal);

  /// @brief Method .ctor, addr 0x223e2d8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW nickName, int32_t actorNumber, bool isLocal, ::ExitGames::Client::Photon::Hashtable* playerProperties);

  /// @brief Method get_ActorNumber, addr 0x2248d6c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ActorNumber();

  /// @brief Method get_CustomProperties, addr 0x2248e88, size 0x8, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* get_CustomProperties();

  /// @brief Method get_HasRejoined, addr 0x2248d74, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasRejoined();

  /// @brief Method get_IsInactive, addr 0x2248e74, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInactive();

  /// @brief Method get_IsMasterClient, addr 0x2248e50, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsMasterClient();

  /// @brief Method get_NickName, addr 0x2248d88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NickName();

  /// @brief Method get_RoomReference, addr 0x2248d5c, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Room* get_RoomReference();

  /// @brief Method get_UserId, addr 0x2248e40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserId();

  /// @brief Method set_CustomProperties, addr 0x2248e90, size 0x8, virtual false, abstract: false, final false
  inline void set_CustomProperties(::ExitGames::Client::Photon::Hashtable* value);

  /// @brief Method set_HasRejoined, addr 0x2248d7c, size 0xc, virtual false, abstract: false, final false
  inline void set_HasRejoined(bool value);

  /// @brief Method set_IsInactive, addr 0x2248e7c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInactive(bool value);

  /// @brief Method set_NickName, addr 0x223900c, size 0x64, virtual false, abstract: false, final false
  inline void set_NickName(::StringW value);

  /// @brief Method set_RoomReference, addr 0x2248d64, size 0x8, virtual false, abstract: false, final false
  inline void set_RoomReference(::Photon::Realtime::Room* value);

  /// @brief Method set_UserId, addr 0x2248e48, size 0x8, virtual false, abstract: false, final false
  inline void set_UserId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Player();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Player(Player&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Player(Player const&) = delete;

  /// @brief Field <RoomReference>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Photon::Realtime::Room* ____RoomReference_k__BackingField;

  /// @brief Field actorNumber, offset: 0x18, size: 0x4, def value: None
  int32_t ___actorNumber;

  /// @brief Field IsLocal, offset: 0x1c, size: 0x1, def value: None
  bool ___IsLocal;

  /// @brief Field <HasRejoined>k__BackingField, offset: 0x1d, size: 0x1, def value: None
  bool ____HasRejoined_k__BackingField;

  /// @brief Field nickName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___nickName;

  /// @brief Field <UserId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____UserId_k__BackingField;

  /// @brief Field <IsInactive>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsInactive_k__BackingField;

  /// @brief Field <CustomProperties>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Hashtable* ____CustomProperties_k__BackingField;

  /// @brief Field TagObject, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___TagObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::Player, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____RoomReference_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___actorNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___IsLocal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____HasRejoined_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___nickName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____UserId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____IsInactive_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____CustomProperties_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___TagObject) == 0x40, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::Player);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::Player*, "Photon.Realtime", "Player");
