#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
struct ConsoleScreenBufferInfo;
}
namespace System {
struct Handles;
}
namespace System {
class IConsoleDriver;
}
namespace System {
struct InputRecord;
}
// Forward declare root types
namespace System {
class WindowsConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::WindowsConsoleDriver);
// Type: System::WindowsConsoleDriver
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::WindowsConsoleDriver*
class CORDL_TYPE WindowsConsoleDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultAttribute, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get_defaultAttribute, put = __cordl_internal_set_defaultAttribute)) int16_t defaultAttribute;

  /// @brief Field inputHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inputHandle, put = __cordl_internal_set_inputHandle)) void* inputHandle;

  /// @brief Field outputHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_outputHandle, put = __cordl_internal_set_outputHandle)) void* outputHandle;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  /// @brief Method GetConsoleScreenBufferInfo, addr 0x10dcb74, size 0x94, virtual false, abstract: false, final false
  static inline bool GetConsoleScreenBufferInfo(void* handle, ByRef<::System::ConsoleScreenBufferInfo> info);

  /// @brief Method GetStdHandle, addr 0x10dcaf0, size 0x84, virtual false, abstract: false, final false
  static inline void* GetStdHandle(::System::Handles handle);

  /// @brief Method IsModifierKey, addr 0x10dce50, size 0x34, virtual false, abstract: false, final false
  static inline bool IsModifierKey(int16_t virtualKeyCode);

  static inline ::System::WindowsConsoleDriver* New_ctor();

  /// @brief Method ReadConsoleInput, addr 0x10dcd48, size 0x108, virtual false, abstract: false, final false
  static inline bool ReadConsoleInput(void* handle, ByRef<::System::InputRecord> record, int32_t length, ByRef<int32_t> nread);

  /// @brief Method ReadKey, addr 0x10dcc08, size 0x140, virtual true, abstract: false, final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  constexpr int16_t const& __cordl_internal_get_defaultAttribute() const;

  constexpr int16_t& __cordl_internal_get_defaultAttribute();

  constexpr void* const& __cordl_internal_get_inputHandle() const;

  constexpr void*& __cordl_internal_get_inputHandle();

  constexpr void* const& __cordl_internal_get_outputHandle() const;

  constexpr void*& __cordl_internal_get_outputHandle();

  constexpr void __cordl_internal_set_defaultAttribute(int16_t value);

  constexpr void __cordl_internal_set_inputHandle(void* value);

  constexpr void __cordl_internal_set_outputHandle(void* value);

  /// @brief Method .ctor, addr 0x10dca9c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IConsoleDriver"
  constexpr ::System::IConsoleDriver* i___System__IConsoleDriver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsConsoleDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowsConsoleDriver(WindowsConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowsConsoleDriver(WindowsConsoleDriver const&) = delete;

  /// @brief Field inputHandle, offset: 0x10, size: 0x8, def value: None
  void* ___inputHandle;

  /// @brief Field outputHandle, offset: 0x18, size: 0x8, def value: None
  void* ___outputHandle;

  /// @brief Field defaultAttribute, offset: 0x20, size: 0x2, def value: None
  int16_t ___defaultAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::WindowsConsoleDriver, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::WindowsConsoleDriver, ___inputHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::WindowsConsoleDriver, ___outputHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::WindowsConsoleDriver, ___defaultAttribute) == 0x20, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::WindowsConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
