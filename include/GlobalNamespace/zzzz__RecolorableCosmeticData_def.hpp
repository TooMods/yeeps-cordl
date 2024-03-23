#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RecolorableCosmeticData)
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticDataRaw;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class RecolorableCosmeticData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecolorableCosmeticData);
// Type: ::RecolorableCosmeticData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecolorableCosmeticData*
class CORDL_TYPE RecolorableCosmeticData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <baseKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__baseKey_k__BackingField, put = __cordl_internal_set__baseKey_k__BackingField))::StringW _baseKey_k__BackingField;

  /// @brief Field <baseMesh>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseMesh_k__BackingField, put = __cordl_internal_set__baseMesh_k__BackingField))::UnityW<::UnityEngine::Mesh> _baseMesh_k__BackingField;

  /// @brief Field <equipTestZone>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__equipTestZone_k__BackingField,
                      put = __cordl_internal_set__equipTestZone_k__BackingField))::GlobalNamespace::CosmeticZone _equipTestZone_k__BackingField;

  /// @brief Field <invisibleToSelf>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__invisibleToSelf_k__BackingField, put = __cordl_internal_set__invisibleToSelf_k__BackingField)) bool _invisibleToSelf_k__BackingField;

  /// @brief Field <material>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material_k__BackingField, put = __cordl_internal_set__material_k__BackingField))::UnityW<::UnityEngine::Material> _material_k__BackingField;

  /// @brief Field <recolorFilterColorKey>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__recolorFilterColorKey_k__BackingField,
                      put = __cordl_internal_set__recolorFilterColorKey_k__BackingField))::StringW _recolorFilterColorKey_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__zones_k__BackingField,
                      put = __cordl_internal_set__zones_k__BackingField))::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> _zones_k__BackingField;

  __declspec(property(get = get_baseKey, put = set_baseKey))::StringW baseKey;

  __declspec(property(get = get_baseMesh, put = set_baseMesh))::UnityW<::UnityEngine::Mesh> baseMesh;

  /// @brief Field coloredCosmeticDatas, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_coloredCosmeticDatas,
                      put = __cordl_internal_set_coloredCosmeticDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* coloredCosmeticDatas;

  __declspec(property(get = get_equipTestZone, put = set_equipTestZone))::GlobalNamespace::CosmeticZone equipTestZone;

  __declspec(property(get = get_invisibleToSelf, put = set_invisibleToSelf)) bool invisibleToSelf;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_recolorFilterColorKey, put = set_recolorFilterColorKey))::StringW recolorFilterColorKey;

  __declspec(property(get = get_zones, put = set_zones))::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones;

  /// @brief Method GetCosmeticData, addr 0x27611fc, size 0x154, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CosmeticData* GetCosmeticData(::StringW colorKey);

  static inline ::GlobalNamespace::RecolorableCosmeticData* New_ctor(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw cosmeticDataRaw, ::UnityEngine::Material* fallbackMaterial);

  constexpr ::StringW const& __cordl_internal_get__baseKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__baseKey_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__baseMesh_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__baseMesh_k__BackingField();

  constexpr ::GlobalNamespace::CosmeticZone const& __cordl_internal_get__equipTestZone_k__BackingField() const;

  constexpr ::GlobalNamespace::CosmeticZone& __cordl_internal_get__equipTestZone_k__BackingField();

  constexpr bool const& __cordl_internal_get__invisibleToSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__invisibleToSelf_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__recolorFilterColorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__recolorFilterColorKey_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get__zones_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>& __cordl_internal_get__zones_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*& __cordl_internal_get_coloredCosmeticDatas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*> const& __cordl_internal_get_coloredCosmeticDatas() const;

  constexpr void __cordl_internal_set__baseKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__baseMesh_k__BackingField(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__equipTestZone_k__BackingField(::GlobalNamespace::CosmeticZone value);

  constexpr void __cordl_internal_set__invisibleToSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__recolorFilterColorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__zones_k__BackingField(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> value);

  constexpr void __cordl_internal_set_coloredCosmeticDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* value);

  /// @brief Method .ctor, addr 0x27610d0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw cosmeticDataRaw, ::UnityEngine::Material* fallbackMaterial);

  /// @brief Method get_baseKey, addr 0x276105c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_baseKey();

  /// @brief Method get_baseMesh, addr 0x276106c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_baseMesh();

  /// @brief Method get_equipTestZone, addr 0x276109c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CosmeticZone get_equipTestZone();

  /// @brief Method get_invisibleToSelf, addr 0x27610ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_invisibleToSelf();

  /// @brief Method get_material, addr 0x276107c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_recolorFilterColorKey, addr 0x27610c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_recolorFilterColorKey();

  /// @brief Method get_zones, addr 0x276108c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> get_zones();

  /// @brief Method set_baseKey, addr 0x2761064, size 0x8, virtual false, abstract: false, final false
  inline void set_baseKey(::StringW value);

  /// @brief Method set_baseMesh, addr 0x2761074, size 0x8, virtual false, abstract: false, final false
  inline void set_baseMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_equipTestZone, addr 0x27610a4, size 0x8, virtual false, abstract: false, final false
  inline void set_equipTestZone(::GlobalNamespace::CosmeticZone value);

  /// @brief Method set_invisibleToSelf, addr 0x27610b4, size 0xc, virtual false, abstract: false, final false
  inline void set_invisibleToSelf(bool value);

  /// @brief Method set_material, addr 0x2761084, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_recolorFilterColorKey, addr 0x27610c8, size 0x8, virtual false, abstract: false, final false
  inline void set_recolorFilterColorKey(::StringW value);

  /// @brief Method set_zones, addr 0x2761094, size 0x8, virtual false, abstract: false, final false
  inline void set_zones(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecolorableCosmeticData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecolorableCosmeticData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecolorableCosmeticData(RecolorableCosmeticData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecolorableCosmeticData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecolorableCosmeticData(RecolorableCosmeticData const&) = delete;

  /// @brief Field <baseKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____baseKey_k__BackingField;

  /// @brief Field <baseMesh>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____baseMesh_k__BackingField;

  /// @brief Field <material>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material_k__BackingField;

  /// @brief Field <zones>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> ____zones_k__BackingField;

  /// @brief Field <equipTestZone>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::CosmeticZone ____equipTestZone_k__BackingField;

  /// @brief Field <invisibleToSelf>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____invisibleToSelf_k__BackingField;

  /// @brief Field <recolorFilterColorKey>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____recolorFilterColorKey_k__BackingField;

  /// @brief Field coloredCosmeticDatas, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* ___coloredCosmeticDatas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecolorableCosmeticData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____baseKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____baseMesh_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____material_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____zones_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____equipTestZone_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____invisibleToSelf_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ____recolorFilterColorKey_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecolorableCosmeticData, ___coloredCosmeticDatas) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecolorableCosmeticData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecolorableCosmeticData*, "", "RecolorableCosmeticData");
