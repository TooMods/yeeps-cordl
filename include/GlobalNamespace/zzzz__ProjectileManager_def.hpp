#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProjectileManager)
namespace GlobalNamespace {
class Projectile;
}
namespace GlobalNamespace {
struct __ProjectileManager__ProjectileData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ProjectileManager;
}
namespace GlobalNamespace {
struct __ProjectileManager__ProjectileData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProjectileManager);
MARK_VAL_T(::GlobalNamespace::__ProjectileManager__ProjectileData);
// Type: ::ProjectileData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ProjectileManager::ProjectileData
struct CORDL_TYPE __ProjectileManager__ProjectileData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProjectileManager__ProjectileData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __ProjectileManager__ProjectileData(::StringW key, ::UnityW<::UnityEngine::GameObject> prefab) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field prefab, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ProjectileManager__ProjectileData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProjectileManager__ProjectileData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProjectileManager__ProjectileData, prefab) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ProjectileManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProjectileManager*
class CORDL_TYPE ProjectileManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ProjectileManager>> {
public:
  // Declarations
  using ProjectileData = ::GlobalNamespace::__ProjectileManager__ProjectileData;

  /// @brief Field activeProjectiles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_activeProjectiles,
                      put = __cordl_internal_set_activeProjectiles))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>* activeProjectiles;

  /// @brief Field projectileDatas, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_projectileDatas,
      put = __cordl_internal_set_projectileDatas))::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> projectileDatas;

  /// @brief Field projectileDatasDictionary, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_projectileDatasDictionary,
               put = setStaticF_projectileDatasDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>* projectileDatasDictionary;

  /// @brief Method BuildProjectileDatasDictionary, addr 0x1756f9c, size 0x128, virtual false, abstract: false, final false
  static inline void BuildProjectileDatasDictionary();

  /// @brief Method DeregisterActiveProjectile, addr 0x1756f04, size 0x58, virtual false, abstract: false, final false
  inline void DeregisterActiveProjectile(::StringW projectileID);

  /// @brief Method GenerateProjectileID, addr 0x175745c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GenerateProjectileID();

  static inline ::GlobalNamespace::ProjectileManager* New_ctor();

  /// @brief Method OnReceiveCreateProjectile, addr 0x1757488, size 0x214, virtual false, abstract: false, final false
  inline void OnReceiveCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed, ::StringW colorKey, ::StringW projectileID,
                                        bool isMaster);

  /// @brief Method OnReceiveDestroyProjectile, addr 0x175770c, size 0xa4, virtual false, abstract: false, final false
  inline void OnReceiveDestroyProjectile(::StringW projectileID, ::UnityEngine::Vector3 position);

  /// @brief Method RegisterActiveProjectile, addr 0x175769c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW RegisterActiveProjectile(::StringW projectileID, ::GlobalNamespace::Projectile* projectile);

  /// @brief Method SendCreateProjectile, addr 0x17572b0, size 0x1ac, virtual false, abstract: false, final false
  inline void SendCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed, ::StringW colorKey);

  /// @brief Method SendCreateProjectile, addr 0x17571bc, size 0xf4, virtual false, abstract: false, final false
  inline void SendCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, ::StringW colorKey);

  /// @brief Method TryGetProjectileData, addr 0x17570c4, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryGetProjectileData(::StringW projectileKey, ByRef<::GlobalNamespace::__ProjectileManager__ProjectileData> projectileData);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>*& __cordl_internal_get_activeProjectiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>*> const&
  __cordl_internal_get_activeProjectiles() const;

  constexpr ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> const& __cordl_internal_get_projectileDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*>& __cordl_internal_get_projectileDatas();

  constexpr void __cordl_internal_set_activeProjectiles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>* value);

  constexpr void __cordl_internal_set_projectileDatas(::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> value);

  /// @brief Method .ctor, addr 0x17577b0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>* getStaticF_projectileDatasDictionary();

  static inline void setStaticF_projectileDatasDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectileManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectileManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectileManager(ProjectileManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectileManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectileManager(ProjectileManager const&) = delete;

  /// @brief Field projectileDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> ___projectileDatas;

  /// @brief Field activeProjectiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>* ___activeProjectiles;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Projectiles: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProjectileManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileManager, ___projectileDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileManager, ___activeProjectiles) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProjectileManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProjectileManager*, "", "ProjectileManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ProjectileManager__ProjectileData, "", "ProjectileManager/ProjectileData");
