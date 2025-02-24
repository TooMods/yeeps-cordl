#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Monitor)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Monitor;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Monitor);
// Type: System.Threading::Monitor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::Monitor*
class CORDL_TYPE Monitor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Enter, addr 0x10e8f18, size 0x4, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* obj);

  /// @brief Method Enter, addr 0x10e6348, size 0x20, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* obj, ByRef<bool> lockTaken);

  /// @brief Method Exit, addr 0x10e8f1c, size 0x4, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* obj);

  /// @brief Method Monitor_pulse, addr 0x10ed138, size 0x4, virtual false, abstract: false, final false
  static inline void Monitor_pulse(::System::Object* obj);

  /// @brief Method Monitor_pulse_all, addr 0x10ed13c, size 0x4, virtual false, abstract: false, final false
  static inline void Monitor_pulse_all(::System::Object* obj);

  /// @brief Method Monitor_test_synchronised, addr 0x10ed134, size 0x4, virtual false, abstract: false, final false
  static inline bool Monitor_test_synchronised(::System::Object* obj);

  /// @brief Method Monitor_wait, addr 0x10ed140, size 0x4, virtual false, abstract: false, final false
  static inline bool Monitor_wait(::System::Object* obj, int32_t ms);

  /// @brief Method ObjPulse, addr 0x10ed06c, size 0x64, virtual false, abstract: false, final false
  static inline void ObjPulse(::System::Object* obj);

  /// @brief Method ObjPulseAll, addr 0x10ed0d0, size 0x64, virtual false, abstract: false, final false
  static inline void ObjPulseAll(::System::Object* obj);

  /// @brief Method ObjWait, addr 0x10ecfb4, size 0xb8, virtual false, abstract: false, final false
  static inline bool ObjWait(bool exitContext, int32_t millisecondsTimeout, ::System::Object* obj);

  /// @brief Method Pulse, addr 0x10e9fdc, size 0x58, virtual false, abstract: false, final false
  static inline void Pulse(::System::Object* obj);

  /// @brief Method PulseAll, addr 0x10e6580, size 0x58, virtual false, abstract: false, final false
  static inline void PulseAll(::System::Object* obj);

  /// @brief Method ReliableEnter, addr 0x10ece8c, size 0xc, virtual false, abstract: false, final false
  static inline void ReliableEnter(::System::Object* obj, ByRef<bool> lockTaken);

  /// @brief Method ReliableEnterTimeout, addr 0x10eceb8, size 0x9c, virtual false, abstract: false, final false
  static inline void ReliableEnterTimeout(::System::Object* obj, int32_t timeout, ByRef<bool> lockTaken);

  /// @brief Method ThrowLockTakenException, addr 0x10ece1c, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowLockTakenException();

  /// @brief Method TryEnter, addr 0x10ece98, size 0x20, virtual false, abstract: false, final false
  static inline void TryEnter(::System::Object* obj, ByRef<bool> lockTaken);

  /// @brief Method Wait, addr 0x10e6b18, size 0x8, virtual false, abstract: false, final false
  static inline bool Wait(::System::Object* obj, int32_t millisecondsTimeout);

  /// @brief Method Wait, addr 0x10ecf54, size 0x60, virtual false, abstract: false, final false
  static inline bool Wait(::System::Object* obj, int32_t millisecondsTimeout, bool exitContext);

  /// @brief Method try_enter_with_atomic_var, addr 0x10ed144, size 0x4, virtual false, abstract: false, final false
  static inline void try_enter_with_atomic_var(::System::Object* obj, int32_t millisecondsTimeout, ByRef<bool> lockTaken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Monitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Monitor(Monitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Monitor(Monitor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Monitor, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Monitor);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Monitor*, "System.Threading", "Monitor");
