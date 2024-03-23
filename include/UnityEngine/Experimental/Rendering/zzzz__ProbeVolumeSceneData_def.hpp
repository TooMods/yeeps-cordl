#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeSceneData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeReferenceVolumeProfile;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeBakingProcessSettings;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeVolumeSceneData__BakingSet;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializableBoundItem;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializableHasPVItem;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializablePVBakeSettings;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializablePVProfile;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeVolumeSceneData____c;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeVolumeSceneData__BakingSet;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeVolumeSceneData____c;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializableBoundItem;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializableHasPVItem;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializablePVBakeSettings;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeSceneData__SerializablePVProfile;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile);
// Type: ::SerializableBoundItem
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumeSceneData::SerializableBoundItem
struct CORDL_TYPE __ProbeVolumeSceneData__SerializableBoundItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData__SerializableBoundItem();

  // Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }]
  constexpr __ProbeVolumeSceneData__SerializableBoundItem(::StringW sceneGUID, ::UnityEngine::Bounds bounds) noexcept;

  /// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sceneGUID;

  /// @brief Field bounds, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::Bounds bounds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem, bounds) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::SerializableHasPVItem
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumeSceneData::SerializableHasPVItem
struct CORDL_TYPE __ProbeVolumeSceneData__SerializableHasPVItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData__SerializableHasPVItem();

  // Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasProbeVolumes", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ProbeVolumeSceneData__SerializableHasPVItem(::StringW sceneGUID, bool hasProbeVolumes) noexcept;

  /// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sceneGUID;

  /// @brief Field hasProbeVolumes, offset: 0x8, size: 0x1, def value: None
  bool hasProbeVolumes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem, hasProbeVolumes) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::SerializablePVProfile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumeSceneData::SerializablePVProfile
struct CORDL_TYPE __ProbeVolumeSceneData__SerializablePVProfile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData__SerializablePVProfile();

  // Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "profile", ty:
  // "::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>", modifiers: "", def_value: None }]
  constexpr __ProbeVolumeSceneData__SerializablePVProfile(::StringW sceneGUID, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> profile) noexcept;

  /// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sceneGUID;

  /// @brief Field profile, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> profile;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, profile) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::SerializablePVBakeSettings
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumeSceneData::SerializablePVBakeSettings
struct CORDL_TYPE __ProbeVolumeSceneData__SerializablePVBakeSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData__SerializablePVBakeSettings();

  // Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "settings", ty:
  // "::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings", modifiers: "", def_value: None }]
  constexpr __ProbeVolumeSceneData__SerializablePVBakeSettings(::StringW sceneGUID, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings settings) noexcept;

  /// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sceneGUID;

  /// @brief Field settings, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings settings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings, settings) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::BakingSet
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeVolumeSceneData::BakingSet*
class CORDL_TYPE __ProbeVolumeSceneData__BakingSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field profile, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_profile, put = __cordl_internal_set_profile))::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> profile;

  /// @brief Field sceneGUIDs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneGUIDs, put = __cordl_internal_set_sceneGUIDs))::System::Collections::Generic::List_1<::StringW>* sceneGUIDs;

  /// @brief Field settings, offset 0x20, size 0x20
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings))::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings settings;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> const& __cordl_internal_get_profile() const;

  constexpr ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>& __cordl_internal_get_profile();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_sceneGUIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_sceneGUIDs() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_profile(::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> value);

  constexpr void __cordl_internal_set_sceneGUIDs(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings value);

  /// @brief Method .ctor, addr 0x23ca540, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData__BakingSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeVolumeSceneData__BakingSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeVolumeSceneData__BakingSet(__ProbeVolumeSceneData__BakingSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeVolumeSceneData__BakingSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeVolumeSceneData__BakingSet(__ProbeVolumeSceneData__BakingSet const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field sceneGUIDs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___sceneGUIDs;

  /// @brief Field settings, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings ___settings;

  /// @brief Field profile, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile> ___profile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet, ___sceneGUIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet, ___profile) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeVolumeSceneData::<>c*
