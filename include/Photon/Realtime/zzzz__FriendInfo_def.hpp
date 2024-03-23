#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FriendInfo)
// Forward declare root types
namespace Photon::Realtime {
class FriendInfo;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::FriendInfo);
// Type: Photon.Realtime::FriendInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::FriendInfo*
class CORDL_TYPE FriendInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsInRoom)) bool IsInRoom;

  __declspec(property(get = get_IsOnline, put = set_IsOnline)) bool IsOnline;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Room, put = set_Room))::StringW Room;

  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Field <IsOnline>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsOnline_k__BackingField, put = __cordl_internal_set__IsOnline_k__BackingField)) bool _IsOnline_k__BackingField;

  /// @brief Field <Room>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Room_k__BackingField, put = __cordl_internal_set__Room_k__BackingField))::StringW _Room_k__BackingField;

  /// @brief Field <UserId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__UserId_k__BackingField, put = __cordl_internal_set__UserId_k__BackingField))::StringW _UserId_k__BackingField;

  static inline ::Photon::Realtime::FriendInfo* New_ctor();

  /// @brief Method ToString, addr 0x2238698, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get__IsOnline_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsOnline_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Room_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Room_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserId_k__BackingField();

  constexpr void __cordl_internal_set__IsOnline_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Room_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UserId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2238754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInRoom, addr 0x2238670, size 0x28, virtual false, abstract: false, final false
  inline bool get_IsInRoom();

  /// @brief Method get_IsOnline, addr 0x223864c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOnline();

  /// @brief Method get_Name, addr 0x2238634, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Room, addr 0x2238660, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Room();

  /// @brief Method get_UserId, addr 0x223863c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserId();

  /// @brief Method set_IsOnline, addr 0x2238654, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOnline(bool value);

  /// @brief Method set_Room, addr 0x2238668, size 0x8, virtual false, abstract: false, final false
  inline void set_Room(::StringW value);

  /// @brief Method set_UserId, addr 0x2238644, size 0x8, virtual false, abstract: false, final false
  inline void set_UserId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendInfo(FriendInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendInfo(FriendInfo const&) = delete;

  /// @brief Field <UserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____UserId_k__BackingField;

  /// @brief Field <IsOnline>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsOnline_k__BackingField;

  /// @brief Field <Room>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Room_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::FriendInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::FriendInfo, ____UserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::FriendInfo, ____IsOnline_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::FriendInfo, ____Room_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::FriendInfo);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::FriendInfo*, "Photon.Realtime", "FriendInfo");
