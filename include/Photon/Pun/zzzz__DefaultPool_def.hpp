#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultPool)
namespace Photon::Pun {
class IPunPrefabPool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
class DefaultPool;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::DefaultPool);
// Type: Photon.Pun::DefaultPool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::DefaultPool*
class CORDL_TYPE DefaultPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field ResourceCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceCache,
                      put = __cordl_internal_set_ResourceCache))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* ResourceCache;

  /// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
  constexpr operator ::Photon::Pun::IPunPrefabPool*() noexcept;

  /// @brief Method Destroy, addr 0x2602eb0, size 0x58, virtual true, abstract: false, final true
  inline void Destroy(::UnityEngine::GameObject* gameObject);

  /// @brief Method Instantiate, addr 0x2602c58, size 0x258, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> Instantiate(::StringW prefabId, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  static inline ::Photon::Pun::DefaultPool* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_ResourceCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_ResourceCache() const;

  constexpr void __cordl_internal_set_ResourceCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method .ctor, addr 0x2602f08, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunPrefabPool"
  constexpr ::Photon::Pun::IPunPrefabPool* i___Photon__Pun__IPunPrefabPool() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultPool(DefaultPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultPool(DefaultPool const&) = delete;

  /// @brief Field ResourceCache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* ___ResourceCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::DefaultPool, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::DefaultPool, ___ResourceCache) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::DefaultPool);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::DefaultPool*, "Photon.Pun", "DefaultPool");
