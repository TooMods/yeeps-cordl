#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectSoundData)
// Forward declare root types
namespace GlobalNamespace {
class ObjectSoundData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectSoundData);
// Type: ::ObjectSoundData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObjectSoundData*
class CORDL_TYPE ObjectSoundData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field customFootstepSoundKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customFootstepSoundKey, put = __cordl_internal_set_customFootstepSoundKey))::StringW customFootstepSoundKey;

  static inline ::GlobalNamespace::ObjectSoundData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_customFootstepSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_customFootstepSoundKey();

  constexpr void __cordl_internal_set_customFootstepSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x143cc0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectSoundData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectSoundData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectSoundData(ObjectSoundData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSoundData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectSoundData(ObjectSoundData const&) = delete;

  /// @brief Field customFootstepSoundKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___customFootstepSoundKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectSoundData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectSoundData, ___customFootstepSoundKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectSoundData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectSoundData*, "", "ObjectSoundData");
