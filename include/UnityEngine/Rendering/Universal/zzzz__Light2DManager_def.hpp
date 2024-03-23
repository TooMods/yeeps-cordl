#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Light2DManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct SortingLayer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Light2DManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Light2DManager);
// Type: UnityEngine.Rendering.Universal::Light2DManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Light2DManager*
class CORDL_TYPE Light2DManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <lights>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lights_k__BackingField,
                             put = setStaticF__lights_k__BackingField))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* _lights_k__BackingField;

  /// @brief Field s_SortingLayers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortingLayers, put = setStaticF_s_SortingLayers))::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> s_SortingLayers;

  /// @brief Method ContainsDuplicateGlobalLight, addr 0x2f35e24, size 0x200, virtual false, abstract: false, final false
  static inline bool ContainsDuplicateGlobalLight(int32_t sortingLayerIndex, int32_t blendStyleIndex);

  /// @brief Method DeregisterLight, addr 0x2f35008, size 0xb0, virtual false, abstract: false, final false
  static inline void DeregisterLight(::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method ErrorIfDuplicateGlobalLight, addr 0x2f32cc4, size 0x17c, virtual false, abstract: false, final false
  static inline void ErrorIfDuplicateGlobalLight(::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method GetCachedSortingLayer, addr 0x2f33120, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> GetCachedSortingLayer();

  /// @brief Method GetGlobalColor, addr 0x2f36024, size 0x210, virtual false, abstract: false, final false
  static inline bool GetGlobalColor(int32_t sortingLayerIndex, int32_t blendStyleIndex, ByRef<::UnityEngine::Color> color);

  /// @brief Method RegisterLight, addr 0x2f34eb4, size 0x100, virtual false, abstract: false, final false
  static inline void RegisterLight(::UnityEngine::Rendering::Universal::Light2D* light);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* getStaticF__lights_k__BackingField();

  static inline ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> getStaticF_s_SortingLayers();

  /// @brief Method get_lights, addr 0x2f35dcc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* get_lights();

  static inline void setStaticF__lights_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value);

  static inline void setStaticF_s_SortingLayers(::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2DManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light2DManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light2DManager(Light2DManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light2DManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light2DManager(Light2DManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Light2DManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Light2DManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DManager*, "UnityEngine.Rendering.Universal", "Light2DManager");
