#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaintBrushItem)
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
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PaintBrushItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PaintBrushItem);
// Type: ::PaintBrushItem
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PaintBrushItem*
class CORDL_TYPE PaintBrushItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field anchorChangeTime, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_anchorChangeTime, put = __cordl_internal_set_anchorChangeTime)) float_t anchorChangeTime;

  /// @brief Field boundingCenter, offset 0x128, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field paintColorKey, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_paintColorKey, put = __cordl_internal_set_paintColorKey))::StringW paintColorKey;

  /// @brief Field paintLayerMask, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_paintLayerMask, put = __cordl_internal_set_paintLayerMask))::UnityEngine::LayerMask paintLayerMask;

  /// @brief Field paintLocalOffset, offset 0x108, size 0xc
  __declspec(property(get = __cordl_internal_get_paintLocalOffset, put = __cordl_internal_set_paintLocalOffset))::UnityEngine::Vector3 paintLocalOffset;

  /// @brief Field paintRadius, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_paintRadius, put = __cordl_internal_set_paintRadius)) float_t paintRadius;

  /// @brief Field paintRenderer, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_paintRenderer, put = __cordl_internal_set_paintRenderer))::UnityW<::UnityEngine::MeshRenderer> paintRenderer;

  /// @brief Field soundKey, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_soundKey, put = __cordl_internal_set_soundKey))::StringW soundKey;

  /// @brief Field thrownPaintRadius, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownPaintRadius, put = __cordl_internal_set_thrownPaintRadius)) float_t thrownPaintRadius;

  /// @brief Method GetBounds, addr 0x2aaebfc, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2aaec18, size 0x28, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method MakeVisualOnly, addr 0x2aaee24, size 0x28, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::PaintBrushItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aaee4c, size 0x20, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnUpdate, addr 0x2aaee6c, size 0x290, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method TrySetPaintColor, addr 0x2aaec40, size 0x1e4, virtual false, abstract: false, final false
  inline bool TrySetPaintColor(::GlobalNamespace::__Item__CustomParameters* customParameters);

  constexpr float_t const& __cordl_internal_get_anchorChangeTime() const;

  constexpr float_t& __cordl_internal_get_anchorChangeTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::StringW const& __cordl_internal_get_paintColorKey() const;

  constexpr ::StringW& __cordl_internal_get_paintColorKey();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_paintLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_paintLayerMask();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_paintLocalOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_paintLocalOffset();

  constexpr float_t const& __cordl_internal_get_paintRadius() const;

  constexpr float_t& __cordl_internal_get_paintRadius();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_paintRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_paintRenderer();

  constexpr ::StringW const& __cordl_internal_get_soundKey() const;

  constexpr ::StringW& __cordl_internal_get_soundKey();

  constexpr float_t const& __cordl_internal_get_thrownPaintRadius() const;

  constexpr float_t& __cordl_internal_get_thrownPaintRadius();

  constexpr void __cordl_internal_set_anchorChangeTime(float_t value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_paintColorKey(::StringW value);

  constexpr void __cordl_internal_set_paintLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_paintLocalOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_paintRadius(float_t value);

  constexpr void __cordl_internal_set_paintRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_soundKey(::StringW value);

  constexpr void __cordl_internal_set_thrownPaintRadius(float_t value);

  /// @brief Method .ctor, addr 0x2aaf0fc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaintBrushItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaintBrushItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaintBrushItem(PaintBrushItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaintBrushItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaintBrushItem(PaintBrushItem const&) = delete;

  /// @brief Field paintColorKey, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___paintColorKey;

  /// @brief Field paintRenderer, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___paintRenderer;

  /// @brief Field paintRadius, offset: 0x100, size: 0x4, def value: None
  float_t ___paintRadius;

  /// @brief Field thrownPaintRadius, offset: 0x104, size: 0x4, def value: None
  float_t ___thrownPaintRadius;

  /// @brief Field paintLocalOffset, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___paintLocalOffset;

  /// @brief Field paintLayerMask, offset: 0x114, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___paintLayerMask;

  /// @brief Field anchorChangeTime, offset: 0x118, size: 0x4, def value: None
  float_t ___anchorChangeTime;

  /// @brief Field soundKey, offset: 0x120, size: 0x8, def value: None
  ::StringW ___soundKey;

  /// @brief Field boundingCenter, offset: 0x128, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x134, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field minTimeBeforePaint offset 0xffffffff size 0x4
  static constexpr float_t minTimeBeforePaint{ 0.35 };

  /// @brief Field paintColorMaterialIndex offset 0xffffffff size 0x4
  static constexpr int32_t paintColorMaterialIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field paintHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t paintHapticAmplitude{ 0.1 };

  /// @brief Field paintHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t paintHapticDuration{ 0.1 };

  /// @brief Field paintVelocityActivateThreshold offset 0xffffffff size 0x4
  static constexpr float_t paintVelocityActivateThreshold{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PaintBrushItem, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___paintColorKey) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___paintRenderer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___paintRadius) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___thrownPaintRadius) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___paintLocalOffset) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___paintLayerMask) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___anchorChangeTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___soundKey) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___boundingCenter) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintBrushItem, ___boundingRadius) == 0x134, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PaintBrushItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PaintBrushItem*, "", "PaintBrushItem");
