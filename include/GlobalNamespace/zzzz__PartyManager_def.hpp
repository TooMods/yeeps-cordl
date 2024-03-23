#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class DiscoBall;
}
namespace GlobalNamespace {
class __PartyManager__OnIsPartyActiveUpdated;
}
namespace GlobalNamespace {
class __PartyManager___DoPartyRoutine_d__35;
}
namespace GlobalNamespace {
class __PartyManager___FadeOutPartyRoutine_d__36;
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
struct DateTime;
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
class AudioSource;
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
// Forward declare root types
namespace GlobalNamespace {
class PartyManager;
}
namespace GlobalNamespace {
class __PartyManager__OnIsPartyActiveUpdated;
}
namespace GlobalNamespace {
class __PartyManager___DoPartyRoutine_d__35;
}
namespace GlobalNamespace {
class __PartyManager___FadeOutPartyRoutine_d__36;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PartyManager);
MARK_REF_PTR_T(::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35);
MARK_REF_PTR_T(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36);
// Type: ::OnIsPartyActiveUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyManager::OnIsPartyActiveUpdated*
class CORDL_TYPE __PartyManager__OnIsPartyActiveUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf3ca84, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsPartyActive, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf3cb0c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf3ca6c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsPartyActive);

  static inline ::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf3c9a8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyManager__OnIsPartyActiveUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager__OnIsPartyActiveUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyManager__OnIsPartyActiveUpdated(__PartyManager__OnIsPartyActiveUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager__OnIsPartyActiveUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyManager__OnIsPartyActiveUpdated(__PartyManager__OnIsPartyActiveUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoPartyRoutine>d__35
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyManager::<DoPartyRoutine>d__35*
class CORDL_TYPE __PartyManager___DoPartyRoutine_d__35 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PartyManager> __4__this;

  /// @brief Field <curCycleIndex>5__4, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__curCycleIndex_5__4, put = __cordl_internal_set__curCycleIndex_5__4)) int32_t _curCycleIndex_5__4;

  /// @brief Field <directionalLightDirection>5__3, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__directionalLightDirection_5__3, put = __cordl_internal_set__directionalLightDirection_5__3))::UnityEngine::Vector3 _directionalLightDirection_5__3;

  /// @brief Field <p>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field <startAmbientColor>5__5, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__startAmbientColor_5__5, put = __cordl_internal_set__startAmbientColor_5__5))::UnityEngine::Color _startAmbientColor_5__5;

  /// @brief Field <startDirectionalColor>5__6, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__startDirectionalColor_5__6, put = __cordl_internal_set__startDirectionalColor_5__6))::UnityEngine::Color _startDirectionalColor_5__6;

  /// @brief Field skipTransitionIn, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_skipTransitionIn, put = __cordl_internal_set_skipTransitionIn)) bool skipTransitionIn;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf3cb1c, size 0x5e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf3d100, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf3d108, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf3d148, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf3cb18, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PartyManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PartyManager>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__curCycleIndex_5__4() const;

  constexpr int32_t& __cordl_internal_get__curCycleIndex_5__4();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__directionalLightDirection_5__3() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__directionalLightDirection_5__3();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startAmbientColor_5__5() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startAmbientColor_5__5();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startDirectionalColor_5__6() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startDirectionalColor_5__6();

  constexpr bool const& __cordl_internal_get_skipTransitionIn() const;

  constexpr bool& __cordl_internal_get_skipTransitionIn();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyManager> value);

  constexpr void __cordl_internal_set__curCycleIndex_5__4(int32_t value);

  constexpr void __cordl_internal_set__directionalLightDirection_5__3(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set__startAmbientColor_5__5(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__startDirectionalColor_5__6(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_skipTransitionIn(bool value);

  /// @brief Method .ctor, addr 0xf3c5f8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __PartyManager___DoPartyRoutine_d__35();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager___DoPartyRoutine_d__35", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyManager___DoPartyRoutine_d__35(__PartyManager___DoPartyRoutine_d__35&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager___DoPartyRoutine_d__35", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyManager___DoPartyRoutine_d__35(__PartyManager___DoPartyRoutine_d__35 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PartyManager> _____4__this;

  /// @brief Field skipTransitionIn, offset: 0x28, size: 0x1, def value: None
  bool ___skipTransitionIn;

  /// @brief Field <p>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____p_5__2;

  /// @brief Field <directionalLightDirection>5__3, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____directionalLightDirection_5__3;

  /// @brief Field <curCycleIndex>5__4, offset: 0x3c, size: 0x4, def value: None
  int32_t ____curCycleIndex_5__4;

  /// @brief Field <startAmbientColor>5__5, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____startAmbientColor_5__5;

  /// @brief Field <startDirectionalColor>5__6, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____startDirectionalColor_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ___skipTransitionIn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ____p_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ____directionalLightDirection_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ____curCycleIndex_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ____startAmbientColor_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35, ____startDirectionalColor_5__6) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FadeOutPartyRoutine>d__36
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyManager::<FadeOutPartyRoutine>d__36*
class CORDL_TYPE __PartyManager___FadeOutPartyRoutine_d__36 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PartyManager> __4__this;

  /// @brief Field <endAmbientColor>5__4, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__endAmbientColor_5__4, put = __cordl_internal_set__endAmbientColor_5__4))::UnityEngine::Color _endAmbientColor_5__4;

  /// @brief Field <endDirectionalColor>5__5, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__endDirectionalColor_5__5, put = __cordl_internal_set__endDirectionalColor_5__5))::UnityEngine::Color _endDirectionalColor_5__5;

  /// @brief Field <p>5__8, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__8, put = __cordl_internal_set__p_5__8)) float_t _p_5__8;

  /// @brief Field <startAmbientColor>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__startAmbientColor_5__2, put = __cordl_internal_set__startAmbientColor_5__2))::UnityEngine::Color _startAmbientColor_5__2;

  /// @brief Field <startDirectionalColor>5__3, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__startDirectionalColor_5__3, put = __cordl_internal_set__startDirectionalColor_5__3))::UnityEngine::Color _startDirectionalColor_5__3;

  /// @brief Field <startDirectionalLightDirection>5__6, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get__startDirectionalLightDirection_5__6,
                      put = __cordl_internal_set__startDirectionalLightDirection_5__6))::UnityEngine::Vector3 _startDirectionalLightDirection_5__6;

  /// @brief Field <targetDirectionLightDirection>5__7, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get__targetDirectionLightDirection_5__7,
                      put = __cordl_internal_set__targetDirectionLightDirection_5__7))::UnityEngine::Vector3 _targetDirectionLightDirection_5__7;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf3d154, size 0x278, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf3d3cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf3d3d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf3d414, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf3d150, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PartyManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PartyManager>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__endAmbientColor_5__4() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__endAmbientColor_5__4();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__endDirectionalColor_5__5() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__endDirectionalColor_5__5();

  constexpr float_t const& __cordl_internal_get__p_5__8() const;

  constexpr float_t& __cordl_internal_get__p_5__8();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startAmbientColor_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startAmbientColor_5__2();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startDirectionalColor_5__3() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startDirectionalColor_5__3();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startDirectionalLightDirection_5__6() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startDirectionalLightDirection_5__6();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetDirectionLightDirection_5__7() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetDirectionLightDirection_5__7();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyManager> value);

  constexpr void __cordl_internal_set__endAmbientColor_5__4(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__endDirectionalColor_5__5(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__p_5__8(float_t value);

  constexpr void __cordl_internal_set__startAmbientColor_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__startDirectionalColor_5__3(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__startDirectionalLightDirection_5__6(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__targetDirectionLightDirection_5__7(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf3c620, size 0x28, virtual false, abstract: false, final false
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
  constexpr __PartyManager___FadeOutPartyRoutine_d__36();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager___FadeOutPartyRoutine_d__36", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyManager___FadeOutPartyRoutine_d__36(__PartyManager___FadeOutPartyRoutine_d__36&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyManager___FadeOutPartyRoutine_d__36", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyManager___FadeOutPartyRoutine_d__36(__PartyManager___FadeOutPartyRoutine_d__36 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PartyManager> _____4__this;

  /// @brief Field <startAmbientColor>5__2, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____startAmbientColor_5__2;

  /// @brief Field <startDirectionalColor>5__3, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____startDirectionalColor_5__3;

  /// @brief Field <endAmbientColor>5__4, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____endAmbientColor_5__4;

  /// @brief Field <endDirectionalColor>5__5, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____endDirectionalColor_5__5;

  /// @brief Field <startDirectionalLightDirection>5__6, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startDirectionalLightDirection_5__6;

  /// @brief Field <targetDirectionLightDirection>5__7, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetDirectionLightDirection_5__7;

  /// @brief Field <p>5__8, offset: 0x80, size: 0x4, def value: None
  float_t ____p_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____startAmbientColor_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____startDirectionalColor_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____endAmbientColor_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____endDirectionalColor_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____startDirectionalLightDirection_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____targetDirectionLightDirection_5__7) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36, ____p_5__8) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PartyManager
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyManager*
class CORDL_TYPE PartyManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PartyManager>> {
public:
  // Declarations
  using OnIsPartyActiveUpdated = ::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated;

  using _DoPartyRoutine_d__35 = ::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35;

  using _FadeOutPartyRoutine_d__36 = ::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36;

  /// @brief Field <isPartyActive>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isPartyActive_k__BackingField, put = setStaticF__isPartyActive_k__BackingField)) bool _isPartyActive_k__BackingField;

  /// @brief Field ambientColorMultiplier, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_ambientColorMultiplier, put = __cordl_internal_set_ambientColorMultiplier)) float_t ambientColorMultiplier;

  /// @brief Field colorCycleDuration, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_colorCycleDuration, put = __cordl_internal_set_colorCycleDuration)) float_t colorCycleDuration;

  /// @brief Field curDiscoBall, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_curDiscoBall, put = __cordl_internal_set_curDiscoBall))::UnityW<::GlobalNamespace::DiscoBall> curDiscoBall;

  /// @brief Field curFadeOutPartyRoutine, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_curFadeOutPartyRoutine, put = __cordl_internal_set_curFadeOutPartyRoutine))::UnityEngine::Coroutine* curFadeOutPartyRoutine;

  /// @brief Field curPartyColor, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_curPartyColor, put = __cordl_internal_set_curPartyColor))::UnityEngine::Color curPartyColor;

  /// @brief Field curPartyRoutine, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_curPartyRoutine, put = __cordl_internal_set_curPartyRoutine))::UnityEngine::Coroutine* curPartyRoutine;

  /// @brief Field dimToStartColorDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dimToStartColorDuration, put = __cordl_internal_set_dimToStartColorDuration)) float_t dimToStartColorDuration;

  /// @brief Field directionalColorMultiplier, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_directionalColorMultiplier, put = __cordl_internal_set_directionalColorMultiplier)) float_t directionalColorMultiplier;

  /// @brief Field directionalLightSpinSpeed, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_directionalLightSpinSpeed, put = __cordl_internal_set_directionalLightSpinSpeed)) float_t directionalLightSpinSpeed;

  /// @brief Field discoBallColorMultiplier, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_discoBallColorMultiplier, put = __cordl_internal_set_discoBallColorMultiplier)) float_t discoBallColorMultiplier;

  /// @brief Field discoBallPrefab, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_discoBallPrefab, put = __cordl_internal_set_discoBallPrefab))::UnityW<::UnityEngine::GameObject> discoBallPrefab;

  /// @brief Field discoBallTransitionInDuration, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_discoBallTransitionInDuration, put = __cordl_internal_set_discoBallTransitionInDuration)) float_t discoBallTransitionInDuration;

  /// @brief Field fadeOutDuration, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeOutDuration, put = __cordl_internal_set_fadeOutDuration)) float_t fadeOutDuration;

  /// @brief Field maxMusicVolume, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_maxMusicVolume, put = __cordl_internal_set_maxMusicVolume)) float_t maxMusicVolume;

  /// @brief Field musicSource, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_musicSource, put = __cordl_internal_set_musicSource))::UnityW<::UnityEngine::AudioSource> musicSource;

  /// @brief Field onIsPartyActiveUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsPartyActiveUpdatedCallbacks,
                      put = __cordl_internal_set_onIsPartyActiveUpdatedCallbacks))::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated* onIsPartyActiveUpdatedCallbacks;

  /// @brief Field partyColors, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_partyColors, put = __cordl_internal_set_partyColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> partyColors;

  /// @brief Field partyExpireTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_partyExpireTimestamp, put = setStaticF_partyExpireTimestamp))::System::DateTime partyExpireTimestamp;

  /// @brief Field partyStartColor, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_partyStartColor, put = __cordl_internal_set_partyStartColor))::UnityEngine::Color partyStartColor;

  /// @brief Method DoPartyRoutine, addr 0xf3c41c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoPartyRoutine(bool skipTransitionIn);

  /// @brief Method FadeOutPartyRoutine, addr 0xf3c498, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeOutPartyRoutine();

  static inline ::GlobalNamespace::PartyManager* New_ctor();

  /// @brief Method OnJoinedRoom, addr 0xf3bc28, size 0x224, virtual false, abstract: false, final false
  inline void OnJoinedRoom(::StringW roomName);

  /// @brief Method OnLeftRoom, addr 0xf3bf30, size 0x64, virtual false, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method OnRoomPropertiesUpdate, addr 0xf3bf94, size 0x23c, virtual false, abstract: false, final false
  static inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method SendStartParty, addr 0xf3ba18, size 0x210, virtual false, abstract: false, final false
  static inline void SendStartParty(float_t duration);

  /// @brief Method SetHasDiscoBall, addr 0xf3c648, size 0x2d8, virtual false, abstract: false, final false
  inline void SetHasDiscoBall(bool newHasDiscoBall, bool instant);

  /// @brief Method SetIsPartyActive, addr 0xf3c1d0, size 0x24c, virtual false, abstract: false, final false
  inline void SetIsPartyActive(bool newIsPartyActive, bool instant);

  /// @brief Method SetPartyExpireTimestamp, addr 0xf3be4c, size 0xe4, virtual false, abstract: false, final false
  inline void SetPartyExpireTimestamp(::System::DateTime newPartyExpireTimestamp, bool instant);

  /// @brief Method Start, addr 0xf3b884, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xf3c500, size 0xf8, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_ambientColorMultiplier() const;

  constexpr float_t& __cordl_internal_get_ambientColorMultiplier();

  constexpr float_t const& __cordl_internal_get_colorCycleDuration() const;

  constexpr float_t& __cordl_internal_get_colorCycleDuration();

  constexpr ::UnityW<::GlobalNamespace::DiscoBall> const& __cordl_internal_get_curDiscoBall() const;

  constexpr ::UnityW<::GlobalNamespace::DiscoBall>& __cordl_internal_get_curDiscoBall();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curFadeOutPartyRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curFadeOutPartyRoutine() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_curPartyColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_curPartyColor();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curPartyRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curPartyRoutine() const;

  constexpr float_t const& __cordl_internal_get_dimToStartColorDuration() const;

  constexpr float_t& __cordl_internal_get_dimToStartColorDuration();

  constexpr float_t const& __cordl_internal_get_directionalColorMultiplier() const;

  constexpr float_t& __cordl_internal_get_directionalColorMultiplier();

  constexpr float_t const& __cordl_internal_get_directionalLightSpinSpeed() const;

  constexpr float_t& __cordl_internal_get_directionalLightSpinSpeed();

  constexpr float_t const& __cordl_internal_get_discoBallColorMultiplier() const;

  constexpr float_t& __cordl_internal_get_discoBallColorMultiplier();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_discoBallPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_discoBallPrefab();

  constexpr float_t const& __cordl_internal_get_discoBallTransitionInDuration() const;

  constexpr float_t& __cordl_internal_get_discoBallTransitionInDuration();

  constexpr float_t const& __cordl_internal_get_fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get_fadeOutDuration();

  constexpr float_t const& __cordl_internal_get_maxMusicVolume() const;

  constexpr float_t& __cordl_internal_get_maxMusicVolume();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_musicSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_musicSource();

  constexpr ::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated*& __cordl_internal_get_onIsPartyActiveUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated*> const& __cordl_internal_get_onIsPartyActiveUpdatedCallbacks() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get_partyColors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get_partyColors();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_partyStartColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_partyStartColor();

  constexpr void __cordl_internal_set_ambientColorMultiplier(float_t value);

  constexpr void __cordl_internal_set_colorCycleDuration(float_t value);

  constexpr void __cordl_internal_set_curDiscoBall(::UnityW<::GlobalNamespace::DiscoBall> value);

  constexpr void __cordl_internal_set_curFadeOutPartyRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curPartyColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_curPartyRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_dimToStartColorDuration(float_t value);

  constexpr void __cordl_internal_set_directionalColorMultiplier(float_t value);

  constexpr void __cordl_internal_set_directionalLightSpinSpeed(float_t value);

  constexpr void __cordl_internal_set_discoBallColorMultiplier(float_t value);

  constexpr void __cordl_internal_set_discoBallPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_discoBallTransitionInDuration(float_t value);

  constexpr void __cordl_internal_set_fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set_maxMusicVolume(float_t value);

  constexpr void __cordl_internal_set_musicSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_onIsPartyActiveUpdatedCallbacks(::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated* value);

  constexpr void __cordl_internal_set_partyColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set_partyStartColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0xf3c920, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__isPartyActive_k__BackingField();

  static inline ::System::DateTime getStaticF_partyExpireTimestamp();

  /// @brief Method get_isPartyActive, addr 0xf3b7f0, size 0x48, virtual false, abstract: false, final false
  static inline bool get_isPartyActive();

  static inline void setStaticF__isPartyActive_k__BackingField(bool value);

  static inline void setStaticF_partyExpireTimestamp(::System::DateTime value);

  /// @brief Method set_isPartyActive, addr 0xf3b838, size 0x4c, virtual false, abstract: false, final false
  static inline void set_isPartyActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyManager(PartyManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyManager(PartyManager const&) = delete;

  /// @brief Field onIsPartyActiveUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated* ___onIsPartyActiveUpdatedCallbacks;

  /// @brief Field curPartyRoutine, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curPartyRoutine;

  /// @brief Field curFadeOutPartyRoutine, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curFadeOutPartyRoutine;

  /// @brief Field dimToStartColorDuration, offset: 0x30, size: 0x4, def value: None
  float_t ___dimToStartColorDuration;

  /// @brief Field partyStartColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ___partyStartColor;

  /// @brief Field fadeOutDuration, offset: 0x44, size: 0x4, def value: None
  float_t ___fadeOutDuration;

  /// @brief Field colorCycleDuration, offset: 0x48, size: 0x4, def value: None
  float_t ___colorCycleDuration;

  /// @brief Field partyColors, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ___partyColors;

  /// @brief Field directionalLightSpinSpeed, offset: 0x58, size: 0x4, def value: None
  float_t ___directionalLightSpinSpeed;

  /// @brief Field curPartyColor, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ___curPartyColor;

  /// @brief Field ambientColorMultiplier, offset: 0x6c, size: 0x4, def value: None
  float_t ___ambientColorMultiplier;

  /// @brief Field directionalColorMultiplier, offset: 0x70, size: 0x4, def value: None
  float_t ___directionalColorMultiplier;

  /// @brief Field discoBallColorMultiplier, offset: 0x74, size: 0x4, def value: None
  float_t ___discoBallColorMultiplier;

  /// @brief Field discoBallPrefab, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___discoBallPrefab;

  /// @brief Field discoBallTransitionInDuration, offset: 0x80, size: 0x4, def value: None
  float_t ___discoBallTransitionInDuration;

  /// @brief Field curDiscoBall, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DiscoBall> ___curDiscoBall;

  /// @brief Field musicSource, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___musicSource;

  /// @brief Field maxMusicVolume, offset: 0x98, size: 0x4, def value: None
  float_t ___maxMusicVolume;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Party: " };

  /// @brief Field discoBallDistanceAboveTopOfMap offset 0xffffffff size 0x4
  static constexpr float_t discoBallDistanceAboveTopOfMap{ 5.0 };

  /// @brief Field partyExpireTimestampKey offset 0xffffffff size 0x8
  static constexpr ::ConstString partyExpireTimestampKey{ u"partyExpireTimestamp" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyManager, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___onIsPartyActiveUpdatedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___curPartyRoutine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___curFadeOutPartyRoutine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___dimToStartColorDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___partyStartColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___fadeOutDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___colorCycleDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___partyColors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___directionalLightSpinSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___curPartyColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___ambientColorMultiplier) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___directionalColorMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___discoBallColorMultiplier) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___discoBallPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___discoBallTransitionInDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___curDiscoBall) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___musicSource) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyManager, ___maxMusicVolume) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PartyManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyManager*, "", "PartyManager");
NEED_NO_BOX(::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyManager__OnIsPartyActiveUpdated*, "", "PartyManager/OnIsPartyActiveUpdated");
NEED_NO_BOX(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyManager___DoPartyRoutine_d__35*, "", "PartyManager/<DoPartyRoutine>d__35");
NEED_NO_BOX(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyManager___FadeOutPartyRoutine_d__36*, "", "PartyManager/<FadeOutPartyRoutine>d__36");
