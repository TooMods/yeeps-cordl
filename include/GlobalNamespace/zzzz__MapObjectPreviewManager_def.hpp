#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MapObjectPreviewManager)
namespace GlobalNamespace {
class MapObjectPreview;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectPreviewManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectPreviewManager);
// Type: ::MapObjectPreviewManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectPreviewManager*
class CORDL_TYPE MapObjectPreviewManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MapObjectPreviewManager>> {
public:
  // Declarations
  /// @brief Field mapObjectPreviewPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectPreviewPrefab, put = __cordl_internal_set_mapObjectPreviewPrefab))::UnityW<::UnityEngine::GameObject> mapObjectPreviewPrefab;

  /// @brief Field mapObjectPreviews, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectPreviews,
                      put = __cordl_internal_set_mapObjectPreviews))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MapObjectPreview>>* mapObjectPreviews;

  /// @brief Method GenerateNewPreviewID, addr 0x3080754, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GenerateNewPreviewID();

  /// @brief Method GetMapObjectPreviewsOwnedByUser, addr 0x3080170, size 0x24c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectPreview>>* GetMapObjectPreviewsOwnedByUser(::StringW userID);

  static inline ::GlobalNamespace::MapObjectPreviewManager* New_ctor();

  /// @brief Method OnPlayerDestroyed, addr 0x307ffec, size 0x184, virtual false, abstract: false, final false
  inline void OnPlayerDestroyed(::StringW userID);

  /// @brief Method OnPlayerSwitchedUserIDs, addr 0x30803bc, size 0x14c, virtual false, abstract: false, final false
  inline void OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method OnReceiveMapObjectPreviewCreated, addr 0x30809b8, size 0x148, virtual false, abstract: false, final false
  inline void OnReceiveMapObjectPreviewCreated(::StringW userID, ::StringW previewID, ::StringW mapObjectKey, ::StringW colorKey);

  /// @brief Method OnReceiveMapObjectPreviewDestroyed, addr 0x3080b00, size 0xa4, virtual false, abstract: false, final false
  inline void OnReceiveMapObjectPreviewDestroyed(::StringW previewID);

  /// @brief Method Start, addr 0x307fe5c, size 0x190, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCreateMapObjectPreview, addr 0x3080780, size 0x238, virtual false, abstract: false, final false
  inline bool TryCreateMapObjectPreview(bool isMaster, ::StringW userID, ::StringW previewID, ::StringW mapObjectKey, ::StringW colorKey, ByRef<::GlobalNamespace::MapObjectPreview*> mapObjectPreview);

  /// @brief Method TryCreateMasterMapObjectPreview, addr 0x3080508, size 0x24c, virtual false, abstract: false, final false
  inline bool TryCreateMasterMapObjectPreview(::StringW mapObjectKey, ::StringW colorKey, ByRef<::GlobalNamespace::MapObjectPreview*> mapObjectPreview);

  /// @brief Method TryGetMapObjectPreview, addr 0x3080ba4, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetMapObjectPreview(::StringW previewID, ByRef<::GlobalNamespace::MapObjectPreview*> mapObjectPreview);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mapObjectPreviewPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mapObjectPreviewPrefab();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MapObjectPreview>>*& __cordl_internal_get_mapObjectPreviews();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MapObjectPreview>>*> const&
  __cordl_internal_get_mapObjectPreviews() const;

  constexpr void __cordl_internal_set_mapObjectPreviewPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_mapObjectPreviews(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MapObjectPreview>>* value);

  /// @brief Method .ctor, addr 0x3080c0c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectPreviewManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPreviewManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectPreviewManager(MapObjectPreviewManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPreviewManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectPreviewManager(MapObjectPreviewManager const&) = delete;

  /// @brief Field mapObjectPreviewPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___mapObjectPreviewPrefab;

  /// @brief Field mapObjectPreviews, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MapObjectPreview>>* ___mapObjectPreviews;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Map Object Preview: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectPreviewManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreviewManager, ___mapObjectPreviewPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreviewManager, ___mapObjectPreviews) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectPreviewManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectPreviewManager*, "", "MapObjectPreviewManager");
