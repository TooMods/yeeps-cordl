#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TriggerMapObject)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TriggerMapObject);
// Type: ::TriggerMapObject
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TriggerMapObject*
class CORDL_TYPE TriggerMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field triggerEnterSoundKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_triggerEnterSoundKey, put = __cordl_internal_set_triggerEnterSoundKey))::StringW triggerEnterSoundKey;

  static inline ::GlobalNamespace::TriggerMapObject* New_ctor();

  /// @brief Method OnMasterPlayerEntered, addr 0x308591c, size 0x88, virtual false, abstract: false, final false
  inline void OnMasterPlayerEntered(::UnityEngine::Vector3 playerPos);

  constexpr ::StringW const& __cordl_internal_get_triggerEnterSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_triggerEnterSoundKey();

  constexpr void __cordl_internal_set_triggerEnterSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x30859a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriggerMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerMapObject(TriggerMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerMapObject(TriggerMapObject const&) = delete;

  /// @brief Field triggerEnterSoundKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___triggerEnterSoundKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriggerMapObject, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerMapObject, ___triggerEnterSoundKey) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TriggerMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerMapObject*, "", "TriggerMapObject");
