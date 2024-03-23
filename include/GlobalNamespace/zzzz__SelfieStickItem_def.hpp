#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SelfieStickItem)
namespace GlobalNamespace {
class OverrideCamera;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SelfieStickItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelfieStickItem);
// Type: ::SelfieStickItem
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelfieStickItem*
class CORDL_TYPE SelfieStickItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0xf8, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field overrideCamera, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideCamera, put = __cordl_internal_set_overrideCamera))::UnityW<::GlobalNamespace::OverrideCamera> overrideCamera;

  /// @brief Method GetBounds, addr 0x2aaf214, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2aaf120, size 0xec, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::SelfieStickItem* New_ctor();

  /// @brief Method ShouldShrinkWhenOverDespawnZone, addr 0x2aaf20c, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldShrinkWhenOverDespawnZone();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& __cordl_internal_get_overrideCamera() const;

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& __cordl_internal_get_overrideCamera();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_overrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value);

  /// @brief Method .ctor, addr 0x2aaf230, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelfieStickItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelfieStickItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelfieStickItem(SelfieStickItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelfieStickItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelfieStickItem(SelfieStickItem const&) = delete;

  /// @brief Field overrideCamera, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OverrideCamera> ___overrideCamera;

  /// @brief Field boundingCenter, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x104, size: 0x4, def value: None
  float_t ___boundingRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelfieStickItem, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfieStickItem, ___overrideCamera) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfieStickItem, ___boundingCenter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfieStickItem, ___boundingRadius) == 0x104, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelfieStickItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelfieStickItem*, "", "SelfieStickItem");
