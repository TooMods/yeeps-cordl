#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComplexMaterialCurrencyStashMapObject)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ComplexMaterialCurrencyStashMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject);
// Type: ::ComplexMaterialCurrencyStashMapObject
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 292, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ComplexMaterialCurrencyStashMapObject*
class CORDL_TYPE ComplexMaterialCurrencyStashMapObject : public ::GlobalNamespace::CurrencyStashMapObject {
public:
  // Declarations
  /// @brief Field baseMaterialIndices, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMaterialIndices, put = __cordl_internal_set_baseMaterialIndices))::ArrayW<int32_t, ::Array<int32_t>*> baseMaterialIndices;

  /// @brief Field buttonMaterialIndex, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonMaterialIndex, put = __cordl_internal_set_buttonMaterialIndex)) int32_t buttonMaterialIndex;

  /// @brief Field compartmentMaterialIndices, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_compartmentMaterialIndices, put = __cordl_internal_set_compartmentMaterialIndices))::ArrayW<int32_t, ::Array<int32_t>*> compartmentMaterialIndices;

  static inline ::GlobalNamespace::ComplexMaterialCurrencyStashMapObject* New_ctor();

  /// @brief Method SetSharedMaterials, addr 0x307720c, size 0x338, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_baseMaterialIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_baseMaterialIndices();

  constexpr int32_t const& __cordl_internal_get_buttonMaterialIndex() const;

  constexpr int32_t& __cordl_internal_get_buttonMaterialIndex();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_compartmentMaterialIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_compartmentMaterialIndices();

  constexpr void __cordl_internal_set_baseMaterialIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_buttonMaterialIndex(int32_t value);

  constexpr void __cordl_internal_set_compartmentMaterialIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3077544, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComplexMaterialCurrencyStashMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComplexMaterialCurrencyStashMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComplexMaterialCurrencyStashMapObject(ComplexMaterialCurrencyStashMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComplexMaterialCurrencyStashMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComplexMaterialCurrencyStashMapObject(ComplexMaterialCurrencyStashMapObject const&) = delete;

  /// @brief Field baseMaterialIndices, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___baseMaterialIndices;

  /// @brief Field compartmentMaterialIndices, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___compartmentMaterialIndices;

  /// @brief Field buttonMaterialIndex, offset: 0x120, size: 0x4, def value: None
  int32_t ___buttonMaterialIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject, ___baseMaterialIndices) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject, ___compartmentMaterialIndices) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject, ___buttonMaterialIndex) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*, "", "ComplexMaterialCurrencyStashMapObject");