class CORDL_TYPE __ProbeVolumeSceneData____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0,
                             put = setStaticF___9__22_0))::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>* __9__22_0;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* New_ctor();

  /// @brief Method <UpdateBakingSets>b__22_0, addr 0x23ca6e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UpdateBakingSets_b__22_0(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile s);

  /// @brief Method .ctor, addr 0x23ca6dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>* getStaticF___9__22_0();

  static inline void setStaticF___9(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeSceneData____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeVolumeSceneData____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeVolumeSceneData____c(__ProbeVolumeSceneData____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeVolumeSceneData____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeVolumeSceneData____c(__ProbeVolumeSceneData____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeSceneData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeSceneData*
class CORDL_TYPE ProbeVolumeSceneData : public ::System::Object {
public:
  // Declarations
  using BakingSet = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet;

  using SerializableBoundItem = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem;

  using SerializableHasPVItem = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem;

  using SerializablePVBakeSettings = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings;

  using SerializablePVProfile = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile;

  using __c = ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c;

  /// @brief Field bakingSets, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_bakingSets,
                      put = __cordl_internal_set_bakingSets))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* bakingSets;

  /// @brief Field hasProbeVolumes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hasProbeVolumes, put = __cordl_internal_set_hasProbeVolumes))::System::Collections::Generic::Dictionary_2<::StringW, bool>* hasProbeVolumes;

  /// @brief Field parentAsset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parentAsset, put = __cordl_internal_set_parentAsset))::UnityW<::UnityEngine::Object> parentAsset;

  /// @brief Field parentSceneDataPropertyName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_parentSceneDataPropertyName, put = __cordl_internal_set_parentSceneDataPropertyName))::StringW parentSceneDataPropertyName;

  /// @brief Field s_SceneGUID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SceneGUID, put = setStaticF_s_SceneGUID))::System::Reflection::PropertyInfo* s_SceneGUID;

  /// @brief Field sceneBakingSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneBakingSettings, put = __cordl_internal_set_sceneBakingSettings))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>* sceneBakingSettings;

  /// @brief Field sceneBounds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneBounds, put = __cordl_internal_set_sceneBounds))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>* sceneBounds;

  /// @brief Field sceneProfiles, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get_sceneProfiles,
      put = __cordl_internal_set_sceneProfiles))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>* sceneProfiles;

  /// @brief Field serializedBakeSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedBakeSettings, put = __cordl_internal_set_serializedBakeSettings))::System::Collections::Generic::List_1<
      ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>* serializedBakeSettings;

  /// @brief Field serializedBakingSets, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedBakingSets,
      put = __cordl_internal_set_serializedBakingSets))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* serializedBakingSets;

  /// @brief Field serializedBounds, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedBounds,
      put = __cordl_internal_set_serializedBounds))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>* serializedBounds;

  /// @brief Field serializedHasVolumes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedHasVolumes, put = __cordl_internal_set_serializedHasVolumes))::System::Collections::Generic::List_1<
      ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>* serializedHasVolumes;

  /// @brief Field serializedProfiles, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedProfiles,
      put = __cordl_internal_set_serializedProfiles))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>* serializedProfiles;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method CreateNewBakingSet, addr 0x23c9624, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* CreateNewBakingSet(::StringW name);

  /// @brief Method GetSceneGUID, addr 0x23c86b4, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetSceneGUID(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method InitializeBakingSet, addr 0x23c9580, size 0xa4, virtual false, abstract: false, final false
  inline void InitializeBakingSet(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet* set, ::StringW name);

  static inline ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* New_ctor(::UnityEngine::Object* parentAsset, ::StringW parentSceneDataPropertyName);

  /// @brief Method OnAfterDeserialize, addr 0x23c8d30, size 0x850, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x23c9a08, size 0xb38, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method SetParentObject, addr 0x23c8d28, size 0x8, virtual false, abstract: false, final false
  inline void SetParentObject(::UnityEngine::Object* parent, ::StringW parentSceneDataPropertyName);

  /// @brief Method SyncBakingSetSettings, addr 0x23c9708, size 0x300, virtual false, abstract: false, final false
  inline void SyncBakingSetSettings();

  /// @brief Method UpdateBakingSets, addr 0x23c8a38, size 0x2f0, virtual false, abstract: false, final false
  inline void UpdateBakingSets();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*& __cordl_internal_get_bakingSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*> const&
  __cordl_internal_get_bakingSets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __cordl_internal_get_hasProbeVolumes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __cordl_internal_get_hasProbeVolumes() const;

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_parentAsset() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_parentAsset();

  constexpr ::StringW const& __cordl_internal_get_parentSceneDataPropertyName() const;

  constexpr ::StringW& __cordl_internal_get_parentSceneDataPropertyName();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>*& __cordl_internal_get_sceneBakingSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>*> const&
  __cordl_internal_get_sceneBakingSettings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>*& __cordl_internal_get_sceneBounds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>*> const& __cordl_internal_get_sceneBounds() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>*& __cordl_internal_get_sceneProfiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>*> const&
  __cordl_internal_get_sceneProfiles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>*& __cordl_internal_get_serializedBakeSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>*> const&
  __cordl_internal_get_serializedBakeSettings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*& __cordl_internal_get_serializedBakingSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>*> const&
  __cordl_internal_get_serializedBakingSets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>*& __cordl_internal_get_serializedBounds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>*> const&
  __cordl_internal_get_serializedBounds() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>*& __cordl_internal_get_serializedHasVolumes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>*> const&
  __cordl_internal_get_serializedHasVolumes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>*& __cordl_internal_get_serializedProfiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>*> const&
  __cordl_internal_get_serializedProfiles() const;

  constexpr void __cordl_internal_set_bakingSets(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* value);

  constexpr void __cordl_internal_set_hasProbeVolumes(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_parentAsset(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_parentSceneDataPropertyName(::StringW value);

  constexpr void __cordl_internal_set_sceneBakingSettings(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>* value);

  constexpr void __cordl_internal_set_sceneBounds(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>* value);

  constexpr void __cordl_internal_set_sceneProfiles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>* value);

  constexpr void __cordl_internal_set_serializedBakeSettings(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>* value);

  constexpr void __cordl_internal_set_serializedBakingSets(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* value);

  constexpr void __cordl_internal_set_serializedBounds(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>* value);

  constexpr void __cordl_internal_set_serializedHasVolumes(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>* value);

  constexpr void __cordl_internal_set_serializedProfiles(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>* value);

  /// @brief Method .ctor, addr 0x23c8780, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Object* parentAsset, ::StringW parentSceneDataPropertyName);

  static inline ::System::Reflection::PropertyInfo* getStaticF_s_SceneGUID();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  static inline void setStaticF_s_SceneGUID(::System::Reflection::PropertyInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeSceneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeSceneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeSceneData(ProbeVolumeSceneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeSceneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeSceneData(ProbeVolumeSceneData const&) = delete;

  /// @brief Field serializedBounds, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem>* ___serializedBounds;

  /// @brief Field serializedHasVolumes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem>* ___serializedHasVolumes;

  /// @brief Field serializedProfiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile>* ___serializedProfiles;

  /// @brief Field serializedBakeSettings, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings>* ___serializedBakeSettings;

  /// @brief Field serializedBakingSets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* ___serializedBakingSets;

  /// @brief Field parentAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___parentAsset;

  /// @brief Field parentSceneDataPropertyName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___parentSceneDataPropertyName;

  /// @brief Field sceneBounds, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Bounds>* ___sceneBounds;

  /// @brief Field hasProbeVolumes, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, bool>* ___hasProbeVolumes;

  /// @brief Field sceneProfiles, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile>>* ___sceneProfiles;

  /// @brief Field sceneBakingSettings, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings>* ___sceneBakingSettings;

  /// @brief Field bakingSets, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*>* ___bakingSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___serializedBounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___serializedHasVolumes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___serializedProfiles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___serializedBakeSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___serializedBakingSets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___parentAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___parentSceneDataPropertyName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___sceneBounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___hasProbeVolumes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___sceneProfiles) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___sceneBakingSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData, ___bakingSets) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__BakingSet*, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData/BakingSet");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData____c*, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableBoundItem, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData/SerializableBoundItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializableHasPVItem, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData/SerializableHasPVItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVBakeSettings, "UnityEngine.Experimental.Rendering",
                       "ProbeVolumeSceneData/SerializablePVBakeSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeSceneData__SerializablePVProfile, "UnityEngine.Experimental.Rendering", "ProbeVolumeSceneData/SerializablePVProfile");
