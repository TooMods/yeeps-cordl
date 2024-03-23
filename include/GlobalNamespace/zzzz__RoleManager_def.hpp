#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoleManager)
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct __RoleManager__RoleData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class RoleManager;
}
namespace GlobalNamespace {
struct __RoleManager__RoleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoleManager);
MARK_VAL_T(::GlobalNamespace::__RoleManager__RoleData);
// Type: ::RoleData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoleManager::RoleData
struct CORDL_TYPE __RoleManager__RoleData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoleManager__RoleData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }]
  constexpr __RoleManager__RoleData(::StringW key, ::UnityW<::UnityEngine::Sprite> icon) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field icon, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> icon;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoleManager__RoleData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoleManager__RoleData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoleManager__RoleData, icon) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoleManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoleManager*
class CORDL_TYPE RoleManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoleManager>> {
public:
  // Declarations
  using RoleData = ::GlobalNamespace::__RoleManager__RoleData;

  /// @brief Field roleDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roleDatas,
                      put = __cordl_internal_set_roleDatas))::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> roleDatas;

  static inline ::GlobalNamespace::RoleManager* New_ctor();

  /// @brief Method TryGetRoleDataFromCosmetics, addr 0x17593bc, size 0x188, virtual false, abstract: false, final false
  inline bool TryGetRoleDataFromCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmeticDatas, ByRef<::GlobalNamespace::__RoleManager__RoleData> roleData);

  constexpr ::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> const& __cordl_internal_get_roleDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*>& __cordl_internal_get_roleDatas();

  constexpr void __cordl_internal_set_roleDatas(::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> value);

  /// @brief Method .ctor, addr 0x1759544, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoleManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoleManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoleManager(RoleManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoleManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoleManager(RoleManager const&) = delete;

  /// @brief Field roleDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> ___roleDatas;

  /// @brief Field CONTENT_CREATOR_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CONTENT_CREATOR_ROLE_KEY{ u"contentCreator" };

  /// @brief Field DEBUG_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEBUG_ROLE_KEY{ u"debug" };

  /// @brief Field DEVELOPER_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEVELOPER_ROLE_KEY{ u"developer" };

  /// @brief Field MODERATOR_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MODERATOR_ROLE_KEY{ u"moderator" };

  /// @brief Field SUPER_STAR_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SUPER_STAR_ROLE_KEY{ u"superStar" };

  /// @brief Field TESTER_ROLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString TESTER_ROLE_KEY{ u"tester" };

  /// @brief Field roleBadgeCosmeticKeyPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString roleBadgeCosmeticKeyPrefix{ u"roleBadge_" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoleManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoleManager, ___roleDatas) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoleManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoleManager*, "", "RoleManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoleManager__RoleData, "", "RoleManager/RoleData");
