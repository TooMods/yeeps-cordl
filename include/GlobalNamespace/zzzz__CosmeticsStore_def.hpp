#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticsStore)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsStore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsStore);
// Type: ::CosmeticsStore
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStore*
class CORDL_TYPE CosmeticsStore : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field autoInitialize, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_autoInitialize, put = __cordl_internal_set_autoInitialize)) bool autoInitialize;

  /// @brief Field storeContents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_storeContents, put = __cordl_internal_set_storeContents))::UnityW<::UnityEngine::GameObject> storeContents;

  /// @brief Field storeContentsPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_storeContentsPrefab, put = __cordl_internal_set_storeContentsPrefab))::UnityW<::UnityEngine::GameObject> storeContentsPrefab;

  /// @brief Method Initialize, addr 0x1546a44, size 0x14c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::CosmeticsStore* New_ctor();

  /// @brief Method Start, addr 0x1546a34, size 0x10, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_autoInitialize() const;

  constexpr bool& __cordl_internal_get_autoInitialize();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeContents() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeContents();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeContentsPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeContentsPrefab();

  constexpr void __cordl_internal_set_autoInitialize(bool value);

  constexpr void __cordl_internal_set_storeContents(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_storeContentsPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x1546b90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsStore(CosmeticsStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsStore(CosmeticsStore const&) = delete;

  /// @brief Field storeContentsPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___storeContentsPrefab;

  /// @brief Field storeContents, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___storeContents;

  /// @brief Field autoInitialize, offset: 0x28, size: 0x1, def value: None
  bool ___autoInitialize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsStore, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStore, ___storeContentsPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStore, ___storeContents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStore, ___autoInitialize) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsStore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsStore*, "", "CosmeticsStore");
