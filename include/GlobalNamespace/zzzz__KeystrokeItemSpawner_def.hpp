#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemSpawner_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KeystrokeItemSpawner)
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
// Forward declare root types
namespace GlobalNamespace {
class KeystrokeItemSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KeystrokeItemSpawner);
// Type: ::KeystrokeItemSpawner
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KeystrokeItemSpawner*
class CORDL_TYPE KeystrokeItemSpawner : public ::GlobalNamespace::ItemSpawner {
public:
  // Declarations
  /// @brief Field customParameters, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_customParameters, put = __cordl_internal_set_customParameters))::ArrayW<::StringW, ::Array<::StringW>*> customParameters;

  /// @brief Field itemKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_itemKeys, put = __cordl_internal_set_itemKeys))::ArrayW<::StringW, ::Array<::StringW>*> itemKeys;

  /// @brief Field randomizeBetweenCustomParameters, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_randomizeBetweenCustomParameters, put = __cordl_internal_set_randomizeBetweenCustomParameters)) bool randomizeBetweenCustomParameters;

  /// @brief Field randomizeRotation, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_randomizeRotation, put = __cordl_internal_set_randomizeRotation)) bool randomizeRotation;

  /// @brief Field spawnKey, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnKey, put = __cordl_internal_set_spawnKey))::UnityEngine::KeyCode spawnKey;

  /// @brief Field throwVelocity, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_throwVelocity, put = __cordl_internal_set_throwVelocity))::UnityEngine::Vector3 throwVelocity;

  /// @brief Field throwVelocityMax, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_throwVelocityMax, put = __cordl_internal_set_throwVelocityMax)) float_t throwVelocityMax;

  /// @brief Field throwVelocityMin, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_throwVelocityMin, put = __cordl_internal_set_throwVelocityMin)) float_t throwVelocityMin;

  /// @brief Field useCameraRotation, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_useCameraRotation, put = __cordl_internal_set_useCameraRotation)) bool useCameraRotation;

  /// @brief Method GetSpawnCustomParameters, addr 0x2ab195c, size 0x134, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* GetSpawnCustomParameters();

  static inline ::GlobalNamespace::KeystrokeItemSpawner* New_ctor();

  /// @brief Method OnItemSpawned, addr 0x2ab15d0, size 0x28c, virtual true, abstract: false, final false
  inline void OnItemSpawned(::GlobalNamespace::Item* item);

  /// @brief Method OnStart, addr 0x2ab1544, size 0x8c, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method TryGetSpawnTransformationData, addr 0x2ab185c, size 0x100, virtual true, abstract: false, final false
  inline bool TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_customParameters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_customParameters();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_itemKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_itemKeys();

  constexpr bool const& __cordl_internal_get_randomizeBetweenCustomParameters() const;

  constexpr bool& __cordl_internal_get_randomizeBetweenCustomParameters();

  constexpr bool const& __cordl_internal_get_randomizeRotation() const;

  constexpr bool& __cordl_internal_get_randomizeRotation();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_spawnKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_spawnKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_throwVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_throwVelocity();

  constexpr float_t const& __cordl_internal_get_throwVelocityMax() const;

  constexpr float_t& __cordl_internal_get_throwVelocityMax();

  constexpr float_t const& __cordl_internal_get_throwVelocityMin() const;

  constexpr float_t& __cordl_internal_get_throwVelocityMin();

  constexpr bool const& __cordl_internal_get_useCameraRotation() const;

  constexpr bool& __cordl_internal_get_useCameraRotation();

  constexpr void __cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_itemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_randomizeBetweenCustomParameters(bool value);

  constexpr void __cordl_internal_set_randomizeRotation(bool value);

  constexpr void __cordl_internal_set_spawnKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_throwVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_throwVelocityMax(float_t value);

  constexpr void __cordl_internal_set_throwVelocityMin(float_t value);

  constexpr void __cordl_internal_set_useCameraRotation(bool value);

  /// @brief Method .ctor, addr 0x2ab1a90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeystrokeItemSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeystrokeItemSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeystrokeItemSpawner(KeystrokeItemSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeystrokeItemSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeystrokeItemSpawner(KeystrokeItemSpawner const&) = delete;

  /// @brief Field itemKeys, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___itemKeys;

  /// @brief Field customParameters, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___customParameters;

  /// @brief Field randomizeBetweenCustomParameters, offset: 0x38, size: 0x1, def value: None
  bool ___randomizeBetweenCustomParameters;

  /// @brief Field useCameraRotation, offset: 0x39, size: 0x1, def value: None
  bool ___useCameraRotation;

  /// @brief Field throwVelocity, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___throwVelocity;

  /// @brief Field throwVelocityMin, offset: 0x48, size: 0x4, def value: None
  float_t ___throwVelocityMin;

  /// @brief Field throwVelocityMax, offset: 0x4c, size: 0x4, def value: None
  float_t ___throwVelocityMax;

  /// @brief Field randomizeRotation, offset: 0x50, size: 0x1, def value: None
  bool ___randomizeRotation;

  /// @brief Field spawnKey, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___spawnKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeystrokeItemSpawner, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___itemKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___customParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___randomizeBetweenCustomParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___useCameraRotation) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___throwVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___throwVelocityMin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___throwVelocityMax) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___randomizeRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeystrokeItemSpawner, ___spawnKey) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KeystrokeItemSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeystrokeItemSpawner*, "", "KeystrokeItemSpawner");
