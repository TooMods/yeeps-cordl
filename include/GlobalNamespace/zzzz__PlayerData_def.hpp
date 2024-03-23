#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerData)
namespace GlobalNamespace {
class AvatarIdentity;
}
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace GlobalNamespace {
struct __Player__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerData);
// Type: ::PlayerData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerData
struct CORDL_TYPE PlayerData {
public:
  // Declarations
  __declspec(property(get = get_isDebug)) bool isDebug;

  __declspec(property(get = get_isDeveloper)) bool isDeveloper;

  __declspec(property(get = get_isModerator)) bool isModerator;

  __declspec(property(get = get_isSpectator)) bool isSpectator;

  __declspec(property(get = get_isTester)) bool isTester;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Method ApplyStatusEffect, addr 0x106cb64, size 0x3c, virtual false, abstract: false, final false
  inline void ApplyStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration);

  /// @brief Method AreListsEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool AreListsEqual(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b);

  /// @brief Method ClearStatusEffect, addr 0x106cba0, size 0x8, virtual false, abstract: false, final false
  inline void ClearStatusEffect();

  /// @brief Method GetModifiedFields, addr 0x106ce0c, size 0x424, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetModifiedFields(ByRef<::GlobalNamespace::PlayerData> original);

  /// @brief Method ToString, addr 0x106cba8, size 0x264, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x106ca68, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW userID, ::StringW accountID, ::StringW displayName, bool isMaster, ::GlobalNamespace::AvatarIdentity* avatarIdentity, ::GlobalNamespace::__Player__Type type,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmeticDatas, ::System::Collections::Generic::List_1<::StringW>* roleKeys);

  /// @brief Method .ctor, addr 0x106cadc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW userID, ::StringW accountID, ::StringW displayName, bool isMaster, ::GlobalNamespace::AvatarIdentity* avatarIdentity, ::GlobalNamespace::__Player__Type type,
                    ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t statusEffectExpireTime,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmeticDatas, ::System::Collections::Generic::List_1<::StringW>* roleKeys);

  /// @brief Method get_isDebug, addr 0x106c9e0, size 0x68, virtual false, abstract: false, final false
  inline bool get_isDebug();

  /// @brief Method get_isDeveloper, addr 0x106c910, size 0x68, virtual false, abstract: false, final false
  inline bool get_isDeveloper();

  /// @brief Method get_isModerator, addr 0x106c8a8, size 0x68, virtual false, abstract: false, final false
  inline bool get_isModerator();

  /// @brief Method get_isSpectator, addr 0x106c894, size 0x14, virtual false, abstract: false, final false
  inline bool get_isSpectator();

  /// @brief Method get_isTester, addr 0x106c978, size 0x68, virtual false, abstract: false, final false
  inline bool get_isTester();

  /// @brief Method get_isValid, addr 0x106ca48, size 0x20, virtual false, abstract: false, final false
  inline bool get_isValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerData();

  // Ctor Parameters [CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "hasAccountID", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isMaster", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "avatarIdentity", ty: "::GlobalNamespace::AvatarIdentity*", modifiers: "", def_value: None }, CppParam { name: "type", ty:
  // "::GlobalNamespace::__Player__Type", modifiers: "", def_value: None }, CppParam { name: "statusEffect", ty: "::GlobalNamespace::__Player__StatusEffect", modifiers: "", def_value: None }, CppParam
  // { name: "statusEffectExpireTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "activeCosmeticDatas", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*", modifiers: "", def_value: None }, CppParam { name: "roleKeys", ty:
  // "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }]
  constexpr PlayerData(::StringW userID, ::StringW accountID, bool hasAccountID, ::StringW displayName, bool isMaster, ::GlobalNamespace::AvatarIdentity* avatarIdentity,
                       ::GlobalNamespace::__Player__Type type, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t statusEffectExpireTime,
                       ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmeticDatas, ::System::Collections::Generic::List_1<::StringW>* roleKeys) noexcept;

  /// @brief Field userID, offset: 0x0, size: 0x8, def value: None
  ::StringW userID;

  /// @brief Field accountID, offset: 0x8, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field hasAccountID, offset: 0x10, size: 0x1, def value: None
  bool hasAccountID;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field isMaster, offset: 0x20, size: 0x1, def value: None
  bool isMaster;

  /// @brief Field avatarIdentity, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AvatarIdentity* avatarIdentity;

  /// @brief Field type, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__Player__Type type;

  /// @brief Field statusEffect, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__Player__StatusEffect statusEffect;

  /// @brief Field statusEffectExpireTime, offset: 0x38, size: 0x4, def value: None
  float_t statusEffectExpireTime;

  /// @brief Field activeCosmeticDatas, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmeticDatas;

  /// @brief Field roleKeys, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* roleKeys;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field accountIDKey offset 0xffffffff size 0x8
  static constexpr ::ConstString accountIDKey{ u"accountID" };

  /// @brief Field activeCosmeticDatasKey offset 0xffffffff size 0x8
  static constexpr ::ConstString activeCosmeticDatasKey{ u"activeCosmeticDatas" };

  /// @brief Field avatarIdentityEyeColorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString avatarIdentityEyeColorKey{ u"eyeColor" };

  /// @brief Field avatarIdentitySkinColorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString avatarIdentitySkinColorKey{ u"skinColor" };

  /// @brief Field displayNameKey offset 0xffffffff size 0x8
  static constexpr ::ConstString displayNameKey{ u"displayName" };

  /// @brief Field roleKeysKey offset 0xffffffff size 0x8
  static constexpr ::ConstString roleKeysKey{ u"roleKeys" };

  /// @brief Field statusEffectExpireTimeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString statusEffectExpireTimeKey{ u"statusEffectExpireTime" };

  /// @brief Field statusEffectKey offset 0xffffffff size 0x8
  static constexpr ::ConstString statusEffectKey{ u"statusEffect" };

  /// @brief Field typeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString typeKey{ u"type" };

  /// @brief Field userIDKey offset 0xffffffff size 0x8
  static constexpr ::ConstString userIDKey{ u"userID" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, userID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, accountID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, hasAccountID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, isMaster) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, avatarIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, statusEffect) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, statusEffectExpireTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, activeCosmeticDatas) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, roleKeys) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerData, "", "PlayerData");
