#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleItemDispenser)
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleItemDispenser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleItemDispenser);
// Type: ::SimpleItemDispenser
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleItemDispenser*
class CORDL_TYPE SimpleItemDispenser : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field customParameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_customParameters, put = __cordl_internal_set_customParameters))::ArrayW<::StringW, ::Array<::StringW>*> customParameters;

  /// @brief Field itemKeys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_itemKeys, put = __cordl_internal_set_itemKeys))::ArrayW<::StringW, ::Array<::StringW>*> itemKeys;

  /// @brief Field randomizeBetweenCustomParameters, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_randomizeBetweenCustomParameters, put = __cordl_internal_set_randomizeBetweenCustomParameters)) bool randomizeBetweenCustomParameters;

  /// @brief Field spawnPoint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_spawnPoint, put = __cordl_internal_set_spawnPoint))::UnityW<::UnityEngine::Transform> spawnPoint;

  /// @brief Field spawnVelocity, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_spawnVelocity, put = __cordl_internal_set_spawnVelocity))::UnityEngine::Vector3 spawnVelocity;

  /// @brief Method GetSpawnCustomParameters, addr 0xf24e1c, size 0x12c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* GetSpawnCustomParameters();

  static inline ::GlobalNamespace::SimpleItemDispenser* New_ctor();

  /// @brief Method OnSpawnItemButtonPressed, addr 0xf24c2c, size 0x1f0, virtual false, abstract: false, final false
  inline void OnSpawnItemButtonPressed();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_customParameters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_customParameters();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_itemKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_itemKeys();

  constexpr bool const& __cordl_internal_get_randomizeBetweenCustomParameters() const;

  constexpr bool& __cordl_internal_get_randomizeBetweenCustomParameters();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnPoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnPoint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnVelocity();

  constexpr void __cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_itemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_randomizeBetweenCustomParameters(bool value);

  constexpr void __cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_spawnVelocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf24f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleItemDispenser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleItemDispenser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleItemDispenser(SimpleItemDispenser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleItemDispenser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleItemDispenser(SimpleItemDispenser const&) = delete;

  /// @brief Field spawnPoint, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___spawnPoint;

  /// @brief Field spawnVelocity, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spawnVelocity;

  /// @brief Field itemKeys, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___itemKeys;

  /// @brief Field customParameters, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___customParameters;

  /// @brief Field randomizeBetweenCustomParameters, offset: 0x40, size: 0x1, def value: None
  bool ___randomizeBetweenCustomParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleItemDispenser, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleItemDispenser, ___spawnPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleItemDispenser, ___spawnVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleItemDispenser, ___itemKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleItemDispenser, ___customParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleItemDispenser, ___randomizeBetweenCustomParameters) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleItemDispenser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleItemDispenser*, "", "SimpleItemDispenser");
