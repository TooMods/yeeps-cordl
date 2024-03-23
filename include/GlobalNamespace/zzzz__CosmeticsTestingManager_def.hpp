#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsTestingManager)
namespace GlobalNamespace {
struct __CosmeticsTestingManager__AvatarTestData;
}
namespace GlobalNamespace {
struct __CosmeticsTestingManager__CosmeticTestData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsTestingManager;
}
namespace GlobalNamespace {
struct __CosmeticsTestingManager__AvatarTestData;
}
namespace GlobalNamespace {
struct __CosmeticsTestingManager__CosmeticTestData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsTestingManager);
MARK_VAL_T(::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData);
MARK_VAL_T(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData);
// Type: ::CosmeticTestData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CosmeticsTestingManager::CosmeticTestData
struct CORDL_TYPE __CosmeticsTestingManager__CosmeticTestData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsTestingManager__CosmeticTestData();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "isZipper", ty: "bool", modifiers: "", def_value: None }]
  constexpr __CosmeticsTestingManager__CosmeticTestData(::UnityW<::UnityEngine::Mesh> mesh, bool isZipper) noexcept;

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field isZipper, offset: 0x8, size: 0x1, def value: None
  bool isZipper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, isZipper) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarTestData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CosmeticsTestingManager::AvatarTestData
struct CORDL_TYPE __CosmeticsTestingManager__AvatarTestData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsTestingManager__AvatarTestData();

  // Ctor Parameters [CppParam { name: "avatarReference", ty: "::UnityW<::UnityEngine::SkinnedMeshRenderer>", modifiers: "", def_value: None }, CppParam { name: "zipperAnchor", ty:
  // "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
  constexpr __CosmeticsTestingManager__AvatarTestData(::UnityW<::UnityEngine::SkinnedMeshRenderer> avatarReference, ::UnityW<::UnityEngine::Transform> zipperAnchor) noexcept;

  /// @brief Field avatarReference, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> avatarReference;

  /// @brief Field zipperAnchor, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> zipperAnchor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData, avatarReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData, zipperAnchor) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsTestingManager
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsTestingManager*
class CORDL_TYPE CosmeticsTestingManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::CosmeticsTestingManager>> {
public:
  // Declarations
  using AvatarTestData = ::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData;

  using CosmeticTestData = ::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData;

