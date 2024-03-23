#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Light2DCullResult)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::Rendering::Universal {
class ILight2DCullResult;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
struct LightStats;
}
namespace UnityEngine::Rendering::Universal {
class __Light2DCullResult____c;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Light2DCullResult;
}
namespace UnityEngine::Rendering::Universal {
class __Light2DCullResult____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Light2DCullResult);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__Light2DCullResult____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::Light2DCullResult::<>c*
class CORDL_TYPE __Light2DCullResult____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__Light2DCullResult____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* __9__5_0;

  static inline ::UnityEngine::Rendering::Universal::__Light2DCullResult____c* New_ctor();

  /// @brief Method <SetupCulling>b__5_0, addr 0x2f35da8, size 0x24, virtual false, abstract: false, final false
  inline int32_t _SetupCulling_b__5_0(::UnityEngine::Rendering::Universal::Light2D* l1, ::UnityEngine::Rendering::Universal::Light2D* l2);

  /// @brief Method .ctor, addr 0x2f35da0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__Light2DCullResult____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__Light2DCullResult____c* value);

  static inline void setStaticF___9__5_0(::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2DCullResult____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Light2DCullResult____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Light2DCullResult____c(__Light2DCullResult____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Light2DCullResult____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Light2DCullResult____c(__Light2DCullResult____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2DCullResult____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Light2DCullResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Light2DCullResult*
class CORDL_TYPE Light2DCullResult : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::__Light2DCullResult____c;

  /// @brief Field m_VisibleLights, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLights,
                      put = __cordl_internal_set_m_VisibleLights))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* m_VisibleLights;

  __declspec(property(get = get_visibleLights))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* visibleLights;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::ILight2DCullResult"
  constexpr operator ::UnityEngine::Rendering::Universal::ILight2DCullResult*() noexcept;

  /// @brief Method GetLightStatsByLayer, addr 0x2f355f4, size 0x1c8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::LightStats GetLightStatsByLayer(int32_t layer);

  /// @brief Method IsSceneLit, addr 0x2f3554c, size 0xa8, virtual true, abstract: false, final true
  inline bool IsSceneLit();

  static inline ::UnityEngine::Rendering::Universal::Light2DCullResult* New_ctor();

  /// @brief Method SetupCulling, addr 0x2f357bc, size 0x504, virtual false, abstract: false, final false
  inline void SetupCulling(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::UnityEngine::Camera* camera);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*& __cordl_internal_get_m_VisibleLights();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*> const& __cordl_internal_get_m_VisibleLights() const;

  constexpr void __cordl_internal_set_m_VisibleLights(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value);

  /// @brief Method .ctor, addr 0x2f35cc0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_visibleLights, addr 0x2f35544, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* get_visibleLights();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::ILight2DCullResult"
  constexpr ::UnityEngine::Rendering::Universal::ILight2DCullResult* i___UnityEngine__Rendering__Universal__ILight2DCullResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2DCullResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light2DCullResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light2DCullResult(Light2DCullResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light2DCullResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light2DCullResult(Light2DCullResult const&) = delete;

  /// @brief Field m_VisibleLights, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* ___m_VisibleLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Light2DCullResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DCullResult, ___m_VisibleLights) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Light2DCullResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DCullResult*, "UnityEngine.Rendering.Universal", "Light2DCullResult");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__Light2DCullResult____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2DCullResult____c*, "UnityEngine.Rendering.Universal", "Light2DCullResult/<>c");
