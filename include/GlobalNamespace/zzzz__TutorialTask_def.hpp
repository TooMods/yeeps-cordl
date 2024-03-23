#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TutorialTask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialTask)
namespace GlobalNamespace {
struct __TutorialTask__State;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TutorialTask__State;
}
namespace GlobalNamespace {
class TutorialTask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TutorialTask__State);
MARK_REF_PTR_T(::GlobalNamespace::TutorialTask);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TutorialTask::State
struct CORDL_TYPE __TutorialTask__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TutorialTask__State_Unwrapped
  enum struct ____TutorialTask__State_Unwrapped : int32_t {
    __E_locked = static_cast<int32_t>(0x0),
    __E_unlocked = static_cast<int32_t>(0x1),
    __E_completed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TutorialTask__State_Unwrapped() const noexcept {
    return static_cast<____TutorialTask__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialTask__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TutorialTask__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TutorialTask__State const completed;

  /// @brief Field locked value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TutorialTask__State const locked;

  /// @brief Field unlocked value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TutorialTask__State const unlocked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialTask__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialTask__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialTask
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialTask*
class CORDL_TYPE TutorialTask : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__TutorialTask__State;

  /// @brief Field hostOnly, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_hostOnly, put = __cordl_internal_set_hostOnly)) bool hostOnly;

  /// @brief Field isRegistered, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field startUnlocked, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_startUnlocked, put = __cordl_internal_set_startUnlocked)) bool startUnlocked;

  /// @brief Field state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::GlobalNamespace::__TutorialTask__State state;

  /// @brief Field taskToUnlock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_taskToUnlock, put = __cordl_internal_set_taskToUnlock))::UnityW<::GlobalNamespace::TutorialTask> taskToUnlock;

  /// @brief Method Complete, addr 0x153f6f8, size 0x18, virtual false, abstract: false, final false
  inline void Complete();

  static inline ::GlobalNamespace::TutorialTask* New_ctor();

  /// @brief Method OnCompleted, addr 0x153f714, size 0x4, virtual true, abstract: false, final false
  inline void OnCompleted();

  /// @brief Method OnDisable, addr 0x153f4b0, size 0x108, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnJoinedPhotonRoom, addr 0x153f378, size 0x138, virtual false, abstract: false, final false
  inline void OnJoinedPhotonRoom(::StringW roomName);

  /// @brief Method OnUnlocked, addr 0x153f710, size 0x4, virtual true, abstract: false, final false
  inline void OnUnlocked();

  /// @brief Method SetState, addr 0x153f5b8, size 0x140, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::__TutorialTask__State newState);

  /// @brief Method Start, addr 0x153f234, size 0x144, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_hostOnly() const;

  constexpr bool& __cordl_internal_get_hostOnly();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr bool const& __cordl_internal_get_startUnlocked() const;

  constexpr bool& __cordl_internal_get_startUnlocked();

  constexpr ::GlobalNamespace::__TutorialTask__State const& __cordl_internal_get_state() const;

  constexpr ::GlobalNamespace::__TutorialTask__State& __cordl_internal_get_state();

  constexpr ::UnityW<::GlobalNamespace::TutorialTask> const& __cordl_internal_get_taskToUnlock() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialTask>& __cordl_internal_get_taskToUnlock();

  constexpr void __cordl_internal_set_hostOnly(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_startUnlocked(bool value);

  constexpr void __cordl_internal_set_state(::GlobalNamespace::__TutorialTask__State value);

  constexpr void __cordl_internal_set_taskToUnlock(::UnityW<::GlobalNamespace::TutorialTask> value);

  /// @brief Method .ctor, addr 0x153f718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialTask(TutorialTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialTask(TutorialTask const&) = delete;

  /// @brief Field startUnlocked, offset: 0x18, size: 0x1, def value: None
  bool ___startUnlocked;

  /// @brief Field hostOnly, offset: 0x19, size: 0x1, def value: None
  bool ___hostOnly;

  /// @brief Field taskToUnlock, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialTask> ___taskToUnlock;

  /// @brief Field state, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__TutorialTask__State ___state;

  /// @brief Field isRegistered, offset: 0x2c, size: 0x1, def value: None
  bool ___isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialTask, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialTask, ___startUnlocked) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialTask, ___hostOnly) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialTask, ___taskToUnlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialTask, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialTask, ___isRegistered) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialTask__State, "", "TutorialTask/State");
NEED_NO_BOX(::GlobalNamespace::TutorialTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialTask*, "", "TutorialTask");
