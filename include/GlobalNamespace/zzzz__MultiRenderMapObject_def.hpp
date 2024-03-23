#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultiRenderMapObject)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiRenderMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiRenderMapObject);
// Type: ::MultiRenderMapObject
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiRenderMapObject*
class CORDL_TYPE MultiRenderMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field renderers, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_renderers,
                      put = __cordl_internal_set_renderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> renderers;

  /// @brief Method MakeVisualOnly, addr 0x3080c9c, size 0x64, virtual true, abstract: false, final false
  inline void MakeVisualOnly();

  static inline ::GlobalNamespace::MultiRenderMapObject* New_ctor();

  /// @brief Method SetRenderersActive, addr 0x3080d68, size 0x68, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3080d00, size 0x68, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get_renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get_renderers();

  constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  /// @brief Method .ctor, addr 0x3080dd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiRenderMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiRenderMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiRenderMapObject(MultiRenderMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiRenderMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiRenderMapObject(MultiRenderMapObject const&) = delete;

  /// @brief Field renderers, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ___renderers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiRenderMapObject, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiRenderMapObject, ___renderers) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiRenderMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiRenderMapObject*, "", "MultiRenderMapObject");
