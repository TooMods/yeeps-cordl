#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowSplitData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct __ShadowSplitData___m_CullingPlanes_e__FixedBuffer;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct __ShadowSplitData___m_CullingPlanes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowSplitData);
MARK_VAL_T(::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer);
// Type: ::<m_CullingPlanes>e__FixedBuffer
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::ShadowSplitData::<m_CullingPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ShadowSplitData___m_CullingPlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShadowSplitData___m_CullingPlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ShadowSplitData___m_CullingPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xa0 - 0x1 = 0x9f, packed as 0x9f
  uint8_t _cordl_size_padding[0x9f];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::ShadowSplitData
// SizeInfo { instance_size: 188, native_size: 188, calculated_instance_size: 188, calculated_native_size: 204, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShadowSplitData
struct CORDL_TYPE ShadowSplitData {
public:
  // Declarations
  using _m_CullingPlanes_e__FixedBuffer = ::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer;

  __declspec(property(get = get_cullingPlaneCount)) int32_t cullingPlaneCount;

  __declspec(property(get = get_cullingSphere))::UnityEngine::Vector4 cullingSphere;

  /// @brief Field maximumCullingPlaneCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maximumCullingPlaneCount, put = setStaticF_maximumCullingPlaneCount)) int32_t maximumCullingPlaneCount;

  __declspec(property(put = set_shadowCascadeBlendCullingFactor)) float_t shadowCascadeBlendCullingFactor;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*();

  /// @brief Method Equals, addr 0x2a95ac8, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a938d0, size 0x13c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ShadowSplitData other);

  /// @brief Method GetCullingPlane, addr 0x2a959b8, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Plane GetCullingPlane(int32_t index);

  /// @brief Method GetHashCode, addr 0x2a93b4c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline int32_t getStaticF_maximumCullingPlaneCount();

  /// @brief Method get_cullingPlaneCount, addr 0x2a959a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPlaneCount();

  /// @brief Method get_cullingSphere, addr 0x2a959ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_cullingSphere();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>* i___System__IEquatable_1___UnityEngine__Rendering__ShadowSplitData_();

  static inline void setStaticF_maximumCullingPlaneCount(int32_t value);

  /// @brief Method set_shadowCascadeBlendCullingFactor, addr 0x2a93614, size 0xfc, virtual false, abstract: false, final false
  inline void set_shadowCascadeBlendCullingFactor(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowSplitData();

  // Ctor Parameters [CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CullingPlanes", ty:
  // "::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CullingSphere", ty: "::UnityEngine::Vector4", modifiers: "",
  // def_value: None }, CppParam { name: "m_ShadowCascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CullingNearPlane", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr ShadowSplitData(int32_t m_CullingPlaneCount, ::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer m_CullingPlanes, ::UnityEngine::Vector4 m_CullingSphere,
                            float_t m_ShadowCascadeBlendCullingFactor, float_t m_CullingNearPlane) noexcept;

  /// @brief Field m_CullingPlaneCount, offset: 0x0, size: 0x4, def value: None
  int32_t m_CullingPlaneCount;

  /// @brief Field m_CullingPlanes, offset: 0x4, size: 0xa0, def value: None
  ::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer m_CullingPlanes;

  /// @brief Field m_CullingSphere, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Vector4 m_CullingSphere;

  /// @brief Field m_ShadowCascadeBlendCullingFactor, offset: 0xb4, size: 0x4, def value: None
  float_t m_ShadowCascadeBlendCullingFactor;

  /// @brief Field m_CullingNearPlane, offset: 0xb8, size: 0x4, def value: None
  float_t m_CullingNearPlane;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xbc };

  /// @brief Field k_MaximumCullingPlaneCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaximumCullingPlaneCount{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShadowSplitData, 0xbc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingPlaneCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingPlanes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingSphere) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_ShadowCascadeBlendCullingFactor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingNearPlane) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowSplitData, "UnityEngine.Rendering", "ShadowSplitData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__ShadowSplitData___m_CullingPlanes_e__FixedBuffer, "UnityEngine.Rendering", "ShadowSplitData/<m_CullingPlanes>e__FixedBuffer");
