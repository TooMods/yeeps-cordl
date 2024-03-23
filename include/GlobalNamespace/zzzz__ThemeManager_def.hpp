#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorValue_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThemeManager)
namespace GlobalNamespace {
struct ColorValue;
}
namespace GlobalNamespace {
struct RandomColorType;
}
namespace GlobalNamespace {
class Theme;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class __ThemeManager__OnCurrentThemeUpdated;
}
namespace GlobalNamespace {
struct __ThemeManager__ThemeData;
}
namespace GlobalNamespace {
class __ThemeManager___TransitionLightingRoutine_d__34;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThemeManager;
}
namespace GlobalNamespace {
class __ThemeManager__OnCurrentThemeUpdated;
}
namespace GlobalNamespace {
class __ThemeManager___TransitionLightingRoutine_d__34;
}
namespace GlobalNamespace {
struct __ThemeManager__ThemeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThemeManager);
MARK_REF_PTR_T(::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34);
MARK_VAL_T(::GlobalNamespace::__ThemeManager__ThemeData);
// Type: ::ThemeData
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ThemeManager::ThemeData
struct CORDL_TYPE __ThemeManager__ThemeData {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x14483f4, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThemeManager__ThemeData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "analyticsKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "sceneryPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "groundColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "groundColorValue", ty: "::GlobalNamespace::ColorValue", modifiers: "", def_value: None }, CppParam { name: "leaveFootprintsOnGround", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "playspaceColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playspaceColorValue", ty: "::GlobalNamespace::ColorValue", modifiers: "", def_value: None },
  // CppParam { name: "groundMapObjectKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "groundMapObjectTriplanarMaterialIndex", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "skyTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "overrideAmbientLightColor", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "ambientLightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "overrideDirectionalLightColor", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "directionalLightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "brightenLightingInCreative", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "hallwayEntranceFlatLargePrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name:
  // "hallwayEntranceFlatSmallPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "hallwayArchPrefab", ty: "::UnityW<::UnityEngine::GameObject>",
  // modifiers: "", def_value: None }, CppParam { name: "corridorWallColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "corridorWallTexture", ty:
  // "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "useSeperateGroundBlockColor", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "groundBlockColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "structuralColorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "stuffedColorKeys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "techWebPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }, CppParam { name: "cosmeticsStoreKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "groundSoundEffectKey", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "ambientSoundSetKey", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __ThemeManager__ThemeData(::StringW key, ::StringW analyticsKey, ::UnityW<::UnityEngine::GameObject> sceneryPrefab, ::StringW groundColorKey,
                                      ::GlobalNamespace::ColorValue groundColorValue, bool leaveFootprintsOnGround, ::StringW playspaceColorKey, ::GlobalNamespace::ColorValue playspaceColorValue,
                                      ::StringW groundMapObjectKey, int32_t groundMapObjectTriplanarMaterialIndex, ::UnityW<::UnityEngine::Texture2D> skyTexture, bool overrideAmbientLightColor,
                                      ::UnityEngine::Color ambientLightColor, bool overrideDirectionalLightColor, ::UnityEngine::Color directionalLightColor, bool brightenLightingInCreative,
                                      ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatLargePrefab, ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatSmallPrefab,
                                      ::UnityW<::UnityEngine::GameObject> hallwayArchPrefab, ::StringW corridorWallColorKey, ::UnityW<::UnityEngine::Texture2D> corridorWallTexture,
                                      bool useSeperateGroundBlockColor, ::StringW groundBlockColorKey, ::StringW structuralColorKey, ::ArrayW<::StringW, ::Array<::StringW>*> stuffedColorKeys,
                                      ::UnityW<::UnityEngine::GameObject> techWebPrefab, ::StringW cosmeticsStoreKey, ::StringW groundSoundEffectKey, ::StringW ambientSoundSetKey) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field analyticsKey, offset: 0x8, size: 0x8, def value: None
  ::StringW analyticsKey;

  /// @brief Field sceneryPrefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> sceneryPrefab;

  /// @brief Field groundColorKey, offset: 0x18, size: 0x8, def value: None
  ::StringW groundColorKey;

  /// @brief Field groundColorValue, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::ColorValue groundColorValue;

  /// @brief Field leaveFootprintsOnGround, offset: 0x24, size: 0x1, def value: None
  bool leaveFootprintsOnGround;

  /// @brief Field playspaceColorKey, offset: 0x28, size: 0x8, def value: None
  ::StringW playspaceColorKey;

  /// @brief Field playspaceColorValue, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ColorValue playspaceColorValue;

  /// @brief Field groundMapObjectKey, offset: 0x38, size: 0x8, def value: None
  ::StringW groundMapObjectKey;

  /// @brief Field groundMapObjectTriplanarMaterialIndex, offset: 0x40, size: 0x4, def value: None
  int32_t groundMapObjectTriplanarMaterialIndex;

  /// @brief Field skyTexture, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> skyTexture;

  /// @brief Field overrideAmbientLightColor, offset: 0x50, size: 0x1, def value: None
  bool overrideAmbientLightColor;

  /// @brief Field ambientLightColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ambientLightColor;

  /// @brief Field overrideDirectionalLightColor, offset: 0x64, size: 0x1, def value: None
  bool overrideDirectionalLightColor;

  /// @brief Field directionalLightColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color directionalLightColor;

  /// @brief Field brightenLightingInCreative, offset: 0x78, size: 0x1, def value: None
  bool brightenLightingInCreative;

  /// @brief Field hallwayEntranceFlatLargePrefab, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatLargePrefab;

  /// @brief Field hallwayEntranceFlatSmallPrefab, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatSmallPrefab;

  /// @brief Field hallwayArchPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> hallwayArchPrefab;

  /// @brief Field corridorWallColorKey, offset: 0x98, size: 0x8, def value: None
  ::StringW corridorWallColorKey;

  /// @brief Field corridorWallTexture, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> corridorWallTexture;

  /// @brief Field useSeperateGroundBlockColor, offset: 0xa8, size: 0x1, def value: None
  bool useSeperateGroundBlockColor;

  /// @brief Field groundBlockColorKey, offset: 0xb0, size: 0x8, def value: None
  ::StringW groundBlockColorKey;

  /// @brief Field structuralColorKey, offset: 0xb8, size: 0x8, def value: None
  ::StringW structuralColorKey;

  /// @brief Field stuffedColorKeys, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> stuffedColorKeys;

  /// @brief Field techWebPrefab, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> techWebPrefab;

  /// @brief Field cosmeticsStoreKey, offset: 0xd0, size: 0x8, def value: None
  ::StringW cosmeticsStoreKey;

  /// @brief Field groundSoundEffectKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW groundSoundEffectKey;

  /// @brief Field ambientSoundSetKey, offset: 0xe0, size: 0x8, def value: None
  ::StringW ambientSoundSetKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThemeManager__ThemeData, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, analyticsKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, sceneryPrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundColorKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundColorValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, leaveFootprintsOnGround) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, playspaceColorKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, playspaceColorValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundMapObjectKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundMapObjectTriplanarMaterialIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, skyTexture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, overrideAmbientLightColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, ambientLightColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, overrideDirectionalLightColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, directionalLightColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, brightenLightingInCreative) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, hallwayEntranceFlatLargePrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, hallwayEntranceFlatSmallPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, hallwayArchPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, corridorWallColorKey) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, corridorWallTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, useSeperateGroundBlockColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundBlockColorKey) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, structuralColorKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, stuffedColorKeys) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, techWebPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, cosmeticsStoreKey) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, groundSoundEffectKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager__ThemeData, ambientSoundSetKey) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrentThemeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThemeManager::OnCurrentThemeUpdated*
