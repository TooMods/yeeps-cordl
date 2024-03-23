#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RecentPlayersManager)
namespace GlobalNamespace {
struct __RecentPlayersManager__RecentPlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecentPlayersManager;
}
namespace GlobalNamespace {
struct __RecentPlayersManager__RecentPlayerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecentPlayersManager);
MARK_VAL_T(::GlobalNamespace::__RecentPlayersManager__RecentPlayerData);
// Type: ::RecentPlayerData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RecentPlayersManager::RecentPlayerData
struct CORDL_TYPE __RecentPlayersManager__RecentPlayerData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecentPlayersManager__RecentPlayerData();

  // Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __RecentPlayersManager__RecentPlayerData(::StringW displayName, ::StringW accountID) noexcept;

  /// @brief Field displayName, offset: 0x0, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field accountID, offset: 0x8, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecentPlayersManager__RecentPlayerData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecentPlayersManager__RecentPlayerData, displayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecentPlayersManager__RecentPlayerData, accountID) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecentPlayersManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecentPlayersManager*
class CORDL_TYPE RecentPlayersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RecentPlayerData = ::GlobalNamespace::__RecentPlayersManager__RecentPlayerData;

  static inline ::GlobalNamespace::RecentPlayersManager* New_ctor();

  /// @brief Method .ctor, addr 0x2c82064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecentPlayersManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecentPlayersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecentPlayersManager(RecentPlayersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecentPlayersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecentPlayersManager(RecentPlayersManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecentPlayersManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecentPlayersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecentPlayersManager*, "", "RecentPlayersManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecentPlayersManager__RecentPlayerData, "", "RecentPlayersManager/RecentPlayerData");
