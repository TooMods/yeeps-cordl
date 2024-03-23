#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FlatColliderBatchingMapObject)
// Forward declare root types
namespace GlobalNamespace {
class FlatColliderBatchingMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlatColliderBatchingMapObject);
// Type: ::FlatColliderBatchingMapObject
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlatColliderBatchingMapObject*
class CORDL_TYPE FlatColliderBatchingMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field colliderBatchKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderBatchKey, put = __cordl_internal_set_colliderBatchKey))::StringW colliderBatchKey;

  /// @brief Method GetColliderBatchKey, addr 0x3079cc0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetColliderBatchKey();

  static inline ::GlobalNamespace::FlatColliderBatchingMapObject* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_colliderBatchKey() const;

  constexpr ::StringW& __cordl_internal_get_colliderBatchKey();

  constexpr void __cordl_internal_set_colliderBatchKey(::StringW value);

  /// @brief Method .ctor, addr 0x3079ce0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlatColliderBatchingMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlatColliderBatchingMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlatColliderBatchingMapObject(FlatColliderBatchingMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlatColliderBatchingMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlatColliderBatchingMapObject(FlatColliderBatchingMapObject const&) = delete;

  /// @brief Field colliderBatchKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___colliderBatchKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlatColliderBatchingMapObject, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatColliderBatchingMapObject, ___colliderBatchKey) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlatColliderBatchingMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlatColliderBatchingMapObject*, "", "FlatColliderBatchingMapObject");