class CORDL_TYPE __ThemeManager__OnCurrentThemeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1448e14, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Theme* newTheme, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1448e34, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1448e00, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Theme* newTheme);

  static inline ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1444da0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThemeManager__OnCurrentThemeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThemeManager__OnCurrentThemeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThemeManager__OnCurrentThemeUpdated(__ThemeManager__OnCurrentThemeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThemeManager__OnCurrentThemeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThemeManager__OnCurrentThemeUpdated(__ThemeManager__OnCurrentThemeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionLightingRoutine>d__34
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThemeManager::<TransitionLightingRoutine>d__34*
class CORDL_TYPE __ThemeManager___TransitionLightingRoutine_d__34 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ThemeManager> __4__this;

  /// @brief Field <p>5__4, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__4, put = __cordl_internal_set__p_5__4)) float_t _p_5__4;

  /// @brief Field <startAmbientColor>5__2, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__startAmbientColor_5__2, put = __cordl_internal_set__startAmbientColor_5__2))::UnityEngine::Color _startAmbientColor_5__2;

  /// @brief Field <startDirectionalLightColor>5__3, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__startDirectionalLightColor_5__3, put = __cordl_internal_set__startDirectionalLightColor_5__3))::UnityEngine::Color _startDirectionalLightColor_5__3;

  /// @brief Field newAmbientColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_newAmbientColor, put = __cordl_internal_set_newAmbientColor))::UnityEngine::Color newAmbientColor;

  /// @brief Field newDirectionalLightColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_newDirectionalLightColor, put = __cordl_internal_set_newDirectionalLightColor))::UnityEngine::Color newDirectionalLightColor;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1448e44, size 0x16c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1448fb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1448fb8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1448ff8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1448e40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ThemeManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ThemeManager>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__4() const;

  constexpr float_t& __cordl_internal_get__p_5__4();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startAmbientColor_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startAmbientColor_5__2();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startDirectionalLightColor_5__3() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startDirectionalLightColor_5__3();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_newAmbientColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_newAmbientColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_newDirectionalLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_newDirectionalLightColor();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThemeManager> value);

  constexpr void __cordl_internal_set__p_5__4(float_t value);

  constexpr void __cordl_internal_set__startAmbientColor_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__startDirectionalLightColor_5__3(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_newAmbientColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_newDirectionalLightColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x14485e4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThemeManager___TransitionLightingRoutine_d__34();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThemeManager___TransitionLightingRoutine_d__34", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThemeManager___TransitionLightingRoutine_d__34(__ThemeManager___TransitionLightingRoutine_d__34&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThemeManager___TransitionLightingRoutine_d__34", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThemeManager___TransitionLightingRoutine_d__34(__ThemeManager___TransitionLightingRoutine_d__34 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ThemeManager> _____4__this;

  /// @brief Field newAmbientColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___newAmbientColor;

  /// @brief Field newDirectionalLightColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___newDirectionalLightColor;

  /// @brief Field <startAmbientColor>5__2, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____startAmbientColor_5__2;

  /// @brief Field <startDirectionalLightColor>5__3, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____startDirectionalLightColor_5__3;

  /// @brief Field <p>5__4, offset: 0x68, size: 0x4, def value: None
  float_t ____p_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, ___newAmbientColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, ___newDirectionalLightColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, ____startAmbientColor_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, ____startDirectionalLightColor_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34, ____p_5__4) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ThemeManager
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThemeManager*
class CORDL_TYPE ThemeManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ThemeManager>> {
public:
  // Declarations
  using OnCurrentThemeUpdated = ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated;

  using ThemeData = ::GlobalNamespace::__ThemeManager__ThemeData;

  using _TransitionLightingRoutine_d__34 = ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34;

  /// @brief Field <currentTheme>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__currentTheme_k__BackingField, put = setStaticF__currentTheme_k__BackingField))::GlobalNamespace::Theme* _currentTheme_k__BackingField;

  /// @brief Field corridorWallMat, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_corridorWallMat, put = __cordl_internal_set_corridorWallMat))::UnityW<::UnityEngine::Material> corridorWallMat;

  /// @brief Field curLightingTransitionRoutine, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_curLightingTransitionRoutine, put = __cordl_internal_set_curLightingTransitionRoutine))::UnityEngine::Coroutine* curLightingTransitionRoutine;

  /// @brief Field defaultAmbientColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultAmbientColor, put = __cordl_internal_set_defaultAmbientColor))::UnityEngine::Color defaultAmbientColor;

  /// @brief Field defaultAmbientLightColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultAmbientLightColor, put = __cordl_internal_set_defaultAmbientLightColor))::UnityEngine::Color defaultAmbientLightColor;

  /// @brief Field defaultDirectionalColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultDirectionalColor, put = __cordl_internal_set_defaultDirectionalColor))::UnityEngine::Color defaultDirectionalColor;

  /// @brief Field defaultDirectionalLightColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultDirectionalLightColor, put = __cordl_internal_set_defaultDirectionalLightColor))::UnityEngine::Color defaultDirectionalLightColor;

  /// @brief Field defaultDirectionalLightDirection, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultDirectionalLightDirection, put = __cordl_internal_set_defaultDirectionalLightDirection))::UnityEngine::Vector3 defaultDirectionalLightDirection;

  /// @brief Field directionalLight, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_directionalLight, put = __cordl_internal_set_directionalLight))::UnityW<::UnityEngine::Light> directionalLight;

  /// @brief Field hallwayHalvesByTheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hallwayHalvesByTheme, put = setStaticF_hallwayHalvesByTheme))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* hallwayHalvesByTheme;

  /// @brief Field hallwayVoidPrefab, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_hallwayVoidPrefab, put = __cordl_internal_set_hallwayVoidPrefab))::UnityW<::UnityEngine::GameObject> hallwayVoidPrefab;

  /// @brief Field hasDefaultDirectionalLightDirection, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDefaultDirectionalLightDirection, put = __cordl_internal_set_hasDefaultDirectionalLightDirection)) bool hasDefaultDirectionalLightDirection;

  /// @brief Field isLightingOverrideActive, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isLightingOverrideActive, put = __cordl_internal_set_isLightingOverrideActive)) bool isLightingOverrideActive;

  /// @brief Field lobbiesByTheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lobbiesByTheme, put = setStaticF_lobbiesByTheme))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* lobbiesByTheme;

  /// @brief Field mapObjectFogColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_mapObjectFogColor, put = __cordl_internal_set_mapObjectFogColor))::UnityEngine::Color mapObjectFogColor;

  /// @brief Field mapObjectFogDistanceForMax, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_mapObjectFogDistanceForMax, put = __cordl_internal_set_mapObjectFogDistanceForMax)) float_t mapObjectFogDistanceForMax;

  /// @brief Field mapObjectFogMaxAmount, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_mapObjectFogMaxAmount, put = __cordl_internal_set_mapObjectFogMaxAmount)) float_t mapObjectFogMaxAmount;

  /// @brief Field onCurrentThemeUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onCurrentThemeUpdatedCallbacks,
                      put = __cordl_internal_set_onCurrentThemeUpdatedCallbacks))::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* onCurrentThemeUpdatedCallbacks;

  /// @brief Field overrideAmbientColor, offset 0x94, size 0x10
  __declspec(property(get = __cordl_internal_get_overrideAmbientColor, put = __cordl_internal_set_overrideAmbientColor))::UnityEngine::Color overrideAmbientColor;

  /// @brief Field overrideDirectionalColor, offset 0xa4, size 0x10
  __declspec(property(get = __cordl_internal_get_overrideDirectionalColor, put = __cordl_internal_set_overrideDirectionalColor))::UnityEngine::Color overrideDirectionalColor;

  /// @brief Field privateRoomsEntranceHallwayHalf, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsEntranceHallwayHalf,
                      put = __cordl_internal_set_privateRoomsEntranceHallwayHalf))::UnityW<::UnityEngine::GameObject> privateRoomsEntranceHallwayHalf;

  /// @brief Field privateRoomsExitHallwayHalf, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsExitHallwayHalf, put = __cordl_internal_set_privateRoomsExitHallwayHalf))::UnityW<::UnityEngine::GameObject> privateRoomsExitHallwayHalf;

  /// @brief Field privateRoomsExpansionBlockerPrefab, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsExpansionBlockerPrefab,
                      put = __cordl_internal_set_privateRoomsExpansionBlockerPrefab))::UnityW<::UnityEngine::GameObject> privateRoomsExpansionBlockerPrefab;

  /// @brief Field sceneryGroundMat, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneryGroundMat, put = __cordl_internal_set_sceneryGroundMat))::UnityW<::UnityEngine::Material> sceneryGroundMat;

  /// @brief Field themeDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_themeDatas,
                      put = __cordl_internal_set_themeDatas))::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> themeDatas;

  /// @brief Field themes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_themes, put = setStaticF_themes))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>* themes;

  /// @brief Method ClearLightingOverride, addr 0x1448628, size 0x24, virtual false, abstract: false, final false
  inline void ClearLightingOverride();

  /// @brief Method GetCurrentDefaultLighting, addr 0x144864c, size 0x14, virtual false, abstract: false, final false
  inline void GetCurrentDefaultLighting(ByRef<::UnityEngine::Color> ambientColor, ByRef<::UnityEngine::Color> directionalColor);

  /// @brief Method GetCurrentLighting, addr 0x1448660, size 0x2c, virtual false, abstract: false, final false
  inline void GetCurrentLighting(ByRef<::UnityEngine::Color> ambientColor, ByRef<::UnityEngine::Color> directionalColor);

  /// @brief Method GetDefaultDirectionalLightDirection, addr 0x1448800, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDefaultDirectionalLightDirection();

  /// @brief Method GetDirectionalLightDirection, addr 0x14487d8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDirectionalLightDirection();

  /// @brief Method GetHallwayHalfPrefab, addr 0x144880c, size 0x26c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetHallwayHalfPrefab(::StringW theme, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method GetLobbyPrefab, addr 0x1448a78, size 0x264, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetLobbyPrefab(::StringW theme, ::StringW roomKey, ByRef<int32_t> lobbySeed);

  /// @brief Method GetRandomColorKey, addr 0x1448414, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetRandomColorKey(::GlobalNamespace::RandomColorType randomColorType);

  static inline ::GlobalNamespace::ThemeManager* New_ctor();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x14482b8, size 0x13c, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method RestoreDefaultDirectionalLightDirection, addr 0x1448724, size 0xb4, virtual false, abstract: false, final false
  inline void RestoreDefaultDirectionalLightDirection();

  /// @brief Method SetCurrentTheme, addr 0x1447cf0, size 0x300, virtual false, abstract: false, final false
  static inline void SetCurrentTheme(::StringW newThemeKey);

  /// @brief Method SetDefaultLighting, addr 0x1447ff0, size 0x178, virtual false, abstract: false, final false
  inline void SetDefaultLighting(::GlobalNamespace::Theme* theme, bool instant);

  /// @brief Method SetDirectionalLightDirection, addr 0x144868c, size 0x98, virtual false, abstract: false, final false
  inline void SetDirectionalLightDirection(::UnityEngine::Vector3 direction);

  /// @brief Method SetLighting, addr 0x14484d4, size 0x58, virtual false, abstract: false, final false
  inline void SetLighting(::UnityEngine::Color ambientColor, ::UnityEngine::Color directionalColor);

  /// @brief Method SetLightingOverride, addr 0x144860c, size 0x1c, virtual false, abstract: false, final false
  inline void SetLightingOverride(::UnityEngine::Color ambientColor, ::UnityEngine::Color directionalColor);

  /// @brief Method Start, addr 0x1448168, size 0x150, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionLightingRoutine, addr 0x144852c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionLightingRoutine(::UnityEngine::Color newAmbientColor, ::UnityEngine::Color newDirectionalLightColor);

  /// @brief Method TryGetTheme, addr 0x143af88, size 0x358, virtual false, abstract: false, final false
  inline bool TryGetTheme(::StringW key, ByRef<::GlobalNamespace::Theme*> theme);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_corridorWallMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_corridorWallMat();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curLightingTransitionRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curLightingTransitionRoutine() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultAmbientColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultAmbientColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultAmbientLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultAmbientLightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultDirectionalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultDirectionalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultDirectionalLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultDirectionalLightColor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultDirectionalLightDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultDirectionalLightDirection();

  constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_directionalLight() const;

  constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_directionalLight();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hallwayVoidPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hallwayVoidPrefab();

  constexpr bool const& __cordl_internal_get_hasDefaultDirectionalLightDirection() const;

  constexpr bool& __cordl_internal_get_hasDefaultDirectionalLightDirection();

  constexpr bool const& __cordl_internal_get_isLightingOverrideActive() const;

  constexpr bool& __cordl_internal_get_isLightingOverrideActive();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_mapObjectFogColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_mapObjectFogColor();

  constexpr float_t const& __cordl_internal_get_mapObjectFogDistanceForMax() const;

  constexpr float_t& __cordl_internal_get_mapObjectFogDistanceForMax();

  constexpr float_t const& __cordl_internal_get_mapObjectFogMaxAmount() const;

  constexpr float_t& __cordl_internal_get_mapObjectFogMaxAmount();

  constexpr ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*& __cordl_internal_get_onCurrentThemeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*> const& __cordl_internal_get_onCurrentThemeUpdatedCallbacks() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_overrideAmbientColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_overrideAmbientColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_overrideDirectionalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_overrideDirectionalColor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_privateRoomsEntranceHallwayHalf() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_privateRoomsEntranceHallwayHalf();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_privateRoomsExitHallwayHalf() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_privateRoomsExitHallwayHalf();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_privateRoomsExpansionBlockerPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_privateRoomsExpansionBlockerPrefab();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sceneryGroundMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sceneryGroundMat();

  constexpr ::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> const& __cordl_internal_get_themeDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*>& __cordl_internal_get_themeDatas();

  constexpr void __cordl_internal_set_corridorWallMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_curLightingTransitionRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_defaultAmbientColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultAmbientLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultDirectionalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultDirectionalLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultDirectionalLightDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set_hallwayVoidPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_hasDefaultDirectionalLightDirection(bool value);

  constexpr void __cordl_internal_set_isLightingOverrideActive(bool value);

  constexpr void __cordl_internal_set_mapObjectFogColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_mapObjectFogDistanceForMax(float_t value);

  constexpr void __cordl_internal_set_mapObjectFogMaxAmount(float_t value);

  constexpr void __cordl_internal_set_onCurrentThemeUpdatedCallbacks(::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* value);

  constexpr void __cordl_internal_set_overrideAmbientColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_overrideDirectionalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_privateRoomsEntranceHallwayHalf(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_privateRoomsExitHallwayHalf(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_privateRoomsExpansionBlockerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_sceneryGroundMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_themeDatas(::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> value);

  /// @brief Method .ctor, addr 0x1448cdc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::Theme* getStaticF__currentTheme_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*
  getStaticF_hallwayHalvesByTheme();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* getStaticF_lobbiesByTheme();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>* getStaticF_themes();

  /// @brief Method get_currentTheme, addr 0x1447c3c, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Theme* get_currentTheme();

  /// @brief Method get_hasCurrentTheme, addr 0x14426d0, size 0x90, virtual false, abstract: false, final false
  static inline bool get_hasCurrentTheme();

  static inline void setStaticF__currentTheme_k__BackingField(::GlobalNamespace::Theme* value);

  static inline void
  setStaticF_hallwayHalvesByTheme(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* value);

  static inline void
  setStaticF_lobbiesByTheme(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* value);

  static inline void setStaticF_themes(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>* value);

  /// @brief Method set_currentTheme, addr 0x1447c94, size 0x5c, virtual false, abstract: false, final false
  static inline void set_currentTheme(::GlobalNamespace::Theme* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThemeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThemeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThemeManager(ThemeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThemeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThemeManager(ThemeManager const&) = delete;

  /// @brief Field themeDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> ___themeDatas;

  /// @brief Field onCurrentThemeUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* ___onCurrentThemeUpdatedCallbacks;

  /// @brief Field directionalLight, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ___directionalLight;

  /// @brief Field defaultAmbientLightColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultAmbientLightColor;

  /// @brief Field defaultDirectionalLightColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultDirectionalLightColor;

  /// @brief Field curLightingTransitionRoutine, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curLightingTransitionRoutine;

  /// @brief Field mapObjectFogColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___mapObjectFogColor;

  /// @brief Field mapObjectFogDistanceForMax, offset: 0x68, size: 0x4, def value: None
  float_t ___mapObjectFogDistanceForMax;

  /// @brief Field mapObjectFogMaxAmount, offset: 0x6c, size: 0x4, def value: None
  float_t ___mapObjectFogMaxAmount;

  /// @brief Field defaultAmbientColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultAmbientColor;

  /// @brief Field defaultDirectionalColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultDirectionalColor;

  /// @brief Field isLightingOverrideActive, offset: 0x90, size: 0x1, def value: None
  bool ___isLightingOverrideActive;

  /// @brief Field overrideAmbientColor, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Color ___overrideAmbientColor;

  /// @brief Field overrideDirectionalColor, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Color ___overrideDirectionalColor;

  /// @brief Field defaultDirectionalLightDirection, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultDirectionalLightDirection;

  /// @brief Field hasDefaultDirectionalLightDirection, offset: 0xc0, size: 0x1, def value: None
  bool ___hasDefaultDirectionalLightDirection;

  /// @brief Field sceneryGroundMat, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___sceneryGroundMat;

  /// @brief Field corridorWallMat, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___corridorWallMat;

  /// @brief Field privateRoomsEntranceHallwayHalf, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___privateRoomsEntranceHallwayHalf;

  /// @brief Field privateRoomsExitHallwayHalf, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___privateRoomsExitHallwayHalf;

  /// @brief Field privateRoomsExpansionBlockerPrefab, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___privateRoomsExpansionBlockerPrefab;

  /// @brief Field hallwayVoidPrefab, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___hallwayVoidPrefab;

  /// @brief Field baseHallwayHalfName offset 0xffffffff size 0x8
  static constexpr ::ConstString baseHallwayHalfName{ u"base" };

  /// @brief Field baseLobbyName offset 0xffffffff size 0x8
  static constexpr ::ConstString baseLobbyName{ u"base" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Themes: " };

  /// @brief Field hallwayHalvesResourcePath offset 0xffffffff size 0x8
  static constexpr ::ConstString hallwayHalvesResourcePath{ u"HallwayHalves/" };

  /// @brief Field lightingTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t lightingTransitionDuration{ 3.0 };

  /// @brief Field lobbyResourcePath offset 0xffffffff size 0x8
  static constexpr ::ConstString lobbyResourcePath{ u"RoomLobbies/" };

  /// @brief Field mapObjectFogColorPramName offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectFogColorPramName{ u"_MOFogColor" };

  /// @brief Field mapObjectFogDistanceForMaxParamName offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectFogDistanceForMaxParamName{ u"_MOFogDistance" };

  /// @brief Field mapObjectFogMaxAmountParamName offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectFogMaxAmountParamName{ u"_MOFogMax" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThemeManager, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___themeDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___onCurrentThemeUpdatedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___directionalLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___defaultAmbientLightColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___defaultDirectionalLightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___curLightingTransitionRoutine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___mapObjectFogColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___mapObjectFogDistanceForMax) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___mapObjectFogMaxAmount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___defaultAmbientColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___defaultDirectionalColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___isLightingOverrideActive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___overrideAmbientColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___overrideDirectionalColor) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___defaultDirectionalLightDirection) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___hasDefaultDirectionalLightDirection) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___sceneryGroundMat) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___corridorWallMat) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___privateRoomsEntranceHallwayHalf) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___privateRoomsExitHallwayHalf) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___privateRoomsExpansionBlockerPrefab) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThemeManager, ___hallwayVoidPrefab) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThemeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThemeManager*, "", "ThemeManager");
NEED_NO_BOX(::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*, "", "ThemeManager/OnCurrentThemeUpdated");
NEED_NO_BOX(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*, "", "ThemeManager/<TransitionLightingRoutine>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThemeManager__ThemeData, "", "ThemeManager/ThemeData");
