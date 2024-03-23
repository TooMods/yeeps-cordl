#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownTimer)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class __CountdownTimer__CountdownTimerHasExpired;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CountdownTimer;
}
namespace Photon::Pun::UtilityScripts {
class __CountdownTimer__CountdownTimerHasExpired;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::CountdownTimer);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired);
// Type: ::CountdownTimerHasExpired
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::CountdownTimer::CountdownTimerHasExpired*
class CORDL_TYPE __CountdownTimer__CountdownTimerHasExpired : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1ecac64, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1ecac84, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1ecac50, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1ecab94, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CountdownTimer__CountdownTimerHasExpired();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CountdownTimer__CountdownTimerHasExpired", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CountdownTimer__CountdownTimerHasExpired(__CountdownTimer__CountdownTimerHasExpired&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CountdownTimer__CountdownTimerHasExpired", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CountdownTimer__CountdownTimerHasExpired(__CountdownTimer__CountdownTimerHasExpired const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired, 0x80>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::CountdownTimer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::CountdownTimer*
class CORDL_TYPE CountdownTimer : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
  // Declarations
  using CountdownTimerHasExpired = ::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired;

  /// @brief Field Countdown, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Countdown, put = __cordl_internal_set_Countdown)) float_t Countdown;

  /// @brief Field OnCountdownTimerHasExpired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnCountdownTimerHasExpired,
                             put = setStaticF_OnCountdownTimerHasExpired))::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* OnCountdownTimerHasExpired;

  /// @brief Field Text, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Text, put = __cordl_internal_set_Text))::UnityW<::UnityEngine::UI::Text> Text;

  /// @brief Field isTimerRunning, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isTimerRunning, put = __cordl_internal_set_isTimerRunning)) bool isTimerRunning;

  /// @brief Field startTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_startTime, put = __cordl_internal_set_startTime)) int32_t startTime;

  /// @brief Method Initialize, addr 0x1eca22c, size 0x2b8, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Photon::Pun::UtilityScripts::CountdownTimer* New_ctor();

  /// @brief Method OnDisable, addr 0x1eca4e4, size 0x78, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1eca1ac, size 0x80, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRoomPropertiesUpdate, addr 0x1eca7bc, size 0xcc, virtual true, abstract: false, final false
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method OnTimerEnds, addr 0x1eca6a4, size 0x104, virtual false, abstract: false, final false
  inline void OnTimerEnds();

  /// @brief Method OnTimerRuns, addr 0x1eca7a8, size 0x14, virtual false, abstract: false, final false
  inline void OnTimerRuns();

  /// @brief Method SetStartTime, addr 0x1eca994, size 0x1f0, virtual false, abstract: false, final false
  static inline void SetStartTime();

  /// @brief Method Start, addr 0x1eca0f4, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TimeRemaining, addr 0x1eca62c, size 0x78, virtual false, abstract: false, final false
  inline float_t TimeRemaining();

  /// @brief Method TryGetStartTime, addr 0x1eca888, size 0x10c, virtual false, abstract: false, final false
  static inline bool TryGetStartTime(ByRef<int32_t> startTimestamp);

  /// @brief Method Update, addr 0x1eca55c, size 0xd0, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_Countdown() const;

  constexpr float_t& __cordl_internal_get_Countdown();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_Text() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_Text();

  constexpr bool const& __cordl_internal_get_isTimerRunning() const;

  constexpr bool& __cordl_internal_get_isTimerRunning();

  constexpr int32_t const& __cordl_internal_get_startTime() const;

  constexpr int32_t& __cordl_internal_get_startTime();

  constexpr void __cordl_internal_set_Countdown(float_t value);

  constexpr void __cordl_internal_set_Text(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_isTimerRunning(bool value);

  constexpr void __cordl_internal_set_startTime(int32_t value);

  /// @brief Method .ctor, addr 0x1ecab84, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnCountdownTimerHasExpired, addr 0x1ec9f84, size 0xb8, virtual false, abstract: false, final false
  static inline void add_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* value);

  static inline ::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* getStaticF_OnCountdownTimerHasExpired();

  /// @brief Method remove_OnCountdownTimerHasExpired, addr 0x1eca03c, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* value);

  static inline void setStaticF_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountdownTimer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CountdownTimer(CountdownTimer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CountdownTimer(CountdownTimer const&) = delete;

  /// @brief Field Countdown, offset: 0x20, size: 0x4, def value: None
  float_t ___Countdown;

  /// @brief Field isTimerRunning, offset: 0x24, size: 0x1, def value: None
  bool ___isTimerRunning;

  /// @brief Field startTime, offset: 0x28, size: 0x4, def value: None
  int32_t ___startTime;

  /// @brief Field Text, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___Text;

  /// @brief Field CountdownStartTime offset 0xffffffff size 0x8
  static constexpr ::ConstString CountdownStartTime{ u"StartTime" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::CountdownTimer, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___Countdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___isTimerRunning) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___startTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___Text) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::CountdownTimer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CountdownTimer*, "Photon.Pun.UtilityScripts", "CountdownTimer");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__CountdownTimer__CountdownTimerHasExpired*, "Photon.Pun.UtilityScripts", "CountdownTimer/CountdownTimerHasExpired");
