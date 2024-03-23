#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CosmeticData)
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticDataRaw;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticData);
// Type: ::CosmeticData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticData*
class CORDL_TYPE CosmeticData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <equipTestZone>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__equipTestZone_k__BackingField,
                      put = __cordl_internal_set__equipTestZone_k__BackingField))::GlobalNamespace::CosmeticZone _equipTestZone_k__BackingField;

  /// @brief Field <invisibleToSelf>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__invisibleToSelf_k__BackingField, put = __cordl_internal_set__invisibleToSelf_k__BackingField)) bool _invisibleToSelf_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <material>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material_k__BackingField, put = __cordl_internal_set__material_k__BackingField))::UnityW<::UnityEngine::Material> _material_k__BackingField;

  /// @brief Field <mesh>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh_k__BackingField, put = __cordl_internal_set__mesh_k__BackingField))::UnityW<::UnityEngine::Mesh> _mesh_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__zones_k__BackingField,
                      put = __cordl_internal_set__zones_k__BackingField))::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> _zones_k__BackingField;

  __declspec(property(get = get_equipTestZone, put = set_equipTestZone))::GlobalNamespace::CosmeticZone equipTestZone;

  __declspec(property(get = get_invisibleToSelf, put = set_invisibleToSelf)) bool invisibleToSelf;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_zones, put = set_zones))::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones;

  static inline ::GlobalNamespace::CosmeticData* New_ctor(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw cosmeticDataRaw, ::UnityEngine::Material* fallbackMaterial);

  static inline ::GlobalNamespace::CosmeticData* New_ctor(::StringW key, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material,
                                                          ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones, bool invisibleToSelf);

  constexpr ::GlobalNamespace::CosmeticZone const& __cordl_internal_get__equipTestZone_k__BackingField() const;

  constexpr ::GlobalNamespace::CosmeticZone& __cordl_internal_get__equipTestZone_k__BackingField();

  constexpr bool const& __cordl_internal_get__invisibleToSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__invisibleToSelf_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get__zones_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>& __cordl_internal_get__zones_k__BackingField();

  constexpr void __cordl_internal_set__equipTestZone_k__BackingField(::GlobalNamespace::CosmeticZone value);

  constexpr void __cordl_internal_set__invisibleToSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mesh_k__BackingField(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__zones_k__BackingField(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> value);

  /// @brief Method .ctor, addr 0x2761880, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw cosmeticDataRaw, ::UnityEngine::Material* fallbackMaterial);

  /// @brief Method .ctor, addr 0x27617ac, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material, ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones,
                    bool invisibleToSelf);

  /// @brief Method get_equipTestZone, addr 0x276185c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CosmeticZone get_equipTestZone();

  /// @brief Method get_invisibleToSelf, addr 0x276186c, size 0x8, virtual false, abstract: false, final false
  inline bool get_invisibleToSelf();

  /// @brief Method get_key, addr 0x276181c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_material, addr 0x276183c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_mesh, addr 0x276182c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_zones, addr 0x276184c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> get_zones();

  /// @brief Method set_equipTestZone, addr 0x2761864, size 0x8, virtual false, abstract: false, final false
  inline void set_equipTestZone(::GlobalNamespace::CosmeticZone value);

  /// @brief Method set_invisibleToSelf, addr 0x2761874, size 0xc, virtual false, abstract: false, final false
  inline void set_invisibleToSelf(bool value);

  /// @brief Method set_key, addr 0x2761824, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_material, addr 0x2761844, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_mesh, addr 0x2761834, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_zones, addr 0x2761854, size 0x8, virtual false, abstract: false, final false
  inline void set_zones(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticData(CosmeticData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticData(CosmeticData const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <mesh>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh_k__BackingField;

  /// @brief Field <material>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> ____zones_k__BackingField;

  /// @brief Field <equipTestZone>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::CosmeticZone ____equipTestZone_k__BackingField;

  /// @brief Field <invisibleToSelf>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____invisibleToSelf_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____mesh_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____material_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____zones_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____equipTestZone_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticData, ____invisibleToSelf_k__BackingField) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticData*, "", "CosmeticData");
