#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SlopeColliderBatchingMapObject)
// Forward declare root types
namespace GlobalNamespace {
class SlopeColliderBatchingMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SlopeColliderBatchingMapObject);
// Type: ::SlopeColliderBatchingMapObject
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SlopeColliderBatchingMapObject*
class CORDL_TYPE SlopeColliderBatchingMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field colliderBatchKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderBatchKey, put = __cordl_internal_set_colliderBatchKey))::StringW colliderBatchKey;

  /// @brief Field supportsVerticalColliderBatching, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_supportsVerticalColliderBatching, put = __cordl_internal_set_supportsVerticalColliderBatching)) bool supportsVerticalColliderBatching;

  /// @brief Field verticalColliderBatchKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_verticalColliderBatchKey, put = __cordl_internal_set_verticalColliderBatchKey))::StringW verticalColliderBatchKey;

  /// @brief Method GetColliderBatchKey, addr 0x3081cdc, size 0x208, virtual true, abstract: false, final false
  inline ::StringW GetColliderBatchKey();

  static inline ::GlobalNamespace::SlopeColliderBatchingMapObject* New_ctor();

  /// @brief Method OnColliderBatchIsBakedUpdated, addr 0x3081ee4, size 0x4, virtual true, abstract: false, final false
  inline void OnColliderBatchIsBakedUpdated(bool newIsBaked);

  constexpr ::StringW const& __cordl_internal_get_colliderBatchKey() const;

  constexpr ::StringW& __cordl_internal_get_colliderBatchKey();

  constexpr bool const& __cordl_internal_get_supportsVerticalColliderBatching() const;

  constexpr bool& __cordl_internal_get_supportsVerticalColliderBatching();

  constexpr ::StringW const& __cordl_internal_get_verticalColliderBatchKey() const;

  constexpr ::StringW& __cordl_internal_get_verticalColliderBatchKey();

  constexpr void __cordl_internal_set_colliderBatchKey(::StringW value);

  constexpr void __cordl_internal_set_supportsVerticalColliderBatching(bool value);

  constexpr void __cordl_internal_set_verticalColliderBatchKey(::StringW value);

  /// @brief Method .ctor, addr 0x3081ee8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SlopeColliderBatchingMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SlopeColliderBatchingMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SlopeColliderBatchingMapObject(SlopeColliderBatchingMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SlopeColliderBatchingMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SlopeColliderBatchingMapObject(SlopeColliderBatchingMapObject const&) = delete;

  /// @brief Field colliderBatchKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___colliderBatchKey;

  /// @brief Field supportsVerticalColliderBatching, offset: 0xe0, size: 0x1, def value: None
  bool ___supportsVerticalColliderBatching;

  /// @brief Field verticalColliderBatchKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___verticalColliderBatchKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SlopeColliderBatchingMapObject, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SlopeColliderBatchingMapObject, ___colliderBatchKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlopeColliderBatchingMapObject, ___supportsVerticalColliderBatching) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlopeColliderBatchingMapObject, ___verticalColliderBatchKey) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SlopeColliderBatchingMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SlopeColliderBatchingMapObject*, "", "SlopeColliderBatchingMapObject");