  /// @brief Field avatarTestDatas, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarTestDatas,
                      put = __cordl_internal_set_avatarTestDatas))::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>* avatarTestDatas;

  /// @brief Field cosmeticMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticMaterial, put = __cordl_internal_set_cosmeticMaterial))::UnityW<::UnityEngine::Material> cosmeticMaterial;

  /// @brief Field cosmeticPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticPrefab, put = __cordl_internal_set_cosmeticPrefab))::UnityW<::UnityEngine::GameObject> cosmeticPrefab;

  /// @brief Field curPantsCosmetics, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_curPantsCosmetics,
                      put = __cordl_internal_set_curPantsCosmetics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curPantsCosmetics;

  /// @brief Field curSleeveOverCosmetics, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_curSleeveOverCosmetics,
                      put = __cordl_internal_set_curSleeveOverCosmetics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curSleeveOverCosmetics;

  /// @brief Field curSleeveUnderCosmetics, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_curSleeveUnderCosmetics,
                      put = __cordl_internal_set_curSleeveUnderCosmetics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curSleeveUnderCosmetics;

  /// @brief Field curTorsoOverCosmetics, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_curTorsoOverCosmetics,
                      put = __cordl_internal_set_curTorsoOverCosmetics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curTorsoOverCosmetics;

  /// @brief Field curTorsoUnderCosmetics, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_curTorsoUnderCosmetics,
                      put = __cordl_internal_set_curTorsoUnderCosmetics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curTorsoUnderCosmetics;

  /// @brief Field pantsIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_pantsIndex, put = __cordl_internal_set_pantsIndex)) int32_t pantsIndex;

  /// @brief Field pantsMeshes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_pantsMeshes, put = __cordl_internal_set_pantsMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> pantsMeshes;

  /// @brief Field sleeveOverIndex, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_sleeveOverIndex, put = __cordl_internal_set_sleeveOverIndex)) int32_t sleeveOverIndex;

  /// @brief Field sleeveOverMeshes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sleeveOverMeshes,
                      put = __cordl_internal_set_sleeveOverMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> sleeveOverMeshes;

  /// @brief Field sleeveUnderIndex, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_sleeveUnderIndex, put = __cordl_internal_set_sleeveUnderIndex)) int32_t sleeveUnderIndex;

  /// @brief Field sleeveUnderMeshes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sleeveUnderMeshes,
                      put = __cordl_internal_set_sleeveUnderMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> sleeveUnderMeshes;

  /// @brief Field testAvatars, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_testAvatars,
                      put = __cordl_internal_set_testAvatars))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> testAvatars;

  /// @brief Field testCosmetics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_testCosmetics,
                      put = __cordl_internal_set_testCosmetics))::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData,
                                                                         ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> testCosmetics;

  /// @brief Field torsoOverIndex, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_torsoOverIndex, put = __cordl_internal_set_torsoOverIndex)) int32_t torsoOverIndex;

  /// @brief Field torsoOverMeshes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_torsoOverMeshes,
                      put = __cordl_internal_set_torsoOverMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> torsoOverMeshes;

  /// @brief Field torsoUnderIndex, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_torsoUnderIndex, put = __cordl_internal_set_torsoUnderIndex)) int32_t torsoUnderIndex;

  /// @brief Field torsoUnderMeshes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_torsoUnderMeshes,
                      put = __cordl_internal_set_torsoUnderMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> torsoUnderMeshes;

  /// @brief Field zipperPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperPrefab, put = __cordl_internal_set_zipperPrefab))::UnityW<::UnityEngine::GameObject> zipperPrefab;

  /// @brief Method DoCycle, addr 0x1443b90, size 0x2a0, virtual false, abstract: false, final false
  inline void DoCycle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curCosmetics, ByRef<int32_t> index,
                      ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  static inline ::GlobalNamespace::CosmeticsTestingManager* New_ctor();

  /// @brief Method OnClearAllButtonPressed, addr 0x1443e70, size 0x58, virtual false, abstract: false, final false
  inline void OnClearAllButtonPressed();

  /// @brief Method OnCyclePantsButtonPressed, addr 0x1443e60, size 0x10, virtual false, abstract: false, final false
  inline void OnCyclePantsButtonPressed();

  /// @brief Method OnCycleSleeveOverButtonPressed, addr 0x1443e40, size 0x10, virtual false, abstract: false, final false
  inline void OnCycleSleeveOverButtonPressed();

  /// @brief Method OnCycleSleeveUnderButtonPressed, addr 0x1443e50, size 0x10, virtual false, abstract: false, final false
  inline void OnCycleSleeveUnderButtonPressed();

  /// @brief Method OnCycleTorsoOverButtonPressed, addr 0x1443b80, size 0x10, virtual false, abstract: false, final false
  inline void OnCycleTorsoOverButtonPressed();

  /// @brief Method OnCycleTorsoUnderButtonPressed, addr 0x1443e30, size 0x10, virtual false, abstract: false, final false
  inline void OnCycleTorsoUnderButtonPressed();

  /// @brief Method Start, addr 0x1442e14, size 0xa7c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryClear, addr 0x1443ec8, size 0x18c, virtual false, abstract: false, final false
  inline void TryClear(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curCosmetics);

  /// @brief Method TryCreateCosmetic, addr 0x1443890, size 0x2f0, virtual false, abstract: false, final false
  inline bool TryCreateCosmetic(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData cosmeticTestData, ::UnityEngine::Transform* container,
                                ::UnityEngine::SkinnedMeshRenderer* avatarReference, ::UnityEngine::Transform* zipperAnchor, ByRef<::UnityEngine::GameObject*> cosmetic);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>*& __cordl_internal_get_avatarTestDatas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>*> const&
  __cordl_internal_get_avatarTestDatas() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_cosmeticMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_cosmeticMaterial();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cosmeticPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cosmeticPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_curPantsCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_curPantsCosmetics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_curSleeveOverCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_curSleeveOverCosmetics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_curSleeveUnderCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_curSleeveUnderCosmetics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_curTorsoOverCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_curTorsoOverCosmetics() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_curTorsoUnderCosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_curTorsoUnderCosmetics() const;

  constexpr int32_t const& __cordl_internal_get_pantsIndex() const;

  constexpr int32_t& __cordl_internal_get_pantsIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_pantsMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_pantsMeshes();

  constexpr int32_t const& __cordl_internal_get_sleeveOverIndex() const;

  constexpr int32_t& __cordl_internal_get_sleeveOverIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_sleeveOverMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_sleeveOverMeshes();

  constexpr int32_t const& __cordl_internal_get_sleeveUnderIndex() const;

  constexpr int32_t& __cordl_internal_get_sleeveUnderIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_sleeveUnderMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_sleeveUnderMeshes();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_testAvatars() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_testAvatars();

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> const&
  __cordl_internal_get_testCosmetics() const;

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*>& __cordl_internal_get_testCosmetics();

  constexpr int32_t const& __cordl_internal_get_torsoOverIndex() const;

  constexpr int32_t& __cordl_internal_get_torsoOverIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_torsoOverMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_torsoOverMeshes();

  constexpr int32_t const& __cordl_internal_get_torsoUnderIndex() const;

  constexpr int32_t& __cordl_internal_get_torsoUnderIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_torsoUnderMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_torsoUnderMeshes();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_zipperPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_zipperPrefab();

  constexpr void __cordl_internal_set_avatarTestDatas(::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>* value);

  constexpr void __cordl_internal_set_cosmeticMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_cosmeticPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_curPantsCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_curSleeveOverCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_curSleeveUnderCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_curTorsoOverCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_curTorsoUnderCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_pantsIndex(int32_t value);

  constexpr void __cordl_internal_set_pantsMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_sleeveOverIndex(int32_t value);

  constexpr void __cordl_internal_set_sleeveOverMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_sleeveUnderIndex(int32_t value);

  constexpr void __cordl_internal_set_sleeveUnderMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_testAvatars(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void
  __cordl_internal_set_testCosmetics(::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> value);

  constexpr void __cordl_internal_set_torsoOverIndex(int32_t value);

  constexpr void __cordl_internal_set_torsoOverMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_torsoUnderIndex(int32_t value);

  constexpr void __cordl_internal_set_torsoUnderMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_zipperPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x1444054, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsTestingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsTestingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsTestingManager(CosmeticsTestingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsTestingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsTestingManager(CosmeticsTestingManager const&) = delete;

  /// @brief Field testCosmetics, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> ___testCosmetics;

  /// @brief Field testAvatars, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___testAvatars;

  /// @brief Field cosmeticMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___cosmeticMaterial;

  /// @brief Field cosmeticPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___cosmeticPrefab;

  /// @brief Field zipperPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___zipperPrefab;

  /// @brief Field torsoOverMeshes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___torsoOverMeshes;

  /// @brief Field torsoUnderMeshes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___torsoUnderMeshes;

  /// @brief Field sleeveOverMeshes, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___sleeveOverMeshes;

  /// @brief Field sleeveUnderMeshes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___sleeveUnderMeshes;

  /// @brief Field pantsMeshes, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___pantsMeshes;

  /// @brief Field avatarTestDatas, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>* ___avatarTestDatas;

  /// @brief Field torsoOverIndex, offset: 0x70, size: 0x4, def value: None
  int32_t ___torsoOverIndex;

  /// @brief Field curTorsoOverCosmetics, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___curTorsoOverCosmetics;

  /// @brief Field torsoUnderIndex, offset: 0x80, size: 0x4, def value: None
  int32_t ___torsoUnderIndex;

  /// @brief Field curTorsoUnderCosmetics, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___curTorsoUnderCosmetics;

  /// @brief Field sleeveOverIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ___sleeveOverIndex;

  /// @brief Field curSleeveOverCosmetics, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___curSleeveOverCosmetics;

  /// @brief Field sleeveUnderIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ___sleeveUnderIndex;

  /// @brief Field curSleeveUnderCosmetics, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___curSleeveUnderCosmetics;

  /// @brief Field pantsIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___pantsIndex;

  /// @brief Field curPantsCosmetics, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___curPantsCosmetics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsTestingManager, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___testCosmetics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___testAvatars) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___cosmeticMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___cosmeticPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___zipperPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___torsoOverMeshes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___torsoUnderMeshes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___sleeveOverMeshes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___sleeveUnderMeshes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___pantsMeshes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___avatarTestDatas) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___torsoOverIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___curTorsoOverCosmetics) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___torsoUnderIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___curTorsoUnderCosmetics) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___sleeveOverIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___curSleeveOverCosmetics) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___sleeveUnderIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___curSleeveUnderCosmetics) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___pantsIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsTestingManager, ___curPantsCosmetics) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsTestingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsTestingManager*, "", "CosmeticsTestingManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData, "", "CosmeticsTestingManager/AvatarTestData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, "", "CosmeticsTestingManager/CosmeticTestData");
