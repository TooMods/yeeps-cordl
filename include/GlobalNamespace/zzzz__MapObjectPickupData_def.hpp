#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MapObjectPickupData)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectPickupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectPickupData);
// Type: ::MapObjectPickupData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectPickupData*
class CORDL_TYPE MapObjectPickupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field localPivotPosition, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_localPivotPosition, put = __cordl_internal_set_localPivotPosition))::UnityEngine::Vector3 localPivotPosition;

  /// @brief Field rotationOffset, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset))::UnityEngine::Quaternion rotationOffset;

  static inline ::GlobalNamespace::MapObjectPickupData* New_ctor(::UnityEngine::Vector3 localPivotPosition, ::UnityEngine::Quaternion rotationOffset);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPivotPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPivotPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationOffset();

  constexpr void __cordl_internal_set_localPivotPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x307abc0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 localPivotPosition, ::UnityEngine::Quaternion rotationOffset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectPickupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPickupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectPickupData(MapObjectPickupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPickupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectPickupData(MapObjectPickupData const&) = delete;

  /// @brief Field localPivotPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localPivotPosition;

  /// @brief Field rotationOffset, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotationOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectPickupData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPickupData, ___localPivotPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPickupData, ___rotationOffset) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectPickupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectPickupData*, "", "MapObjectPickupData");
