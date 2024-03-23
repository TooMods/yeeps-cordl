#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumePerSceneData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeAsset;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeState;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumePerSceneData__SerializableAssetItem;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumePerSceneData;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumePerSceneData__SerializableAssetItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem);
// Type: ::SerializableAssetItem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumePerSceneData::SerializableAssetItem
struct CORDL_TYPE __ProbeVolumePerSceneData__SerializableAssetItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumePerSceneData__SerializableAssetItem();

  // Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeState", modifiers: "", def_value: None }, CppParam { name: "asset", ty:
  // "::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>", modifiers: "", def_value: None }]
  constexpr __ProbeVolumePerSceneData__SerializableAssetItem(::UnityEngine::Experimental::Rendering::ProbeVolumeState state,
                                                             ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> asset) noexcept;

  /// @brief Field state, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeState state;

  /// @brief Field asset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> asset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem, asset) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeVolumePerSceneData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumePerSceneData*
class CORDL_TYPE ProbeVolumePerSceneData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SerializableAssetItem = ::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem;

  /// @brief Field assets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assets,
                      put = __cordl_internal_set_assets))::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState,
                                                                                                      ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* assets;

  /// @brief Field m_CurrentState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentState, put = __cordl_internal_set_m_CurrentState))::UnityEngine::Experimental::Rendering::ProbeVolumeState m_CurrentState;

  /// @brief Field m_PreviousState, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousState, put = __cordl_internal_set_m_PreviousState))::UnityEngine::Experimental::Rendering::ProbeVolumeState m_PreviousState;

  /// @brief Field serializedAssets, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedAssets,
      put = __cordl_internal_set_serializedAssets))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>* serializedAssets;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method GetCurrentStateAsset, addr 0x23c8168, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> GetCurrentStateAsset();

  /// @brief Method InvalidateAllAssets, addr 0x23c7f1c, size 0x24c, virtual false, abstract: false, final false
  inline void InvalidateAllAssets();

  static inline ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x23c7a94, size 0x1c4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x23c7c58, size 0x25c, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDestroy, addr 0x23c84bc, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x23c84b8, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x23c84b4, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method QueueAssetLoading, addr 0x23c81f8, size 0x15c, virtual false, abstract: false, final false
  inline void QueueAssetLoading();

  /// @brief Method QueueAssetRemoval, addr 0x23c8354, size 0x160, virtual false, abstract: false, final false
  inline void QueueAssetRemoval();

  /// @brief Method StoreAssetForState, addr 0x23c7eb4, size 0x68, virtual false, abstract: false, final false
  inline void StoreAssetForState(::UnityEngine::Experimental::Rendering::ProbeVolumeState state, ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset);

  /// @brief Method Update, addr 0x23c84c0, size 0x170, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*&
  __cordl_internal_get_assets();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
  __cordl_internal_get_assets() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState const& __cordl_internal_get_m_CurrentState() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState& __cordl_internal_get_m_CurrentState();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState const& __cordl_internal_get_m_PreviousState() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState& __cordl_internal_get_m_PreviousState();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>*& __cordl_internal_get_serializedAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>*> const&
  __cordl_internal_get_serializedAssets() const;

  constexpr void __cordl_internal_set_assets(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value);

  constexpr void __cordl_internal_set_m_CurrentState(::UnityEngine::Experimental::Rendering::ProbeVolumeState value);

  constexpr void __cordl_internal_set_m_PreviousState(::UnityEngine::Experimental::Rendering::ProbeVolumeState value);

  constexpr void __cordl_internal_set_serializedAssets(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>* value);

  /// @brief Method .ctor, addr 0x23c8630, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumePerSceneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumePerSceneData(ProbeVolumePerSceneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumePerSceneData(ProbeVolumePerSceneData const&) = delete;

  /// @brief Field assets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* ___assets;

  /// @brief Field serializedAssets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>* ___serializedAssets;

  /// @brief Field m_CurrentState, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeState ___m_CurrentState;

  /// @brief Field m_PreviousState, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeState ___m_PreviousState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData, ___assets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData, ___serializedAssets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData, ___m_CurrentState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData, ___m_PreviousState) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*, "UnityEngine.Experimental.Rendering", "ProbeVolumePerSceneData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem, "UnityEngine.Experimental.Rendering", "ProbeVolumePerSceneData/SerializableAssetItem");
