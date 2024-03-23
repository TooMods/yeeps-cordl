#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MapObjectRotatorHelper)
namespace GlobalNamespace {
struct __MapObjectRotatorHelper__RotationData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectRotatorHelper;
}
namespace GlobalNamespace {
struct __MapObjectRotatorHelper__RotationData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectRotatorHelper);
MARK_VAL_T(::GlobalNamespace::__MapObjectRotatorHelper__RotationData);
// Type: ::RotationData
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObjectRotatorHelper::RotationData
struct CORDL_TYPE __MapObjectRotatorHelper__RotationData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObjectRotatorHelper__RotationData();

  // Ctor Parameters [CppParam { name: "mapObjectKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rotationEulers", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "apply", ty: "bool", modifiers: "", def_value: None }]
  constexpr __MapObjectRotatorHelper__RotationData(::StringW mapObjectKey, ::UnityEngine::Vector3 rotationEulers, bool apply) noexcept;

  /// @brief Field mapObjectKey, offset: 0x0, size: 0x8, def value: None
  ::StringW mapObjectKey;

  /// @brief Field rotationEulers, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 rotationEulers;

  /// @brief Field apply, offset: 0x14, size: 0x1, def value: None
  bool apply;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRotatorHelper__RotationData, mapObjectKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRotatorHelper__RotationData, rotationEulers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRotatorHelper__RotationData, apply) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectRotatorHelper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectRotatorHelper*
class CORDL_TYPE MapObjectRotatorHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationData = ::GlobalNamespace::__MapObjectRotatorHelper__RotationData;

  /// @brief Field nextValidRotateTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidRotateTime, put = __cordl_internal_set_nextValidRotateTime)) float_t nextValidRotateTime;

  /// @brief Field rotateKey, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotateKey, put = __cordl_internal_set_rotateKey))::UnityEngine::KeyCode rotateKey;

  /// @brief Field rotationDatas, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_rotationDatas,
      put = __cordl_internal_set_rotationDatas))::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> rotationDatas;

  static inline ::GlobalNamespace::MapObjectRotatorHelper* New_ctor();

  constexpr float_t const& __cordl_internal_get_nextValidRotateTime() const;

  constexpr float_t& __cordl_internal_get_nextValidRotateTime();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_rotateKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_rotateKey();

  constexpr ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> const& __cordl_internal_get_rotationDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*>& __cordl_internal_get_rotationDatas();

  constexpr void __cordl_internal_set_nextValidRotateTime(float_t value);

  constexpr void __cordl_internal_set_rotateKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_rotationDatas(::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> value);

  /// @brief Method .ctor, addr 0x3075d94, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectRotatorHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRotatorHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectRotatorHelper(MapObjectRotatorHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRotatorHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectRotatorHelper(MapObjectRotatorHelper const&) = delete;

  /// @brief Field rotateKey, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___rotateKey;

  /// @brief Field rotationDatas, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> ___rotationDatas;

  /// @brief Field nextValidRotateTime, offset: 0x28, size: 0x4, def value: None
  float_t ___nextValidRotateTime;

  /// @brief Field rotateCooldown offset 0xffffffff size 0x4
  static constexpr float_t rotateCooldown{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectRotatorHelper, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRotatorHelper, ___rotateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRotatorHelper, ___rotationDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRotatorHelper, ___nextValidRotateTime) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectRotatorHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectRotatorHelper*, "", "MapObjectRotatorHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObjectRotatorHelper__RotationData, "", "MapObjectRotatorHelper/RotationData");
