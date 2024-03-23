#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPunPrefabPool)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class IPunPrefabPool;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IPunPrefabPool);
// Type: Photon.Pun::IPunPrefabPool
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IPunPrefabPool*
class CORDL_TYPE IPunPrefabPool {
public:
  // Declarations
  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Destroy(::UnityEngine::GameObject* gameObject);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::GameObject> Instantiate(::StringW prefabId, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  // Ctor Parameters [CppParam { name: "", ty: "IPunPrefabPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPunPrefabPool(IPunPrefabPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPunPrefabPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPunPrefabPool(IPunPrefabPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IPunPrefabPool);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IPunPrefabPool*, "Photon.Pun", "IPunPrefabPool");
