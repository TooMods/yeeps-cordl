#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImage)
namespace UnityEngine::UIElements {
struct GradientSettings;
}
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VectorImage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VectorImage);
// Type: UnityEngine.UIElements::VectorImage
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VectorImage*
class CORDL_TYPE VectorImage : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field atlas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_atlas, put = __cordl_internal_set_atlas))::UnityW<::UnityEngine::Texture2D> atlas;

  /// @brief Field indices, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices))::ArrayW<uint16_t, ::Array<uint16_t>*> indices;

  /// @brief Field settings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_settings,
                      put = __cordl_internal_set_settings))::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> settings;

  /// @brief Field size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size))::UnityEngine::Vector2 size;

  /// @brief Field vertices, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices,
                      put = __cordl_internal_set_vertices))::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> vertices;

  static inline ::UnityEngine::UIElements::VectorImage* New_ctor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_atlas() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_atlas();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_indices() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_indices();

  constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> const& __cordl_internal_get_settings() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*>& __cordl_internal_get_settings();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_size();

  constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> const& __cordl_internal_get_vertices() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*>& __cordl_internal_get_vertices();

  constexpr void __cordl_internal_set_atlas(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_indices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void __cordl_internal_set_settings(::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> value);

  /// @brief Method .ctor, addr 0x2a3ad68, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorImage(VectorImage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorImage(VectorImage const&) = delete;

  /// @brief Field atlas, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___atlas;

  /// @brief Field vertices, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> ___vertices;

  /// @brief Field indices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___indices;

  /// @brief Field settings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> ___settings;

  /// @brief Field size, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VectorImage, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImage, ___atlas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImage, ___vertices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImage, ___indices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImage, ___settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImage, ___size) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VectorImage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VectorImage*, "UnityEngine.UIElements", "VectorImage");
