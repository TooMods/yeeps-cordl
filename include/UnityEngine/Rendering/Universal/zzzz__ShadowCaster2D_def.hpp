#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCaster2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCasterGroup2D_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowCaster2D)
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCasterGroup2D;
}
namespace UnityEngine::Rendering::Universal {
struct __ShadowCaster2D__ComponentVersions;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __ShadowCaster2D__ComponentVersions;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCaster2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowCaster2D);
// Type: ::ComponentVersions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ShadowCaster2D::ComponentVersions
struct CORDL_TYPE __ShadowCaster2D__ComponentVersions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ShadowCaster2D__ComponentVersions_Unwrapped
  enum struct ____ShadowCaster2D__ComponentVersions_Unwrapped : int32_t {
    __E_Version_Unserialized = static_cast<int32_t>(0x0),
    __E_Version_1 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ShadowCaster2D__ComponentVersions_Unwrapped() const noexcept {
    return static_cast<____ShadowCaster2D__ComponentVersions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShadowCaster2D__ComponentVersions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ShadowCaster2D__ComponentVersions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Version_1 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions const Version_1;

  /// @brief Field Version_Unserialized value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions const Version_Unserialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ShadowCaster2D
// SizeInfo { instance_size: 368, native_size: -1, calculated_instance_size: 368, calculated_native_size: 364, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowCaster2D*
class CORDL_TYPE ShadowCaster2D : public ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D {
public:
  // Declarations
  using ComponentVersions = ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions;

  __declspec(property(get = get_castsShadows, put = set_castsShadows)) bool castsShadows;

  /// @brief Field m_ApplyToSortingLayers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ApplyToSortingLayers, put = __cordl_internal_set_m_ApplyToSortingLayers))::ArrayW<int32_t, ::Array<int32_t>*> m_ApplyToSortingLayers;

  /// @brief Field m_CachedInverseShadowMatrix, offset 0xec, size 0x40
  __declspec(property(get = __cordl_internal_get_m_CachedInverseShadowMatrix, put = __cordl_internal_set_m_CachedInverseShadowMatrix))::UnityEngine::Matrix4x4 m_CachedInverseShadowMatrix;

  /// @brief Field m_CachedLocalToWorldMatrix, offset 0x12c, size 0x40
  __declspec(property(get = __cordl_internal_get_m_CachedLocalToWorldMatrix, put = __cordl_internal_set_m_CachedLocalToWorldMatrix))::UnityEngine::Matrix4x4 m_CachedLocalToWorldMatrix;

  /// @brief Field m_CachedLossyScale, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CachedLossyScale, put = __cordl_internal_set_m_CachedLossyScale))::UnityEngine::Vector3 m_CachedLossyScale;

  /// @brief Field m_CachedPosition, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CachedPosition, put = __cordl_internal_set_m_CachedPosition))::UnityEngine::Vector3 m_CachedPosition;

  /// @brief Field m_CachedRotation, offset 0x9c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CachedRotation, put = __cordl_internal_set_m_CachedRotation))::UnityEngine::Quaternion m_CachedRotation;

  /// @brief Field m_CachedShadowMatrix, offset 0xac, size 0x40
  __declspec(property(get = __cordl_internal_get_m_CachedShadowMatrix, put = __cordl_internal_set_m_CachedShadowMatrix))::UnityEngine::Matrix4x4 m_CachedShadowMatrix;

  /// @brief Field m_CastsShadows, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CastsShadows, put = __cordl_internal_set_m_CastsShadows)) bool m_CastsShadows;

  /// @brief Field m_ComponentVersion, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ComponentVersion,
                      put = __cordl_internal_set_m_ComponentVersion))::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions m_ComponentVersion;

  /// @brief Field m_HasRenderer, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasRenderer, put = __cordl_internal_set_m_HasRenderer)) bool m_HasRenderer;

  /// @brief Field m_InstanceId, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InstanceId, put = __cordl_internal_set_m_InstanceId)) int32_t m_InstanceId;

  /// @brief Field m_Mesh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh))::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_PreviousCastsShadows, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreviousCastsShadows, put = __cordl_internal_set_m_PreviousCastsShadows)) bool m_PreviousCastsShadows;

  /// @brief Field m_PreviousPathHash, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousPathHash, put = __cordl_internal_set_m_PreviousPathHash)) int32_t m_PreviousPathHash;

  /// @brief Field m_PreviousShadowCasterGroup, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousShadowCasterGroup,
                      put = __cordl_internal_set_m_PreviousShadowCasterGroup))::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> m_PreviousShadowCasterGroup;

  /// @brief Field m_PreviousShadowGroup, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShadowGroup, put = __cordl_internal_set_m_PreviousShadowGroup)) int32_t m_PreviousShadowGroup;

  /// @brief Field m_ProjectedBoundingSphere, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ProjectedBoundingSphere, put = __cordl_internal_set_m_ProjectedBoundingSphere))::UnityEngine::BoundingSphere m_ProjectedBoundingSphere;

  /// @brief Field m_SelfShadows, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelfShadows, put = __cordl_internal_set_m_SelfShadows)) bool m_SelfShadows;

  /// @brief Field m_ShadowCasterGroup, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowCasterGroup,
                      put = __cordl_internal_set_m_ShadowCasterGroup))::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> m_ShadowCasterGroup;

  /// @brief Field m_ShapePath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShapePath, put = __cordl_internal_set_m_ShapePath))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ShapePath;

  /// @brief Field m_ShapePathHash, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShapePathHash, put = __cordl_internal_set_m_ShapePathHash)) int32_t m_ShapePathHash;

  /// @brief Field m_UseRendererSilhouette, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseRendererSilhouette, put = __cordl_internal_set_m_UseRendererSilhouette)) bool m_UseRendererSilhouette;

  __declspec(property(get = get_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_selfShadows, put = set_selfShadows)) bool selfShadows;

  __declspec(property(get = get_shapePath))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath;

  __declspec(property(get = get_shapePathHash, put = set_shapePathHash)) int32_t shapePathHash;

  __declspec(property(get = get_useRendererSilhouette, put = set_useRendererSilhouette)) bool useRendererSilhouette;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x2f423f0, size 0x42c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheValues, addr 0x2f42060, size 0x1a8, virtual true, abstract: false, final false
  inline void CacheValues();

  /// @brief Method IsLit, addr 0x2f42328, size 0x68, virtual false, abstract: false, final false
  inline bool IsLit(::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method IsShadowedLayer, addr 0x2f42390, size 0x60, virtual false, abstract: false, final false
  inline bool IsShadowedLayer(int32_t layer);

  static inline ::UnityEngine::Rendering::Universal::ShadowCaster2D* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x2f42ad0, size 0x30, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2f42ac4, size 0xc, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDisable, addr 0x2f428fc, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2f4281c, size 0xe0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetDefaultSortingLayers, addr 0x2f4225c, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> SetDefaultSortingLayers();

  /// @brief Method Update, addr 0x2f42908, size 0x1bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_ApplyToSortingLayers() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_ApplyToSortingLayers();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_CachedInverseShadowMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_CachedInverseShadowMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_CachedLocalToWorldMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_CachedLocalToWorldMatrix();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CachedLossyScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CachedLossyScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CachedPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CachedPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CachedRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CachedRotation();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_CachedShadowMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_CachedShadowMatrix();

  constexpr bool const& __cordl_internal_get_m_CastsShadows() const;

  constexpr bool& __cordl_internal_get_m_CastsShadows();

  constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions const& __cordl_internal_get_m_ComponentVersion() const;

  constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions& __cordl_internal_get_m_ComponentVersion();

  constexpr bool const& __cordl_internal_get_m_HasRenderer() const;

  constexpr bool& __cordl_internal_get_m_HasRenderer();

  constexpr int32_t const& __cordl_internal_get_m_InstanceId() const;

  constexpr int32_t& __cordl_internal_get_m_InstanceId();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr bool const& __cordl_internal_get_m_PreviousCastsShadows() const;

  constexpr bool& __cordl_internal_get_m_PreviousCastsShadows();

  constexpr int32_t const& __cordl_internal_get_m_PreviousPathHash() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousPathHash();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> const& __cordl_internal_get_m_PreviousShadowCasterGroup() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>& __cordl_internal_get_m_PreviousShadowCasterGroup();

  constexpr int32_t const& __cordl_internal_get_m_PreviousShadowGroup() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousShadowGroup();

  constexpr ::UnityEngine::BoundingSphere const& __cordl_internal_get_m_ProjectedBoundingSphere() const;

  constexpr ::UnityEngine::BoundingSphere& __cordl_internal_get_m_ProjectedBoundingSphere();

  constexpr bool const& __cordl_internal_get_m_SelfShadows() const;

  constexpr bool& __cordl_internal_get_m_SelfShadows();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> const& __cordl_internal_get_m_ShadowCasterGroup() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>& __cordl_internal_get_m_ShadowCasterGroup();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ShapePath() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ShapePath();

  constexpr int32_t const& __cordl_internal_get_m_ShapePathHash() const;

  constexpr int32_t& __cordl_internal_get_m_ShapePathHash();

  constexpr bool const& __cordl_internal_get_m_UseRendererSilhouette() const;

  constexpr bool& __cordl_internal_get_m_UseRendererSilhouette();

  constexpr void __cordl_internal_set_m_ApplyToSortingLayers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_CachedInverseShadowMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_CachedLocalToWorldMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_CachedLossyScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CachedPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CachedRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_CachedShadowMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_CastsShadows(bool value);

  constexpr void __cordl_internal_set_m_ComponentVersion(::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions value);

  constexpr void __cordl_internal_set_m_HasRenderer(bool value);

  constexpr void __cordl_internal_set_m_InstanceId(int32_t value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_PreviousCastsShadows(bool value);

  constexpr void __cordl_internal_set_m_PreviousPathHash(int32_t value);

  constexpr void __cordl_internal_set_m_PreviousShadowCasterGroup(::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> value);

  constexpr void __cordl_internal_set_m_PreviousShadowGroup(int32_t value);

  constexpr void __cordl_internal_set_m_ProjectedBoundingSphere(::UnityEngine::BoundingSphere value);

  constexpr void __cordl_internal_set_m_SelfShadows(bool value);

  constexpr void __cordl_internal_set_m_ShadowCasterGroup(::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> value);

  constexpr void __cordl_internal_set_m_ShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_ShapePathHash(int32_t value);

  constexpr void __cordl_internal_set_m_UseRendererSilhouette(bool value);

  /// @brief Method .ctor, addr 0x2f42b00, size 0x1018, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_castsShadows, addr 0x2f42254, size 0x8, virtual false, abstract: false, final false
  inline bool get_castsShadows();

  /// @brief Method get_mesh, addr 0x2f42040, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_selfShadows, addr 0x2f42240, size 0x8, virtual false, abstract: false, final false
  inline bool get_selfShadows();

  /// @brief Method get_shapePath, addr 0x2f42048, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_shapePath();

  /// @brief Method get_shapePathHash, addr 0x2f42050, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_shapePathHash();

  /// @brief Method get_useRendererSilhouette, addr 0x2f42214, size 0x20, virtual false, abstract: false, final false
  inline bool get_useRendererSilhouette();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_castsShadows, addr 0x2f42248, size 0xc, virtual false, abstract: false, final false
  inline void set_castsShadows(bool value);

  /// @brief Method set_selfShadows, addr 0x2f42234, size 0xc, virtual false, abstract: false, final false
  inline void set_selfShadows(bool value);

  /// @brief Method set_shapePathHash, addr 0x2f42058, size 0x8, virtual false, abstract: false, final false
  inline void set_shapePathHash(int32_t value);

  /// @brief Method set_useRendererSilhouette, addr 0x2f42208, size 0xc, virtual false, abstract: false, final false
  inline void set_useRendererSilhouette(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowCaster2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowCaster2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowCaster2D(ShadowCaster2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowCaster2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowCaster2D(ShadowCaster2D const&) = delete;

  /// @brief Field m_ComponentVersion, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions ___m_ComponentVersion;

  /// @brief Field m_HasRenderer, offset: 0x2c, size: 0x1, def value: None
  bool ___m_HasRenderer;

  /// @brief Field m_UseRendererSilhouette, offset: 0x2d, size: 0x1, def value: None
  bool ___m_UseRendererSilhouette;

  /// @brief Field m_CastsShadows, offset: 0x2e, size: 0x1, def value: None
  bool ___m_CastsShadows;

  /// @brief Field m_SelfShadows, offset: 0x2f, size: 0x1, def value: None
  bool ___m_SelfShadows;

  /// @brief Field m_ApplyToSortingLayers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ApplyToSortingLayers;

  /// @brief Field m_ShapePath, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ShapePath;

  /// @brief Field m_ShapePathHash, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_ShapePathHash;

  /// @brief Field m_Mesh, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_InstanceId, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_InstanceId;

  /// @brief Field m_ShadowCasterGroup, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> ___m_ShadowCasterGroup;

  /// @brief Field m_PreviousShadowCasterGroup, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> ___m_PreviousShadowCasterGroup;

  /// @brief Field m_ProjectedBoundingSphere, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::BoundingSphere ___m_ProjectedBoundingSphere;

  /// @brief Field m_PreviousShadowGroup, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_PreviousShadowGroup;

  /// @brief Field m_PreviousCastsShadows, offset: 0x7c, size: 0x1, def value: None
  bool ___m_PreviousCastsShadows;

  /// @brief Field m_PreviousPathHash, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_PreviousPathHash;

  /// @brief Field m_CachedPosition, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CachedPosition;

  /// @brief Field m_CachedLossyScale, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CachedLossyScale;

  /// @brief Field m_CachedRotation, offset: 0x9c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_CachedRotation;

  /// @brief Field m_CachedShadowMatrix, offset: 0xac, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedShadowMatrix;

  /// @brief Field m_CachedInverseShadowMatrix, offset: 0xec, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedInverseShadowMatrix;

  /// @brief Field m_CachedLocalToWorldMatrix, offset: 0x12c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedLocalToWorldMatrix;

  /// @brief Field k_CurrentComponentVersion value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions const k_CurrentComponentVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowCaster2D, 0x170>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ComponentVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_HasRenderer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_UseRendererSilhouette) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CastsShadows) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_SelfShadows) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ApplyToSortingLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ShapePath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ShapePathHash) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_Mesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_InstanceId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ShadowCasterGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_PreviousShadowCasterGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_ProjectedBoundingSphere) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_PreviousShadowGroup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_PreviousCastsShadows) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_PreviousPathHash) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedLossyScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedRotation) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedShadowMatrix) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedInverseShadowMatrix) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowCaster2D, ___m_CachedLocalToWorldMatrix) == 0x12c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions, "UnityEngine.Rendering.Universal", "ShadowCaster2D/ComponentVersions");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowCaster2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowCaster2D*, "UnityEngine.Rendering.Universal", "ShadowCaster2D");
