#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RadioManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class __RadioManager__OnIsRadioPlayingUpdated;
}
namespace GlobalNamespace {
class __RadioManager__OnRadioVolumeUpdated;
}
namespace GlobalNamespace {
class __RadioManager___TransitionRadioVolumeRoutine_d__28;
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
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class RadioManager;
}
namespace GlobalNamespace {
class __RadioManager__OnIsRadioPlayingUpdated;
}
namespace GlobalNamespace {
class __RadioManager__OnRadioVolumeUpdated;
}
namespace GlobalNamespace {
class __RadioManager___TransitionRadioVolumeRoutine_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RadioManager);
MARK_REF_PTR_T(::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28);
// Type: ::OnIsRadioPlayingUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioManager::OnIsRadioPlayingUpdated*
class CORDL_TYPE __RadioManager__OnIsRadioPlayingUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1759030, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsRadioPlaying, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x17590b8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1759018, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsRadioPlaying);

  static inline ::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1758f54, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioManager__OnIsRadioPlayingUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager__OnIsRadioPlayingUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioManager__OnIsRadioPlayingUpdated(__RadioManager__OnIsRadioPlayingUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager__OnIsRadioPlayingUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioManager__OnIsRadioPlayingUpdated(__RadioManager__OnIsRadioPlayingUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRadioVolumeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioManager::OnRadioVolumeUpdated*
class CORDL_TYPE __RadioManager__OnRadioVolumeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x175919c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t newRadioVolume, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1759220, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1759188, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t newRadioVolume);

  static inline ::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x17590c4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioManager__OnRadioVolumeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager__OnRadioVolumeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioManager__OnRadioVolumeUpdated(__RadioManager__OnRadioVolumeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager__OnRadioVolumeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioManager__OnRadioVolumeUpdated(__RadioManager__OnRadioVolumeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TransitionRadioVolumeRoutine>d__28
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioManager::<TransitionRadioVolumeRoutine>d__28*
class CORDL_TYPE __RadioManager___TransitionRadioVolumeRoutine_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RadioManager> __4__this;

  /// @brief Field <p>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startVolume>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__startVolume_5__2, put = __cordl_internal_set__startVolume_5__2)) float_t _startVolume_5__2;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field targetVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_targetVolume, put = __cordl_internal_set_targetVolume)) float_t targetVolume;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1759230, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x175936c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1759374, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17593b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x175922c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::RadioManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RadioManager>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startVolume_5__2() const;

  constexpr float_t& __cordl_internal_get__startVolume_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_targetVolume() const;

  constexpr float_t& __cordl_internal_get_targetVolume();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RadioManager> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startVolume_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_targetVolume(float_t value);

  /// @brief Method .ctor, addr 0x175842c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __RadioManager___TransitionRadioVolumeRoutine_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager___TransitionRadioVolumeRoutine_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioManager___TransitionRadioVolumeRoutine_d__28(__RadioManager___TransitionRadioVolumeRoutine_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioManager___TransitionRadioVolumeRoutine_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioManager___TransitionRadioVolumeRoutine_d__28(__RadioManager___TransitionRadioVolumeRoutine_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RadioManager> _____4__this;

  /// @brief Field targetVolume, offset: 0x30, size: 0x4, def value: None
  float_t ___targetVolume;

  /// @brief Field <startVolume>5__2, offset: 0x34, size: 0x4, def value: None
  float_t ____startVolume_5__2;

  /// @brief Field <p>5__3, offset: 0x38, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, ___targetVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, ____startVolume_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28, ____p_5__3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RadioManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioManager*
class CORDL_TYPE RadioManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RadioManager>> {
public:
  // Declarations
  using OnIsRadioPlayingUpdated = ::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated;

  using OnRadioVolumeUpdated = ::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated;

  using _TransitionRadioVolumeRoutine_d__28 = ::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28;

  /// @brief Field <isRadioPlaying>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isRadioPlaying_k__BackingField, put = setStaticF__isRadioPlaying_k__BackingField)) bool _isRadioPlaying_k__BackingField;

  /// @brief Field <radioPlayStartTimestamp>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__radioPlayStartTimestamp_k__BackingField,
                             put = setStaticF__radioPlayStartTimestamp_k__BackingField))::System::DateTime _radioPlayStartTimestamp_k__BackingField;

  /// @brief Field <radioVolume>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__radioVolume_k__BackingField, put = setStaticF__radioVolume_k__BackingField)) float_t _radioVolume_k__BackingField;

  /// @brief Field curTransitionRadioVolumeRoutine, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionRadioVolumeRoutine, put = __cordl_internal_set_curTransitionRadioVolumeRoutine))::UnityEngine::Coroutine* curTransitionRadioVolumeRoutine;

  /// @brief Field onIsRadioPlayingUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsRadioPlayingUpdatedCallbacks,
                      put = __cordl_internal_set_onIsRadioPlayingUpdatedCallbacks))::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated* onIsRadioPlayingUpdatedCallbacks;

  /// @brief Field onRadioVolumeUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onRadioVolumeUpdatedCallbacks,
                      put = __cordl_internal_set_onRadioVolumeUpdatedCallbacks))::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated* onRadioVolumeUpdatedCallbacks;

  static inline ::GlobalNamespace::RadioManager* New_ctor();

  /// @brief Method OnJoinedRoom, addr 0x1758824, size 0x2ec, virtual false, abstract: false, final false
  inline void OnJoinedRoom(::StringW roomName);

  /// @brief Method OnLeftRoom, addr 0x1758b10, size 0x80, virtual false, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method OnRoomPropertiesUpdate, addr 0x1758b90, size 0x2f0, virtual false, abstract: false, final false
  static inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method SendSetIsPlaying, addr 0x17585e8, size 0x23c, virtual false, abstract: false, final false
  static inline void SendSetIsPlaying(bool newIsPlaying);

  /// @brief Method SetIsRadioPlaying, addr 0x1757ee8, size 0x1cc, virtual false, abstract: false, final false
  inline void SetIsRadioPlaying(bool newIsRadioPlaying);

  /// @brief Method SetRadioVolume, addr 0x1758170, size 0x1b8, virtual false, abstract: false, final false
  inline void SetRadioVolume(float_t newRadioVolume);

  /// @brief Method Start, addr 0x1758454, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionRadioVolume, addr 0x1758328, size 0x84, virtual false, abstract: false, final false
  inline void TransitionRadioVolume(float_t newRadioVolume, bool instant, float_t duration);

  /// @brief Method TransitionRadioVolumeRoutine, addr 0x17583ac, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionRadioVolumeRoutine(float_t targetVolume, float_t duration);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionRadioVolumeRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionRadioVolumeRoutine() const;

  constexpr ::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated*& __cordl_internal_get_onIsRadioPlayingUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated*> const& __cordl_internal_get_onIsRadioPlayingUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated*& __cordl_internal_get_onRadioVolumeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated*> const& __cordl_internal_get_onRadioVolumeUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_curTransitionRadioVolumeRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_onIsRadioPlayingUpdatedCallbacks(::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated* value);

  constexpr void __cordl_internal_set_onRadioVolumeUpdatedCallbacks(::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated* value);

  /// @brief Method .ctor, addr 0x1758e80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__isRadioPlaying_k__BackingField();

  static inline ::System::DateTime getStaticF__radioPlayStartTimestamp_k__BackingField();

  static inline float_t getStaticF__radioVolume_k__BackingField();

  /// @brief Method get_isRadioPlaying, addr 0x1757d80, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isRadioPlaying();

  /// @brief Method get_radioPlayStartTimestamp, addr 0x1757e34, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime get_radioPlayStartTimestamp();

  /// @brief Method get_radioVolume, addr 0x17580b4, size 0x58, virtual false, abstract: false, final false
  static inline float_t get_radioVolume();

  static inline void setStaticF__isRadioPlaying_k__BackingField(bool value);

  static inline void setStaticF__radioPlayStartTimestamp_k__BackingField(::System::DateTime value);

  static inline void setStaticF__radioVolume_k__BackingField(float_t value);

  /// @brief Method set_isRadioPlaying, addr 0x1757dd8, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isRadioPlaying(bool value);

  /// @brief Method set_radioPlayStartTimestamp, addr 0x1757e8c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_radioPlayStartTimestamp(::System::DateTime value);

  /// @brief Method set_radioVolume, addr 0x175810c, size 0x64, virtual false, abstract: false, final false
  static inline void set_radioVolume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioManager(RadioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioManager(RadioManager const&) = delete;

  /// @brief Field onIsRadioPlayingUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated* ___onIsRadioPlayingUpdatedCallbacks;

  /// @brief Field onRadioVolumeUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated* ___onRadioVolumeUpdatedCallbacks;

  /// @brief Field curTransitionRadioVolumeRoutine, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionRadioVolumeRoutine;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Radio: " };

  /// @brief Field defaultIsRadioPlaying offset 0xffffffff size 0x1
  static constexpr bool defaultIsRadioPlaying{ false };

  /// @brief Field isRadioPlayingKey offset 0xffffffff size 0x8
  static constexpr ::ConstString isRadioPlayingKey{ u"isRadioPlaying" };

  /// @brief Field radioPlayStartTimestampKey offset 0xffffffff size 0x8
  static constexpr ::ConstString radioPlayStartTimestampKey{ u"radioTime" };

  /// @brief Field radioVolumeTransitionInDuration offset 0xffffffff size 0x4
  static constexpr float_t radioVolumeTransitionInDuration{ 0.4 };

  /// @brief Field radioVolumeTransitionIntoRoomDuration offset 0xffffffff size 0x4
  static constexpr float_t radioVolumeTransitionIntoRoomDuration{ 2.0 };

  /// @brief Field radioVolumeTransitionOutDuration offset 0xffffffff size 0x4
  static constexpr float_t radioVolumeTransitionOutDuration{ 0.25 };

  /// @brief Field radioVolumeTransitionOutOfRoomDuration offset 0xffffffff size 0x4
  static constexpr float_t radioVolumeTransitionOutOfRoomDuration{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RadioManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioManager, ___onIsRadioPlayingUpdatedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioManager, ___onRadioVolumeUpdatedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioManager, ___curTransitionRadioVolumeRoutine) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RadioManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RadioManager*, "", "RadioManager");
NEED_NO_BOX(::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RadioManager__OnIsRadioPlayingUpdated*, "", "RadioManager/OnIsRadioPlayingUpdated");
NEED_NO_BOX(::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RadioManager__OnRadioVolumeUpdated*, "", "RadioManager/OnRadioVolumeUpdated");
NEED_NO_BOX(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RadioManager___TransitionRadioVolumeRoutine_d__28*, "", "RadioManager/<TransitionRadioVolumeRoutine>d__28");
